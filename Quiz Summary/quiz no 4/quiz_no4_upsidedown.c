#include <stdio.h>

int main() {
    // Define the total number of lines
    int total_lines = 5;

    // Outer loop for each line
    for (int i = 7; i > 0; --i) {
        // Inner loop to print numbers in descending order starting from 9
        for (int j = 5; j >= 7 - i + 1; --j) {
            printf("%3d ", j);
        }
        // Newline after each row is printed
        printf("\n");
    }

    return 0;
}

/*Outputnya: 
  5   4   3   2   1 
  5   4   3   2 
  5   4   3 
  5   4 
  5
*/