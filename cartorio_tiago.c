#include <stdio.h>//bibilioteca de comunica��o com o usuario
#include <stdlib.h>//bibilioteca de aloca��o de espa�o de memoria
#include <locale.h>//bibilioteca de aloca��es de texto por regi�po
#include <string.h>//bibilioteca responsavel por cuidar das srtring


int registrar()// Fun��o responsavel por cadastrar os usuarios no sistema
{
  //Inicio da cria��o de vari�veis/string
  char arquivo[40];
  char cpf[40];
  char nome[40];
  char sobrenome[40];
  char cargo[40];
  //Final da cria��o de vari�veis/string
  
  printf("\n Digite o cpf a ser cadastrado: ");//Coletando informa��o do usuario
  scanf("%s",cpf);//%s referese a string
  
  strcpy(arquivo, cpf);//responsavel por copiar os valores das strimg
  
  FILE*file;//cria o arquivo
  file = fopen(arquivo, "w");// cria o arquivo
  fprintf(file,cpf);//salva o valor da variavel
  fclose(file);//fecha o arquivo
  
  file = fopen(arquivo,"a");
  fprintf(file,",");
  fclose(file);
  
  printf("\n Digite o nome a ser cadastrado: ");
  scanf("%s",nome);
  
  file = fopen(arquivo,"a");
  fprintf(file,nome);
  fclose(file);
  
  file = fopen(arquivo,"a");
  fprintf(file,",");
  fclose(file);
  
  printf("\n digite o sobrenome a ser cadastrado: ");
  scanf("%s",sobrenome);
  
  file = fopen(arquivo,"a");
  fprintf(file,sobrenome);
  fclose(file);
  
  file = fopen(arquivo,"a");
  fprintf(file,",");
  fclose(file);
  
  printf("\n digite o cargo a ser cadastrado: ");
  scanf("%s",cargo);
  
  file = fopen(arquivo,"a");
  fprintf(file,cargo);
  fclose(file);
  
  file = fopen(arquivo,"a");
  fprintf(file,",");
  fclose(file);
  
  system("pause");
  }

int consultar()
{
  setlocale(LC_ALL,"portuguese"); //Definindo Linguagem
  
  char cpf[40];
  char conteudo[200];
  
  printf("Digite o cpf a ser consultado: ");
  scanf("%s",cpf);
  
  FILE*file;
  file = fopen(cpf,"r");
  
  if(file==NULL)
  {
  	printf("\n N�o foi possivel encontrar usu�rio!\n\n");
  	system("pause");
  }

  while(fgets(conteudo,200, file)!=NULL)
  {
  	printf("\n Essas s�o as informa��es do usu�rio: ");
  	printf("%s", conteudo);
  	printf("\n\n");
  	
  	system("pause");
  }
}

int deletar()
{	
    char cpf[40];
	
	printf("digite o cpf a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE*file;
	file=fopen(cpf,"r");
	
	if(file==NULL);
	{		
	printf("usuario n�o se encontra no sistema! \n");
	system("pause");
	}
	
}
   int main()
   {
   int opcao=0; //Definindo v�riaveis
   int retorno=1;
   for(retorno=1;retorno=1;)
   {
    
    system("cls");
    
    setlocale(LC_ALL,"portuguese"); //Definindo Linguagem
    
     printf("\tCART�RIO EBAC\n\n"); //Inicio do Menu
     printf("\t Ol� como podemos ajudar?\n\n\t Por favor selecione sua op��o a baixo.\n\n");
     printf("\t-1 Registrar Nome.\n\t-2 Consultar Nome.\n\t-3 Deletar Nome.\n\t-4 sair do sistema.\n");
	 printf("\t op��o:"); //Final do Menu
    
     scanf("%d", &opcao); // Armazenando escolha do usuario
	 
	 system("cls");
     
     switch(opcao)
	 { //Inicio da sele��o
	     case 1:
	 	 registrar();
	     break;
		 
		 case 2:	
		 consultar();
	 	 break;
	 	 
		 case 3:	
		 deletar();
	 	 break;
	 	 
	 	 case 4:
	     printf("Obrigado por usar o sistema.");
	     return 0;
	     break;
          
	 	 default:	
	     printf("\t Essa opcao nao esta disponivel.");
	     system("pause");
	 	 break;
     } //Fim da sele��o
     }
     }


