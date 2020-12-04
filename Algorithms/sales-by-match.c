/*Visit the below URL for problem statement:
https://www.hackerrank.com/challenges/sock-merchant/problem
*/

#include <stdio.h>
#include <stdlib.h>

int sockMerchant(int n, int ar_count, int* ar) {
    int maches = 0;
    int freq[1000]={0};
    for (int i = 0; i < ar_count; i++) {
        freq[ar[i]]++;
    }
    for (int j = 0; j < 1000; j++) {
        maches += (freq[j] / 2);
    }
    return maches;
}

int main()
{   
    int n;
    scanf("%d", &n);

    int* ar = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

    int ar_count = n;

    int result = sockMerchant(n, ar_count, ar);

    printf("%d\n", result);
    return 0;
}

