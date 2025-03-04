#include <stdio.h>

// Function prototypes for various patterns
void p7();  // Diamond Pattern
void p8();  // Numbered Pattern (Reset Every Row)
void p9();  // Continuous Numbering Pattern (Floyd's Triangle)
void p10(); // Pascal's Triangle
void p11(); // Alphabet Pyramid

int main(){
    printf("Diamond Pattern (p7):\n");
    p7();
    printf("\nNumbered Pattern (Reset Every Row) (p8):\n");
    p8();
    printf("\nContinuous Numbering Pattern (Floyd's Triangle) (p9):\n");
    p9();
    printf("\nPascal's Triangle (p10):\n");
    p10();
    printf("\nAlphabet Pyramid (p11):\n");
    p11();
    return 0;
}

/*
p7: Diamond Pattern (Centered Pyramid + Inverted Pyramid)
Pattern Example (n = 5):
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
*/
void p7(){
    int n = 5;
    // Upper half: Centered pyramid
    for (int i = 1; i <= n; i++){
        // Print leading spaces
        for (int j = n; j > i; j--){
            printf(" ");
        }
        // Print left half of stars (excluding center)
        for (int j = 1; j < i; j++){
            printf("*");
        }
        // Print right half of stars (including center)
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    // Lower half: Inverted centered pyramid
    for (int i = n - 1; i >= 1; i--){
        // Print leading spaces
        for (int j = n; j > i; j--){
            printf(" ");
        }
        // Print left half of stars (excluding center)
        for (int j = 1; j < i; j++){
            printf("*");
        }
        // Print right half of stars (including center)
        for (int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}

/*
p8: Numbered Pattern (Reset Every Row)
Each row resets numbering from 1.
Pattern Example:
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/
void p8(){
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

/*
p9: Continuous Numbering Pattern (Floyd's Triangle)
Numbers continue sequentially across rows.
Pattern Example:
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
void p9(){
    int num = 1;
    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= i; j++){
            printf("%d ", num++);
        }
        printf("\n");
    }
}

/*
p10: Pascal's Triangle
Each number is the sum of the two numbers directly above it.
Pattern Example:
     1 
    1 1 
   1 2 1 
  1 3 3 1 
 1 4 6 4 1 
*/
void p10(){
    int rows = 5;
    for (int i = 0; i < rows; i++){
        // Print spaces for alignment
        for (int j = 0; j < rows - i; j++){
            printf(" ");
        }
        int c = 1; // used to represent C(n, k)
        for (int j = 0; j <= i; j++){
            printf("%d ", c);
            c = c * (i - j) / (j + 1);
        }
        printf("\n");
    }
}

/*
p11: Alphabet Pyramid
Each row prints sequential letters starting from 'A'.
Pattern Example:
    A 
   A B 
  A B C 
 A B C D 
A B C D E 
*/
void p11(){
    int n = 5;
    for (int i = 1; i <= n; i++){
        // Print leading spaces for center alignment
        for (int j = n; j > i; j--){
            printf(" ");
        }
        char ch = 'A';
        for (int j = 1; j <= i; j++){
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }
}
