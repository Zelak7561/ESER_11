#include <stdio.h>

void change(int *a, int *b) {
    int temp = *a;
    int temp2 = *b;
    *a = temp2;
    *b = temp;
}

int main(void) {
    int a;
    int b;

    printf("\nInserire il primo numero: \n");
    scanf("%d", &a);
    printf("\nInserire il secondo numero: \n");
    scanf("%d", &b);

    printf("I numeri sono: %d %d \n" , a, b);
    change(&a, &b);
    printf("I numeri invertiti sono: %d %d \n" , a, b);

    return 0;
}
