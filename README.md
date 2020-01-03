# arduino_rubber_ducky
Arduino Rubber Ducky XD

The task was to use arduino to create a rubber ducky to spawn a windows reverse shell. In order to mimic a keyboard, I needed arduino nano or some other,
version of arduino which supported "keyboard.h", instead, what I did was, flashed arduino uno, in order to use the same features. 
script_1 is the script which needed to be run, after which the code must be uploaded using the regular arduino ide, and then, script 2 to
finish it. A rubber ducky is ready to use, and then, you just need to re-plug it.
Note: the scripts require any linux distro, in order to execute.

Tutorials followed: https://www.youtube.com/watch?v=1ZyNU-RmBIs, https://www.youtube.com/watch?v=hry8t-gEqy8 One tutorial teaches how to program arduino
for rubber ducky, and the other teaches how to flash arduino uno in order to mimic the keyboard.

How it works?
Arduino, when plugged, mimics the keyboard, and opens up run, fires up a cmd, downloads netcat64.exe from my python server, and then, executes
it in daeomon mode, along with the attacker ip and port, which in return spawns a reverse_shell at the attacker. 
