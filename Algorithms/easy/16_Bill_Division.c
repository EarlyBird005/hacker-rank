void bonAppetit(int bill_count, int* bill, int k, int b) {
    int totalSharedCost = 0;
    for (int i = 0; i < bill_count; i++) {
        if (i == k) continue;
        totalSharedCost += bill[i];
    }
    totalSharedCost /= 2;
    
    if (b - totalSharedCost != 0) {
        printf("%d", b - totalSharedCost);
    }
    else {
        printf("Bon Appetit");
    }
}