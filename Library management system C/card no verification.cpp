#include<stdio.h>
#include<stdlib.h>
#include<string.h>
FILE *books_ptr,*lib_rec_ptr,*students_ptr;
void search_bookS();
void search_studentS();
void add_new_book();
void add_new_students();

int main(){
books_ptr=fopen("books_details.txt","a+");
students_ptr=fopen("students_details.txt","a+");
lib_rec_ptr=fopen("library_recc.txt","a+");
search_studentS();
//search_bookS();
//add_new_students();
fclose(students_ptr);
fclose(lib_rec_ptr);
}
void search_studentS(){
char ch;
char card_no[50];
char s1[10];
char s2[500];
char *res;
rewind(students_ptr);
printf("Enter card no\n");
gets(card_no);
while(!feof(students_ptr)){
    fgets(s2,500,students_ptr);
    res=strstr(s2,card_no);
    if(res){
        fputc('\n',lib_rec_ptr);
        fputc('\n',lib_rec_ptr);
        while((ch=fgetc(students_ptr))!='*'){
             fprintf(lib_rec_ptr,"%c",ch);
        }
        break;
    }
}
}
void search_bookS(){
char ch;
char book_code[50];
char s1[10];
char s2[500];
char *res;
rewind(students_ptr);
printf("enter book code\n");
gets(book_code);
while(!feof(books_ptr)){
    fgets(s2,500,books_ptr);
    res=strstr(s2,book_code);
    if(res){
        fputc('\n',lib_rec_ptr);
        while((ch=fgetc(books_ptr))!='#'){
             fprintf(lib_rec_ptr,"%c",ch);
        }
        break;
    }
}
}
void add_new_students(){   
char ch;
char num[10];
char card_no[10];
char names[30];
char clgs[50];
char rolls[10];
char dobs[10];
/*printf("Enter name\n");
gets(names);
printf("Enter collage name\n");
gets(clgs);
printf("Enter roll no\n");
gets(rolls);
printf("Enter date of birth\n");
gets(dobs);*/
fseek(students_ptr,-5,SEEK_END);
for(int i=0;(ch=fgetc(students_ptr))!='*';i++){
    num[i]=ch;
    printf("%d ",i);
    printf("%c\n",num[i]);
}
int tp=num[3]+1;
printf("n3 %d\n ",num[3]);
printf("tp is %d\n ",tp);
if(tp>=10){
    num[3]=tp-10;
    num[2]=num[2]+1;
    printf("%d ",num[3]);
    printf("%d ",num[2]);

}
for(int i=0;i<=3;i++){
    char ch2=num[i];
    // printf("%d ",ch2);
    //fprintf(students_ptr,"%c",ch2);
}fputc('*',students_ptr);
/*fputs("\nName:",students_ptr);fputs(names,students_ptr);
fputs("\nClg:",students_ptr);fputs(clgs,students_ptr);
fputs("\nRoll no:",students_ptr);fputs(rolls,students_ptr);
fputs("\ndate of birth:",students_ptr);fputs(dobs,students_ptr);*/
}

