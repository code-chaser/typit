class sentences
{
private:
    string sentence;
    string easy[10] = {
        "The quick brown fox jumps over a lazy dog.",

        "Pack my box with five dozen liquor jugs.",

        "The five boxing wizards jump quickly.",

        "Two driven jocks help fax my big quiz.",

        "Waxy and quivering, jocks fumble the pizza.",

        "Two driven jocks help fax my big quiz.",

        "Use everything you have. We lose it anyway.",

        "Jackdaws love my big sphinx of quartz.",

        "How vexingly quick daft zebras jump!",

        "Stand tall. We are VALORANT, we are fighters!"};

    string medium[10] = {
        "I got your backs... just, you know, from the front!",

        "A wizard's job is to vex chumps quickly in fog.",

        "Watch 'Jeopardy!', Alex Trebek's fun TV quiz game.",

        "C'mon guys, take out their healer! It's super annoying to kill people twice.",

        "Split? Ah...They don't know the meaning of the word.",

        "Sage, the life you give, do you ever wonder where it's taken from?",

        "I'm curious, Rift Walker, when you travel, can you feel the pieces you leave behind?",

        "If you're not a good shot today, don't worry. There are other ways to be useful.",

        "Ugh! that's just another cluster of characters, go, type them: '/.,<hola>=-+'",

        "Aristotle's wheel paradox is a paradox or problem appearing in the Greek work "
        "Mechanica traditionally attributed to Aristotle."};

    string hard[10] = {
        "Well, it's not that easy to find lengthy and hard to type pangrams; So this one's "
        "just another cluster of words, aztually noz iven cluzter of words, juzt a cluzter of "
        "characterz as u c that nearly half of them have typoz.",

        "He11o! Do you remember when was the 1ast time you typed the character 'l'? "
        "No, not in this sentence cause they weren't l's, they were all 1's l11l, see the "
        "difference now? Coo1, gtg I guess!",

        "Dijkstra's algorithm (DYKE-strəz) is an algorithm for finding the "
        "shortest paths between nodes in a graph, which may represent, for example, road "
        "networks. It was conceived by computer scientist Edsger W. Dijkstra in 1956 and "
        "published three years later.",

        "In number theory, the Chinese remainder theorem states that if one knows the "
        "remainders of the Euclidean division of an integer n by several integers, then "
        "one can determine uniquely the remainder of the division of n by the product of "
        "these integers, under the condition that the divisors are pairwise coprime.",

        "In computer science, heapsort is a comparison-based sorting algorithm. "
        "Heapsort can be thought of as an improved selection sort: like selection sort, "
        "heapsort divides its input into a sorted and an unsorted region, and it iteratively "
        "shrinks the unsorted region by extracting the largest element from it and inserting "
        "it into the sorted region.",

        "Unlike selection sort, heapsort does not waste time with "
        "a linear-time scan of the unsorted region; rather, heap sort maintains the unsorted "
        "region in a heap data structure to more quickly find the largest element in each step.",

        "Given that the population of London is greater than the maximum number of hairs that "
        "can be present on a human's head, then the pigeonhole principle requires that there "
        "must be at least two people in London who have the same number of hairs on their heads.",

        "The grandfather paradox is a paradox of time travel in which inconsistencies emerge "
        "through changing the past. The name comes from the paradox's description: a person "
        "travels to the past and kills their own grandfather before the conception of their "
        "father or mother, which prevents the time traveller's existence.",

        "The Archimedes paradox, named after Archimedes of Syracuse, or the hydrostatic "
        "paradox, states that an object can float in a quantity of water that has less "
        "volume than the object itself, if its average density is less than that of water.",

        "This Pangram contains four a's, one b, two c's,"
        "one d, thirty e's, six f's, five g's, seven h's,"
        "eleven i's, one j, one k, two l's, two m's, "
        "eighteen n's, fifteen o's, two p's, one q, "
        "five r's, twenty-seven s's, eighteen t's, "
        "two u's, seven v's, eight w's, two x's, three y's, & one z."};

public:
    sentences(int difficulty)
    {
        srand(time(NULL));
        switch (difficulty)
        {
        case 1:
            sentence = easy[abs(rand()) % 10];
            break;
        case 2:
            sentence = medium[abs(rand()) % 10];
            break;
        case 3:
            sentence = hard[abs(rand()) % 10];
            break;
        default:
            break;
        }
        return;
    }
    string getSentence()
    {
        return sentence;
    }
};