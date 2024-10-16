#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>

// int  floorFunction(float x) {
//     return (int)x;
// }

// int ceilFunction(float x) {
//     return (int)x + 1;
// }

void remove_space(char* s) {
    int index = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if (s[i] != ' ') {
            s[index++] = s[i];
        }
    }
    s[index] = '\0';
}
 
char* encryption(char* s) {
    remove_space(s);
    int n = strlen(s);
    
    if (n == 1)
    {
        return s; 
    }
    
    int rows = (int)floor(sqrt(n));
    int columns = (int)ceil(sqrt(n));
    if (rows * columns < n)
    {
        do
        {
            rows++;
        } while (rows * columns < n);
        
    }
     while (rows * columns >= n && (rows - 1) * columns >= n && rows > 1) {
        rows--;
    }
    while (rows * columns >= n && rows * (columns - 1) >= n && columns > 1) {
        columns--;
    }
    if (rows < 1) rows = 1;
    if (columns < 1) columns = 1;
    
    char** mat = (char**)malloc(rows * sizeof(char*));
    for (int i = 0; i < rows; i++)
    {
        mat[i] = (char*)malloc(columns * sizeof(char));    
    }

    int index = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {   
            if (index < n) {
                mat[i][j] = s[index++];
            } else {
                mat[i][j] = '\0';
            }
        }
        mat[i][columns] = '\0';
    }
    
    int totalSize = (rows * columns) + columns;
    char* ans = malloc(totalSize * sizeof(char));
    index = 0;
    for (int i = 0; i < columns; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            if (mat[j][i] == '\0') continue;
            ans[index++] = mat[j][i];
        }
            ans[index++] = ' ';
    }
    ans[--index] = '\n';
    
    return ans;
}

int main() {
    char str[] = "f";
    encryption(str);
    return 0;
}