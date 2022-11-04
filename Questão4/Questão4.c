#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
main()
{
int num;
    printf("informe o numero:/n");
    scanf("%d",&num);
if (num>0)
    printf("\na raiz quadrada e:%f2.2",sqrt(num));
else
    printf("\no quadrado e:%2.2f",pow(num,2));
    printf("\n\n");
    system("pause");
return(0);
}
