# Task 2 - Simple Calculator

## Introduction

This project is a simple calculator developed in C++ using Object-Oriented Programming (OOP).

The calculator takes two numbers and an arithmetic operator from the user and performs the selected operation.

## Features

- Addition
- Subtraction
- Multiplication
- Division
- Invalid operator handling
- User-friendly input and output

## Concepts Used

- C++
- Object-Oriented Programming (OOP)
- Class
- Object
- Private data members
- Public member functions
- Conditional statements
- Arithmetic operators
- User input and output

## How the Program Works

1. The program creates a `Calculator` class.
2. The class contains two numbers and an operator as private data members.
3. The `getInput()` function takes two numbers and an operator from the user.
4. The `calculate()` function checks the selected operator.
5. The program performs the corresponding arithmetic operation.
6. The result is displayed on the screen.
7. If the user enters an invalid operator, the program displays an error message.

## OOP Structure

### Class

`Calculator` is the main class used to organize the calculator functionality.

### Private Data Members

- `num1` - stores the first number.
- `num2` - stores the second number.
- `operation` - stores the selected arithmetic operator.

### Public Member Functions

- `getInput()` - accepts input from the user.
- `calculate()` - performs the selected calculation.

### Object

The statement:

`Calculator calc;`

creates an object named `calc` from the `Calculator` class.

## Supported Operations

| Operator | Operation |
|----------|-----------|
| `+` | Addition |
| `-` | Subtraction |
| `*` | Multiplication |
| `/` | Division |

## Example

```text
Enter First Number: 10
Enter an operator (+,-,*,/): +
Enter Second Number: 5

Result: 15