#pragma once
bool cmp1(participant a, participant b)
{
    return (a.getName()).size() > (b.getName()).size();
}
bool cmp2(participant a, participant b)
{
    return ((a.getTotalScore() != b.getTotalScore()) ? (a.getTotalScore() > b.getTotalScore()) : ((a.getAverageAccuracy() != b.getAverageAccuracy()) ? (a.getAverageAccuracy() > b.getAverageAccuracy()) : ((a.getAverageSpeed() != b.getAverageSpeed()) ? (a.getAverageSpeed() > b.getAverageSpeed()) : (a.getMaxScore() > b.getMaxScore()))));
}
void showLeaderboard(vector<participant> participants, int numberOfParticipants)
{
    clr_here
    sort(participants.begin(), participants.end(), cmp1);
    int rankSpc = max(0, (int)log10(numberOfParticipants) - 10);
    int partSpc = max(0, (int)(participants[0].getName()).size() - 39), partSpcL = partSpc / 2, partSpcR = ceil((double)partSpc / 2);
    sort(participants.begin(), participants.end(), cmp2);
    int scoreSpc = max(0, (int)log10(max(1, (int)participants[0].getTotalScore())) - 10);
    int netLen = 69 + rankSpc + partSpc + scoreSpc;
    int partA = 0, partB = partA + 12 + rankSpc, partC = partB + 41 + partSpc, partD = partC + 15 + scoreSpc; //indices
    for (int i = 1; i < netLen - 42; i += 2)
        cout << " ";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    for (int i = 0; i < netLen - 42; i += 2)
        cout << " ";
    cout << "\n";
    for (int i = 1; i < netLen - 42; i += 2)
        cout << " ";
    cout << "||------- | T | Y | P | I | T | -------||";
    for (int i = 0; i < netLen - 42; i += 2)
        cout << " ";
    cout << "\n";
    for (int i = 1; i < netLen - 42; i += 2)
        cout << " ";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    for (int i = 0; i < netLen - 42; i += 2)
        cout << " ";
    cout << "\n\n";
    for (int i = 0; i < netLen; i++)
        cout << "~";
    cout << "\n||";
    for (int i = 1; i < netLen - 31; i += 2)
        cout << "-";
    cout << " -|L|E|A|D|E|R|B|O|A|R|D|- ";
    for (int i = 0; i < netLen - 31; i += 2)
        cout << "-";
    cout << "||\n";
    for (int i = 0; i < netLen; i++)
        cout << "~";

    cout << "\n\n";
    //line 1
    for (int i = 0; i < netLen; i++)
        cout << "_";
    cout << "\n";
    cout << "|";
    for (int i = 1; i < rankSpc; i += 2)
        cout << " ";
    cout << " |R A N K| ";
    for (int i = 0; i < rankSpc; i += 2)
        cout << " ";
    cout << "||";
    for (int i = 1; i < partSpc; i += 2)
        cout << " ";
    cout << " |P A R T I C I P A N T ' S   N A M E| ";
    for (int i = 0; i < partSpc; i += 2)
        cout << " ";
    cout << "||";
    for (int i = 1; i < scoreSpc; i += 2)
        cout << " ";
    cout << " |S C O R E| ";
    for (int i = 0; i < scoreSpc; i += 2)
        cout << " ";
    cout << "|\n";

    cout << "|";
    for (int i = partA + 1; i < partB; i++)
        cout << "-";
    cout << "||";
    for (int i = partB + 2; i < partC; i++)
        cout << "-";
    cout << "||";
    for (int i = partC + 2; i < partD; i++)
        cout << "-";
    cout << "|\n";

    for (int i = 0; i < participants.size(); i++)
    {
        int index = 0;
        cout << "|";
        index++;
        cout << " " << i + 1 << ".";
        index += (2 + log10(i + 1) + 1);
        while (index != partB)
            cout << " ", index++;
        cout << "||";
        index += 2;
        participants[i].printName();
        index += ((participants[i].getName()).size());
        while (index != partC)
            cout << " ", index++;
        cout << "||";
        index += 2;
        participants[i].printTotalScore();
        index += (log10(max(1, (int)participants[i].getTotalScore())) + 4);
        while (index != partD)
            cout << " ", index++;
        cout << "|\n";
        index += 1;
    }
    for (int i = 0; i < netLen; i++)
        cout << "=";
    cout << "\n";
    pause_here
    return;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////
