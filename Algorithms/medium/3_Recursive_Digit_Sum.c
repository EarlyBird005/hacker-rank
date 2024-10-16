int superDigit(char* n, int k) {
    long long sum = 0;
    for(int i = 0; i < strlen(n); i++) {
        if((sum != 0) && ((n[i] - '0') == 9)) continue;
        sum += n[i] - '0';
    }
    sum *= k;
    char str[30];
    sprintf(str, "%lld", sum);
    
    if (strlen(str) == 1) {
        return str[0] - '0';
    }
    return superDigit(str, 1);
}