**University of Washington Bothell**
CSS 342: Data Structures, Algorithms, and Discrete Mathematics
Program 2: Recursion

**Problem 1: The good Mr. Catalan.**
Write a program called Catalan which takes one argument on the command line and calls a
recursive function which computes the nth Catalan number. The program then prints out the
result to std::cout.
Make sure that your program gracefully handles negative numbers and those which you deem
too large to solve. Also, your solution must be recursive mirroring above formula.

**Problem 2: “The Greedy Robot” or “Lost in the Supermarket”**
A robot is positioned on an integral point in a two-dimensional coordinate grid (xr, yr). There is
a treasure that has been placed at a point in the same grid at (xt, yt). All x’s and y’s will be
integral values. The robot can move up (North), down (South), left (West), or right (East).
Commands can be given to the robot to move one position in one of the four direction. That is,
“E” moves a robot one slot East (to the right) so if the robot was on position (3, 4), it would now
be on (4, 4). The command N would move the robot one position north so a robot at position
(4, 4) would be at (4, 5).

Because the robot cannot move diagonally, the shortest distance between a robot at (xr, yr) and
a treasure at (xt, yt) is | xr – xt | + | yr - yt | = ShortestPossibleDistance

Write a recursive program which determines all the unique shortest possible paths from the
robot to the treasure with the following stipulation: The robot may never move in the same
direction more than max_distance times in a row.

The input to the program will be the max_distance value followed by the position of the robot
(xr, yr), followed by the position of the treasure (xt, yt). Assume that all five are integers and do
not worry about error conditions in inputs. Take these parameters as arguments to the
program on the command line.
