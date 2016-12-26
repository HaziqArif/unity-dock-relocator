# unity-dock-relocator
C++ based CLI Unity launcher relocation. Until I have proper shell script writing skill...
# How-tos
Warning! Run at your own risk.

Compile using `g++ dock-relocator.cpp -o yourexename`

Run by `./yourexename` 

The program does not take arguments and prompts the user within the application. Valid input is left or bottom (case insensitive) or their initials (l or b).

The CLI uses `system()` function which some people consider it dangeous. Hence, do not use this application and instead copy the command line within that function.

Credits to those who discover the original command. This application only shortens the typing process, and this approach is also possible through shell script, but I am not familiar with shell scripting. 
