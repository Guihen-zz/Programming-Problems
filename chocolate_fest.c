/* 
Little Bob loves chocolates and goes to the store with a $N 
bill with $C being the price of each chocolate. In addition,
the store offers a discount: for every M wrappers he gives 
the store, he’ll get one chocolate for free. How many 
chocolates does Bob get to eat?

https://www.hackerrank.com/challenges/chocolate-feast
*/

#include <stdio.h>

int swap_with_wrappers (int total_candies, int wrappers_payback) {
    int extra_candies = total_candies / wrappers_payback;
    if (extra_candies < 1) return 0;
    int candies_not_swapped = total_candies % wrappers_payback;
    return extra_candies  + 
        swap_with_wrappers (extra_candies + (total_candies % wrappers_payback), wrappers_payback);
}

int main() {
    int cases, money, price, wrappers_payback;
    int candies_bought;
    scanf("%d", &cases);
    while (cases--) {
        scanf("%d %d %d", &money, &price, &wrappers_payback);
        candies_bought = money / price;
        printf("%d\n", candies_bought + swap_with_wrappers (candies_bought, wrappers_payback));
    }
    return 0;
}
