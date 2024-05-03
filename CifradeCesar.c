#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#define ALPHABET 26

// Atividade 2 - Cifra de César
// Desenvolvido por Gabriel Furtado

int main(int argc, char *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int mode, letters_amount, key, counter = 0;
    do
    {
        printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
        printf("~  Atividade 2 - Cifra de César  ~\n");
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
        printf("1 - Criptografar uma palavra\n");
        printf("2 - Decifrar um código\n");
        printf("0 - Sair do programa\n");
        printf("\nDigite o modo: ");
        scanf("%d", &mode);
        if (mode != 0 && mode != 1 && mode != 2)
        {
            printf("Modo inválido!");
            sleep(3);
        }
        system("cls");
    } while (mode != 0 && mode != 1 && mode != 2);
    if (mode == 1)
    {
        printf("Digite a chave de deslocamento: ");
        scanf("%d", &key);
        printf("Digite a quantidade de letras: ");
        scanf("%d", &letters_amount);
        letters_amount = letters_amount + 1;
        char text[letters_amount];
        printf("Digite a palavra: ");
        for (counter = 0; counter < letters_amount; counter++)
        {
            scanf("%c", &text[counter]);
            text[counter] = toupper(text[counter]);
        }
        for (counter = 0; counter < letters_amount; counter++)
        {
            text[counter] = 'A' + (text[counter] - 'A' + key) % ALPHABET;
        }
        printf("Palavra criptografada: ");
        for (counter = 1; counter < letters_amount; counter++)
        {
            printf("%c", text[counter]);
        }
        printf("\n");
        system("pause");
        system("cls");
        system("CifradeCesar.exe");
        // Chave 3; 4 letras; Palavra FOGO
    }
    if (mode == 2)
    {
        printf("Digite a chave de deslocamento: ");
        scanf("%d", &key);
        printf("Digite a quantidade de letras: ");
        scanf("%d", &letters_amount);
        letters_amount = letters_amount + 1;
        char text[letters_amount];
        printf("Digite a palavra: ");
        for (counter = 0; counter < letters_amount; counter++)
        {
            scanf("%c", &text[counter]);
            text[counter] = toupper(text[counter]);
        }
        for (counter = 0; counter < letters_amount; counter++)
        {
            text[counter] = 'A' + (text[counter] - 'A' - key) % ALPHABET;
        }
        printf("Código descifrado: ");
        for (counter = 1; counter < letters_amount; counter++)
        {
            printf("%c", text[counter]);
        }
        printf("\n");
        system("pause");
        system("cls");
        system("CifradeCesar.exe");
        // Chave 3; 4 letras; Palavra IRJR
    }
    if (mode == 0)
    {
        printf("Até mais! :D\nPrograma desenvolvido por Gabriel Furtado\n");
        system("pause");
        exit(0);
    }
    return 0;
}