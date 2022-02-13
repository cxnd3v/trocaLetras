#include <stdio.h>
#include <locale.h>

char *trocaLetra(char *frase);

int main() {
    setlocale(LC_ALL, "");
    char frase[100];
    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    printf("A frase com as letras substituídas, ficou dessa forma: %s", trocaLetra(frase));
    return 0;
}

char *trocaLetra(char *frase) {
    char letraAntiga, letraNova;
    char *fraseSubstituida = frase;

    printf("Digite a letra que deseja substituir em sua frase: ");
    letraAntiga = getchar();
    getchar();
    printf("Digite a letra nova que deseja substituir pela antiga: ");
    letraNova = getchar();

    for (int i = 0; *frase != '\0'; i++) {
        if (*frase == letraAntiga) {
            *frase = letraNova;
        }
        frase++;
    }
    return fraseSubstituida;
}
