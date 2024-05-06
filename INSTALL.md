# Windows 10/11 Installation Instructions

These instructions explain how to set up the tools required to build **pokeemerald Expansion**, which assembles the source files into a ROM (pokeemerald.gba).

These instructions come with notes which can be expanded by clicking the "<i>Note...</i>" text. In general, you should not need to open these unless if you get an error or if you need additional clarification.

All of the Windows instructions assume that the default drive is C:\\. If this differs to your actual drive letter, then replace C with the correct drive letter when reading the instructions.

If you run into trouble, ask for help on Discord or IRC (see [README.md](README.md)).

## Installing WSL1

WSL1 is the preferred terminal to build **pokeemerald Expansion**. The following instructions will explain how to install WSL1 (referred to interchangeably as WSL).

<details>
    <summary><i>Note for advanced users: <b>WSL2</b>...</i></summary>

> <b>WSL2</b> is an option and is even faster than <b>WSL1</b> if files are stored on the WSL2 file system, but some tools may have trouble interacting
> with the WSL2 file system over the network drive. For example, tools which use Qt versions before 5.15.2 such as <a href="https://github.com/huderlem/porymap">porymap</a>
> may <a href="https://bugreports.qt.io/browse/QTBUG-86277">have problems with parsing the <code>\\wsl$</code> network drive path</a>.

</details>

