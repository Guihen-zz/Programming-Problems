/*
Given an unsorted list of integers,
output the integers in order.

https://www.hackerrank.com/challenges/countingsort2
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int set_size, x, y;
    int *set;
    scanf("%d", &set_size);
    set = calloc(100, sizeof(int));
    while (set_size--) {
        scanf("%d", &x);
        set[x]++;
    }
    for (x = 0; x < 100; x++) {
        for (y = set[x]; y > 0; y--) {
            printf("%d ", x);
        }
    }
    return 0;
}
