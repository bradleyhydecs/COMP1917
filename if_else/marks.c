// This is a comment

#include <stdio.h>
#include <stdlib.h>

// our cases are:
//  - greater than 100
//  - less than 0
//  - greater than or equal to 50 
//  - less than 50

int main() 
{
    int mark; 
    printf("Please enter your mark: ");
    scanf("%d", &mark);   
    
    // be very careful how we order these!
    if (mark < 0 || mark > 100)
    {
        printf("ERROR\n") ;
        printf("ERROR\n") ;
        printf("ERROR\n") ;
        printf("ERROR\n") ;
        printf("ERROR\n") ;
    }
    else if (mark >= 50)
    {
        printf("PASS\n") ;
    }
    else (mark < 50)
    {
        printf("FAIL\n") ;
    }
    
    return EXIT_SUCCESS;
}







