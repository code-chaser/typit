# typit &nbsp; <!--![views](https://visitor-badge.glitch.me/badge?page_id=code-chaser.typit) &nbsp;-->[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

___


## INTRODUCTION
a simple typing accuracy &amp; speed tester game/tool made using basic C++ with a bit of file handling


___


<br>

## DESCRIPTION
___
#### BUILD & EXECUTE
- For Windows users: firstly install ` make ` for executing ` makefile `, from this [link](https://stackoverflow.com/questions/32127524/how-to-install-and-use-make-in-windows);
- For Linux users: ` make ` generally comes pre-installed;
   - if not, then run the following command: ` sudo apt-get install make `
   <br>
- Now, run the following commands:
   - for building executable file: 
  ```bash
     make all
  ```
   - for executing it:
  ```bash
     make run        # universal;
  ```
   - for deleting executable file:
  ```bash
     make clean      # for linux/macOS;
     make clean(win) # for windows;
  ```
___

#### CLASS DESIGN
|CLASS|DESCRIPTION|
|-----|-----------|
|participant|stores all the participant related data as it's private member variables: participant's name, total score, max score over all the rounds, average accuracy, average speed;<br>has appropriate public member functions to access/alter/print the data|
|sentence|stores just one sentence as it's private member variable;<br>it's constructor fetches a sentence of the given difficulty level from the assets and stores it;<br>also has public member function to add a sentence to the assets;

___

####

![typit_class_diagram](https://user-images.githubusercontent.com/63065397/123527092-53bd1200-d6fa-11eb-8675-4ceea2afa525.jpeg)

___

<br>


## GAME SPAN
___
#### INPUTS
1. Number of participants
4. their names
5. Number of rounds
6. Desired difficulty level (1:Easy | 2:Medium | 3:Hard)
7. And then, in each round every participant has to enter the given sentence

___

<!-- ```
INPUTS:
  1) Number of participants
  2) their names
  3) Number of rounds
  4) Desired difficulty level (1:Easy | 2:Medium | 3:Hard)
  
After that, in each round all the participants take turns and type the given statement (same for all participants in each round).
``` -->
#### OUTPUTS
1. After each turn of every participant, the tool shows the time taken by him to type, his accuracy &amp; score for that turn &amp; the total score as well.
2. After each round the Leaderboard is shown with the total scores of all participants.

___

<!-- ```
OUTPUTS:
  1) After each turn of every participant, the tool shows the time taken by him to type, his accuracy & score for that turn and the
     total score as well.
  2) After each round the Leaderboard is shown with the total scores of all participants.
``` -->
#### SCORING RULES
1. For each turn the score of the participant is equal to A/B (i.e. A divided by B) ;  
where:
      * A equals, in the participant's input sentence, the number of characters that are 'in place' as compared to the given statement and if that number happens to be less than 50% of total size of the given sentence them A = 0;
      * B equals the time taken by the participant to type in seconds;
2. Tie breakers:
   * Average Accuracy
   * Average Speed
   * Maximum Score among all the rounds
   * Luck ;)

___

<!-- ```
SCORING RULES:
  1) For each turn the score of the participant is equal to A/B (i.e. A divided by B)
     where: i) A equals, in the participant's input sentence, the nummber of characters that are '***__in place__***' as compared to the given 
               statement and if that number happens to be less than 50% of total size of the given sentence them A = 0;
           ii) B equals the time taken by the participant to type;
  2) Tie Breakers: i) Average Accuracy
                  ii) Average Speed
                 iii) Maximum Score among all the rounds
                  iv) Luck ;)
            
``` -->
<br>

## TECH STACK
* C++

___

>##### *Happy Typing!!! :)*

___
