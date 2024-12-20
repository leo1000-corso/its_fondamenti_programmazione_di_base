#include <stdio.h>
// mian function - the entry point
// the return value of the main is an integer
int main()
{
    //print the message "Hello world!!!" to the console
    // \n is the shortcut for new linw
    printf("Hello world!!!\n");

    //variable of 32 chars
    char name[32];

    // ask for aa name
    printf("Enter a name:\n");

    // read the input of the user
    scanf("%s", name);

    //print the message wtih the name entered
    printf("\nHello\t%s\n\n\n", name);
    
    /* return 0: indicated that program is terminated succesfully */

    return 0;
}