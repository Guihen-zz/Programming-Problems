/*
https://www.hackerrank.com/challenges/insertion-sort
*/

#include <stdio.h>

int count_insertions (int ar_size, int *  ar) {
    int i, j, aux, c = 0;
    
    for (i = 1; i < ar_size; i++) {
        aux = ar[i];
        for (j = i; ar[j - 1] > aux; j--)
        {
            ar[j] = ar[j-1];
            c++;
        }

        // if j < i, there were swap
        if(j != i) ar[j] = aux;
    }
    
    return c;
}

int main(void) 
{
    int _ar_size, _num_experiments, _ar_i, *_ar;
    scanf("%d", &_num_experiments);
    
    while (_num_experiments--)
    {
        scanf("%d", &_ar_size);
        _ar = malloc (_ar_size * sizeof(int));

        for (_ar_i = 0; _ar_i < _ar_size; _ar_i++) 
            scanf("%d", _ar + _ar_i);
        
        printf("%d\n", count_insertions (_ar_size, _ar));
    }
    
    return 0;
}
