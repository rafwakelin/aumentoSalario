//
//  main.c
//  salarioAumento
//
//  Created by Rafael Queiroz on 07/05/2022.
//

#include <stdio.h>

int main (){
    int cargo ;
    float salario, aumento, salarion ;
    
    printf ("Informe o código do cargo: \n 1 - Servente \n 2 - Pedreiro \n 3 - Mestre de Obras \n 4 - Técnico de segurança \n");
    scanf ("%d",&cargo);
    printf ("Informe o salário atual.\n");
    scanf ("%f",&salario);
    
    if (cargo==1)
    {
        aumento = salario * 0.4;
        salarion = salario + aumento;
        printf ("Para o cargo de servente, o aumento é de: R$ %.2f, portanto o novo salário será de: R$ %.2f \n", aumento, salarion);
    }
        else if (cargo==2)
        {
            aumento = salario * 0.35;
            salarion = aumento + salario;
            printf ("Para o cargo de pedreiro, o aumento é de: R$ %.2f, portanto o novo salário será de: R$ %.2f \n", aumento, salarion);
        }
            else if (cargo==3)
            {
                aumento = salario * 0.20;
                salarion = salario + aumento;
                printf ("Para o cargo de mestre de obras, o aumento é de: R$ %.2f, portanto o novo salário será de: R$ %.2f \n", aumento, salarion);
            }
                else if (cargo==4)
                {
                    aumento = salario * 0.10;
                    salarion = aumento + salario;
                    printf ("Para o cargo de técnico de segurança, o aumento é de: R$ %.2f, portanto o novo salário será de: R$ %.2f \n", aumento, salarion);
                }
                    else
                    {
                        printf ("O código de cargo informado não é um valor válido.\n");
                    }
    return 0;
}
