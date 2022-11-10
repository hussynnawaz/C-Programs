#include <iostream>
#include <string>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    string player1,player2;
    int player1Current = 0, player2Current = 0;
    int player1Total = 0, player2Total = 0;
    int iterationScore;
    int iterations, currentRound = 1;
    cout << "Please Enter Your Name" << endl;
    cin >> player1;
    cout << "Please Enter Your Name" << endl;
    cin >> player2;


    // To Capitalize First Latter Of Name
    player1[0] = toupper(player1[0]);
    player2[0] = toupper(player2[0]);
    //----------------------------------

    while (true)
    {
        cout << "Round " << currentRound << endl;
        cout << "Enter total number of iterations for this game" << endl;
        cin >> iterations;

        for(int i = 0 ; i < iterations ; i++) {
            iterationScore = rand() % 100;
            player1Current += iterationScore;
        }
        for(int i = 0 ; i < iterations ; i++) {
            iterationScore = rand() % 100;
            player2Current += iterationScore;
        }

        cout << "\nScores for Round " << currentRound << endl;
        cout << player1 << ": " << player1Current << endl;
        cout << player2 << ": " << player2Current << endl;

        if (player1Current == player2Current) {
            cout << "Draw" << endl;
        } else if(player1Current < player2Current) {
            cout << player1 << " Wins This Round With Margin: " << player2Current - player1Current << endl;
            player1Total += (player1Current + player2Current);
        } else {
            cout << player2 << " Wins This Round With Margin: " << player1Current - player2Current << endl;
            player2Total += (player1Current + player2Current);
        }

        cout << endl << player1 << " Account Balance: " << player1Total << endl;
        cout << player2 << " Account Balance: " << player2Total << endl;

        char choice;
        cout << "Do you want to play again(y/n)" << endl;
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            currentRound++;
            player1Current = 0;
            player2Current = 0;
            continue;
        } else {
            break;
        }

    }

    if(player1Total == player2Total) {
        cout << "Game Draw" << endl;
        cout << "Final Scores" << endl;
        cout << player1 << ": " << player1Total << endl;
        cout << player2 << ": " << player2Total << endl;
    } else if(player1Total > player2Total) {
        cout << player1 << " Wins the game with margin: " << (player1Total - player2Total) << endl;
        cout << "Final Scores" << endl;
        cout << player1 << ": " << player1Total << endl;
        cout << player2 << ": " << player2Total << endl;
    } else {
        cout << player2 << " Wins the game  with margin: " << (player2Total - player1Total) << endl;
        cout << "Final Scores" << endl;
        cout << player1 << ": " << player1Total << endl;
        cout << player2 << ": " << player2Total << endl;
    }

}