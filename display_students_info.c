/*
Name: Njogu Cynthia Wangui.
REG number:PA106/G/29296/25.
Description:Checking student results.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student
{
	char name [30];
	char reg_no[20];
	float total_marks;
};

int main()
{
	FILE *fptr;
	struct Student s;
	
	fptr = fopen("C:\\Users\\User\\Desktop\\c-programs\\results.dat" ,"rb");
	
	if (fptr == NULL)
	{
		printf("Error opening file!\n");
		return 1;
	}
	
	printf("STUDENTS EXAM RESULTS \n");
	
	while(fread(&s , sizeof(struct Student) ,1 ,fptr) == 1)
	{
		printf("Name: %s\n " ,s.name);
		printf("Registration Number: %s\n " ,s.reg_no);
	 	printf("Total marks: %.2f\n\n " ,s.total_marks);		
	}
	
	fclose(fptr);
	
	return 0;

}
