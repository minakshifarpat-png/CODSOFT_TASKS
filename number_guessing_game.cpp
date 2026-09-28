#include<iostream>
#include<cstdlib>
#include <ctime>

using namespace std;
int main()
{
	srand(static_cast<unsigned int>(time(0)));

	int secretNumber = rand() % 100 + 1;
	int guess = 0;

	cout<< "I have selected a number between 1 and 100."<<endl;
	cout<<"Try to guess it!"<<endl;
	
	do
	{
		cout<<"\nEnter your guess:";
		cin>>guess;

		if (guess > secretNumber)
		{
			cout<<"Too high! Try a smaller number."<<endl;
		}

		else if(guess <secretNumber)
        {
        	cout<<"Too low! Try a larger number."<<endl;
        }

        else
        {
        	cout<<"Correct! You guessed the number."<<endl;
        }
	}while(guess != secretNumber);

	cout<<"Thank you for playing!"<<endl;

	return 0;
}