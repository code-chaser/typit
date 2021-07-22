#ifndef PARTICIPANT_HH
#define PARTICIPANT_HH

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

class participant
{
private:
    string name = "";
    double totalScore = 0.0;
    double maxScore = 0.0;
    double averageAccuracy = 0.0;
    double averageSpeed = 0.0; //characters per second

public:
    participant(int n);
    void addScore(double score);
    void addAccuracy(double accuracy);
    void addSpeed(double speed);
    string getName();
    double getTotalScore();
    double getMaxScore();
    double getAverageAccuracy();
    double getAverageSpeed();
    void printName();
    void printTotalScore();
    void printMaxScore();
    void printAverageAccuracy();
    void printAverageSpeed();
};

#endif // !PARTICIPANT_HH