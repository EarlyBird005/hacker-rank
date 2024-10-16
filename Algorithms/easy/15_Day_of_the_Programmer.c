char* dayOfProgrammer(int year) {
    if(year < 1919){
        if (year == 1918) {
            return "26.09.1918";
        }
        
        char* ans = malloc(10 * sizeof(char));
        if (year % 4 == 0) {
            strcpy(ans, "12.09.");
        }
        else {
            strcpy(ans, "13.09.");
        }
        sprintf(ans + strlen(ans), "%d", year);
        return ans;        
    }
    
    char* ans = malloc(10 * sizeof(char));
    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)) {
        strcpy(ans, "12.09.");
    }
    else {
        strcpy(ans, "13.09.");
    }
    
    sprintf(ans + strlen(ans), "%d", year);
    return ans;
}