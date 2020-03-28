#include <stdio.h>
#define RECORDS 100

struct Record
{
	int accoutNum;
	char toolName[20];
	int amount;
	double cost;
};

void update(int number, FILE *ptr, struct Record *pointer);

int main()
{
	FILE *fPtr;
	struct Record Hardwares = {0, "", 0, 0.0};
    struct Record *rp;
    rp = &Hardwares;

	if ((fPtr = fopen("hardware.dat", "w")) == NULL ){
		printf ("The file cannot be opened.");
	}
	else{
		for (int i = 0; i < RECORDS; i++){
			fprintf(fPtr,"%d %s %d %lf\n",Hardwares.accoutNum, Hardwares.toolName, Hardwares.amount, Hardwares.cost);
		}
		fclose(fPtr);
	}

	if((fPtr = fopen("hardware.dat", "r+")) == NULL){
        printf("The file cannot be opened.");
    }
    else{
        update(3, fPtr, rp);
        update(17, fPtr, rp);
        update(24, fPtr, rp);
    }
    fclose(fPtr);

	return 0;
 }

 void update(int number, FILE *ptr,  struct Record *pointer)
 {
     rewind(ptr);
     printf("Please enter the information of tools:");
     fscanf(stdin,"%d %s %d %lf", pointer->accoutNum, pointer->toolName, pointer->amount, pointer->cost);
     fseek(ptr, number * sizeof(struct Record), SEEK_SET);
     fwrite(pointer, sizeof(struct Record), 1, ptr);
 }
