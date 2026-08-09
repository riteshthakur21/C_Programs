#include <stdio.h>

// Function prototypes
void rightHalfPyramid(int n);
void leftHalfPyramid(int n);
void fullPyramid(int n);
void invertedRightHalfPyramid(int n);
void invertedLeftHalfPyramid(int n);
void invertedFullPyramid(int n);
void rhombusPattern(int n);
void diamondPattern(int n);
void hourglassPattern(int n);
void hollowSquare(int n);
void hollowFullPyramid(int n);
void hollowInvertedFullPyramid(int n);
void hollowDiamond(int n);
void hollowHourglass(int n);
void floydsTriangle(int n);
void pascalsTriangle(int n);

int factorial(int n);
int combination(int n, int r);

int main() {
    int choice, n;

    printf("Choose a pattern to print (1-16):\n");
    printf(" 1. Right Half Pyramid\n");
    printf(" 2. Left Half Pyramid\n");
    printf(" 3. Full Pyramid\n");
    printf(" 4. Inverted Right Half Pyramid\n");
    printf(" 5. Inverted Left Half Pyramid\n");
    printf(" 6. Inverted Full Pyramid\n");
    printf(" 7. Rhombus Pattern\n");
    printf(" 8. Diamond Pattern\n");
    printf(" 9. Hourglass Pattern\n");
    printf("10. Hollow Square Pattern\n");
    printf("11. Hollow Full Pyramid\n");
    printf("12. Hollow Inverted Full Pyramid\n");
    printf("13. Hollow Diamond Pattern\n");
    printf("14. Hollow Hourglass Pattern\n");
    printf("15. Floyd's Triangle\n");
    printf("16. Pascal's Triangle\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter the number of rows (n): ");
    scanf("%d", &n);

    switch(choice) {
        case 1:
            rightHalfPyramid(n);
            break;
        case 2:
            leftHalfPyramid(n);
            break;
        case 3:
            fullPyramid(n);
            break;
        case 4:
            invertedRightHalfPyramid(n);
            break;
        case 5:
            invertedLeftHalfPyramid(n);
            break;
        case 6:
            invertedFullPyramid(n);
            break;
        case 7:
            rhombusPattern(n);
            break;
        case 8:
            diamondPattern(n);
            break;
        case 9:
            hourglassPattern(n);
            break;
        case 10:
            hollowSquare(n);
            break;
        case 11:
            hollowFullPyramid(n);
            break;
        case 12:
            hollowInvertedFullPyramid(n);
            break;
        case 13:
            hollowDiamond(n);
            break;
        case 14:
            hollowHourglass(n);
            break;
        case 15:
            floydsTriangle(n);
            break;
        case 16:
            pascalsTriangle(n);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}

// 1. Right Half Pyramid
void rightHalfPyramid(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// 2. Left Half Pyramid
void leftHalfPyramid(int n) {
    for(int i=1; i<=n; i++) {
        // Print spaces
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        // Print stars
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// 3. Full Pyramid
void fullPyramid(int n) {
    for(int i=1; i<=n; i++) {
        // Print spaces
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        // Print stars
        for(int j=1; j<=(2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

// 4. Inverted Right Half Pyramid
void invertedRightHalfPyramid(int n) {
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// 5. Inverted Left Half Pyramid
void invertedLeftHalfPyramid(int n) {
    for(int i=n; i>=1; i--) {
        // Print spaces
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        // Print stars
        for(int j=1; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// 6. Inverted Full Pyramid
void invertedFullPyramid(int n) {
    for(int i=n; i>=1; i--) {
        // Print spaces
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        // Print stars
        for(int j=1; j<=(2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

// 7. Rhombus Pattern
void rhombusPattern(int n) {
    for(int i=1; i<=n; i++) {
        // Leading spaces
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        // Print n stars
        for(int j=1; j<=n; j++) {
            printf("*");
        }
        printf("\n");
    }
}

// 8. Diamond Pattern
void diamondPattern(int n) {
    // Upper half
    for(int i=1; i<=n; i++) {
        // Spaces
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        // Stars
        for(int j=1; j<=(2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    // Lower half
    for(int i=n-1; i>=1; i--) {
        // Spaces
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        // Stars
        for(int j=1; j<=(2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

// 9. Hourglass Pattern
void hourglassPattern(int n) {
    // Top half (inverted full pyramid)
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        for(int j=1; j<=(2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    // Bottom half (full pyramid)
    for(int i=2; i<=n; i++) {
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        for(int j=1; j<=(2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
}

// 10. Hollow Square Pattern
void hollowSquare(int n) {
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            // Print star only on boundary
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

// 11. Hollow Full Pyramid
void hollowFullPyramid(int n) {
    for(int i=1; i<=n; i++) {
        // Spaces before stars
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        // First row => single star
        if(i == 1) {
            printf("*");
        } else {
            // Print star, hollow space, star
            printf("*");
            for(int j=1; j<=(2*i - 3); j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}

// 12. Hollow Inverted Full Pyramid
void hollowInvertedFullPyramid(int n) {
    for(int i=n; i>=1; i--) {
        // Spaces before stars
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        // Last row => single star (i == 1)
        if(i == 1) {
            printf("*");
        } else {
            printf("*");
            for(int j=1; j<=(2*i - 3); j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}

// 13. Hollow Diamond Pattern
void hollowDiamond(int n) {
    // Upper half
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        if(i == 1) {
            printf("*");
        } else {
            printf("*");
            for(int j=1; j<=(2*i - 3); j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    // Lower half
    for(int i=n-1; i>=1; i--) {
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        if(i == 1) {
            printf("*");
        } else {
            printf("*");
            for(int j=1; j<=(2*i - 3); j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}

// 14. Hollow Hourglass Pattern
void hollowHourglass(int n) {
    // Top half (hollow inverted full pyramid)
    for(int i=n; i>=1; i--) {
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        if(i == 1) {
            printf("*");
        } else {
            printf("*");
            for(int j=1; j<=(2*i - 3); j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    // Bottom half (hollow full pyramid)
    for(int i=2; i<=n; i++) {
        for(int j=1; j<=(n - i); j++) {
            printf(" ");
        }
        if(i == 1) {
            printf("*");
        } else {
            printf("*");
            for(int j=1; j<=(2*i - 3); j++) {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
}

// 15. Floyd's Triangle
void floydsTriangle(int n) {
    int num = 1;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}
// Utility: factorial for Pascal's Triangle
int factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}

// Utility: nCr for Pascal's Triangle
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// 16. Pascal's Triangle
void pascalsTriangle(int n) {
    for(int i=0; i<n; i++) {
        // Print leading spaces
        for(int space=1; space<=(n - i - 1); space++) {
            printf(" ");
        }
        // Print binomial coefficients
        for(int j=0; j<=i; j++) {
            printf("%d ", combination(i, j));
        }
        printf("\n");
    }
}
