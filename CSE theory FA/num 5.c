#include<stdio.h>
#include<stdlib.h>
void main(){
FILE *fp1,*fp2;
char s[80],t[80],ch;
printf("Enter input file name (a.txt):\n");
gets(s);
printf("Enter output file name (b.txt):\n");
gets(t);
fp1=fopen (s,"r");

fp2=fopen (t,"w");
if(fp1== NULL || fp2== NULL){
    printf("Error..");
    return;
    }
while(1==1){
 ch=fgetc(fp1);
  if(ch == EOF) break;
  ch=toupper(ch);
 fputc(ch,fp2);
}
 printf("Done!");
fclose(fp1);
fclose(fp2);
}
