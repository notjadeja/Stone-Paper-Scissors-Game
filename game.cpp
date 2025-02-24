#include <iostream>
using namespace std;

class Game{
private:
    int playerChoice;
    int computerChoice;
public:
    Game(){} // Krina

    void getPlayerChoice(){}  // Takshay

    void getComputerChoice(){}  // Shubham

     void determineWinner() { // Jadeja & Kamil
        if (playerChoice == computerChoice) {
            cout << "It's a tie!" << endl;
        } else if ((playerChoice == 0 && computerChoice == 2) ||
                   (playerChoice == 1 && computerChoice == 0) ||
                   (playerChoice == 2 && computerChoice == 1)) {
            cout << "Player wins!" << endl;
        } else {
            cout << "Computer wins!" << endl;
        }
    }

    string choiceToString(int choice){} // Mann & Harsh
};

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
