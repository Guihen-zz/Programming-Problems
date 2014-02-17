#include <stdio.h>

void printArray(int ar_size, int *ar) {
    int x;
    for (x = 0; x < ar_size; x++) {
        printf("%d ", ar[x]);
    }
    printf("\n");
}

void insertionSort(int ar_size, int *  ar) {
    int i, j, aux;
    
    for (i = 1; i < ar_size; i++) 
    {
        aux = ar[i];
        // small numbers should shift to left.
        for (j = i; ar[j - 1] > aux; j--) 
        {
            ar[j] = ar[j-1];
            printArray(ar_size, ar);
        }
        
        // if j < i, there were swap
        if(j != i) 
        {
            ar[j] = aux;
            printArray(ar_size, ar);
        }
    }
}

int main(void) 
{
    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for (_ar_i = 0; _ar_i < _ar_size; _ar_i++) 
    { 
        scanf("%d", &_ar[_ar_i]); 
    }
    insertionSort(_ar_size, _ar);
    
    return 0;
}
