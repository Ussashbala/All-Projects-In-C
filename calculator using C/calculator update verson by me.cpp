#include<stdio.h>
//@U6as

void sum();
void sub();
void div();
void malti();
void redak();
void if_else();
int main(){ 
   char x;
   float a,b,c;
   
  printf("Enter the operator (like +,-,*,/) :  ");
  
  
  do {
  
  	scanf("%c",    &x);
  	
  	if(x=='+'||x=='-'||x=='*'||x=='/'){
	  break ;
	  }
	  printf("\nPlease enter the valid operator :  ");
  }
  
  while(1);
  
	printf("\nEnter you 1st number:");
scanf("%f",&a);
	printf("\nEnter you 2nd number:");
	scanf("%f",&b);
  
  	switch (x){
  		
  		case'+' :{
  			
  			c=a+b;
  			 printf("\n\nYour ans is\n \n      %f+%f=%f\n\n",a,b,c );
  			 
  	
			break;
		  }
		  case'-':{
		  	
		  	c=a-b;
		  	 printf("\n\nYour ans is\n \n      %f-%f=%f\n\n",a,b,c );
		  	 
		
			break;
		  }
  		case'*':{
  			
  			c=a*b;
  			 printf("\n\nYour ans is\n \n      %f*%f=%f\n\n",a,b,c );
  			 
  			 
  			
			break;
		  }
  		case'/':{
  			
  			c=a/b;
  			 printf("\n\nYour ans is\n \n      %f/%f=%f\n\n",a,b,c );
  		
			break;
		  }
  		
  		
  		
	  }
  	
  	
  if_else();
  if_else();
  if_else();
  if_else();
return 0 ;
}


void redak(){
	
	 char op2;
  printf("\nEnter the operator (like +,-,*,/) :  ");
  
  
  do {
  
  	scanf("%c",    &op2);
  	
  	if(op2=='+'||op2=='-'||op2=='*'||op2=='/'){
	  break ;
	  }
	  printf("\nPlease enter the valid operator :  ");
  }
  
  while(1);
  
  	
  	if(op2=='+'){
  	float num3,num4;
	printf("\nEnter you 1st number:");
scanf("%f",&num3);
	printf("\nEnter you 2nd number:");
	scanf("%f",&num4);
		printf ("\n\nYour ans is\n \n      %f+%f=%f\n\n",num3,num4,(num3+num4));
	  }else if(op2=='-'){
	  float num3,num4;
	printf("\nEnter you 1st number:");
scanf("%f",&num3);
	printf("\nEnter you 2nd number:");
	scanf("%f",&num4);
		printf ("\n\nYour ans is\n \n      %f-%f=%f\n\n",num3,num4,(num3-num4));
	  }else if(op2=='*'){
	  	float num3,num4;
	printf("\nEnter you 1st number:");
scanf("%f",&num3);
	printf("\nEnter you 2nd number:");
	scanf("%f",&num4);
		printf ("\n\nYour ans is\n \n      %f*%f=%f\n\n",num3,num4,(num3*num4));
	  }else if(op2=='/'){
	  float num3,num4;
	printf("\nEnter you 1st number:");
scanf("%f",&num3);
	printf("\nEnter you 2nd number:");
	scanf("%f",&num4);
		printf ("\n\nYour ans is\n \n      %f/%f=%f\n\n",num3,num4,(num3/num4));
		}
  
	
	
	
}

void if_else(){
	int re;
	printf("To continue press:1\nTo exit press:2\n");
	scanf("%d",&re);
	if(re==1){
		redak();
	}else if(re==2){
			printf("\n\n   Thank you\n");
	}else{
		  char op2;
  //printf("\nEnter the operator (like +,-,*,/) :  ");
  
  
  do {
  
  	scanf("%c",    &op2);
  	
  	if(op2=='+'||op2=='-'||op2=='*'||op2=='/'){
	  break ;
	  }
	  printf("\nPlease enter the valid operator :  ");
  }
  
  while(1);
  
  	
  	if(op2=='+'){
  	float num3,num4;
	printf("\nEnter you 1st number:");
scanf("%f",&num3);
	printf("\nEnter you 2nd number:");
	scanf("%f",&num4);
		printf ("\n\nYour ans is\n \n      %f+%f=%f\n\n",num3,num4,(num3+num4));
	  }else if(op2=='-'){
	  float num3,num4;
	printf("\nEnter you 1st number:");
scanf("%f",&num3);
	printf("\nEnter you 2nd number:");
	scanf("%f",&num4);
		printf ("\n\nYour ans is\n \n      %f-%f=%f\n\n",num3,num4,(num3-num4));
	  }else if(op2=='*'){
	  	float num3,num4;
	printf("\nEnter you 1st number:");
scanf("%f",&num3);
	printf("\nEnter you 2nd number:");
	scanf("%f",&num4);
		printf ("\n\nYour ans is\n \n      %f*%f=%f\n\n",num3,num4,(num3*num4));
	  }else if(op2=='/'){
	  float num3,num4;
	printf("\nEnter you 1st number:");
scanf("%f",&num3);
	printf("\nEnter you 2nd number:");
	scanf("%f",&num4);
		printf ("\n\nYour ans is\n \n      %f/%f=%f\n\n",num3,num4,(num3/num4));
		}
  
	
	}
	
}

/*#include<stdio.h>
void a1();
void a2();

int main()
{

char re;
	printf("To continue press:1\nTo exit press:2\n");
	scanf("%c",&re);
		switch (re){
  		
  		case'1' :{
  			
  			
  		char re2;
	printf("To continue press:1\nTo exit press:2\n");
	scanf("%c",&re2);
		switch (re2){
  		
  		case'1' :{
  			
  			
  		printf("\nfuck off           fuck off       fuck off      : \n ");
  			 
  	
			break;
		  }
		  case'2':{
		  	
		  
		  	 	printf("\n\n   Thank you\n");	
		
		  	 
		
			break;
		  }

}	
  			 
  	
			break;
		  }
		  case'2':{
		  	
		  
		  	 	printf("\n\n   Thank you\n");	
		
		  	 
		
			break;
		  }

}	
		

	return 0;
	
	
}
void a2(){
		
}
void a1(){

	
		
		
		
}*/


