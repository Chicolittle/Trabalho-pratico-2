#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    if (num <= 3) return 1;
    if (num % 2 == 0 || num % 3 == 0) return 0;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return 0;
    }

    return 1;
}

void findPrimeSum(int n) {
    if (n <= 2) {
        printf("O numero fornecido deve ser maior que 2.\n");
        return; 
    }

    for (int i = 2; i <= n; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            printf("%d + %d = %d\n", i, n - i, n);
            return;
        }
    }

    printf("Nao foi possivel encontrar uma decomposicao em dois numeros primos.\n");
}

int main() {
    int num;

    printf("Digite um numero inteiro maior que 2: ");
    scanf("%d", &num);

    findPrimeSum(num);

    return 0;
}


