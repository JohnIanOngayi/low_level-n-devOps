#include <stdio.h>

int main(void){
        int i, j= 0;

        for (i = 0; i <= 9; i++){
                for (j = i + 1; j <= 9; j++){
                putchar('0' + i);
                putchar('0' + j);
                if (i < 8){
                        putchar(',');
                        putchar(' ');
                }
                }
        }
                        putchar('\n');
        return (0);
}
