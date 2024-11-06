#include <stdio.h>//bibilioteca de comunicação com o usuario
#include <stdlib.h>//bibilioteca de alocação de espaço de memoria
#include <locale.h>//bibilioteca de alocações de texto por regiãpo
#include <string.h>//bibilioteca responsavel por cuidar das srtring


int registrar()// Função responsavel por cadastrar os usuarios no sistema
{
  //Inicio da criação de variáveis/string
  char arquivo[40];
  char cpf[40];
  char nome[40];
  char sobrenome[40];
  char cargo[40];
  //Final da criação de variáveis/string
  
  printf("\n Digite o cpf a ser cadastrado: ");//Coletando informação do usuario
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
  	printf("\n Não foi possivel encontrar usuário!\n\n");
  	system("pause");
  }

  while(fgets(conteudo,200, file)!=NULL)
  {
  	printf("\n Essas são as informações do usuário: ");
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
	printf("usuario não se encontra no sistema! \n");
	system("pause");
	}
	
}
   int main()
   {
   int opcao=0; //Definindo váriaveis
   int retorno=1;
   for(retorno=1;retorno=1;)
   {
    
    system("cls");
    
    setlocale(LC_ALL,"portuguese"); //Definindo Linguagem
    
     printf("\tCARTÓRIO EBAC\n\n"); //Inicio do Menu
     printf("\t Olá como podemos ajudar?\n\n\t Por favor selecione sua opção a baixo.\n\n");
     printf("\t-1 Registrar Nome.\n\t-2 Consultar Nome.\n\t-3 Deletar Nome.\n\t-4 sair do sistema.\n");
	 printf("\t opção:"); //Final do Menu
    
     scanf("%d", &opcao); // Armazenando escolha do usuario
	 
	 system("cls");
     
     switch(opcao)
	 { //Inicio da seleção
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
     } //Fim da seleção
     }
     }


