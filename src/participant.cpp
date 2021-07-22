#include "./../include/participant.hh"

participant::participant(int n)
{
    cout << "Enter the name of participant " << n << ":\n";
    getline(cin >> ws, name);
    cout << "\n";
    return;
}
void participant::addScore(double score)
{
    totalScore = totalScore + score;
    maxScore = max(maxScore, score);
    return;
}
void participant::addAccuracy(double accuracy)
{
    averageAccuracy = (averageAccuracy + accuracy) / 2;
}
void participant::addSpeed(double speed)
{
    averageSpeed = (averageSpeed + speed) / 2;
}
string participant::getName()
{
    return name;
}
double participant::getTotalScore()
{
    return totalScore;
}
double participant::getMaxScore()
{
    return maxScore;
}
double participant::getAverageAccuracy()
{
    return averageAccuracy;
}
double participant::getAverageSpeed()
{
    return averageSpeed;
}
void participant::printName()
{
    cout << name;
    return;
}
void participant::printTotalScore()
{
    cout << fixed << setprecision(2) << totalScore;
    return;
}
void participant::printMaxScore()
{
    cout << fixed << setprecision(2) << maxScore;
    return;
}
void participant::printAverageAccuracy()
{
    cout << fixed << setprecision(2) << averageAccuracy;
    return;
}
void participant::printAverageSpeed()
{
    cout << fixed << setprecision(2) << averageSpeed;
    return;
}