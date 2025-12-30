//snake, water, gun   "game"

#include<stdio.h>
int main(){
	srand(time(NULL));
	int player,computer = rand() % 3;
/*	0--> Snake
	1--> water
	2--> gun
*/
printf("Choose 0 for snake , 1 for water or 2 for gun : ");
scanf("%d",&player);

printf("Computer chose %d\n",computer);

if(player==0 && computer==0){
printf("Its a tie\n");	
}
else if(player==0 && computer==1){
	printf("The player wins\n"); //you may use "you win " or "you lose" instead of player and computer 
}
else if(player==0 && computer==2){
	printf("The computer wins\n");
}
else if(player==1 && computer==0){
	printf("The computer wins\n");
}
else if(player==1 && computer==1){
	printf("Its a tie\n");
}
else if(player==1 && computer==2){
	printf("The player wins\n");
}
else if(player==2 && computer==0){
	printf("The player wins\n");
}
else if(player==2 && computer==1){
	printf("The computer wins\n");
}
else if(player==2 && computer==2){
	printf("Its a tie\n");
}
else{
	printf("Something went wrong");
}
return 0;
}

