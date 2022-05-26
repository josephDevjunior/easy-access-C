#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>


#define ANSI_COLOR_RED     	"\x1b[31m" //cores em ANSI utilizadas 
#define ANSI_COLOR_GREEN	"\e[0;32m"
#define ANSI_COLOR_RESET   "\x1b[0m"
   
    
	char style;
	char userinput[];
int main(){

	 system("cls");
	while(1){
		 printf(" =>");
           gets(userinput);
		if(strcmp(userinput,"exit")==0){
         system("cls");
         printf("[bot] ._.)=>Ok Bye (;-;) (press enter from close window)\n");
         break;
		}else	if(strcmp(userinput,"hi")==0){
         system("cls");
         printf("[bot] ._.)=>Hello Master :) \n");
       
		}	else if(strcmp(userinput,"note")==0){
         system("start notepad");
         system("cls");
         printf("[bot] ._.)=>Note open\n");
         
		}else if(strcmp(userinput,"style")==0){
		printf("select styleRed from set color red or styleGreen from set color green");
		}
		else if(strcmp(userinput,"styleRed")==0){
        
             if(style="styleRed"){
            
            printf(ANSI_COLOR_RED"[bot] ._.)=> Red Selected\n");
			}else if(style="stylered"){
            
            printf(ANSI_COLOR_RED"[bot] ._.)=> Red Selected\n");
			}
		}
			
		else if(strcmp(userinput,"styleGreen")==0){
            
            printf(ANSI_COLOR_GREEN"[bot] ._.)=> Green Selected\n");
			}
			else if(strcmp(userinput,"stylegreen")==0){
            
            printf(ANSI_COLOR_GREEN"[bot] ._.)=> Green Selected\n");
			}
			
         	
			
		else if(strcmp(userinput,"resetStyle")==0){
	    		if(style="styleRed"){
	    			printf(ANSI_COLOR_RESET"[bot] ._.)=> Reset Color....\n");
	    		}
	           	if(style="stylered"){
	        		
		 		    printf(ANSI_COLOR_RESET"[bot] ._.)=> Reset Color....\n");
				}
				printf("\n");
				if(style="styleGreen"){
	        		printf(ANSI_COLOR_RESET"[bot] ._.)=> Reset Color....\n");
				}else if(style="stylegreen"){
					printf(ANSI_COLOR_RESET"[bot] ._.)=> Reset Color....\n");
				}
     
     
		}
		else if(strcmp(userinput,"styleColor")==0){
		  printf("The Color style is %c",style);
		}
		
		else if(strcmp(userinput,"code")==0){
         system("code");
         system("cls");
         printf("[bot] ._.)=>Visual Studio Code open\n");
         
		}else if(strcmp(userinput,"cmd")==0){
         system("start cmd");
         system("cls");
         printf("[bot] ._.)=>[bot]=>Comand Prompt open\n");
         
		}
		else if(strcmp(userinput,"google")==0){
         system("start https://google.com.br");
         system("cls");
         printf("[bot] ._.)=>Google Open\n");
         
		}	else if(strcmp(userinput,"github")==0){
         system("start https://github.com.br");
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
			else if(strcmp(userinput,"chrome")==0){
           system("start chrome");
           system("cls");
              printf("[bot] ._.)==>Google Chrome Open\n");
         
		}
		//TODO: Habilitar Privilegios de Adm
			else if(strcmp(userinput,"powerOnFast")==0){
				system("defrag c: /B");
				  printf("[bot] ._.)==>......");
			}
			else if(strcmp(userinput,"Drivers")==0){
				system("Driverquery");
			     printf("Your Drivers");
			}
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
     else if(strcmp(userinput,"ip")==0){
     	    printf("[bot]._.)==>You IP\n");
             system("ipconfig /all");
     
         
		}
		 else if(strcmp(userinput,"poweroff")==0){
         system("shutdown -s");
         printf("[bot]._.)==>bye\n");
         
		}
    else if(strcmp(userinput,"clear")==0){
         system("cls");
         printf("[bot]._.)==>comands:clear,poweroff,ip,time,note,code,website name,and exit from close \n");
         
		}
	}

return 0;
}