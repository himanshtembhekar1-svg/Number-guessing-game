#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main (){

    srand(time(0));

    
    int guess = 0;
    int attempts = 0;
    int choice;
    int maxTries;
    int secretNumber = rand() % 100 + 1;
    


    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100." << endl;

    cout << "You have 5 chances to guess the correct number." << endl;
    cout << "Please select the difficulty level: " << endl;

    cout << "1. Easy (10 chances)" << endl;
    cout << "2. Medium (5 chances)" << endl;
    cout << "3. Hard (3 chances)" << endl;

    cout << "Enter your choice: " << endl;

    cin >> choice;

    switch (choice)
    {
    case 1:
        maxTries = 10;
        cout << "Great! You have selected the Easy difficulty level."<< endl;
        break;
    case 2:
        maxTries = 5;
        cout << "Great! You have selected the Medium difficulty level." << endl; 
        break;  
    case 3:
        maxTries = 3;
        cout << "Great! You have selected the Hard difficulty level." << endl;
    default:
        maxTries = 5; // by default
        break;
    }

    cout << "Let's start the game!" << endl;


    while (guess != secretNumber && attempts <= maxTries)
    {
        cout << " Enter your guess: " << endl;
        cin >> guess;

        attempts++;

        if (guess < 1 || guess > 100 )
        {
           cout << "Please enter a number between 1 to 100 only" << endl;
           continue;
        }
        



        if (guess < secretNumber)
        {
            cout << "Incorrect! The number is Greater than " << guess << endl;
        }

        else if (guess > secretNumber)
        {
            cout << "Incorrect! The number is Less than " << guess << endl;
        }
        
    }

    if (guess == secretNumber)
    {
       cout << " Congratulations! You guessed the correct number in " << attempts << " Attempts" << endl;
    }
    else {
        cout << "Your maximum attempts has been reached! the number was :" << secretNumber << endl;
    }
    
    
    






    return 0;
}