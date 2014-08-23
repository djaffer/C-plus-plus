#include <iostream>//library for std input/output
#include <cstdlib>//library for rand function
using namespace std;
class Game
{
 public:
void generateNumber(int lower, int upper);//function for generating random number
bool tryGuess(int num)//function to check guess
{ 

if(num<randomNumber)
{ 
cout << "Guess is too Low\n"; //print statement if number is lower 
return false;

}
else if(num>randomNumber)
{ 
cout << "Guess is too High\n"; //print statement
return false;
}
else
{
cout<<"You Guessed Right!"<<"\n";
return true;
}
}
private:
int randomNumber; 
};
void Game::generateNumber(int lower, int upper)

{
 srand(time(NULL));
 randomNumber = rand()%(upper-lower+1)+lower;

}


main() {

Game guess;
int high,low,number;
cout<<"Enter number High limit: "; 
cin>>high;//user entering high range
cout<<"Enter number Low limit: ";
cin>>low;//user entering low range
guess.generateNumber(low,high);
cout<<"Enter your Guess ("<<low<<" to "<<high<<"): ";
cin>>number; 
while (guess.tryGuess(number)!=true)//loop until correct guess
{
cout<<"Keep Guessing: ";
cin>>number;
}

}



