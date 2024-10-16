void staircase(int n) {
    int i = 1;
    for(i = 1; i <= n; i++) {
	    int j;
        for(j = i; j < n; j++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("#");
        }
        
        printf("\n");
    }
}