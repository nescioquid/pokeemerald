# party files are run through trainerproc, which is a tool that converts party data to an output file
# matching the current trainer .h formatting

AUTO_GEN_TARGETS += src/data/trainers.h
AUTO_GEN_TARGETS += src/data/battle_partners.h
AUTO_GEN_TARGETS += test/battle/trainer_control.h
AUTO_GEN_TARGETS += src/data/debug_trainers.h
AUTO_GEN_TARGETS += src/data/party_pools.h

# Special rule just for trainers.h
# src/data/trainers.h: src/data/trainers.party src/data/party_pools.h
# 	$(CPP) $(CPPFLAGS) -traditional-cpp - < $< \
# 	| $(TRAINERPROC) -o - $< \
# 	| sed '$a #include "party_pools.h"\n' \
# 	> $@


# Default rule for everything else
%.h: %.party
	$(CPP) $(CPPFLAGS) -traditional-cpp - < $< | $(TRAINERPROC) -o $@ -i $< -
