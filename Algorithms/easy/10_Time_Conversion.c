char* timeConversion(char* s) {
    int n = strlen(s);
    char *result = malloc(8 * sizeof(char));
    
    char timeUnit[3];
    timeUnit[0] = s[n-2];
    timeUnit[1] = s[n-1];
    char *am = "AM";
    if (strcmp(timeUnit, am) == 0)
    {
        if (s[0] == '1' && s[1] == '2')
        {
            result[0] = '0';
            result[1] = '0';
        }
        else {
            result[0] = s[0];
            result[1] = s[1];
        }
      }
     else {
        if (s[0] != '1' || s[1] != '2')
        {
            result[0] = (s[0] - '0' + 1) + '0';
            result[1] = (s[1] - '0' + 2) + '0';
        }
        else {
            result[0] = '1';
            result[1] = '2';
        }
    }

    for (int i = 2; i < n - 2; i++)
    {
        result[i] = s[i];
    }
    return result;
}

int main() {
    printf("%s", timeConversion("06:40:03AM"));
    return 0;
}