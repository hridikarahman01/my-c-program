#include<stdio.h>
#include<string.h>
int main(){
   int i,j;
   char str[25][25],temp[25];

   puts("Enter three words: ");
   for(i=0;i<=2;i++)
      gets(str[i]);
   for(i=0;i<=2;i++)
      for(j=i+1;j<=3;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("Sorted result:\n");
   for(i=0;i<=2;i++)
      puts(str[i]);

   return 0;
}
