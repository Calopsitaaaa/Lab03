#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
float num;
printf("digite um numero real: ");
scanf("%f", &num);
if (num > 0)

printf("raiz quadrada de %f = %f\n", num, sqrtf(num));

else
printf("%f ^ 2 = %f\n", num, num*num);

return 0;

}
