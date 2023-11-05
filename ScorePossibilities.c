#include <stdio.h>

int main() {
    int i, j, k, l, m, index = 0;
    int score;
    int loop = 1;
    while (loop != 0) {
        printf("Enter 1 to continue or 0 to stop: ");
        scanf("%d", &loop);
        if (loop == 1) {
            printf("Enter the score: ");
            scanf("%d", &score);
            for (i = 0; i <= score; i++) {
                for (j = 0; j <= score; j++) {
                    for (k = 0; k <= score; k++) {
                        for (l = 0; l <= score; l++) {
                            for (m = 0; m <= score; m++) {
                                if (8 * i + 7 * j + 6 * k + 3 * l + 2 * m == score) {
                                    printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt, %d Safety\n", i, j, k, l, m);
                                }
                            }
                        }
                    }
                }
            }
        }else if (loop == 0){
            break;
        }else{
            printf("Invalid entry.\n");
        }
    }
    return 0;
}