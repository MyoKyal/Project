#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

char playerChoice();
char computerChoice();
void showChoice(char choose);
void decision(char player, char computer);

int main(){
   char player,computer;
   player = playerChoice();
    cout << "Your choice is: ";
    showChoice(player);
   computer = computerChoice();
    cout << "Computer choice is: ";
    showChoice(computer);
    decision(player,computer);

return 0;
}
char playerChoice(){
    char player;
    cout << "Rock-Paper-Scissor Game!";
    do {
     cout << "Enter your choice(r for rock, p for paper, s for scissor) \n";
     cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');
    return player;
};
char computerChoice(){
    srand(time(NULL));
    int num = rand()%3+1;
    switch (num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    };
    return 0;
};
void showChoice(char choose){
    switch(choose){
        case 'r':
        cout << "Rock \n";
        break;
        case 'p':
        cout << "Paper \n";
        break;
        case 's':
        cout << "Scissor \n";
        break;
    };

};
void decision(char player, char computer){
    switch (player){
      case 'r':
       if (computer == 'r'){ cout << "Tie";}
       else if (computer == 's'){ cout << "Win";}
       else { cout << "Lose";};
       break;
      case 'p':
       if (computer == 'p'){ cout << "Tie";}
       else if (computer == 'r'){ cout << "Win";}
       else { cout << "Lose";};
       break;
      case 's':
       if (computer == 's'){ cout << "Tie";}
       else if (computer == 'p'){ cout << "Win";}
       else { cout << "Lose";};
       break;
    };
    };
