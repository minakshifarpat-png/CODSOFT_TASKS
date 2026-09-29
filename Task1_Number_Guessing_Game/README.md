# Task 1 - Number Guessing Game

## Introduction

This project is created as part of the CodSoft C++ Programming Internship.

The Number Guessing Game is a simple console-based C++ program. The computer generates a random number between 1 and 100, and the user tries to guess the number.

The program gives feedback after every guess:

- Too high
- Too low
- Correct

The game continues until the user guesses the correct number.

## Features

- Generates a random number between 1 and 100.
- Takes the user's guess as input.
- Tells the user if the guess is too high.
- Tells the user if the guess is too low.
- Displays a success message when the correct number is guessed.
- Continues until the correct number is found.

## Concepts Used

- C++ basics
- Object-Oriented Programming (OOP)
- Class
- Object
- Private data members
- Public member function
- Variables
- Input and Output
- Conditional statements
- `if`, `else if`, and `else`
- `do-while` loop
- Random number generation
- `rand()`
- `srand()`
- `time()`

## How the Program Works

1. The program creates a `NumberGuessingGame` class.
2. An object of the class is created in `main()`.
3. The `playGame()` function starts the game.
4. The program generates a random number between 1 and 100.
5. The user enters a guess.
6. The program compares the guess with the secret number.
7. If the guess is greater than the secret number, it displays "Too high".
8. If the guess is smaller than the secret number, it displays "Too low".
9. If the guess is correct, it displays a success message.
10. The game stops after the correct number is guessed.

## How to Compile

Open Command Prompt in the project folder and run:

```text
g++ number_guessing_game.cpp -o number_guessing_game