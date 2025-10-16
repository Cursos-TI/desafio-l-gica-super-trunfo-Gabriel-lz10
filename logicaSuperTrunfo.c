#include <stdio.h>


int main() {


    
// nessa primeira parte defini as variáveis e os tipos de dados.
// coloquei os números 1 e 2 para diferencias as cidades, assim dando mais clareza de qual cidade estou programando.
int turísticos1, turísticos2;
float area1, area2, pib1, pib2;
char cidade1[20], cidade2[20], codigo1[20], codigo2[20];
char estado1, estado2;
float densi1, densi2, capita1, capita2;
unsigned long int populacao1, populacao2;
int comparacao1, comparacao2;
int resultado1, resultado2;


// comecei solicitando a entrada dos dados da primeira cidade.


printf("Digite uma letra de 'A' a 'H': ");
scanf(" %c", &estado1);

printf("Digite o código da carta: ");
scanf("%s", codigo1);

printf("Digite o nome da cidade: ");
scanf("%s", cidade1);

printf("Digite a população da cidade: ");
scanf("%lu", &populacao1);

printf("Digite a área da cidade: ");
scanf("%f", &area1);

printf("Digite o PIB da cidade: ");
scanf("%f", &pib1);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &turísticos1);


densi1 = (float) populacao1 / area1;

capita1 = (float) pib1 / populacao1;




// aqui eu programei pra imprimir os dados da primeira cidade.

printf("CARTA 1: \n");
printf("ESTADO: %c\n", estado1);
printf("CÓDIGO: %s\n", codigo1);
printf("NOME DA CIDADE: %s\n", cidade1);
printf("POPULAÇÃO: %lu\n", populacao1);
printf("ÁREA: %.2f km²\n", area1);
printf("PIB: %.2f bilhões de reais\n", pib1);
printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", turísticos1);
printf ("DENSIDADE POPULACIONAL: %.2f\n", densi1);
printf("PIB PER CAPITA: %.2F\n", capita1),


// e aqui eu repeti o mesmo processo que fiz na primeira cidade.

printf("Digite uma letra de 'A' a 'H': ");
scanf(" %c", &estado2);

printf("Digite o código da carta: ");
scanf("%s", codigo2);

printf ("Digite o nome da cidade: ");
scanf(" %s", cidade2);

printf("Digite a população da cidade: ");
scanf ("%lu", &populacao2);

printf("Digite a área da cidade: "),
scanf("%f", &area2);

printf("Digite o PIB da cidade: ");
scanf("%f", &pib2);

printf("Digite o número de pontos turísticos: ");
scanf("%d", &turísticos2);

densi2 = (float) populacao2 / area2;
capita2 = (float) pib2 / populacao2;



printf("CARTA 2: \n");
printf("ESTADO: %c\n", estado2);
printf("CÓDIGO: %s\n", codigo2);
printf("NOME DA CIDADE: %s\n", cidade2);
printf("POPULAÇÃO: %lu\n", populacao2);
printf("ÁREA: %.2f km²\n", area2);
printf("PIB: %.2f bilhões de reais\n", pib2);
printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", turísticos2);
printf ("DENSIDADE POPULACIONAL: %.2f\n", densi2);
printf("PIB PER CAPITA: %.2F\n", capita2);


// aqui eu criei meu menu interativo
printf("Qual atributo deseja comparar:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Demográfica\n");
printf("6. PIB per capita\n");
printf("Escolha: ");
scanf("%d", &comparacao1);

