int divisibleSumPairs(int n, int k, int ar_count, int* ar) {
    int cnt = 0, i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if ((ar[i] + ar[j]) % k == 0) {
                cnt++;
            }
        }
    }
    
    return cnt;
}