//Develop a program that takes a score out of 100 as input from the user and calculates the
//corresponding grade using a ternary operator. Allocate grades from A to F for various ranges.

#include<stdio.h>
#include<conio.h>

main()
{
	int score;
	printf("Enter the score:");
	scanf("%d",&score);
	
	char grade;
	
	grade= (score>=90)? 'A' :
		   (score>=70)? 'B' :
		   (score>=50)? 'C' :
		   (score>=30)? 'D' : 'F';
    
    printf("your grade is:%c\n",grade);
}
