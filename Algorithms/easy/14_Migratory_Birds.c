int migratoryBirds(int arr_count, int* arr) {
    int *ans = calloc(5, sizeof(int));
    int max;
    
    for (int i = 0; i < arr_count; i++) {
        ans[arr[i] - 1]++;
    }
    
    max = 0;
    for (int i = 1; i < 5; i++) {
        if (ans[i] > ans[max]) {
            max = i;
        }
    }
    
    return max + 1;
}