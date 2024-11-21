#include <iostream>
#include <ctime>        //Allows time(0) to be used
#include <cstdlib>      //Allows rand() and srand()

using namespace std;

int main(){

srand(time(0));     //seeds random number generator with current time
int randomNo= rand()%10;       //Generates random number between 0&10
int guess;

//Prompts user to give their guess
    cout<<"Guess a number between zero and 10: ";
    cin>>guess;

//A do-while loop that loops through the user's guess indefinitely until the correct guess is reached.
 do{
    if(randomNo==guess){
        cout<<"\nYour guess was correct!";
        return(0);
    }else{
        cout<<"\nIncorrect guess! Try again.\n";
        cin>>guess;
        }

}while(1);

return 0;
};
