# typit
## INTRODUCTION
A simple typing accuracy &amp; speed tester game/tool made using Object Oriented Programming in C++.

<br><br>
## DESCRIPTION

```
INPUTS:
  1) Number of participants
  2) their names
  3) Number of rounds
  4) Desired difficulty level (1:Easy | 2:Medium | 3:Hard)
  
After that, in each round all the participants take turns and type the given statement (same for all participants in each round).
```
```
OUTPUTS:
  1) After each turn of every participant, the tool shows the time taken by him to type, his accuracy & score for that turn and the
     total score as well.
  2) After each round the Leaderboard is shown with the total scores of all participants.
```

```
SCORING RULES:
  1) For each turn the score of the participant is equal to A/B (i.e. A divided by B)
     where: i) A equals, in the participant's input sentence, the nummber of characters that are 'in place' as compared to the given 
               statement and if that number happens to be less than 50% of total size of the given sentence them A = 0;
           ii) B equals the time taken by the participant to type;
  2) Tie Breakers: i) Average Accuracy
                  ii) Average Speed
                 iii) Maximum Score among all the rounds
                  iv) Luck ;)
            
```