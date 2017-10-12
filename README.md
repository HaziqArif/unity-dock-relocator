# unity-dock-relocator
C++ based CLI Unity launcher relocation. ~~Until I have proper shell script writing skill...~~ Looks like I managed to get a little amount of time to learn Bash script a bit! Here you go!
# How-tos 
## For Bash script version
After cloning, just run the script by `./relocate-dock.sh [option]`

Options available are `-l` for left, `-b` for bottom

## For C++ version
Warning! Run at your own risk.

Compile using `g++ dock-relocator.cpp -o yourexename`

Run by `./yourexename` 

# Why are you doing this?
Too lazy to download Unity Tweak Tool. I just want to move the Unity Dock to the bottom of the screen. Well, maybe resizing the Dock but it's doable in Unity Settings...

# Anything else?
The (C++) program does not take arguments and prompts the user within the application. Valid input is left or bottom (case insensitive) or their initials (l or b).

The CLI uses `system()` function which some people consider it dangeous. Hence, do not use this application and instead copy the command line within that function.

Don't worry about the Bash script version. It works just like a regular script. Do tell me if there are things need to be improved in this script though.

Credits to those who discover the original command. This application only shortens the typing process, and ~~this approach is also possible through shell script, but I am not familiar with shell scripting~~ credits to WikiBooks for teaching me Bash scripting. 
