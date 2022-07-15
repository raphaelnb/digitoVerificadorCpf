#include <stdio.h>
#include <math.h>

int main() {
    
    // recebe o valor de cpf
    char cpf[9];
    int soma = 0;
    int soma2 = 0;

    scanf("%[^\n]", cpf);

    for (int i = 0; i < 9; i++) {
        int digito = cpf[i] - 48;

        soma += digito * (10 - i);
        soma2 += digito * (11 - i);
    }

    int dig1 = soma * 10 % 11;
    dig1 = dig1 == 10 ? 0 : dig1;

    soma2 += dig1 * 2;
    int dig2 = soma2 * 10 % 11;
    dig2 = dig2 == 10 ? 0 : dig2;

    printf("%d", dig1);
    printf("%d\n", dig2);

    return 0;
}