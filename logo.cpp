#include <iostream>
using namespace std;


string rock = R"(
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
)";

string paper = R"(
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
)";

string scissors = R"(
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
)";

int main(){
    cout << "rock:" << endl << rock << endl;
    cout << "paper:" << endl << paper << endl;
    cout << "scissors" << endl << scissors << endl;


    return 0;
}

