#include <stdio.h>

int main()
{
    int marks;
    int division;
    printf("Enter the marks:");
    scanf("%d", &marks);

    if (marks >= 60)
    printf("First divison\n");


    else
    {
        if (marks >= 50)
        {
            printf("Second divsion\n");  
        }
        

        else
        {
            if (marks >= 40)
            {
                printf("Third division\n");
            }

            else
            printf("Fail\n");
        }
        

    }













    return 0;
}