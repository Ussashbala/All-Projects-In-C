#include<stdio.h>
//@U6as

void love();
void love_2();
void love3();
int main (){
printf("I love You ....\nIf you Love Me press:1\n\nIf not press anything:\n\n");

	char ch;
	
do {
	scanf("%c",&ch);
	printf("\nI know you Love Me,so press:1\n");
if(ch=='1'){
break;
}
}
while(1);

love();



return 0;
}
void love(){
	int i;
	printf (" Congratulations ! Now You Are In Relationship With Me  !\n");
	for(i=0;i<6;i++){
		printf (" Love you ....\n");
		
	}
	printf("\n\n  Thank you for cooperating with Me.Have a good day !\n\n\n");
	}
/*void love_2(){
	printf("If you are a Psychopath press:1\n\nIf not press anything:\n\n");	
	char ch ;
	scanf("%c",&ch);
	if (ch=='1'){
		love();
	}
}*/
void love3(){
	printf("new line");
}


