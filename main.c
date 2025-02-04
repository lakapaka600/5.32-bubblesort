#include <stdio.h>

int main(void) {
    int hofattoscambi;
    int nvoti;
    int somma = 0;
    int conta = 0;
    do {
        printf("inserisci i num voti: ");
        scanf("%d", &nvoti);
    } while (nvoti < 0 || nvoti > 20);
    int vet[nvoti];
    for (int i = 0; i < nvoti; i++) {
        do {
            printf("inserire");
            scanf("%d", &vet[i]);
        } while (vet[i] < 2 || vet[i] > 10);
    }
    int magg = vet[0];
    for (int i = 0; i < nvoti; i++) {
        if (vet[i] < magg) {
            magg = vet[i];
        }
    }
    for (int i = 0; i < nvoti; i++) {
        if (magg == vet[i]) {
            conta++;
        }
    }
    for (int i = 0; i < nvoti; i++) {
        somma = somma + vet[i];
    }
    float m = (float) somma / (float) nvoti;
    printf("media = %.2f", m);
    if (m == 6) {
        printf("il credito è:7-8");
    } else if (m > 6 && m <= 7) {
        printf("il credito è:8-9");
    } else if (m > 7 && m <= 8) {
        printf("il credito è:9-10");
    } else if (m > 8 && m <= 9) {
        printf("il credito è:10-11");
    } else if (m > 9 && m <= 10) {
        printf("il credito è:11-12");
    }
    printf("\n");
    int t;
    for (int i = 0; i < nvoti - 1; i++) {
        hofattoscambi = 0;
        for (int j = 0; j < nvoti - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                t = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = t;
                hofattoscambi++;
            }
        }

        if (hofattoscambi == 0) {
            break;
        }
    }
    for (int i = 0; i < nvoti; i++) {
        printf("%d", vet[i]);
    }

    return 0;
}
