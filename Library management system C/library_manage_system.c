#include<stdio.h>
#include<stdlib.h>
#include<string.h>
FILE *books_ptr,*lib_rec_ptr,*students_ptr; 
void search_book();
void search_student();
void add_new_book();
void add_new_student();
void give_books();
void take_books();
void optionshow();
 
int exit_flg=0;
int main(){ 
books_ptr=fopen("books_details.txt","a+");
students_ptr=fopen("students_details.txt","a+");
lib_rec_ptr=fopen("library_recc.txt","a+");

int x;
do{
   optionshow(); 
scanf("%d",&x);
   switch (x){
 case 1:
 give_books();

 break;
 case 2:
 printf("this is run is case 4");
 break;
 case 3:
 break;
 case 4:
 add_new_book();
 break;
 case 5:
search_student();
 break; 
 case 6:
search_book();
 break;

} 
}
while(x!=9);

//

//
//

//
printf("\nthe end");
fclose(students_ptr);
fclose(lib_rec_ptr);
fclose(books_ptr);

}
void search_student(){
char ch;
char card_no[50];
char s1[10];
char s2[500];
char *res;
rewind(students_ptr);
printf("Enter student's card no\n");
// gets(card_no);
scanf("%s",card_no);
while(!feof(students_ptr)){
    fgets(s2,500,students_ptr);
    res=strstr(s2,card_no);
    printf("%s\n",res);
    if(res){printf("%s\n",res);
        fputc('\n',lib_rec_ptr);
        fputc('\n',lib_rec_ptr);
        while((ch=fgetc(students_ptr))!='*'){
             fprintf(lib_rec_ptr,"%c",ch);
             printf("%c",ch);
        }
        break;
    }/*else{
        printf("Please enter valide card no");
        exit_flg=1;
        break;
    }*/
}
}
void search_book(){
char ch;
char book_code[50];
char s1[10];
char s2[500];
char *res;
rewind(students_ptr);
printf("\nEnter book code:\n");
//gets(book_code);
scanf("%s",book_code);
while(!feof(books_ptr)){
    fgets(s2,500,books_ptr);
    res=strstr(s2,book_code);
    if(res){
        fputc('\n',lib_rec_ptr);
        while((ch=fgetc(books_ptr))!='#'){
             fprintf(lib_rec_ptr,"%c",ch);
             printf("%c",ch);
        }
        break;
    }
   /* else{
        printf("Please enter valide books code");
        exit_flg=1;
        break;
    }*/
}
}
void give_books(){
    char yes;
    int val1,val2;
    search_student();search_book();
    if(exit_flg!=1){
        
        printf("\n\nPress'y'for confirmation:\nPress'c'for cancle:");
    scanf("%c",yes);
    if(yes=='y'){
        printf("\nBook Succesfull given to the card holder no:\n");
    }if(yes=='c'){
        printf("\nProcess Succesfull cancle:\n");
    }

    }else{
        printf("\nthank you\n");
    }
}

void add_new_student(FILE *students_ptr){   
char ch;int num_card=0;
char num[10];
char card_no[10];
char names[30];
char clgs[50];
char rolls[10];
char dobs[10];

printf("Enter name:\n");fflush(stdin);
gets(names);
printf("Enter collage name:\n");fflush(stdin);
gets(clgs);
printf("Enter roll no;\n");fflush(stdin);
gets(dobs);
printf("Enter date of birth:\n");fflush(stdin);
gets(rolls);fflush(stdin);
/*fseek(students_ptr,-5,SEEK_END);

for(int i=0;(ch=fgetc(students_ptr))!='#';i++){
    num[i]=ch;
}  
num_card=atoi(num);
num_card=num_card+1;
    
fputs("\nbkl",students_ptr);
fprintf(students_ptr,"%d",num_card);*/
fputs("\nName:",students_ptr);fputs(names,students_ptr);
fputs("\nClg:",students_ptr);fputs(clgs,students_ptr);
fputs("\nRoll no:",students_ptr);fputs(dobs,students_ptr);
fputs("\ndate of birth:",students_ptr);fputs(rolls,students_ptr);
/*fputs("\nCard no:",students_ptr);
fputs("\nbkl",students_ptr);
fprintf(students_ptr,"%d",num_card);
fputc('*',students_ptr);*/
}
void add_new_book(){ 
char ch;int num_card=0;
char num[10];
char book_no[10];
char title[50];
char writer[100];
char publishs[10];
char nbooks[10];
printf("Enter Books Title:\n");
fflush(stdin);
gets(title);

printf("Enter Writer name:\n");
fflush(stdin);
gets(writer);
printf("Enter Publish year:\n");
fflush(stdin);
gets(publishs);
printf("Enter how many copies:\n");
fflush(stdin);
gets(nbooks);
fflush(stdin);
/*fseek(students_ptr,-4,SEEK_END);

for(int i=0;(ch=fgetc(students_ptr))!='*';i++){
    num[i]=ch;
}  
num_card=atoi(num);
num_card=num_card+1;

fputs("\n\nboc",books_ptr);
fprintf(books_ptr,"%d",num_card);*/
fputs("\nTitle:",books_ptr);fputs(title,books_ptr);
fputs("\nWriter:",books_ptr);fputs(writer,books_ptr);
fputs("\nPublish:",books_ptr);fputs(publishs,books_ptr);
fputs("\nNo of books available:",books_ptr);fputs(nbooks,books_ptr);
/*fputs("\nSerial No::",books_ptr);
fputs("boc",books_ptr);
fprintf(books_ptr,"%d",num_card);
fputc('#',books_ptr);*/
}
void optionshow(){
printf("\n\tTo give a book Press 1:\n"); 
printf("\tTo take a book back Press 2:\n");
printf("\tTo add a new member Press 3:\n");
printf("\tTo add a new book Press 4:\n");
printf("\tTo know the members details Press 5:\n");
printf("\tTo know the books details Press 6:\n");
printf("\tTo exit Press 9:\n");

}