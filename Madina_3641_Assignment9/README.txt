Kirsten Madina
626003641
Section 506
kirsten.madina
kirsten.madina@tamu.edu
I certify that I have listed all the sources that I used to develop the solutions/codes
to the submitted work. 
On my honor as an Aggie, I have neither given nor received any unauthorized help on this academic work.
Kirsten Madina 	12/02/2018

Resources: 
stack overflow, cplusplus, peers

Problems:
When I would try to implement the >> operator overload, the resultant grid would double each 
tile created. I believe this was due to the whitespace in the input file and I could
not figure out how to go around this. Instead I implemented a more round about way that 
was suggested to me by someone who had the same problem which involved iterating 
through the tiles created and only pushing back every second tile when the 
overloaded operator >> is called in Maze.cpp

Description: 
The main takes as an input a string given by the user and checks to see if the string is valid. 
if not, it defines the 'maze_tiles' variable to the default txt file. If so, it assigns the string
to maze_tiles. maze_tiles is then used to construct a Mazegame object which then calls
its member function, start_game. When the Mazegame object is created, it constructs a Maze object 
using the maze_tiles variable to locate a txt file of the same name. The Maze object consists of 
tiles defined by their tile_char and three booleans: try_walk, is_start_, and is_end.

Start_game iterates through the tiles in the Mazegame member object maze to determine the position
of all the starting tiles, and for each position, a position object is created. The position 
object is needed to create a player at that position. when the entire maze is looped through
and all the players are created, the maze is printed and the loop is updated. 

Update_loop takes in an input from the user to determine the motion of the player. The inputs u,
d,r,l correlate to up, down, right, and left respectively. An if-else statement determines 
whether or not the player can move to the position which correlates to their input. If not, the
program waits an input that corresponds to a position they can move to. If so, a boolean 
determines if the position they have reached is the end. If yes, the program prints out
that the player has run, the function returns to the main, and the program terminates. 