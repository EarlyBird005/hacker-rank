int* breakingRecords(int scores_count, int* scores, int* result_count) {
    *result_count = 2;
    int* ans = malloc(2 * sizeof(int));
    ans[0] = ans[1] = 0;
    
    int min, max, i;
    min = max = scores[0];
    
    for (i = 1; i < scores_count; i++) {
        if (scores[i] > max) {
            max = scores[i];
            ans[0]++;
        }
        if (scores[i] < min) {
            min = scores[i];
            ans[1]++;
        }
    }
    
    return ans;
}