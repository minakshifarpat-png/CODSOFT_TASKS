#include<iostream>
using namespace std;
//Calculator class handles basic arithmetic operations
class calculator
{
 private:

 	// Stores the two numbers and the selected operator
 	double num1 , num2;
 	char operation;

public:
	 // Takes numbers and operator as input from the user
	void getInput()
    {
    	cout<<"Enter First Number:";
    	cin>>num1;
        
        cout<<"Enter an operator (+,-,*,/)";
        cin>>operation;

    	cout<<"Enter Second Number:";
    	cin >>num2;
    }

     // Performs the selected arithmetic operation
    void calculate()
    {
    	if (operation =='+')
    	{
    		cout<<"Result:"<<num1 + num2<<endl;
    	}

    	else if (operation == '-')
    	{
    		cout<<"Result:"<<num1 - num2<<endl;
    	}

    	else if (operation == '*')
    	{
    		cout<<"Result:"<<num1 * num2<<endl;
    	}

    	else if (operation == '/')
    	{
    		cout<<"Result:"<<num1 / num2<<endl;
    	}

    	else 
    	{
    		cout<<"Invalid operator"<<endl;
    	}
    }
};


int main()
{
	 // Create an object of the Calculator class
	calculator calc;

    // Get input and perform the calculation
	calc.getInput();
	calc.calculate();

	return 0;
}
