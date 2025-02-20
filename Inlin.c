#include <stdio.h>


inline __attribute__((always_inline)) int doubleabs(int x) {
    x = x << 2;
    return (x < 0) ? -x : x;
}

int main()
{
    int x = -5;
    int y = doubleabs(x);
    int z = doubleabs(y);

    return 0;
}