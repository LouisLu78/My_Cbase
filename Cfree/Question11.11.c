# include <stdio.h>

struct person{
    char lastname[15];
    char firstname[15];
    char age[4];
};

main()
{
    int i;
    struct person Customer = {"unsigned","","0"};
    FILE *fPtr;

    if((fPtr = fopen("nameage.dat", "w")) == NULL){
        printf("The file cannot be opened.");
    }
    else{
        for (i = 0; i < 100; i++){            
            fprintf(fPtr, "%s %s %s\n", Customer.lastname, Customer.firstname, Customer.age);
        }
        fclose(fPtr);
    }/*end of part a */

    if((fPtr = fopen("nameage.dat", "r+")) == NULL){
        printf("The file cannot be opened.");
    }
    else{
        for (i = 0; i < 10; i++){
        printf("Please enter the information of clients:"); 
        scanf("%s%s%s", Customer.lastname, Customer.firstname, Customer.age);
        fprintf(fPtr, "%s %s %s\n", Customer.lastname, Customer.firstname, Customer.age);
        }
        fclose(fPtr);
    }/*end of part b */

    return 0;
}
