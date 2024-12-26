# User and Group Management Script

This Bash script automates the process of checking for the existence of a user and group on a Linux system. If the specified user or group does not exist, the script creates them. It also displays relevant information about the user and group after the operations.

## Features

- *Check Group Existence:* Verifies if a specified group exists on the system.
- *Create Group:* Creates a new group if it does not already exist.
- *Check User Existence:* Verifies if a specified user exists on the system.
- *Create User:* Creates a new user if it does not already exist, assigns the user to a specified group, and creates a home directory.
- *Display Information:* Prints details about the user and group.

## Prerequisites

- *Linux System:* The script is designed to work on Linux-based systems.
- *Permissions:* The script requires root privileges to manage users and groups.

## How to Use

### Step 1: Configure the Script

Edit the script to specify the desired username and group name:

```bash
UserName="yourName"
GroupName="FamilyName"
```

### Step 2: Save the Script

Save the script to a file, for example: user_group_manager.sh.

### Step 3: Make the Script Executable

Run the following command to make the script executable:

```bash
chmod +x user_group_manager.sh
```

### Step 4: Run the Script

Execute the script with sudo:

```bash
sudo ./user_group_manager.sh
```
