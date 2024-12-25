# Bash Script to Create a User and Assign Them to a Group

## Overview
This Bash script automates the creation of a user named yourName and assigns them to a group named FamilyName. It checks whether the group and user already exist, creates them if necessary, and displays relevant information about the user and group.

- *Group Check*: Ensures the group exists. Creates it if not found- *User Check*: Ensures the user exists. Creates it and assigns it to the group if not found.
- *Home Directory*: Automatically creates a home directory for the new user with default configurations.
- *Output Information*: Displays details about the user and group after execution.

## Features
- Ensures system integrity by checking for existing users and groups.
- Creates a new home directory for users if needed.
- Provides a summary of the created or existing user and group.
