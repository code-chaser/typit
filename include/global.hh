#ifndef GLOBAL_HH
#define GLOBAL_HH

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

#ifdef _WIN32
#include <windows.h>
#define color system("Color 0A")
#define clr_here system("cls")
#define pause_here system("pause")
#else
#include <unistd.h>
#define color
#define clr_here system("clear")
#define pause_here cout << "Press enter to continue...\n", getchar()
#endif

#include "./participant.hh"

void printRoundHeader(int roundNumber);
void printMainHeader();
bool cmp1(participant a, participant b);
bool cmp2(participant a, participant b);
void showLeaderboard(vector<participant> participants, int numberOfParticipants);

#endif // !GLOBAL_HH