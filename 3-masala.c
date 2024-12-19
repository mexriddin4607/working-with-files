#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *kirishFayl, *chiqishFayl;
    char qator[200];
    int ochiriladiganQator, joriyQator = 1;

    printf("Qaysi qatorni o'chirmoqchisiz (raqamini kiriting): ");
    scanf("%d", &ochiriladiganQator);

    kirishFayl = fopen("1.txt", "r");
    chiqishFayl = fopen("output.txt", "w");

    if (kirishFayl == NULL || chiqishFayl == NULL) {
        printf("Faylni ochib bo'lmadi!\n");
        return 1;
    }

    while (fgets(qator, sizeof(qator), kirishFayl) != NULL) {
        if (joriyQator != ochiriladiganQator) {
            fputs(qator, chiqishFayl);
        }
        joriyQator++;
    }

    fclose(kirishFayl);
    fclose(chiqishFayl);

    printf("Tanlangan qatorsiz matn output.txt fayliga yozildi.\n");
    return 0;
}
