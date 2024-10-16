int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    int lrDiagonal = 0, rlDiagonal = 0;
    for (int i = 0, j = arr_columns - 1; i < arr_rows && j > -1; i++, j--) {
        lrDiagonal += arr[i][i];
        rlDiagonal += arr[i][j];
    }
    
    int diff = lrDiagonal - rlDiagonal;
    return diff >= 0 ? diff : diff * -1;
}