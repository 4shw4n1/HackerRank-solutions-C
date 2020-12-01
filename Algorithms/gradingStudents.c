// It's coding time! Language used: C
#include<stdio.h>
 
int main()
{
    int count;
    scanf("%d\n", &count);
    int grades[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d\n", &grades[i]);
    }
    for (int j = 0; j < count; j++)
    {
        if (grades[j] % 5 > 2 && !(grades[j] < 38))
        {
            printf("%d\n", grades[j] + 5 - grades[j]%5);
        } else {
            printf("%d\n", grades[j]);
        }
    }
    return 0;
}
