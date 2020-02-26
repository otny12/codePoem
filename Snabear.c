#include <stdio.h>
#include <string.h>

#define TRUE 1
#define FALSE 0
#define burning 1
#define homeCave 10

struct animal
{
    char head[10];
    char body[10];
    int asleep;
    int apathy;
    int virtue;
};

int main()
{
    int forest[90];
    int tree;
    tree = 0;
    
    struct animal snabear;
    strncpy(snabear.head, "snake", 10);
    strncpy(snabear.body, "bear", 10);
    snabear.asleep = TRUE;
    snabear.apathy = 0;
    snabear.virtue = 50;
    
    forest[90] = homeCave;

    for(tree = 0; forest[tree]!=homeCave; tree++)
    {
        forest[tree] = burning;
    }

    snabear.asleep = FALSE;
    
    if(forest[89]== burning && snabear.asleep == False)
    {
        snabear.apathy = 100;
        snabear.asleep = TRUE;
        snabear.virtue = virtue;
    }
    return 0;
}
