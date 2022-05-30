#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>

//cores em ANSI utilizadas
#define ANSI_COLOR_RESET   "\x1b[0m"
#define ANSI_COLOR_RED     	"\x1b[31m"  
#define ANSI_COLOR_GREEN	"\e[0;32m"
#define ANSI_COLOR_CYAN     "\e[0;36m"
#define ANSI_COLOR_PURPLE   "\e[1;35m"
#define ANSI_COLOR_YELLOW   "\e[0;33m"
#define ANSI_COLOR_BLUE     "\e[0;34m"
    
	char style;
	char userinput[];
int main(){

    system("cls");
	while(1){

		
		 printf(" =>");
           gets(userinput);
           //Close Easy Access
		if(strcmp(userinput,"exit")==0){
         system("cls");
         printf("[bot] ._.)=>Ok Bye (;-;) (press enter from close window)\n");
         break;
		}
		//VERSION
		else if(strcmp(userinput,"version")==0){
				 printf("Easy Access [version 4.2]\n\nCopyright (c) 2021 Gabriel Luiz\n\nMIT License\n\n");
                 printf("WELCOME to the Easy Access Console.\n\n");
                   printf("===============================================================================\n");
                       printf(" Run 'manual' to see all available commands.\nMy Creator is  https://github.com/GabrielLuizSF\nOpen Source Repository:https://github.com/GabrielLuizSF/easy-access-C \n\n");
                             printf("===============================================================================\n");
		}  
		
		else if(strcmp(userinput,"hi")==0){
         system("cls");
         printf("[bot] ._.)=>Hello Master  \n");
       
		}

		else if(strcmp(userinput,"note")==0){
         system("start notepad");
         system("cls");
         printf("[bot] ._.)=>Note open\n");
         
		}
		//styles command
			else if(strcmp(userinput,"styles")==0){
				printf(ANSI_COLOR_RESET"===============================================================================\n");
				printf("\n\nAll Available Commands =>\n\n\n");
				printf(ANSI_COLOR_RED"styleRed=>   Letra Vermelha\n\n");
				printf(ANSI_COLOR_BLUE"styleBlue=>  Letra Azul\n\n");
				printf(ANSI_COLOR_CYAN"styleCyan=>  Letra Ciano\n\n");
				printf(ANSI_COLOR_GREEN"styleGreen=>  Letra Verde\n\n");
				printf(ANSI_COLOR_PURPLE"stylePurple=>  Letra Roxo\n\n");
				printf(ANSI_COLOR_YELLOW"styleYellow=>  Letra Amarela\n\n");
				printf(ANSI_COLOR_RESET"resetStyle=>  Letra Padrao\n\n\n");
				printf(ANSI_COLOR_RESET"===============================================================================\n");
           }
		else if(strcmp(userinput,"styleRed")==0){
            
            printf(ANSI_COLOR_RED"[bot] ._.)=> Red Selected\n");

			}
			else if(strcmp(userinput,"styleCyan")==0){
            
            printf(ANSI_COLOR_CYAN"[bot] ._.)=> Cyan Selected\n");

		}
		else if(strcmp(userinput,"stylePurple")==0){
            
            printf(ANSI_COLOR_PURPLE"[bot] ._.)=> Purple Selected\n");

		}
		else if(strcmp(userinput,"styleYellow")==0){
            
            printf(ANSI_COLOR_YELLOW"[bot] ._.)=> Yellow Selected\n");

		}
		else if(strcmp(userinput,"styleBlue")==0){
            
            printf(ANSI_COLOR_BLUE"[bot] ._.)=> Blue Selected\n");

		}
			
		else if(strcmp(userinput,"styleGreen")==0){
            
            printf(ANSI_COLOR_GREEN"[bot] ._.)=> Green Selected\n");
			}
			else if(strcmp(userinput,"stylegreen")==0){
            
            printf(ANSI_COLOR_GREEN"[bot] ._.)=> Green Selected\n");
			}
				
		else if(strcmp(userinput,"resetStyle")==0){
	    			printf(ANSI_COLOR_RESET"[bot] ._.)=> Reset Color....\n");
		}
     
     
		
	//Systems codes
		
		else if(strcmp(userinput,"code")==0){
         system("code");
         system("cls");
         printf("[bot] ._.)==>Visual Studio Code open\n");
         
		}else if(strcmp(userinput,"cmd")==0){
         system("start cmd");
         system("cls");
         printf("[bot] ._.)=>[bot]=>Comand Prompt open\n");
         
		}
		//Websites commands
		else if(strcmp(userinput,"google")==0){
         system("start https://google.com.br");
         system("cls");
         printf("[bot] ._.)=>Google Open\n");
         
		}	else if(strcmp(userinput,"github")==0){
         system("start https://github.com/GabrielLuizSF");
         system("cls");
         printf("[bot] ._.)=>Github Open\n");
         
		}	else if(strcmp(userinput,"youtube")==0){
         system("start https://youtube.com.br");
         system("cls");
         printf("[bot] ._.)=>Youtube Open\n");
         
		} else if(strcmp(userinput,"whatsapp")==0){
            system("start https://web.whatsapp.com/");
            system("cls");
            printf("[bot] ._.)=>Scan QRCode Now\n");
        }
			else if(strcmp(userinput,"netflix")==0){
         system("start https://www.netflix.com");
         system("cls");
         printf("[bot] ._.)=>Netflix Open\n");
         
		}
			else if(strcmp(userinput,"stackoverflow")==0){
         system("start https://pt.stackoverflow.com");
         system("cls");
         printf("[bot] ._.)==>Write you Question\n");
         
		}
		//Open Chrome
			else if(strcmp(userinput,"chrome")==0){
           system("start chrome");
           system("cls");
              printf("[bot] ._.)==>Google Chrome Open\n");
         
		}
	        //To see all available Drivers
			else if(strcmp(userinput,"Drivers")==0){
                printf("[bot]._.)=>All Drivers\n");
				  system("Driverquery");
			
		}
		//Clock command
		else if(strcmp(userinput,"time")==0)
     {
         time_t s, val =1 ;
         struct tm* current_time;
         //time in second
         s = time(NULL);
         current_time = localtime(&s);
         //print time in minute
         //print hour and second
         printf("[bot]._.) ==> %02d:%02d:%02d\n",current_time->tm_hour,current_time->tm_min,current_time->tm_sec);
     }
     //IP command
     else if(strcmp(userinput,"ip")==0){
     	    printf("[bot]._.)==>You IP\n");
             system("ipconfig /all");
     
         
		}
		//Poweroff command
		 else if(strcmp(userinput,"poweroff")==0){
         system("shutdown -s");
         printf("[bot]._.)==>bye\n");
         
		}
		//suspend command
				else if(strcmp(userinput,"suspend")==0){
		  system("rundll32.exe PowrProf.dll,SetSuspendState");
		  system("cls");
		  printf("[bot] ._.)==>Welcome Back\n");
		}
		
		//Clear EasyAccess command
    else if(strcmp(userinput,"clear")==0){
         system("cls"); 
		}
		//Update command
		else if(strcmp(userinput,"update")==0){
        system("start https://github.com/GabrielLuizSF/easy-access-C");
					printf("===============================================================================\n");
				printf("Como Atualizar para a Nova Versao ?\n\n\n Esse site que abriu agora e onde e guardado o codigo fonte do Easy Access\n\n Para voce baixar a nova versao basta procurar no README a versao LTS\n\n\n  Ao clicar no nome Download Windows vai baixar um arquivo zip\n\n\nSe tiver a versao 4.0 so precisa substituir os arquivos da pasta binaries pelos da versao LTS\n\n\nQue estao dentro de EasyAccess>>>binaries \n\n\n");
					printf("===============================================================================\n");
		}
		//Manual Command
		else if(strcmp(userinput,"manual")==0){
				printf("===============================================================================\n");
				printf("Manage your Windows.\n\nCommands =>\n\n\n");
				//Open Systems codes
				 printf("# note :\n\n=>Abre o bloco de Notas\n\n\n# code :\n\n=>Abre o Visual Studio Code\n\n\n# cmd :\n\n=>Abre o CMD\n\n\n# chrome :\n\n=> abre o chrome\n\n\n");
				//Styles codes
				 printf("# styles :\n\n=> mostra todas as cores de letras disponiveis\n\n\n");
				//Open Website codes
				 printf("# google :\n\n=>Abre o Google Search\n\n\n# github :\n\n =>Abre o github mas para funcionar devido a extrema seguranca do github voce precisa dar reload na pagina.\n\n\n# youtube :\n\n=>Abre o youtube\n\n\n");
                 printf("# whatsapp :\n\n=> Abre o whatsapp\n\n\n# netflix :\n\n=> Abre a netflix\n\n\n# stackoverflow :\n\n=> salva voce tirando suas duvidas de programacao & abre o stackoverflow\n\n\n");
                 //Easy Access chat
                 printf("# exit :\n\n=>Fecha o EasyAccess\n\n\n# hi :\n\n=>diz oi ao EasyAccess\n\n\n# clear :\n\n=>limpa os codigos anteriores'funciona igual o cls do cmd'\n\n# version :\n\n=>mostra a versao do Easy Access\n\n\n");
                 //S.O codes
                 printf("# time :\n\n => diz a hora\n\n\n# ip :\n\n=> revela todo o seu ip 'funciona igual o ipconfig /all do cmd so que neste terminal so precisa digitar ip'\n\n\n# poweroff :\n\n=> Desliga seu PC\n\n\n# Suspend :\n\n=>suspende o seu PC\n\n\n# Drivers :\n\n=>Mostra todos os Drivers\n\n\n# update :\n\n\n Leva ao repositorio no github para baixar a nova versao\n\n");
				printf("===============================================================================\n\n\n");
		}
		
	}

return 0;
}