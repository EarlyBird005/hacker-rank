#include<stdlib.h>

int maximizingXor(int l, int r) {
    int max = INT_MIN;
    for (int i = l; i <= r; i++) {
        for (int j = i + 1; j <= r; j++) { 
            if (i == j) {
                continue;
            }
            if ((i ^ j) > max) {
                max = i ^ j;
            }
        }
    }
    return max;
}