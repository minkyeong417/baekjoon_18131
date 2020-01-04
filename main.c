#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct {
	char name[50];
	int length;
} song; //one song




int main(int argc, char *argv[]) {
	
	int number_of_songs;
	int number_of_orders;
	int s_standard;
	
	scanf("%d %d %d\n",number_of_songs,number_of_orders,s_standard);
	
	int i;
	
	static song[number_of_songs];
	
	for(i=0;i<number_of_songs;i++){
		scanf("%s %d\n",song[i].name,&song[i].length);
	}
	
	print("Playlist has been made. ")
	
	char order[60];
	
	for(i=0;i<number_of_orders;i++){
		
		order = gets();
	
		if (strcmp(order,"AR") == 0){
			AR();
		}
	
		else if (order[0]=='R'){
			R_string();
		}
	
		else if (order[0]=='P'){
			P_string_int();
		}
	
		else if (strcmp(order,"AE") == 0){
			AE();
		}
		
		else if (order[0]=='E'){
			E_string();
		}
	
		else if (order[0]=='L'){
			L_T();
		}
	
		
	}
	
	
	return 0;
}
