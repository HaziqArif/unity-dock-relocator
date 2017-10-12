#!/bin/bash
if [[ $1 = '-l' ]]
then
 gsettings set com.canonical.Unity.Launcher launcher-position Left
 echo 'Dock moved to left'
elif [[ $1 = '-b' ]]
then
 gsettings set com.canonical.Unity.Launcher launcher-position Bottom 
 echo 'Dock moved to bottom'
else
 echo 'Invalid argument'
 echo
 echo 'Options:'
 echo
 echo '-b    Move dock to the bottom side'
 echo '-l    Move dock to the left side'
fi