// adicionei o switch e dentro de cada case eu usei o if-else e também o else-if
switch (comparacao1)
{
case 1:
printf("Você escolheu comparar população\n");
resultado1 = populacao1 > populacao2 ? 1 : 0;
printf("A população da cidade %s é %lu\n", cidade1, populacao1);
printf("A população da cidade %s é %lu\n", cidade2, populacao2);
    break;

case 2:
printf("Você escolheu comparar área\n");
resultado1 = area1 > area2 ? 1 : 0;
printf("A área da cidade %s é %.2f\n", cidade1, area1);
printf("A área da cidade %s é %.2f\n", cidade2, area2);    
    break;

case 3:
printf("Você escolheu comparar PIB\n");
resultado1 = pib1 > pib2 ? 1 : 0;
printf("O PIB da cidade %s é %.2f\n", cidade1, pib1);
printf("O PIB da cidade %s é %.2f\n", cidade2, pib2);
    break;

case 4:
printf("Você escolheu comparar pontos turísticos\n");
resultado1 = turísticos1 > turísticos2 ? 1 : 0;
printf("O número de pontos turísticos da cidade %s é %d\n", cidade1, turísticos1);
printf("O número de pontos turísticos da cidade %s é %d\n", cidade2, turísticos2);
    break;

case 5:
printf("Você escolheu comparar densidade demográfica\n");
resultado1 = densi1 < densi2 ? 1 : 0;
printf("A densidade demográfica da cidade %s é %.2f\n", cidade1, densi1);
printf("A densidade demográfica da cidade %s é %.2f\n", cidade2, densi2);
    break;
case 6:
printf("Você escolheu comparar o PIB per capita\n");
resultado1 = capita1 > capita2 ? 1 : 0;
printf("O PIB per capita da cidade %s é %.2f\n", cidade1, capita1);
printf("O PIB per capita da cidade %s é %.2f\n", cidade2, capita2);
break;
default:
printf("Opção inválida, tente novamente.\n");
    break;
}

printf("Qual o segundo atributo que você deseja comparar:\n");
printf("ATENÇÃO: cuidado para não escolher o mesmo atributo!\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turísticos\n");
printf("5. Densidade Demográfica\n");
printf("6. PIB per capita\n");
printf("Escolha: ");
scanf("%d", &comparacao2);

if(comparacao1 == comparacao2){
    printf("Você escolheu o mesmo atributo!\n");
}else{
switch (comparacao2)
{
case 1:
printf("Você escolheu comparar população\n");
resultado2 = populacao1 > populacao2 ? 1 : 0;
printf("A população da cidade %s é %lu\n", cidade1, populacao1);
printf("A população da cidade %s é %lu\n", cidade2, populacao2);
    break;

case 2:
printf("Você escolheu comparar área\n");
resultado2 = area1 > area2 ? 1 : 0;
printf("A área da cidade %s é %.2f\n", cidade1, area1);
printf("A área da cidade %s é %.2f\n", cidade2, area2); 
    break;

case 3:
printf("Você escolheu comparar PIB\n");
resultado2 = pib1 > pib2 ? 1 : 0;
printf("O PIB da cidade %s é %.2f\n", cidade1, pib1);
printf("O PIB da cidade %s é %.2f\n", cidade2, pib2);
    break;

case 4:
printf("Você escolheu comparar pontos turísticos\n");
resultado2 = turísticos1 > turísticos2 ? 1 : 0;
printf("O número de pontos turísticos da cidade %s é %d\n", cidade1, turísticos1);
printf("O número de pontos turísticos da cidade %s é %d\n", cidade2, turísticos2);
    break;

case 5:
printf("Você escolheu comparar densidade demográfica\n");
 resultado2 = densi1 < densi2 ? 1 : 0;
printf("A densidade demográfica da cidade %s é %.2f\n", cidade1, densi1);
printf("A densidade demográfica da cidade %s é %.2f\n", cidade2, densi2);
    break;

case 6:
printf("Você escolheu comparar o PIB per capita\n");
resultado2 = capita1 > capita2 ? 1 : 0;
printf("O PIB per capita da cidade %s é %.2f\n", cidade1, capita1);
printf("O PIB per capita da cidade %s é %.2f\n", cidade2, capita2);
break;

default:
printf("Opção inválida, tente novamente.\n");
    break;
}

if (resultado1 && resultado2){
    printf("A cidade %s venceu!!\n", cidade1);
} else if (resultado1 != resultado2){
    printf("empate!!\n");
} else {
    printf("A cidade %s venceu!!\n",cidade2);
}
}

 

 return 0;
}














