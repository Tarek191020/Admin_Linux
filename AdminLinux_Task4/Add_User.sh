#!/bin/bash

#Variables
UserName="yourName"
GroupName="FamilyName"

#check if the group is exist
if getent group "$GroupName" > /dev/null 2>&1; then
	echo "Group '$GroupName' already exists"
else
	echo "creating group '$GroupName'"
	groupadd "$GroupName"
fi

#check if user is exist
if id -u "$UserName" > /dev/null 2>&1; then
	echo "User '$UserName' already exists"
else
	echo "creating user '$UserName' and adding to group '$GroupName'"
	useradd -m -g "$GroupName" "$UserName"
fi

#Display user and group info
echo "user information: "
id "$UserName"

echo "Group information: "
getent group "$GroupName"
