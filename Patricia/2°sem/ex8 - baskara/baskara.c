//Dados os coeficientes (a!=0, b e c) de uma equação do 2o grau, calcule e informe suas raízes reais, usando a fórmula de Báskara.
//Para isso, utilize as funções da biblioteca <math.h>
//Função pow para cálculo de Potência 
//x = pow(a, b); onde a é a base e b o expoente.
//Função sqrt para cálculo da Raiz Quadrada
//double x = sqrt(y);

 #include<stdio.h>
 #include<math.h>

 int main(){
    float a,b,c,delta,x1,x2;

    a = 0;
    while (a == 0){
        printf("Digite o valor do A: ");
        scanf("%f", &a);
        if (a == 0){
            printf("-----------------------------------\n");
            printf("Valor invalido!\nDigite um valor diferente de 0.\n");
            printf("-----------------------------------\n");
        };
    }

    printf("Digite o valor do B: ");
    scanf("%f", &b);
    printf("Digite o valor do C: ");
    scanf("%f", &c);

    delta = b * b - 4 * a * c;

    if(delta > 0){
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("As raizes sao: x1 = %.2f e x2 = %.2f\n", x1, x2);

    }else if (delta == 0){
        x1 = -b/(2*a);
        printf("So existe uma raiz: x1 = %.2f", x1);
    
    }else {
        printf("Nao existem raizes reais!");
    }

return 0;
}