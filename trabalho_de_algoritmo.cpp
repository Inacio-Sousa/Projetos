#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <windows.h>

using namespace std;

main(){
	
	int opcao, q, i, jogo, senha, qtRDR3, login, qtGTAVI, qtMINE, compra, telefone[8], confirmacao;
	float valorttRDR3, valorttGTAVI, valorttMINE, total;
	char nome[10];
	system("color 02");
	//VARIAVEIS
	//q == varial no qual esta o while
	//i == entrar na loja
	//nome == nome do usuario
	//opcao == oque vai escolher na loja
	//jogo == qual jogo deseja
	//senha == é a senha do usuario
	//login == se o login for igual ao a senha ele poodera entrar em sua conta
	//qtRDR3 == quantidade de rdr2 vendidos
	//qtGTAVI == quantidade de gta vendidos
	//qtMINE == quantidade de minecraft vendidos
	//compra == para ver se voce vai comprar ou nao tal objeto
	//total == somar o valor da compra
	//telefone == telefone do ususario
	
	setlocale(LC_ALL, "Portuguese");
	
	for(int i=0;i<=118;i++){
		printf("%c",61);
	}

	printf("\n%c                                                     %c%c%c%c%c%c%c%c%c%c%c                                                     %c",124,95,95,95,95,95,95,95,95,95,95,95,124);
	printf("\n%c                                                    %c  %c%c%c%c%c%c  %c%c                                                    %c",124,124,46,45,45,45,45,46,111,124,124);
	printf("\n%c                                                    %c %c%c  %c %c%c %c%c                                                    %c",124,124,124,46,46,46,124,111,124,124);
	printf("\n%c                                                    %c %c %c %c %c%c %c%c                                                    %c",124,124,124,111,46,46,124,111,124,124);
	printf("\n%c                                                    %c%c%c%c%c%c%c%c%c%c%c%c%c                                                    %c",124,124,95,95,39,45,45,45,45,39,95,95,95,124,124);
	printf("\n%c                                                         %c                                                           %c",124,40,124);
	printf("\n%c                                                          %c                                                          %c",124,41,124);
	printf("\n%c                                                      %c%c%c%c%c%c%c%c                                                       %c",124,40,42,41,95,95,40,42,41,124);
	printf("\n%c                                                      %c%c    %c%c                                                       %c",124,47,47,92,92,124);
	printf("\n%c                                                                                                                     %c",124,124);
	printf("\n%c                                                     BEST GAMES                                                      %c\n",124,124);
	
		for(int i=0;i<=118;i++){
		printf("%c",61);
	}
	
	printf("\n.Ola seja bem vindo\n.A loja de jogos mais famosa do Brasil\n.Digite [1] para entrar em nossa loja\n-Insira:");
	scanf("%i",&i);
	fflush(stdin);
	system("cls");
	
	q = 0;
	qtRDR3=0;
	qtGTAVI=0;
	qtMINE=0;
	valorttRDR3=0;
	valorttGTAVI=0;
	valorttMINE=0;
	total=0;
	
	while(q != 4){
		
	if(i==1){
		
		//moldura
		for(int i=0;i<=118;i++){
			printf("%c",61);
		}

		printf("\n%c                                                      BEST GAMES                                                     %c\n",124,124);
	
		for(int i=0;i<=118;i++){
			printf("%c",61);
		}
		//fm da moldura

		printf("\n.Cadastro [1]\n.Loja [2]\n.Relat�rio [3]\n.Sair [4]\n-Insira:");
		scanf("%i",&opcao);
		fflush(stdin);
		system("cls");
	}
	
	switch(opcao){
		
	case 1:
		
		//moldura
		for(int i=0;i<=118;i++){
			printf("%c",61);
		}

		printf("\n%c                                                      BEST GAMES                                                     %c\n",124,124);
	
		for(int i=0;i<=118;i++){
			printf("%c",61);
		}
		//fim moldura
	
		//cadastro
		printf("\n| -Insira Seu primeiro nome: ");
		scanf("%s",&nome);
		fflush(stdin);
		printf("|--------------------------------------------------------------------------------");
		printf("\n| -Insira uma senha com apenas n�meros: ");
		scanf("%i",&senha);
		printf("|--------------------------------------------------------------------------------");
		printf("\n| -Insira seu n�mero de telefone: ");
		scanf("%i",&telefone);
		printf("|--------------------------------------------------------------------------------\n");
		printf("| .Cadastro feito com sucesso!!!\n| .Digite [1] para voltar ao in�cio\n| -Insira:");
		scanf("%i",&q);
		system("cls");
		
		break;
		//fim cadastro
		
	case 2:
		
		//moldura
		for(int i=0;i<=118;i++){
			printf("%c",61);
		}


		printf("\n%c                                                      BEST GAMES                                                     %c\n",124,124);
	
		for(int i=0;i<=118;i++){
			printf("%c",61);
		}
		//fim moldura
		
		
		//loja
		printf("\n =====================================================================================================================");
		printf("\n |                                     VEJA NOSSOS T�TULOS MAIS COMPRADOS                                          |");
		printf("\n |===================================================================================================================|\n");
		printf(" |         Red Dead Redemtion 3         |           Grand Theft Auto VI             |          Minecraft 2           |\n |            [1] R$200.00              |              [2] R$180.00                 |         [3] R$100.99           |");
		printf("\n =====================================================================================================================");
		printf("\n             Para ver mais informa��es sobre os jogos digite o n�mero do que esta a frente do pre�o dos jogos\n\n                                                    Insira:");
		scanf("%i",&jogo);
		system("cls");
		//fim da loja
		
		//moldura
		if(jogo == 1){
			
			for(int i=0;i<=118;i++){
			printf("%c",61);
		}

		printf("\n%c                                                      BEST GAMES                                                     %c\n",124,124);
	
		for(int i=0;i<=118;i++){
			printf("%c",61);
		}
		//fim da moldura
		
			//jogo 1
			printf("    ================================================================================================================\n");
			printf("   |                                        RED DEAD REDEMPTION 3                                                 |");
			printf("\n   |==============================================================================================================|");
			printf("\n   | Descri��o                                                                                                    |");
			printf("\n   |==============================================================================================================|");
			printf("\n   | Ganhador como melhor jogo do ano. Red dead redemption 3 se passa em 1899 antes do massacre em BlackWater,    |\n   | onde voc� vive o auge da gangue de Dutch Van Der Linde.                                                      |");
			printf("\n   |==============================================================================================================|");
			printf("\n   | Data de lan�amento inicial: 24 de outubro de 2022.                                                           |\n");
			printf("   |==============================================================================================================|");
			printf("\n   | S�rie: Red Dead.                                                                                             |");
			printf("\n   |==============================================================================================================|");
			printf("\n   | G�nero: Mundo aberto, Faroeste, Jogo eletr�nico de a��o e aventura.                                          |\n   | Entretenimento, Tiro em terceira pessoa, Societal.                                                           |");
			printf("\n   ================================================================================================================");
			
			printf("\n    .Para voltar ao in�cio digite [1]\n    .Para compr�-lo digite [2]\n    -Insira:");
			scanf("%i",&compra);
			system("cls");
			//fim jogo 1
			
				if(compra == 2){
					
					//moldura
					for(int i=0;i<=118;i++){
						printf("%c",61);
					}

					printf("\n%c                                                      BEST GAMES                                                     %c\n",124,124);
	
					for(int i=0;i<=118;i++){
						printf("%c",61);
					}
					//fim moldura
					
					//compra
					printf("Digite sua senha para verifica��o:");
					scanf("%i",&login);
					
					if(login == senha){
					printf("Parab�ns voc� comprou Red Dead Redemption 3\n");
					printf("Digite [1] para voltar ao in�cio:");
					scanf("%i",&q);
					qtRDR3++;
					system("cls");	
			 
			 		}
					
					if(login != senha){
						
						printf("Login inv�lido\n");
						printf("Caso voc� n�o tenha uma conta volte ao in�cio e se cadastre ou tente novamente digitando [1]");
						scanf("%i",&q);
						system("cls");
					}
				}
				//fim compra
					
			}
		
		if(jogo == 2){
		
		//moldura	
		for(int i=0;i<=118;i++){
			printf("%c",61);
		}

		printf("\n%c                                                      BEST GAMES                                                     %c\n",124,124);
	
		for(int i=0;i<=118;i++){
			printf("%c",61);
		}
		//fim moldura
		
	        //jogo 2	
			printf("   ===================================================================================================================\n");
			printf("  |                                          GRAND THEFT AUTO VI                                                    |\n");
			printf("  |=================================================================================================================|\n");
			printf("  | Descri��o                                                                                                       |\n");
			printf("  |=================================================================================================================|\n");
			printf("  | Um jogo onde voc� vive na pele de um jovem de Miami que est� come�ando no imp�rio da m�fia.                     |\n");
			printf("  |=================================================================================================================|\n");
			printf("  | S�rie: Grand Theft Auto.                                                                                        |\n");
			printf("  |=================================================================================================================|\n");
			printf("  | G�nero: A��o e aventura.                                                                                        |\n");
			printf("  ===================================================================================================================\n");
			
			printf("    .Para voltar � tela inicial digite [1]\n    .Para compr�-lo digite [2]\n    -Insira:");
			scanf("%i",&compra);
			system("cls");
			//fim jogo 2
			
			if(compra == 2){
			
			//moldura
			for(int i=0;i<=118;i++){
				printf("%c",61);
			}

			printf("\n%c                                                      BEST GAMES                                                     %c\n",124,124);
	
			for(int i=0;i<=118;i++){
				printf("%c",61);
			}
			//fim moldura
			
			//compra	
			printf("\nDigite sua senha para verifica��o:");
			scanf("%i",&login);
			
				if(login == senha){
					printf(" .Parab�ns voc� comprou Grand Theft Auto!!");
					printf("\n .Digite [1] para voltar ao in�cio\n -Insira:");
					scanf("%i",&q);
					qtGTAVI++;
					system("cls");
				}
				
				if(login != senha){
					
					printf(".Login inv�lido\n");
					printf(".Caso voc� n�o tenha uma conta volte ao in�cio e se cadastre, ou tente novamente digitando [1]\n-Insira:");
					scanf("%i",&q);
					system("cls");
				}			
			}
			//fim compra
		}
		
		if(jogo == 3){
			
			//moldura
			for(int i=0;i<=118;i++){
				printf("%c",61);
			}

			printf("\n%c                                                      BEST GAMES                                                     %c\n",124,124);
	
			for(int i=0;i<=118;i++){
				printf("%c",61);
			}
			//fm da moldura
			
			//jogo 3
			printf("   ====================================================================================================================\n");
			printf("  |                                                MINECRAFT 2                                                       |\n");
			printf("  |==================================================================================================================|\n");
			printf("  | Descri��o                                                                                                        |\n");
			printf("  |==================================================================================================================|\n");
			printf("  | Explore e se aventure em um mundo onde voc� livre para criar oque quiser.                                        |\n");
			printf("  |==================================================================================================================|\n");
			printf("  | S�rie: Minecraft.                                                                                                |\n");
			printf("  |==================================================================================================================|\n");
			printf("  | G�nero: Sobreviv�ncia, SandBox, Explora��o, Constru��o.                                                          |\n");
			printf("  ====================================================================================================================\n");
			
			printf("   .Para voltar � tela inicial digite [1]\n   .Para compr�-lo digite [2]\n   -Insira:");
			scanf("%i",&compra);
			system("cls");
			
			if(compra == 2){
			
				//moldura
				for(int i=0;i<=118;i++){
					printf("%c",61);
				}

				printf("\n%c                                                      BEST GAMES                                                     %c\n",124,124);
	
				for(int i=0;i<=118;i++){
					printf("%c",61);
				}
				//fm da moldura
				
				//compra
				printf("-Digite sua senha para verifica��o:");
				scanf("%i",&login);
				
				if(login == senha){
					printf(".Parab�ns voc� comprou Minecraft 2\n");
					qtMINE++;
					printf(".Digite [1] para voltar ao in�cio\n-Insira:");
					scanf("%i",&q);
					qtMINE++;
					system("cls");
				}
				
				if(login != senha){
					printf(".Login inv�lido\n");
					printf(".Caso voc� n�o tenha uma conta volte ao in�cio e se cadastre ou tente novamente digitando [1]\n-Insira:");
					scanf("%i",&q);
					system("cls");
					
				}
			}
			//fim compra
		}
		
		if(jogo >= 4){
		
			system("cls");
			//moldura
			for(int i=0;i<=118;i++){
				printf("%c",61);
			}

			printf("\n%c                                                      BEST GAMES                                                     %c\n",124,124);
	
			for(int i=0;i<=118;i++){
				printf("%c",61);
			}
			///fim moldura
			
			printf(".N�mero inv�lido,\n.Digite [1] para voltar ao in�cio\n-Insira:");
			scanf("%i",&q);
			system("cls");
		}	
			
		break;
		
	case 3:
		
		system("cls");
		//moldura
		for(int i=0;i<=118;i++){
			printf("%c",61);
		}

		printf("\n%c                                                      BEST GAMES                                                     %c\n",124,124);
	
		for(int i=0;i<=118;i++){
			printf("%c",61);
		}
		//fim molduura
		//relatorio
		printf("\nDigite sua senha:");
		scanf("%i",&login);
		system("cls");
		
		if(login == senha){
			
			//contas
			valorttRDR3 = qtRDR3 * 200.00;
			valorttGTAVI = qtGTAVI * 180.00;
			valorttMINE = qtMINE * 100.99;
			total = valorttRDR3 + valorttGTAVI + valorttMINE;
			//fiim contas
			
			//moldura
			for(int i=0;i<=118;i++){
				printf("%c",61);
			}

			printf("\n%c                                                      BEST GAMES                                                     %c\n",124,124);
	
			for(int i=0;i<=118;i++){
				printf("%c",61);
			}
			//fim molduura
			
			printf("\n\n======================================================================\n");
			printf("| Dados de Usu�rio                                                   |\n");
			printf("=====================================================================|\n");
			printf("|Seu nome                                                | %10s|\n",nome);
			printf("=====================================================================|\n");
			printf("|Sua Senha                                               | %10i|\n",senha);
			printf("=====================================================================|\n");
			printf("|Seu n�mero de celular                                   | %10i|\n",telefone);
			printf("======================================================================\n");
			
			
			
			
			printf("\n\n=============================================================================\n");
			printf("| Hist�rico de compras   | Quantidade |  Pre�o   | Valor separado |  Total  |\n");
			printf("|========================|============|==========|================|=========|\n");
			printf("|Red Dead Redemption 3   | %10i | R$200.00 | %14.2f |         |\n",qtRDR3,valorttRDR3);
			printf("|========================|============|==========|================|=========|\n");
			printf("|Grand Theft Auto VI     | %10i | R$180.00 | %14.2f |         |\n",qtGTAVI,valorttGTAVI);
			printf("|========================|============|==========|================|=========|\n");
			printf("|Minecraft 2             | %10i | R$100.99 | %14.2f |         |\n",qtMINE,valorttMINE);
			printf("|========================|============|==========|================|=========|\n");
			printf("|                                                                 |  %3.2f |\n",total);
			printf("=============================================================================\n");
			printf(".Digite [1] para voltar ao in�cio\n-Insira:");
			scanf("%i",&q);
			system("cls");
			
			}
			
		if(login != senha){
			
			//moldura
			for(int i=0;i<=118;i++){
				printf("%c",61);
			}

			printf("\n%c                                                      BEST GAMES                                                     %c\n",124,124);
	
			for(int i=0;i<=118;i++){
				printf("%c",61);
			}
			//fm da moldura
			
			printf(".Login inv�lido\n");
			printf(".Caso voc� n�o tenha uma conta volte ao in�cio e se cadastre ou tente novamente digitando [1]\n-Insira:");
			scanf("%i",&q);
			system("cls");
	    }
			
		break;
		
	case 4:
		
		//moldura
		for(int i=0;i<=118;i++){
			printf("%c",61);
		}

		printf("\n%c                                                      BEST GAMES                                                     %c\n",124,124);
	
		for(int i=0;i<=118;i++){
			printf("%c",61);
		}
		//fm da moldura
		
		printf("\n.Para sair de nossa loja digite [4]\n.Para voltar ao in�cio digite [1]\n-Insira:");
		scanf("%i",&q);
		system("cls");
		printf("Obrigado pela pref�rencia, volte sempre!!");

}
}
}




