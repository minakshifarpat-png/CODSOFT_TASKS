# Task 3 - Tic-Tac-Toe Game

## Introduction

This project is a simple console-based Tic-Tac-Toe game developed in C++ using Object-Oriented Programming (OOP).

The game is played between two players. Player X starts the game, followed by Player O. Players enter the row and column of an empty position to place their mark.

## Features

- 3x3 Tic-Tac-Toe board
- Two-player gameplay
- Player X and Player O turns
- Valid position checking
- Occupied position checking
- Invalid input handling
- Row win detection
- Column win detection
- Diagonal win detection
- Draw detection
- Play Again option

## Concepts Used

- C++
- Object-Oriented Programming (OOP)
- Class and Object
- 2D Array
- Loops
- Conditional Statements
- Functions
- Character Data Type
- Input Validation

## How the Game Works

1. The program creates a 3x3 Tic-Tac-Toe board.
2. Player X starts the game.
3. The current player enters the row and column of an empty position.
4. The program checks whether the input is valid.
5. The player's mark is placed on the selected position.
6. The program checks for a winning combination.
7. If there is no winner, the turn switches to the other player.
8. The game continues until a player wins or the board becomes full.
9. If all positions are filled without a winner, the game is declared a draw.
10. After the game ends, the players can choose to play again.

## Board Input

The board uses row and column numbers from `0` to `2`.

Example:

```text
0 0 | 0 1 | 0 2
----+-----+----
1 0 | 1 1 | 1 2
----+-----+----
2 0 | 2 1 | 2 2