#include <stdio.h>

int main() {
    int i = 0;

    printf("For loop variations:\n");
    printf("\nStandard loop:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n\nFor loop without initialization:\n");
    i = 0;
    for (; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n\nFor loop without condition (breaks inside):\n");
    i = 0;
    for (;;) { 
        printf("%d ", i);
        i++;
        if (i >= 5) {
            break;
        }
    }
    printf("\n\nFor loop without increment:\n");
    for (i = 0; i < 5;) {
        printf("%d ", i);
        i++; 
    }
    printf("\n\nFor loop without any parts:\n");
    i = 0;
    for (;;) {
        printf("%d ", i);
        i++;
        if (i >= 5) {
            break;
        }
    }
    printf("\nWhile loop variations:\n");
    printf("\nStandard while loop:\n");
    i = 0;
    while (i < 5) {
        printf("%d ", i);
        i++;
    }
    printf("\n\nwhile(1) loop:\n");
    i = 0;
    while (1) {
        printf("%d ", i);
        i++;
        if (i >= 5) {
            break;
        }
    }
    printf("\nDo-while loop variations:\n");
    printf("\nStandard do-while loop:\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
    } while (i < 5);

    printf("\n\nDo-while(1) loop:\n");
    i = 0;
    do {
        printf("%d ", i);
        i++;
        if (i >= 5) {
            break; 
        }
    } while (1);

    return 0;
}