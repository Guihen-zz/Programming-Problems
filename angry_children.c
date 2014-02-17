/*
Given a N numbers, print the minimum distance [max(xi,...,xK) - min(xi,...,xK)]
of a subset of K of its numbers.

https://www.hackerrank.com/challenges/angry-children
*/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/* http://www.tutorialspoint.com/c_standard_library/c_function_qsort.htm */
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}

int main() {

    int n, N, K,
      i, j, 
      minimum_distance = INT_MAX,
      distance,
      *set;
    
    scanf("%d",&N);
    scanf("%d",&K);
    set = malloc (N * sizeof(int));
    for (n = 0; n < N; n++) {
       scanf ("%d", set + n);
    }
    qsort (set, N, sizeof(int), cmpfunc);
    
    for (j = K - 1, i = 0; j < N; j++, i++)
    {
        distance = set[j] - set[i];
        if (distance < minimum_distance) minimum_distance = distance;
    }
    
    printf ("%d\n", minimum_distance);
    return 0;
}
