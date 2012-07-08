/*
Alejandro Santos - 2012
https://github.com/alejolp/ACM-ICPC-Stuff
*/


#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    int n;
    while ((cin >> n) && n) {
        /* sumatoria de k=1..n de k^2 */
        cout << ((n * (n + 1) * (2 * n + 1)) / 6) << endl;
    }
    return 0;
}

