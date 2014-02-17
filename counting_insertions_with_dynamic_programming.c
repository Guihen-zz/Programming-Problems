#include <stdio.h>

int count_insertions (int ar_size, int *  ar) {
    int i, j, c;
    
    // dynamic programming
    int memory[ar_size], local_count;
    for (i = 0; i < ar_size; i++)
        memory[i] = 0;
    
    for (i = 1; i < ar_size; i++) {

        local_count = 0;
        for (j = i; j >= 0; j--)
        {
            if (ar[j] > ar[i]) local_count++;
            else if (ar[j] == ar[i] && memory[j] != 0)
            {
                local_count += memory[j];
                break;
            }
        }
        memory[i] = local_count;
    }
    
    for (i = 0; i < ar_size; i++)
        c += memory[i];
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
