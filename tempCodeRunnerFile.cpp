#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;


string rock =
"    _______\n"
"---'   ____)\n"
"      (_____)\n"
"      (_____)\n"
"      (____)\n"
"---.__(___)\n" ;

string paper = 
"    _______\n"
"---'   ____)____\n"
"          ______)\n"
"          _______)\n"
"         _______)\n"
"---.__________)\n" ;


string scissors =
"    _______\n"
"---'   ____)____\n"
"          ______)\n"
"       __________)\n"
"      (____)\n"
"---.__(___)\n" ;


int main(){
    
    srand (time(0)); // rastgele sayı üretmek için zaman tabanlı tohum
    // 0 ile 3 arasında random sayılar üretmek için:
    int randomNumber = rand() % 3;

    cout << "Welcome to the rock, paper, sccissors game !" << endl;
    cout << "rock:" << endl << rock << endl;
    cout << "paper:" << endl << paper << endl;
    cout << "scissors" << endl << scissors << endl;
    cout << "Make your choice! Enter 0 for Rock, 1 for Paper, 2 for Scissors." << endl;
    
    int userChoice;
    cin >> userChoice;

    if (userChoice  == 0){
        cout << "You Chose Rock." << endl;
        cout << rock;
    }
    else if (userChoice == 1){
        cout << "You Chose Paper." << endl;
        cout << paper;
    }
    else{
        cout << "You Chose Scissors." << endl;
        cout << scissors;
    }
        
    if (randomNumber==0){
        cout << "The Computer Chose Rock." << endl;
        cout << rock;
    }
    else if (randomNumber == 1){
        cout << "The Computer Chose Paper." << endl;
        cout << paper;
    }
    else{
        cout << "The Computer Chose Scissors." << endl;
        cout << scissors;
    }
    
    if(randomNumber == userChoice){
        cout << "It's a tie!" << endl;
    }
    else if ((randomNumber == 0 && userChoice == 1) ||
            (randomNumber == 1 && userChoice == 2) ||
            (randomNumber == 2 && userChoice == 0)){ ;
            cout << "You Win!" << endl;
    }
    else{
        cout << "You Lose !" << endl;
    }
    return 0;
}

