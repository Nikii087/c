//Employee info
#include "stdio.h"
#include "conio.h"

// variables  declaration
int emp_id, department_no;
char name[10], company_name[10];
float salary;

void getEmployee() {
	printf("\t **** Employee Info ****");
	printf("\n Enter id            : ");
	scanf("%d",&emp_id);
	printf("\n Enter Name          : ");
	scanf("%s",&name);
	printf("\n Enter  company      : ");
	scanf("%s",&company_name);
	printf("\n Enter  Salary       : ");
	scanf("%s",&salary);
	printf("\n Enter  department no : ");
	scanf("%s",&department_no);
}

void displayEmployee(){
    printf("\n >>> Employee Details <<<");
    printf("\n\t Id : %d",emp_id);
    printf("\n\t Name : %s",name);
    printf("\n\t Company Name : %S",company_name);
    printf("\n\t Salary : %f",salary);
    printf("\n\t Department no : %d",department_no);

}

//main
int main() {
    getEmployee();
    displayEmployee();

}
