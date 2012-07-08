/*
Alejandro Santos - 2012
https://github.com/alejolp/ACM-ICPC-Stuff
*/


#include <stdio.h>

int main(int argc, char** argv) {
    int n;
    while (scanf("%d", &n) && n) {
        /* sumatoria de k=1..n de k^2 */
        printf("%d\n", (n * (n + 1) * (2 * n + 1)) / 6);
    }
    return 0;
}

