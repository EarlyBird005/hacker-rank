int birthdayCakeCandles(int candles_count, int* candles) {
    int max = candles[0], count = 0;
    for (int i = 0; i < candles_count; i++) {
        if (candles[i] == max) {
            count++;
        }
        else if (candles[i] > max) {
            max = candles[i];
            count = 1;
        }
    }
    return count;
}