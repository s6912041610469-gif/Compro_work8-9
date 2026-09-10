#include <stdio.h>

int main() {
    int score;
    int sum = 0;

    do {
        printf("กรอกคะแนน (-1 เพื่อนำมาบวกกัน): ");
        scanf("%d", &score);

        if (score != -1) {
            sum += score;
        }

    } while (score != -1);

    printf("ผลรวมคะแนนทั้งหมด = %d\n", sum);
    return 0;
}
