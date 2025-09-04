#include <stdio.h> 



int main() {
   printf("----------------------------------------------------\n");
   printf("              CARTAS SUPER TRUNFO  \n");

   printf("Desenvolvido por Joilson Almeida \n");
   printf("versão 1.0\n");
   printf(" Data:25/08/2025\n");
   printf(" Descrição: Jogo de cartas estilo Super Trunfo\n");
   printf("-------------------------------------------------\n\n");

   printf("Bem-vindo ao jogo dde Cartas Super Trunfo\n");
   printf("Mestre jogo,você irá competir com cartas de diferentes categorias.\n");
   printf ("Cada carta possui atributos que serão comparados para determinar o vencedor.\n");
   printf ("Prepare-se para uma partida emocionate!\n\n");


   //declaração das variáveis para a primeira carta
    char estado1, codigo1[10], cidade1[20];
    int populacao1, ponto_turistico1;
    float area1, pib1;
   
    //declaração das variáveis para a primeira carta
   
   char estado2, codigo2[10], cidade2[20];
   int populacao2, ponto_turistico2;
   float area2, pib2;
   
   //cadastro da primeira carta 
   printf ("==== CADASTRO DA PRIMEIRA CARTA ===");
   
   printf("Digite o estado (A-H):");
   scanf ("%s", codigo1);
   
   printf ("Digite o nome da cidade: ");
   scanf ("%s", cidade1);
   
   printf ("Digite a população: ");
   scanf ("%s", &populacao1);

   printf("Digite a área (em km^)");
   scanf ("%s", &area1);

   printf ("Digite o PIB (em milhões)");
   scanf ("%s", &pib1);

   printf("Digite o ponto turistico ");
   scanf ("%s", &ponto_turistico1);

   floant("populacao1/area1");

   
    //cadastro da primeira carta 
   printf ("==== CADASTRO DA SEGUNDA CARTA ===");
   
      printf("Digite o estado (A-H):");
   scanf ("%s", codigo2);
   
   printf ("Digite o nome da cidade: ");
   scanf ("%s", cidade2);
   
   printf ("Digite a população: ");
   scanf ("%s", &populacao2);

   printf("Digite a área (em km^)");
   scanf ("%s", &area2);

   printf ("Digite o PIB (em milhões)");
   scanf ("%s", &pib2);

   printf("Digite o ponto turistico ");
   scanf ("%s", &ponto_turistico2);




   // Exibição das Informação das Cartas

   printf("\n=== CARTA 1===\n");
   printf("Estado: %s\n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Cidade: %s\n", cidade1);
   printf("População: &d\n",populacao1);
   printf("Área: &_2f km^\n",area1);
   printf("PIB: %.1f milhões\n",pib1);
   printf("Ponto Turístico: &d\n",ponto_turistico1);
   floant("populacao1/area1");
   
   
    // Exibição das Informação da Segunda Carta

   printf("\n=== CARTA 2 ===\n");
   printf("Estado: %s\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Cidade: %s\n", cidade2);
   printf("População: &d\n",populacao2);
   printf("Área: &_2f km^\n",area2);
   printf("PIB: %.1f milhões\n",pib2);
   printf("Ponto Turístico: &d\n",ponto_turistico2);
   floant ("populacao2/area1");
   
   
   
   
   
   
   
   
   return 0;
}
