/*
Given a list of integers, can you count and 
output the number of times each value appears?

https://www.hackerrank.com/challenges/countingsort1
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int set_size, x;
    int *set;
    scanf("%d", &set_size);
    set = calloc(100, sizeof(int));
    while (set_size--) {
        scanf("%d", &x);
        set[x]++;
    }
    for (x = 0; x < 100; x++) {
        printf("%d ", set[x]);
    }
    return 0;
}