1. Open [Windows Powershell **as Administrator**](https://i.imgur.com/QKmVbP9.png), and run the following command (Right Click or Shift+Insert is paste in the Powershell).

   ```powershell
   dism.exe /online /enable-feature /featurename:Microsoft-Windows-Subsystem-Linux /all /norestart
   ```

2. Once the process finishes, restart your machine.

3. The next step is to choose and install a Linux distribution from the Microsoft Store. The following instructions will assume Ubuntu as the Linux distribution of choice.

   <details>
       <summary><i>Note for advanced users...</i></summary>

   > You can pick a preferred Linux distribution, but setup instructions may differ. Debian should work with the given instructions, but has not been tested.

   </details>

4. Open the [Microsoft Store Linux Selection](https://aka.ms/wslstore), click Ubuntu, then click Get, which will install the Ubuntu distribution.

   <details>
       <summary><i>Notes...</i></summary>

   > Note 1: If a dialog pops up asking for you to sign into a Microsoft Account, then just close the dialog.
   > Note 2: If the link does not work, then open the Microsoft Store manually, and search for the Ubuntu app (choose the one with no version number).

   </details>

### Setting up WSL

Some tips before proceeding:

- In WSL, Copy and Paste is either done via
  - **right-click** (selection + right click to Copy, right click with no selection to Paste)
  - **Ctrl+Shift+C/Ctrl+Shift+V** (enabled by right-clicking the title bar, going to Properties, then checking the checkbox next to "Use Ctrl+Shift+C/V as Copy/Paste").
- Some of the commands that you'll run will ask for your WSL password and/or confirmation to perform the stated action. This is to be expected, just enter your WSL password and/or the yes action when necessary.

1. Open **Ubuntu** (e.g. using Search).
2. WSL/Ubuntu will set up its own installation when it runs for the first time. Once WSL/Ubuntu finishes installing, it will ask for a username and password (to be input in).

   <details>
       <summary><i>Note...</i></summary>

   > When typing in the password, there will be no visible response, but the terminal will still read in input.

   </details>

3. Update WSL/Ubuntu before continuing. Do this by running the following command. These commands will likely take a long time to finish:

   ```bash
   sudo apt update && sudo apt upgrade
   ```

   <details>
       <summary><i>Note...</i></summary>

   > Note: If the repository you plan to build has an **[older revision of the INSTALL.md](https://github.com/pret/pokeemerald/blob/571c598/INSTALL.md)**, then follow the [legacy WSL1 instructions](docs/legacy_WSL1_INSTALL.md) from here.

   </details>

4. Certain packages are required to build pokeemerald Expansion. Install these packages by running the following command:

   ```bash
   sudo apt install build-essential binutils-arm-none-eabi gcc-arm-none-eabi libnewlib-arm-none-eabi git libpng-dev
   ```

   <details>
       <summary><i>Note...</i></summary>

   > If the above command does not work, try the above command but replacing `apt` with `apt-get`.

   </details>

   This will install GCC v10 on Ubuntu 22.04. pokeemerald Expansion works with GCC v10, but remote repositories and the RHH Team use GCC v13 for stricter error-checking. If you want to upgrade from v10 to v13, also follow the devkitpro install instructions.

### Installing devkitARM on WSL

1. Change directory to somewhere you can download a package, such as **C:\Users\\_\<user>_\Downloads** (the Downloads location for most users). To do so, enter this command, where \*\<user> is your **Windows** username:

   ```bash
   cd /mnt/c/Users/<user>/Downloads
   ```

2. Once the directory has been changed, run the following commands to install devkitARM.

   ```bash
   sudo apt install wget
   wget https://apt.devkitpro.org/install-devkitpro-pacman
   chmod +x ./install-devkitpro-pacman
   sudo ./install-devkitpro-pacman
   sudo dkp-pacman -S gba-dev
   ```

   The last command will ask for the selection of packages to install. Just press Enter to install all of them, followed by entering Y to proceed with the installation.

3. Run the following command to set devkitPro related environment variables (alternatively, close and re-open WSL):

   ```bash
   source /etc/profile.d/devkit-env.sh
   ```

devkitARM is now installed.

### Installing Python on WSL

To install Python on WSL, simply run the following commands:

```bash
sudo apt update && sudo apt upgrade
sudo apt install python3
```

Python is now installed.

## Choosing where pokeemerald Expansion is stored

WSL has its own file system that's not natively accessible from Windows, but Windows files _are_ accessible from WSL. So you're going to want to store pokeemerald Expansion within Windows.

For example, say you want to store pokeemerald Expansion in **C:\Users\\_\<user>_\Desktop\decomps**. First, ensure that the folder already exists. Then, enter this command to **change directory** to said folder, where _\<user>_ is your **Windows** username:

```bash
cd /mnt/c/Users/<user>/Desktop/decomps
```

<details>
    <summary><i>Notes...</i></summary>

> Note 1: The Windows C:\ drive is called /mnt/c/ in WSL.
> Note 2: If the path has spaces, then the path must be wrapped with quotations, e.g. `cd "/mnt/c/users/<user>/Desktop/decomp folder"`.
> Note 3: Windows path names are case-insensitive so adhering to capitalization isn't needed

</details>

## Installing pokeemerald Expansion

If pokeemerald Expansion is not already downloaded (some users may prefer to download pokeemerald Expansion via a git client like GitHub Desktop), run:

```bash
git clone https://github.com/rh-hideout/pokeemerald-expansion
```

<details>
    <summary><i>Note for WSL1...</i></summary>

> If you get an error stating `fatal: could not set 'core.filemode' to 'false'`, then run the following commands:
>
> ```bash
> cd
> sudo umount /mnt/c
> sudo mount -t drvfs C: /mnt/c -o metadata,noatime
> cd <folder where pokeemerald-expansion is to be stored>
> ```
>
> Where _\<folder where pokeemerald-expansion is to be stored>_ is the path of the folder [where pokeemerald Expansion is stored](#choosing-where-pokeemerald-expansion-is-stored). Then run the `git clone` command again.

</details>

<details>
    <summary><i>Note...</i></summary>

> Consider adding an exception for the `pokeemerald-expansion` and/or `decomps` folder in Windows Security using
> [these instructions](https://support.microsoft.com/help/4028485). This prevents Microsoft Defender from
> scanning them which might improve performance while building.

</details>
    
Now you're ready to build the pokeemerald Expansion ROM.

## Building the pokeemerald Expansion ROM

If you aren't in the pokeemerald-expansion directory already, then **change directory** to the pokeemerald-expansion folder:

```bash
cd pokeemerald-expansion
```

To build **pokeemerald.gba** (Note: to speed up builds, see [Making builds faster with nproc](#making-builds-faster-with-nproc) below):

```bash
make
```

If it has built successfully you will have the output file **pokeemerald.gba** in your project folder.

## Making builds faster with `nproc`

To speed up building, first get the value of `nproc` by running the following command:

```bash
nproc
```

Builds can then be sped up by running the following command:

```bash
make -j<output of nproc>
```

Replace `<output of nproc>` with the number that the `nproc` command returned.

    <details>
        <summary><i>Note...</i></summary>

> See [the GNU docs](https://www.gnu.org/software/make/manual/html_node/Parallel.html) and [this Stack Exchange thread](https://unix.stackexchange.com/questions/208568) for more information

    </details>

## Useful additional tools

- [porymap](https://github.com/huderlem/porymap) for viewing and editing maps
- [poryscript](https://github.com/huderlem/poryscript) for scripting ([VS Code extension](https://marketplace.visualstudio.com/items?itemName=karathan.poryscript))
- [Tilemap Studio](https://github.com/Rangi42/tilemap-studio) for viewing and editing tilemaps
