int simpleArraySum(int ar_count, int* ar) {
    int sum = 0, i;
    for(i = 0; i < ar_count; i++) {
        sum += ar[i];
    }
    return sum;
}