/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <stdio.h>
#include <assert.h>

int main() {
//  uncomment the following lines if you want to read/write from files
    //freopen("input0.txt", "r", stdin);
    //freopen("output0.txt", "w", stdout);
    int num[7];
    char Asuit[7];
    bool fine = false;

    for (int i=0; i<3; i++) {
        int number;
        char suit;
        assert(2 == scanf("%d%c", &number, &suit));
        num[i] = number;
        Asuit[i] = suit;
    }

    for (int i=0; i<4; i++) {
        int number;
        char suit;
        assert(2 == scanf("%d%c", &number, &suit));
        num[i+3] = number;
        Asuit[i+3] = suit;
    }

    for (int i = 0; i<3; i++) {
        if (num[i] == 7 && Asuit[i] == 'G'){
            for (int a=3; a<7; a++) {
                    if (num[a] == 7) {
                        printf("%d%c %d%c", num[i], Asuit[i], num[a], Asuit[a]);
                        fine = true;
                        break;
                    }
                }
                break;
        }
    }
    for (int i = 3; i<7; i++) {
        if (num[i] == 7 && Asuit[i] == 'G'){
            for (int a = 0; a<3; a++) {
                if (num[a] == 7) {
                    printf("%d%c %d%c", num[a], Asuit[a], num[i], Asuit[i]);
                    fine = true;
                    break;
                }
            }
            break;
        }
    }
    for (int i = 0; i<3; i++) {
        if (i < 3 && num[i] == num[3] + num[4] + num[5] + num[6]) {
            printf("%d%c %d%c %d%c %d%c %d%c", num[i], Asuit[i], num[3], Asuit[3], num[4], Asuit[4], num[5], Asuit[5], num[6], Asuit[6]);
            fine = true;
        }
    }
    for (int i = 0; i<3; i++) {
        if (num[i] == 7 && fine == false){
        for (int a = 3; a<7; a++) {
            if (num[a] == 7) {
                printf("%d%c %d%c", num[i], Asuit[i], num[a], Asuit[a]);
                fine = true;
                break;
            }

        }
        break;
        }
    }
    for (int i = 0; i<3; i++) {
        if (fine == false) {
            for (int a = 3; a<7; a++){
                if (num[i] == num[a]) {
                    printf("%d%c %d%c", num[i], Asuit[i], num[a], Asuit[a]);
                    fine = true;
                    break;
                }
            }
        }
    }
    return 0;
}
