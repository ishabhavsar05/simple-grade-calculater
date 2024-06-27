//Further, extend the program to check eligibility for the next level based on the grade using an
//if-else statement. Print ‘Congratulations! You are eligible for the next level’ if the grade is from
//‘A’ to ‘D’. Print ‘Please try again next time’ if the grade is ‘F’.

#include<stdio.h>
#include<conio.h>

main()
{
//	char grade;
//	printf("Enter the grade:");
//	scanf("%c",&grade);
//	
//	if(grade>='A' && grade<='D')
//	{
//		printf("Congratulations! You are eligible for the next level"); 
//    }
//    else
//    {
//    	printf("Please try again next time");
//	}

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
		    printf("Excellent work!\n");
    	    break;
    	case 'B':
		    printf("Well done\n");
    	    break;
    	case 'C':
		    printf("Good Job\n");
    	    break;
    	case 'D':
		    printf("You passed, but you could do better\n");
    	    break;
    	case 'F':
		    printf("Sorry, you failed\n");
    	    break;
    	
    	default:printf("invalid grade");
	}
	
	if(grade>='A' && grade<='D')
	{
		printf("Congratulations! You are eligible for the next level"); 
    }
    else
    {
    	printf("Please try again next time");
    }
}
