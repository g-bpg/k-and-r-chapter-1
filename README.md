# K&R Study Group

Send all complaints to /dev/null (*preferably*), the Issues tab in GitHub, or the [Discord server](https://discord.gg/YfBUDU7GYn).

## Conduct

Don't make changes to others' files. Other than that, don't break the law unless it's necessary to complete the exercise.

## Copyright

**All code you add to the repository will enter the public domain.**
If you *must* use a different license for some ungodly reason put a POSIX shell script instead of a .c file in the exercise folder that will fetch, compile, and execute your program.

## File Structure
- [chapter]/ ;<--(this is the repo root)
  -  [exercise]/
     -  _exercise.txt
     - [github username].c

`_exercise.txt` will contain the page number and text detailing the exercise, `[github username].c` will be your solution to the exercise.
If it requires a certain compiler or compilation options put them in a comment somewhere in the code.
In the case that your code has more than one file, create a folder within the exercise folder with the name of your GitHub username and then title the files in there whatever you like, provided there's a Makefile to build the program.
Obfuscation is cool and funny so long as it's explained far enough to compile+run the program.1
