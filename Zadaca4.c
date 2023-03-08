#include <stdio.h>

void convertToRoman(int num);

int main() {
    int num;
    printf("Vnesete cel broj max 4 cifren ");
    scanf("%d", &num);

    if (num <= 0 || num > 9999) {
        printf("Vneseniot broj mora da bide pomegju 1 i 9999\n");
        return 0;
    }

    printf("Rimski vashiot broj e  : ");
    convertToRoman(num);
    printf("\n");

    return 0;
}

void convertToRoman(int num) {
    int i;
    int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    for (i = 0; i < 13; i++) {
        while (num >= numbers[i]) {
            printf("%s", symbols[i]);
            num -= numbers[i];
        }
    }
}