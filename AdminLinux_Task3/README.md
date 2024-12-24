# Bash script to update .bashrc and open a new terminal

## Overview
This Bash script checks if the .bashrc file exists in the user's home directory. If the file exists, the script appends two variables to it:
- *HELLO*: An environment variable set to the value of the system's HOSTNAME.
- *LOCAL*: A local variable set to the output of the whoami command.

The script also opens a new terminal session after appending the variables.
