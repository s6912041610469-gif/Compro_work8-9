#include <stdio.h>

int main() {
    int n;
    int isPrime = 1; 

    printf("ใส่จำนวนเต็ม: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; 
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0; 
                break;      
            }
        }
    }

    if (isPrime) {
        printf("%d เป็นจำนวนเฉพาะ\n", n);
    } else {
        printf("%d ไม่เป็นจำนวนเฉพาะ\n", n);
    }

    return 0;
}
