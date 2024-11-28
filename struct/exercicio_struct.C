#include<stdio.h>
#include<conio.h>
#include<string.h>

struct carro{
       char marca[15];
       int ano;
       char cor[10];
       float preco;
};

struct carro vetcarros[20];
int opcao;



void ler(){
     int i;
      printf ("Lendo Carros");
     for (i = 0; i <= 1; i ++){       
           
         printf ("Marca%d:",i);        
         scanf("%s",&vetcarros[i].marca);
         printf ("Ano%d:",i);
         scanf("%d", &vetcarros[i].ano);
         printf ("Cor%d:",i);
         scanf("%s",&vetcarros[i].cor);
         printf ("Preco%d:",i);
         scanf("%f",&vetcarros[i].preco);
         printf( "\n");
        }
}


void imprimir(){
     int i;
      printf ("Lista:\n");
     for (i = 0; i <=1 ; i ++){
         printf("Marca%s\n",vetcarros[i].marca);
         printf("Ano:%d\n",vetcarros[i].ano);
         printf("Cor:%s\n",vetcarros[i].cor);
         printf("Preco:%4.2f\n",vetcarros[i].preco);
         printf("\n");
        }
}

void pesquisarPrecoMaximo(float maximo){
     int i;
     for (i = 0; i <=1; i++){
         if (vetcarros[i].preco <= maximo){
            printf("\n");
            printf(vetcarros[i].marca);
            printf("%d\n", vetcarros[i].ano);
            printf(vetcarros[i].cor);
            printf("\nR$%4.2f\n\n", vetcarros[i].preco);
         }
     }
}


void pesquisarMarca(char marca[15]){
     int i;
       for (i = 0; i <=1; i ++){
         if ((strcmp(marca, vetcarros[i].marca))==0){
            printf("\n");
            printf(vetcarros[i].marca);
            printf("%d\n", vetcarros[i].ano);
            printf(vetcarros[i].cor);
            printf("\nR$ %.2f\n\n", vetcarros[i].preco);
         }
     }
}

void pesquisarMarcaAnoCor(char marca[15],char cor[10],int ano){
     int i;
          for (i = 0; i <=1; i ++){
          if ((strcmp(marca, vetcarros[i].marca)==0) && (strcmp(cor, vetcarros[i].cor)==0)&& (ano == vetcarros[i].ano))
           {
            printf("\n");
          //  printf(vetcarros[i].marca);
           // printf("%d\n", vetcarros[i].ano);
           // printf(vetcarros[i].cor);
            printf("\nR$ %.2f\n\n", vetcarros[i].preco);
         }
     }
}



void menu(){
     float preco_maximo;
     char marca[15];
     char cor[10];
     int ano;
     printf("Entre com a opcao:\n1 - Ler Carros\n2 - Pesquisar por preco maximo\n3 - Pesquisar por Marca\n4 - Pesquisar por marca ano e cor\n5 - Imprimir\n");
     scanf("%d", &opcao);
     while (opcao!=6) 
      {
        switch (opcao){
          case 1: ler();
                  break;
          case 2:  printf("Entre com o preco maximo:\n");
                   scanf("%f",&preco_maximo); 
                   pesquisarPrecoMaximo(preco_maximo);
                   break;
     
          case 3: printf("Entre com a Marca:\n");
                  scanf("%s", marca); 
                  pesquisarMarca(marca);
                  break;
          case 4: printf("Entre com a Marca:\n");
                  scanf("%s",&marca);
                  printf("Entre com a Cor:\n");
                  scanf("%s",&cor);
                  printf("Entre com o Ano:\n");
                  scanf("%d",&ano); 
                  pesquisarMarcaAnoCor(marca,cor,ano);
                  break;
          case 5: imprimir();
                   break;
          }           
        printf("Entre com a opcao:\n1 - Ler Carros\n2 - Pesquisar por preco maximo\n3 - Pesquisar por Marca\n4 - Pesquisar por marca ano e cor\n5 - Imprimir\n");
        scanf("%d", &opcao);
       
}
    
}

 main(){

    menu();
    getch();
    return 0;
}
