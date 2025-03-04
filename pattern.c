#include <stdio.h>

// Function prototypes for various patterns
void p2(); // Right-Aligned Inverted Triangle
void p3(); // Left-Aligned Right Triangle
void p4(); // Right-Aligned Right Triangle
void p5(); // Centered Pyramid
void p6(); // Inverted Centered Pyramid
void p7(); // Diamond Pattern

int main(){
    p7();
    printf("\n\n");
    return 0;
}

/*
p2: Right-Aligned Inverted Triangle
Pattern:
*****
 ****
  ***
   **
    *
*/
void p2(){
    for (int i = 1; i <= 5; i++){
        // Print increasing leading spaces
        for (int k = 0; k < i - 1; k++){
            printf(" ");
        }
        // Print stars in decreasing count
        for (int j = 5; j > i - 1; j--){
            printf("*");
        }
        printf("\n");
    }
}

/*
p3: Left-Aligned Right Triangle
Pattern:
*
**
***
****
*****
*/
void p3(){
    for (int i = 1; i <= 5; i++){
        // Print stars; count increases with each row
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
}

/*
p4: Right-Aligned Right Triangle
Pattern:
    *
   **
  ***
 ****
*****
*/
void p4() {
    for (int i = 1; i <= 5; i++){
        // Print leading spaces for right alignment
        for (int k = 5; k > i - 1; k--){
            printf(" ");
        }
        // Print stars; count increases with each row
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
}

/*
p5: Centered Pyramid
Pattern:
    *
   ***
  *****
 *******
*********
*/
void p5() {
    for (int i = 1; i <= 5; i++){
        // Print leading spaces to center the pyramid
        for (int k = 5; k > i - 1; k--){
            printf(" ");
        }
        // Print left half (excluding center)
        for (int j = 0; j < i - 1; j++){
            printf("*");
        }
        // Print right half (including center)
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
}

/*
p6: Inverted Centered Pyramid
Pattern:
*********
 *******
  *****
   ***
    *
*/
void p6(){
    for (int i = 1; i <= 5; i++){
        // Print leading spaces for inversion
        for (int j = 0; j < i; j++){
            printf(" ");
        }
        // Print left half of inverted pyramid
        for (int j = 5; j > i; j--){
            printf("*");
        }
        // Print right half of inverted pyramid (including center)
        for (int j = 5; j >= i; j--){
            printf("*");
        }
        printf("\n");
    }
}

/*
p7: Diamond Pattern (Centered Pyramid + Inverted Pyramid)
Pattern:
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
    // Upper half: centered pyramid
    for (int i = 1; i <= 5; i++){
        // Print leading spaces
        for (int j = 5; j > i; j--){
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
    // Lower half: inverted centered pyramid
    for (int i = 4; i >= 1; i--){
        // Print leading spaces
        for (int j = 5; j > i; j--){
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
