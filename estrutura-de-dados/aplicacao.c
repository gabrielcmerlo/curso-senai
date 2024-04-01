#include <stdio.h>
#include "empregado.h"

int main() 
{
    struct empregado *e = get_empregado();
    set_nome(e, "Robin Hood");
    set_cpf(e, 12345678901);
    set_salario(e, 3500);
    printf ("%s\nCPF %.0f\nSalario: R$ %.2f\n", get_nome(e), get_cpf(e), get_salario(e));
}