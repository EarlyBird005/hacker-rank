int* gradingStudents(int grades_count, int* grades, int* result_count) {
    *result_count = grades_count;
    int* ans = malloc(grades_count * sizeof(int));
    for (int i = 0; i < grades_count; i++) {
        if (grades[i] < 40) {
            if (grades[i] > 37) {
                ans[i] = 40;
            }
            else {
                ans[i] = grades[i];
            }
        }
        else if(grades[i] % 5 > 2) {
            int currentMultiply = grades[i] / 5;
            ans[i] = 5 * (currentMultiply + 1);           
        }
        else {
            ans[i] = grades[i];
        }
    }
    
    return ans;
}