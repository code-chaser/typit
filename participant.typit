class participant
{
private:
    string name = "";
    double totalScore = 0.0;
    double maxScore = 0.0;
    double averageAccuracy = 0.0;
    double averageSpeed = 0.0; //characters per second

public:
    participant(int n)
    {
        cout << "Enter the name of participant " << n << ":\n";
        getline(cin >> ws, name);
        return;
    }
    void addScore(double score)
    {
        totalScore = totalScore + score;
        maxScore = max(maxScore, score);
        return;
    }
    void addAccuracy(double accuracy)
    {
        averageAccuracy = (averageAccuracy + accuracy) / 2;
    }
    void addSpeed(double speed)
    {
        averageSpeed = (averageSpeed + speed) / 2;
    }
    string getName()
    {
        return name;
    }
    double getTotalScore()
    {
        return totalScore;
    }
    double getMaxScore()
    {
        return maxScore;
    }
    double getAverageAccuracy()
    {
        return averageAccuracy;
    }
    double getAverageSpeed()
    {
        return averageSpeed;
    }
    void printName()
    {
        cout << name;
        return;
    }
    void printTotalScore()
    {
        cout << fixed << setprecision(2) << totalScore;
        return;
    }
    void printMaxScore()
    {
        cout << fixed << setprecision(2) << maxScore;
        return;
    }
    void printAverageAccuracy()
    {
        cout << fixed << setprecision(2) << averageAccuracy;
        return;
    }
    void printAverageSpeed()
    {
        cout << fixed << setprecision(2) << averageSpeed;
        return;
    }
};