#include <stdio.h>
#include <string.h>

int main() 
{
    struct cliente
    {
        char nome[50];
        double cpf;
        double telefone;
    };
    
    struct cliente e;
    strcpy(e.nome, "Maria Joaquina");
    e.cpf = 12345678912;
    e.telefone = 48912345678;

    printf("Nome: %s\nCPF: %.0f\nTelefone: %.2f\n", e.nome, e.cpf, e.telefone);

    struct cliente g;
    strcpy(g.nome, "Gabriel");
    g.cpf = 77777777777;
    g.telefone = 48998325148;

    printf("Nome: %s\nCPF: %.0f\nTelefone: %.2f", g.nome, g.cpf, g.telefone);
    return 0;
}