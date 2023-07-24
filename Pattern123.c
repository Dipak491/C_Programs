#include <stdio.h>

int main() 
{
    int rows, value = 1;

    printf("Enter the number of rows to print the pattern: ");
    scanf("%d", &rows);
    
    printf("* Printing the pattern... *\n");

    int pattern[rows][rows];

    // Fill the pattern array
    for (int i = 0; i < rows; i++) {
        int col = (i % 2 == 0) ? 0 : i;
        for (int j = 0; j <= i; j++) {
            pattern[i][col] = value;
            value++;
            col = (i % 2 == 0) ? col + 1 : col - 1;
        }
    }

    // Print the pattern
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pattern[i][j]);
        }
        printf("\n");
    }

    return 0;
}
