#include <stdio.h>


int main() {
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
printf("ÁREA: %f km²\n", area1);
printf("PIB: %f bilhões de reais\n", pib1);
printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", turísticos1);
printf ("DENSIDADE POPULACIONAL: %.2f\n", densi1);
printf("PIB PER CAPITA: %.2F\n", capita1),


// e aqui eu repeti o mesmo processo que fiz na primeira cidade.

printf("Digite uma letra de 'A' a 'H': ");
scanf(" %c", &estado2);

printf("Digite o código da carta: ");
scanf("%s", codigo2);

printf ("Digite o nome da cidade: ");
scanf("%s", cidade2);

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
printf("ÁREA: %f km²\n", area2);
printf("PIB: %f bilhões de reais\n", pib2);
printf("NÚMERO DE PONTOS TURÍSTICOS: %d\n", turísticos2);
printf ("DENSIDADE POPULACIONAL: %.2f\n", densi2);
printf("PIB PER CAPITA: %.2F\n", capita2);


// nessa parte do código eu faço as comparações
 
printf("Atributo: População\n");
if (populacao1 > populacao2){
    printf ("Carta 1 (%s) venceu.\n", cidade1);
} else {
    printf("Carta 2 (%s) venceu.\n", cidade2);
}

printf("Atributo: Área\n");
if (area1 > area2){
    printf ("Carta 1 (%s) venceu.\n", cidade1);
} else {
printf ("Carta 2 (%s) venceu.\n", cidade2);
} 

printf("Atributo: PIB\n");
if ( pib1 > pib2) {
     printf ("Carta 1 (%s) venceu.\n", cidade1); 
}  else {
printf ("Carta 2 (%s) venceu.\n", cidade2);
} 

printf("Atributo: Ponto turístico\n");
if (turísticos1 > turísticos2){
     printf ("Carta 1 (%s) venceu.\n", cidade1);
} else {
printf ("Carta 2 (%s) venceu.\n", cidade2);
} 
printf("Atributo: Densidade Populacional");
if (densi1 < densi2){
   printf ("Carta 1 (%s) venceu.\n", cidade1); 
} else {
printf ("Carta 2 (%s) venceu.\n", cidade2);
}
printf("Atributo: PIB per capita");
if (capita1 > capita2){
     printf ("Carta 1 (%s) venceu.\n", cidade1);
} else {
printf ("Carta 2 (%s) venceu.\n", cidade2);
}




 return 0;
}














    return 0;
}
