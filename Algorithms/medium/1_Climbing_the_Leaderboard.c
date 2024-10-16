int binarySearch(int* ranked, int ranked_count, int score) {
    int low = 0, high = ranked_count - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (ranked[mid] <= score) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}
 
int* climbingLeaderboard(int ranked_count, int* ranked, int player_count, int* player, int* result_count) {
    
    *result_count = player_count;
    int* result = malloc(ranked_count * sizeof(int));
    int rank = 1;
    result[0] = rank;

    for (int i = 1; i < ranked_count; i++) {
        if (ranked[i] == ranked[i - 1]) {
            result[i] = result[i - 1];
        } else {
            result[i] = ++rank;
        }
    }

    int* ans = malloc(player_count * sizeof(int));

    for (int i = 0; i < player_count; i++) {
        int index = binarySearch(ranked, ranked_count, player[i]);
        if (index == ranked_count) {
            ans[i] = rank + 1;
        } else {
            ans[i] = result[index];
        }
    }
    
    return ans;
}