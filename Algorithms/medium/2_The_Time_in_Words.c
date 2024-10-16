char* timeInWords(int h, int m) {
    char *ans = (char*)calloc(50, sizeof(char));
    char *numbersInWords[30] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", "twenty seven", "twenty eight", "twenty nine", "thirty"};
    if(m == 0) {
        char *hour = numbersInWords[h - 1];
        sprintf(ans, "%s o' clock", hour);
        return ans;
    }
    
    if(m > 30) {
        h++;
    }
    char *hour = numbersInWords[h - 1], str[5], prefix[20];
    
    if(m <= 30) {
        strcpy(str, "past");
    }
    else {
        strcpy(str, "to");
    }
    
    if(m == 15 || m == 45) {
        strcpy(prefix, "quarter");
    }
    else if(m == 30) {
        strcpy(prefix, "half");
    }
    else {
        if(m < 30) {
            strcpy(prefix, numbersInWords[m - 1]);
        }
        else {
            strcpy(prefix, numbersInWords[(60 - m) - 1]);
        }
    }
    if(m % 15 == 0) {
        sprintf(ans, "%s %s %s", prefix, str, hour);
    }
    else {
        char *minutes = (m == 1) ? "minute" : "minutes";
        sprintf(ans, "%s %s %s %s", prefix, minutes, str, hour);
    }
    return ans;
}