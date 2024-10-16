int* compareTriplets(int a_count, int* a, int b_count, int* b, int* result_count) {
    *result_count = 2;
    int* ans = malloc(2 * sizeof(int));
    ans[0] = ans[1] = 0;
    
    for (int i = 0; i < a_count; i++) {
        if (a[i] > b[i]) {
            ans[0]++;
        }
        if (a[i] < b[i]) {
            ans[1]++;
        }
    }
    
    return ans;
}