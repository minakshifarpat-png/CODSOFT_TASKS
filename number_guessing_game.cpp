#include<iostream>
#include<cstdlib>
#include <ctime>

using namespace std;
class NumberGuessingGame
{
 private:
 	
 	int secretNumber = 0;
 	int guess = 0;

 public:

 //Starts the game and handles the guessing process
 void playGame()
   {
 	   //seed the random number generator using the current time
 	   srand(static_cast<unsigned int>(time(0)));

 	  //Generate a random number between 1 and 100
 	  secretNumber = rand() %100+1;

 	  cout<<"I have selected a number between 1 and 100."<<endl;
 	  cout<<"Try to guess it!"<<endl;
    
      //Continue asking for guesses until the correct number is entered
 	 do 
       {

  	        cout<<"\nEnter your guess:";
  	        cin>>guess;

  	        // Compare the user's guess with the secret number
  	        if (guess>secretNumber)
      	    {
  		      cout<<"Too high! Try a smaller number."<<endl;
  	        }

             else if (guess < secretNumber)

  	        {
  		      cout<<"Too low! Try a larger number."<<endl;
    	    }
       
            else 
            {
     	      cout<<"Correct! You guessed the number."<<endl;
            }
        }

       while (guess != secretNumber);
    }
};
 int main()
{
	// Create an object of the NumberGuessingGame class
	NumberGuessingGame game;
    
    // Start the game
	game.playGame();

	return 0;
}