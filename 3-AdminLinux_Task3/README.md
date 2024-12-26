# Bash Script: Environment Variable Management and Terminal Launcher

This Bash script automates the process of checking for the existence of a .bashrc file in the user's home directory, appending environment variables, and launching a new terminal session.

## Features

1. *Check .bashrc File*: Verifies if a .bashrc file exists in the user's home directory.
2. *Append Environment Variables*:
   - Adds an environment variable HELLO set to the current system's HOSTNAME.
   - Adds a local variable LOCAL set to the current user using the whoami command.
3. *Reload .bashrc*: Automatically reloads the updated .bashrc file.
4. *Open New Terminal*: Launches a new terminal window (gnome-terminal).

## Prerequisites

- A Linux system with a desktop environment that supports gnome-terminal.
- Ensure you have write permissions to your .bashrc file.

## How to Use

### Step 1: Save the Script

Save the script to a file, for example: update_bashrc.sh.

### Step 2: Make the Script Executable

Run the following command to make the script executable:

```bash
chmod +x update_bashrc.sh
