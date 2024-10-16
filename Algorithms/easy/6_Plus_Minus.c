void plusMinus(int arr_count, int* arr) {
    float pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < arr_count; i++) {
        if (arr[i] > 0) {
            pos++;
        }
        else if (arr[i] < 0) {
            neg++;
        }
        else {
            zero++;
        }
    }
    
    printf("%.6f\n%.6f\n%.6f", (pos / arr_count), (neg / arr_count), (zero / arr_count));
}