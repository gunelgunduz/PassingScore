#include<stdio.h>
#include <stdlib.h>
#include<math.h>

int main(int argc, char *argv[])
{
    int visa, final;
    float average;

    printf(" Your Visa Note : "); scanf("%d", &visa);
    printf(" Your Final Note : "); scanf("%d", &final);

    average = 0.4* (float) visa + 0.6* (float) final;

    if(average<50)
    
        printf(" You stayed : Your Note : %.2f", average);
        else
        printf(" You Passed : Your Note : %.2f", average);
    
    return 0;
}