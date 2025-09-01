import re
import sys

def read_opponents_order(opponents_file):
    with open(opponents_file, 'r') as f:
        content = f.read()
    
    # Find the section between start and end markers
    start_marker = "// start here"
    end_marker = "// end here"
    
    start_idx = content.find(start_marker)
    end_idx = content.find(end_marker, start_idx)
    
    if start_idx == -1 or end_idx == -1:
        print("Error: Could not find start or end markers in opponents file")
        sys.exit(1)
    
    section = content[start_idx:end_idx]
    
    # Extract trainer names
    trainer_pattern = r'#define\s+(TRAINER_[A-Z0-9_]+)'
    trainers = re.findall(trainer_pattern, section)
    
    return trainers

def parse_trainers_file(trainers_file):
    with open(trainers_file, 'r') as f:
        content = f.read()
    
    # Split content by trainer sections
    trainer_sections = re.split(r'(^=== TRAINER_\w+ ===$)', content, flags=re.MULTILINE)
    
    # The first part is the header
    header = trainer_sections[0].strip()
    trainer_data = {}
    
    # Process trainer sections
    for i in range(1, len(trainer_sections), 2):
        if i + 1 >= len(trainer_sections):
            break
            
        trainer_name = trainer_sections[i][5:-4]  # Remove '=== ' and ' ==='
        trainer_content = trainer_sections[i+1].strip()
        trainer_data[trainer_name] = trainer_content
    
    return header, trainer_data

def write_sorted_trainers(output_file, header, trainer_order, trainer_data):
    with open(output_file, 'w') as f:
        # Write header
        f.write(header + '\n\n')
        
        # Write trainers in order
        written_trainers = set()
        for trainer in trainer_order:
            if trainer in trainer_data:
                f.write(f'=== {trainer} ===\n')
                f.write(trainer_data[trainer] + '\n\n')
                written_trainers.add(trainer)
        
        # Write any remaining trainers not in the order list
        remaining_trainers = set(trainer_data.keys()) - written_trainers
        if remaining_trainers:
            f.write('// Unorganized trainers start here\n\n')
            for trainer in sorted(remaining_trainers):
                f.write(f'=== {trainer} ===\n')
                f.write(trainer_data[trainer] + '\n\n')

def main():
    if len(sys.argv) != 4:
        print("Usage: python organize_trainers_by_opponents.py <opponents_file> <input_trainers_file> <output_trainers_file>")
        sys.exit(1)
    
    opponents_file = sys.argv[1]
    input_file = sys.argv[2]
    output_file = sys.argv[3]
    
    # Read and process files
    trainer_order = read_opponents_order(opponents_file)
    header, trainer_data = parse_trainers_file(input_file)
    
    # Write sorted output
    write_sorted_trainers(output_file, header, trainer_order, trainer_data)
    print(f"Successfully wrote sorted trainers to {output_file}")

if __name__ == "__main__":
    main()
