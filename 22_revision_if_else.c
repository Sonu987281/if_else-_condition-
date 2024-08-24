// write  an program to print eligible for vote 

#include<stdio.h>
int main()
{
    int age;
    printf(" enter an age:");
    scanf(" %d",&age);

    if ( age>=18)
    {
        printf("adult \n");
        printf(" they can eligible for vote: \n");

    }

    else
    {
        printf(" not adult: \n");
        printf("  they can not eligibele for vote:  \n");
    }

    printf("  thank you :\n");
    return 0;
}



// write a program to print students marks 


#include<stdio.h>
int main()
{
    int marks;

    printf(" enter an marks:");
    scanf(" %d",&marks);


    if ( marks>=90 && marks<=100)
    {
        printf(" the grade is A+\n");
        printf(" excillent\n");
    }
    else if ( marks>=80 &&  marks<90)
    {
        printf(" the grade is A\n");
        printf(" very good \n");
    }
    else if ( marks>=70 && marks<80)
    {
        printf(" the grade is B+\n");
        printf(" good \n ");
    }
    else if ( marks>=60 && marks<70)
    {
        printf(" the grade is B\n");
        printf(" nice\n");
    }
    else if (marks>=50 && marks<=60 )
    {
        printf(" the grade is C \n");
    }
    else if ( marks>=33 && marks<50)
    {
        printf(" the grade is D");
    }

    else  if ( marks<=33)
    {
        printf( "babua is fail\n" );
        printf(" be tried ");
    }
    printf(" thanks buddy \n");

    return 0;
}


// by using ternary operator wap to print adult and not adult 


#include<stdio.h>
int main()
{
    int age;
    printf(" enter an age:");
    scanf(" %d",&age);

    age>= 18 ? printf(" adult \n") : printf(" not adult \n"); // ternary operator 


    return 0;
}


// awap  to  print positive number and even and odd 


#include<stdio.h>
int main()
{
    int number ;
    printf(" enter an number: ");
    scanf(" %d",&number);

    if( number >=0)
    {
        printf(" the number iss positive \n");

    }
     if( number %2 == 0)
    {
        printf(" the number is even:\n");

    }

    else  
    {
        printf("  the number negative\n ");
        printf(" the number is odd \n");

    }
    return 0;
}

