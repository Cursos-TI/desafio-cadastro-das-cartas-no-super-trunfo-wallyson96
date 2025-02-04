#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#include <stdio.h>

int main() {
    char Estado[4];
    char Codigodacarta[5];
    char NomedaCidade[20];
    int populacao;
    float areaemkm;
    float PIB;
    int pontosTuristicos;


    printf("Digite o estado (sigla de 2 letras): ");
    scanf("%3s", Estado); 
    

    printf("Digite o Cógigo da carta(sigla de 1 letras e dois numros): ");
    scanf("%4s",Codigodacarta);
   

    printf("Digite o nome da cidade: ");
    scanf("%19s",NomedaCidade);
    

    printf("Digite a População: ");
    scanf("%d",&populacao);
    

    printf("Digite a área em km²");
    scanf("%f",&areaemkm);
    
    printf("Digite o PIB:");
    scanf("%f",&PIB);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos); 
    
    printf("Estado: %s\n", Estado);
    printf("Cógigo da carta: %s\n",Codigodacarta);
    printf("Nome da cidade: %s\n",NomedaCidade );
    printf("População: %d\n",populacao);
    printf("área em km²: %f\n",areaemkm);
    printf("PIB: %2.f em bilhões de reais\n",PIB);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);



    return 0;
}
