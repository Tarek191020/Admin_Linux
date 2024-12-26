#!/bin/bash

#check bashrc exists in home
if [ -f"/$HOME/.bashrc" ]; then
	echo ".bashrc file exists in home. appending environment variables.."
	
	#Append HELLO environment variable with HOSTNAME value
	echo "export HELLO=\$HOSTNAME">>"$HOME/.bashrc"

	#Append LOCAL local variable with whoami command
	echo "LOCAL=\$(whoami)">>"$HOME/.bashrc"
	
	#notify user of successful addition
	echo "environment variables added to .bashrc"

	#reload .bashrc
	source "$HOME/.bashrc"
else 
	echo ".bashrc does not exist in home"
fi

#command to open a new terminal
gnome-terminal &

echo "new terminal has been opened"
