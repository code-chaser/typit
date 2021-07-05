#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
class sentence
{
private:
    string s;

public:
    sentence(int difficulty)
    {
        srand(time(NULL));
        fstream f;

        int totalLines = 0, lineNumber;
        switch (difficulty)
        {
        case 1:
            f.open("./assets/easySentences.txt", ios::in);
            while (getline(f >> ws, s))
                totalLines++;
            lineNumber = (abs(rand())) % totalLines;
            f.close();
            f.open("./assets/easySentences.txt", ios::in);
            while (lineNumber--)
                getline(f >> ws, s);
            break;
        case 2:
            f.open("./assets/mediumSentences.txt", ios::in);
            while (getline(f >> ws, s))
                totalLines++;
            lineNumber = (abs(rand())) % totalLines;
            f.close();
            f.open("./assets/mediumSentences.txt", ios::in);
            while (lineNumber--)
                getline(f >> ws, s);
            break;
        case 3:
            f.open("./assets/hardSentences.txt", ios::in);
            while (getline(f >> ws, s))
                totalLines++;
            lineNumber = (abs(rand())) % totalLines;
            f.close();
            f.open("./assets/hardSentences.txt", ios::in);
            while (lineNumber--)
                getline(f >> ws, s);
            break;
        default:
            break;
        }
        return;
    }
    void addSentence()
    {
        cout << "\nEnter the sentence you want to add:\n";
        getline(cin >> ws, s);
        cout << "Enter the difficulty set you want to add the sentence to (1-Easy || 2-Medium || 3-Hard):\n";
        int difficulty;
        cin >> difficulty;
        fstream f;
        switch (difficulty)
        {
        case 1:
            f.open("./assets/easySentences.txt", ios::app);
            f << s << "\n";
            break;
        case 2:
            f.open("./assets/mediumSentences.txt", ios::app);
            f << s << "\n";
            break;
        case 3:
            f.open("./assets/hardSentences.txt", ios::app);
            f << s << "\n";
            break;
        default:
            break;
        }
        cout << "\nAdded Successfully!\n Thanks a lot for your contribution!\n";
        return;
    }
    string getSentence()
    {
        return s;
    }
};
