#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <time.h>
	char userinput[];
int main(){

	 system("cls");
       
	while(1){
		 printf("Username =>");
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
			else if(strcmp(userinput,"chrome")==0){
         system("start chrome");
         system("cls");
         printf("[bot] ._.)==>Google Chrome Open\n");
         
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
         printf("[bot]._.)==>comands:clear,poweroff,ip,time,note,code,website name,and exit from close window");
         
		}
	}

	return 0;
}