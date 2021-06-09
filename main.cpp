//#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
#include "./sentences.cpp"
#include "./participant.cpp"
#include "./leaderboard.cpp"

////////////////////////////////////////////////////////////////////////////////////////////////////////////
void printRoundHeader(int roundNumber)
{
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    for (int i = 0; i < log10((roundNumber == 0) + roundNumber); i++)
        cout << "~";
    cout << "\n";
    cout << "||------- ||R|O|U|N|D| |" << roundNumber << "|| -------||\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    for (int i = 0; i < log10((roundNumber == 0) + roundNumber); i++)
        cout << "~";
    cout << "\n\n";
}
void printMainHeader(){
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n";
    cout << "||----- | T | Y | P | I | T | -----||\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    cout << "\n\n";
    return;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    system("Color 0A");
    system("cls");
    printMainHeader();
    cout<<"\n\n   W E L C O M E  T O  T Y P I T !   \n\n\n\n\n";
    system("pause");
    system("cls");
    printMainHeader();
    int numberOfParticipants = 0;
    cout << "Enter total number of participants:\n";
    while (numberOfParticipants <= 0)
    {
        cin >> numberOfParticipants;
        if (numberOfParticipants <= 0)
            cout << "Was that supposed to make any kind of sense?\n";
    }
    system("cls");
    printMainHeader();
    vector<participant> participants;
    for (int i = 0; i < numberOfParticipants; i++)
    {
        participant temp(i + 1);
        participants.push_back(temp);
    }
    system("cls");
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    printMainHeader();
    int difficulty = 0;
    while (difficulty < 1 || difficulty > 3)
    {
        cout << "Enter the difficulty level (1-Easy || 2-Medium || 3-Hard):\n";
        cin >> difficulty;
        if (difficulty < 1 || difficulty > 3)
        {
            cout << "Invalid difficulty level!\n";
        }
    }
    system("cls");
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    printMainHeader();
    int rounds = 0;
    cout << "Enter the number of rounds you want to play:\n";
    cin >> rounds;
    system("cls");
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    printMainHeader();
    cout << "\nRead the instructions below carefully.\n\n\n";
    cout << ">>INSTRUCTIONS:" << endl;
    cout << "1)At the start of each round a sentence (difficulty level: ";
    switch (difficulty)
    {
    case 1:
        cout << "easy";
        break;
    case 2:
        cout << "medium";
        break;
    case 3:
        cout << "hard";
        break;
    default:
        break;
    }
    cout << ") will be shown on your screen." << endl;
    cout << "2)Participants take turns one by one. First one to go is ";
    participants[0].printName();
    cout << ". The order remains same for every round." << endl;
    //cout << "3)Each participant has to type 'READY' (case-sensitive and without the inverted commas) and press the 'ENTER' key to start his timer." << endl;
    cout << "3)Each participant (on their turn) can see the sentence they have to type before their timer has started and once done, they can press any key to start typing and the timer starts automatically.\n";
    cout << "4)After that, once finished, press 'ENTER' key to end the timer and hence the turn." << endl;
    cout << /* and once done, type 'NEXT' & press the 'ENTER' key to continue...*/ "\nNOTE: Screen will be cleared with the next keypress." << endl;
    string temp;
    // do
    // {
    //     cin >> temp;
    // } while (temp != "NEXT" && temp != "next");
    system("pause");
    system("cls");
    printMainHeader();
    cout << "\nRead the scoring & ranking rules carefully.\n\n\n";
    cout << ">>SCORING & RANKING:" << endl;
    cout << "1)Score of a participant is equal to: A/B (i.e. A divided by B) " << endl;
    cout << "where: A = number of characters in their correct place in the participant's input sentence and if that number's less than 50% of total number of characters in the given sentence then it gets reduced to zero and hence the net score." << endl;
    cout << "&      B = time taken by the participant to type in seconds." << endl;
    cout << "2)Ofcourse, the participant with higher score gets better rank." << endl;
    cout << "3)But in case of a tie, tie breakers used are (in order):" << endl;
    cout << "(i)  Average Accuracy" << endl;
    cout << "(ii) Average Speed" << endl;
    cout << "(iii)Maximum Score" << endl;
    cout << "(iv) If the tie's still not broken, 4th criteria is your luck!" << endl;
    cout << "\n";
    cout << /* and once done, type 'START' & press the 'ENTER' key to continue...\n*/ "\nNOTE: Screen will be cleared with the next keypress.\n";

    // do
    // {
    //     cin >> temp;
    // } while (temp != "START" && temp != "start");
    system("pause");

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    for (int i = 0; i < rounds; i++)
    {
        sentences givenSentence(difficulty);
        string sen1 = givenSentence.getSentence();
        for (int j = 0; j < numberOfParticipants; j++)
        {
            temp = "";
            system("cls");
            printMainHeader();
            printRoundHeader(i + 1);
            participants[j].printName();
            cout << "'s turn\n\n";
            cout << "Given Sentence: \n\n";
            cout << sen1 << "\n\n";
            string sen2 = "";
            system("pause");
            // cout << "Type 'READY' and press the 'ENTER' key to start the timer.\n";
            // while (sen2 != "READY")
            //     getline(cin >> ws, sen2);
            system("cls");
            printMainHeader();
            printRoundHeader(i + 1);
            cout << sen1 << "\n\n";
            clock_t timer = clock();
            getline(cin >> ws, sen2);
            double timeTaken = (((double)clock()) - timer) / ((double)CLOCKS_PER_SEC);
            int score = 0;
            for (int k = 0; k < min(sen1.size(), sen2.size()); k++)
            {
                if (sen1[k] == sen2[k])
                    score++;
            }
            system("cls");
            printMainHeader();
            printRoundHeader(i + 1);
            participants[j].printName();
            cout << " took " << timeTaken << " seconds to type with an accuracy of " << ((double)(score * 100) / sen1.size()) << "%.\n";

            if (score < floor((double)sen1.size() / 2))
                score = 0;

            cout << "You scored " << ((double)score / timeTaken) << " in this round!\n\n";

            participants[j].addScore(((double)score / timeTaken));
            cout << "\nYour total score till now is: ";
            participants[j].printTotalScore();
            cout << "\n\n\n";
            // cout << "\n\n\nType 'CONTINUE' and press the 'ENTER' key to continue...\n";
            // while (temp != "CONTINUE" && temp != "continue")
            //     getline(cin >> ws, temp);
            system("pause");
        }

        showLeaderboard(participants, numberOfParticipants);
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////

    return 0;
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////