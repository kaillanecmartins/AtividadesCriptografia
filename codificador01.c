#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

//Dupla: Franciele Alves e Kaillane Martins

int main()
{
    char alfabeto[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char alfabeto_invertido[26] = {'m', 'n', 'b', 'v', 'c', 'x', 'z', 'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'p', 'o', 'i', 'u', 'y', 't', 'r', 'e', 'w', 'q'};

    char mensagem[100] = {"bob. i love you. alice"};
    char mensagem_codificada[100];

    for(int msg = 0; msg < 100; msg++){
        for(int normal = 0; normal < 26; normal++){
            if(alfabeto[normal] == mensagem[msg]){
                mensagem_codificada[msg] = alfabeto_invertido[normal];
            }else if(mensagem[msg] == '.' || mensagem[msg] == ' '){
                mensagem_codificada[msg] = mensagem[msg];
            }
        }
    }

    printf("mensagem: %s\n", mensagem);

    printf("Mensagem codificada: %s\n", mensagem_codificada);
    return 0;
}