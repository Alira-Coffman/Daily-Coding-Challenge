#include <stdio.h>

int main()
{  //N: . word 10 relates to the number in array. 
    
    //Relates to NUMBERS: .word 4, 3, 6, 10, 11, 34, 1, 2, 33, 21
    int word[10] = {4, 3, 6, 10, 11, 34, 1, 2, 33, 21};

    // relates to .skip 4
    int smallestNum;

    //assign smallest number to first in array
    smallestNum = word[0];

    for(int i = 0; i < 10; i++)
    {
        if(word[i] < smallestNum)
        {
            smallestNum = word[i];
        }
    }
    printf("%d", smallestNum);
    return 0;
}

//smallest number is r6 