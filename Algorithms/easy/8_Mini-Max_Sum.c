void miniMaxSum(int arr_count, int* arr) {
    int n = arr_count, i = 0;
long total = 0, min, max;
    for(i = 0; i < n; i++) {
        total += arr[i];
    }
    
    min = max = total - arr[0];
    for(i = 1; i < n; i++) {
        long sum = total - arr[i]; // subtracting current element
        if(sum < min) {
            min = sum;
        }
        if(sum > max) {
            max = sum;
        }
    }
    printf("%ld %ld", min, max);
}