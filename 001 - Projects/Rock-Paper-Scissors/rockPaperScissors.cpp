#include <iostream>
#include <random>
using namespace std;

int main() {
    string user_name, user_choices[5];
    int n_game, user_score = 0, computer_score = 0 , draw;
    cout << "Welcome to the Rock, Paper, Scissors Game!" << endl << endl;
    cout << "Please enter your name, number of repetitions," << endl;
    cout << "and your chosen steps\n1 - Rock,\n2 - Paper,\n3 - Scissors:" << endl << endl;
    cin >> user_name >> n_game;
    cout << "> " << user_name << ' ' << n_game << ' ';
    for (int i = 0; i < n_game; i++) {
        cin >> user_choices[i];
        cout << user_choices[i] << ' ';
    }
    cout << endl << endl << "Game Start!" << endl ;
    
    random_device rd;
    mt19937 gen(100);
    
    for (int i = 0; i < n_game; i++) {
        string user_choice = user_choices[i], computer_choice;
        int random_choice = gen() % 3;
        if (random_choice == 0) computer_choice = "Rock";
        else if (random_choice == 1) computer_choice = "Paper";
        else computer_choice = "Scissors";
                
        if (user_choice == "1" || user_choice == "rock") user_choice = "Rock";
        else if (user_choice == "2" || user_choice == "paper") user_choice = "Paper";
        else if (user_choice == "3" || user_choice == "scissors") user_choice = "Scissors";

        cout << "Round " << i + 1 << ": ";
        cout << "Computer chose " << computer_choice << ", ";
        cout << user_name << " chose " << user_choice << ". ";

        if (user_choice == computer_choice) {
            cout << "It's a draw." << endl;
            i--;
        }
        else if (user_choice == "Rock") {
            if (computer_choice == "Scissors") {
                cout << "Winner: " << user_name << '.' << endl;
                user_score++;
            } else {
                cout << "Winner: Computer." << endl;
                computer_score++;
            }
        } else if (user_choice == "Paper") {
            if (computer_choice == "Rock") {
                cout << "Winner: " << user_name << '.' << endl;
                user_score++;
            } else {
                cout << "Winner: Computer." << endl;
                computer_score++;
            }
        } else if (user_choice == "Scissors") {
            if (computer_choice == "Paper") {
                cout << "Winner: " << user_name << '.' << endl;
                user_score++;
            } else {
                cout << "Winner: Computer." << endl;
                computer_score++;
            }
        }
    }
    cout << endl << endl << "Game Over!" << endl;
    cout << "Total Score - " << user_name << ": " << user_score << ", Computer: " << computer_score << endl;
    cout << "Would you like to play again? (yes/no)";

    return 0;
}

