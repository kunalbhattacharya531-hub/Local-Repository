#include<stdio.h>
#include<stdlib.h>

int main()
{
    int grades[10];
    int count = 10;
    long sum = 0;
    float avg = 0.0f;
    
    printf("Enter 10 grades : \n");
    int i;

    for(i=0; i<count; i++)
    {
        printf("%2u>",i+1);
        scanf("%d", &grades[i]);
        sum = sum + grades[i];
    }
    
    avg = (float)(sum/count);
    printf("Average of %d grades is : %.2f",count, avg);

    return 0;
}