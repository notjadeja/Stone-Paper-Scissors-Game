# Stone, Paper, Scissors Game in C++ (OOP-based)

## Overview

This is a simple **Stone, Paper, Scissors** game implemented in **C++** using Object-Oriented Programming (OOP) concepts. The game allows a user to play against the computer.

## Features

- Uses **Classes & Objects**
- Implements **Encapsulation**
- Uses **Randomization** for computer moves
- Displays the winner after each round

## OOP Concepts Used

1. **Class & Objects**: The game is structured using a class `Game`.
2. **Encapsulation**: Data members and member functions are encapsulated in the `Game` class.
3. **Constructor**: Initializes the game.
4. **Functions**: To get user input, generate computer choice, and determine the winner.

## How to Play

- The player chooses one of the three options:
  - `1` for Stone
  - `2` for Paper
  - `3` for Scissors
- The computer randomly selects one of the three options.
- The winner is decided based on the standard rules:
  - **Stone beats Scissors**
  - **Paper beats Stone**
  - **Scissors beat Paper**
- The result is displayed on the screen.

## Class Structure

### Data Members:

- `int playerChoice;`
- `int computerChoice;`

### Member Functions:

- `Game();` _(Constructor to initialize the game)_
- `void getPlayerChoice();`
- `void getComputerChoice();`
- `void determineWinner();`
- `string choiceToString(int choice);`

## How to Run

1. **Compile the Code**
   ```sh
   g++ game.cpp -o game
   ```
2. **Run the Executable**
   ```sh
   ./game
   ```
3. Follow the on-screen instructions and enjoy the game!

## Future Enhancements

- Implement multiple rounds with a scoring system.
- Add a user-friendly menu for replaying the game.
- Enhance the UI using graphics (if required).
- Add audio cues for navigating through different rounds or simply interacting with buttons.

## License

This project is open-source and free to use.
