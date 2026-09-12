# cpp-tic-tac-toe

This was my third ever project in C++, and maybe the most fun one. Making this program didn't feel all that hard since I know the basics by this point, but I also learned a lot more new things. For example nested loops, 2D arrays, fixed-size arrays, and most importantly that all things that look repetitive don't always have to be looped in some way.

## Features:
**Printing**
  - The playing grid and number labels for each column and row is printed at the start of every game
  
**Placing a tick on the board**
  - The player X or O is asked to specify which row and column they would like to place their tick in

**Checking for a win**
  - After each placement of a tick by a player, the board is checked for any instances of a win, three in a row.

**Option to play again or not**
  - If one player wins or if the board is filled resulting in a tie, the user is asked if they would like to play again.

## Build & run:
This project was built and tested in Visual Studio.

1. Clone the repository.
2. Open "cpp-tic-tac-toe.slnx" in Visual Studio.
3. Build and run (Ctrl+F5 or the green run button).
No external dependencies, just the C++ standard library is used.

## Why I made it:
For me, this project was another stepping stone in my journey of becoming a better programmer. Even though it may have been easier than the past projects, I still had my fair share of problems while making it. I liked the idea of making a game like this because it is actually something I can use in my spare time with friends if I wanted to as well as teaching me more things about C++. It also was fun learning how to loop through a 2D array with nested loops and using other types of storage rather than a vector, even though I had some hardships along the way. 

## Example interaction:
```
Hello and welcome to Tic-Tac-Toe! To win, the player must place three X or O marks in a row. Either diagonally or in a straight line. Good luck!
  1  2  3
1[ ][ ][ ]
2[ ][ ][ ]
3[ ][ ][ ]
X, select which row you want to place your tick in:
1
X, now select which column you want to place your tick in:
1
Placed X tick succesfully!
  1  2  3
1[X][ ][ ]
2[ ][ ][ ]
3[ ][ ][ ]
O, select which row you want to place your tick in:
2
O, now select which column you want to place your tick in:
1
Placed O tick succesfully!
  1  2  3
1[X][ ][ ]
2[O][ ][ ]
3[ ][ ][ ]
X, select which row you want to place your tick in:
2
X, now select which column you want to place your tick in:
2
Placed X tick succesfully!
  1  2  3
1[X][ ][ ]
2[O][X][ ]
3[ ][ ][ ]
O, select which row you want to place your tick in:
3
O, now select which column you want to place your tick in:
2
Placed O tick succesfully!
  1  2  3
1[X][ ][ ]
2[O][X][ ]
3[ ][O][ ]
X, select which row you want to place your tick in:
3
X, now select which column you want to place your tick in:
3
Placed X tick succesfully!
  1  2  3
1[X][ ][ ]
2[O][X][ ]
3[ ][O][X]
Congratulations to the winner! X
Would you like to play again? Reply with y for yes and n for no.
```







