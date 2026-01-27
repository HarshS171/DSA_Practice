#include <iostream>
using namespace std;

long long power(long long x, long long y) {
    long long result = 1;

    while (y > 0) {
        if (y % 2 == 1) {   // y is odd
            result = result * x;
        }

        x = x * x;   // square x
        y = y / 2;   // divide power by 2
    }

    return result;
}

int main() {
    long long x = 2, y = 5;
    cout << power(x, y);
    return 0;
}