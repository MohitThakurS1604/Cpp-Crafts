/*

A simple game to guess the number generate by the computer ( made by uing C++ )

*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

    using namespace std;

    cout << "Welcome to Guess the number game " << endl
         << "The computer will generate a random number." << endl
         << "You have to guess that number " << endl;

    srand(time(0));             // number generation speed
    int num = rand() % 100 + 1; // it will generate a random number between 1-100
    int guess;
    int turn = 0;

    do
    {
        cout << "Enter your guess: ";
        cin >> guess;
        turn++;

        if (guess > num)
        {
            cout << "Too high" << endl;
        }
        else if (guess < num)
        {
            cout << "Too low" << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number in " << turn << " turns" << endl;
            break;
        }
    } while (true);

    return 0;
}