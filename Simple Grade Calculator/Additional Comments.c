//Extend the program to provide additional comments based on the grade using a switch-case
//statement. For example, if the grade is ‘A’, then print ‘Excellent work!’. If the grade is ‘B’, then
//print ‘Well done’. If the grade is ‘C’, then print ‘Good job’. If the grade is ‘D’, then print ‘You
//passed, but you could do better’. And if the grade is ‘F’, then print ‘Sorry, you failed’.

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
    
    printf("your Grade is:%c\n",grade);
    
    
    switch(grade)
    {
    	case 'A':
		    printf("Excellent work!");
    	    break;
    	case 'B':
		    printf("Well done");
    	    break;
    	case 'C':
		    printf("Good Job");
    	    break;
    	case 'D':
		    printf("You passed, but you could do better");
    	    break;
    	case 'F':
		    printf("Sorry, you failed");
    	    break;
    	
    	default:printf("invalid grade");
	}
}
