#include<iostream>
using namespace std;
// Displays the Tic-Tac-Toe board

// TicTacToe class handles the complete Tic-Tac-Toe game
class TicTacToe
{
  private:
    //Stores the 3x3 Tic-Tac-Toe board
    char board [3][3];

    //stores the player whose turn is currently active 
    char currentPlayer;

  public:
    //Initializes the game board and sets first player 
    void initializeGame()
    	
    {
        //set all board position as empty
        for (int row = 0; row <3; row++)
        {
        	for(int column = 0; column<3;column++)
        	{
        		board[row][column] = ' ';
        	}	
        }

        //Set player X as the first player 
        currentPlayer = 'X';
    }

    //Display the current Tic-Tac-Toe board 
    void displayBoard()
    {
    	cout << " " << board[0][0] << " | "
             << board[0][1] << " | "
             << board[0][2] << endl;

    	// Display the second row of the board
        cout << "---+---+---" << endl;
        cout << " " << board[1][0] << " | "
             << board[1][1] << " | "
             << board[1][2] << endl;

        // Display the third row of the board
        cout << "---+---+---" << endl;
        cout << " " << board[2][0] << " | "
             << board[2][1] << " | "
             << board[2][2] << endl;

    }
    //Check whether the current player has won the game
    bool checkWin()
    {
    	//Check all three rows for a winning combination 
    	for (int row = 0; row < 3; row++)
    	    {
    	 	    if(board[row][0] == currentPlayer &&
    	 	       board[row][1] == currentPlayer &&
    	 	       board[row][2] == currentPlayer)
    	 	    {
    	 		   return true;
    	 	    }
    	    } 
    	    //CHeck all three columns for winning combination 
        for (int column = 0; column < 3; column++)
            {
        	    if (board[0][column] == currentPlayer &&
        	 	    board[1][column] == currentPlayer &&
        	 	    board[2][column] == currentPlayer)
        	        {
        	 	 	  return true;
        	        }
        	}

    	//Check the main diagonal for a winning combination
    	        if(board[0][0] == currentPlayer &&
    	 	       board[1][1] == currentPlayer &&
    	 	       board[2][2] == currentPlayer)
    	           {
    	 	          return true;
    	           }

               // Check the other diagonal for a winning combination
                if (board[0][2] == currentPlayer &&
                    board[1][1] == currentPlayer &&
                    board[2][0] == currentPlayer)
                    {
                      return true;
                    }

        // Return false when is no winning combination
        return false; 

    } 
    

     // Checks whether the board is full and the game is a draw
    bool checkDraw()
    {
    	        // Check every position on the board
        for (int row = 0; row < 3; row++)
        {
            for (int column = 0; column < 3; column++)
            {
                // If any position is empty, the game is not a draw
                if (board[row][column] == ' ')
                {
                    return false;
                }
            }
        }

                // Return true when all board positions are filled
        return true;
    }
        // Switches the turn between player X and player O
     void switchPlayer()
    {
        // Switch from player X to player O
       if (currentPlayer == 'X')
       {
          currentPlayer = 'O';
        }
       else
        {
        currentPlayer = 'X';
        }
    }

       // Starts and controls the complete Tic-Tac-Toe game
     void playGame()
    {   
        char playAgain;

         // Repeat the game when the player chooses to play again
       do
        {
          // Initialize the board and set the first player
          initializeGame();

          int row, column;

           // Continue the current game until a player wins or the game is drawn
           do
           {
              // Display the current board
              displayBoard();

              // Ask the current player to enter the row and column
                 cout << "\nPlayer " << currentPlayer
                 << ", enter row and column: ";
                 cin >> row >> column;

               // Check whether the input is a valid number
               if (cin.fail())
               {
                   cin.clear();
                   cin.ignore(1000, '\n');

                   cout << "Please enter numbers only." << endl;

                   continue;
                }

                  // Check whether the selected position is valid and empty
               if (row >= 0 && row < 3 &&
                   column >= 0 && column < 3 &&
                    board[row][column] == ' ')
               {
                     // Place the current player's mark
                     board[row][column] = currentPlayer;
                }
                else
                {
                    cout << "Invalid position! Please try again." << endl;

                   continue;
                }

                 // Check whether the current player has won
                if (checkWin())
               {
                    displayBoard();

                     cout << "\nPlayer " << currentPlayer
                          << " wins!" << endl;

                 break;
                }
   
                  // Check whether the game is a draw
                  if (checkDraw())
                {
                 displayBoard();

                  cout << "\nThe game is a draw!" << endl;

                 break;
                }

                   // Switch the turn to the other player
                switchPlayer();

            } while (true);

                // Ask whether the players want to start another game
                cout << "\nPlay again? (y/n): ";
                cin >> playAgain;

        }     
         while (playAgain == 'y' || playAgain == 'Y');
    }
};

int main()
{
    // Create an object of the TicTacToe class
    TicTacToe game;

    // Start the game
    game.playGame();

    return 0;
}

