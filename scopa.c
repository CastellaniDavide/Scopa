/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <stdio.h>
#include <assert.h>

int main() {
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    for (int i=0; i<3; i++) {
        int number;
        char suit;

        // card in hand
        assert(2 == scanf("%d%c", &number, &suit));
    }

    for (int i=0; i<4; i++) {
        int number;
        char suit;

        // card on table
        assert(2 == scanf("%d%c", &number, &suit));
    }

    // insert your code here

    printf("%d\n", 42); // change 42 with actual answer
    return 0;
}
