#include<stdio.h>

int main()
{
 	int i, j, rows, columns, a[10][10], Sum = 0;

 	printf("Enter Number of rows:  ");
 	scanf("%d", &i);
 	printf("Enter number of coloumn: ");
 	scanf("%d", &j);

 	printf("\nEnter the Matrix Elements:");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}

 	for(rows = 0; rows < i; rows++)
  	{
   		Sum = Sum + a[rows][rows];
  	}

 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );

 	return 0;
}
