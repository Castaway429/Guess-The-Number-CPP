#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
srand((unsigned) time(NULL));
int guess;
int tries = 1;
int random = rand() % 100 + 1;

do {
cout << "Guess the random number: ";
cin >> guess;

if (guess < random)
{
    cout << "Too low! Try again! \n";
    tries = tries + 1;
}
if (guess >  random)
{
    cout << "Too high! Try again! \n";
    tries = tries + 1;
}
}

while (guess != random);
{
    cout << "Congrats! You guessed the right number -- " << random << " -- \n";
    cout << "Completed in " << tries << " tries";
}


}
