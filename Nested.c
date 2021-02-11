#include "stdio.h"
#include "conio.h"
#include "malloc.h"
#include "string.h"

//department structure
typedef struct {
    int dept_no;
    char dept_name;
    float fees;
}Department;
//student structure
typedef struct {
    int rollno;
    char *name;
    char *college;
    Department dept ;

}*Student;


/*
*** Global functions ...
*/
int getLimit(){
    int limit;
    printf("\n\tEnter Limit : \t");
    scanf("%d", &limit);
    return limit;
}

Student getStudent(int limit){
    Student std;
    Department dept;


    printf("\nEnter Roll no : \t");
    scanf("%d", &std->rollno);
    printf("\nEnter Name    : \t");
    scanf("%d", &std->name);
    printf("\nEnter College : \t");
    scanf("%d", &std->college);
    return std;
}


//main body
int main(){
    int ch, limit,i;
    Student stud;

    do{
        printf("\n\t *** MENU **** \n\t-------------------");
        printf("\n\t 1 : Insert Students info");
        printf("\n\t 2 : Insert Students info");
        printf("\n\t 3 : Get All Students info");
        printf("\n\t 4 : Get All IT Students info");
        printf("\n\t 5 : Get All Medical Students info");
        printf("\n\t 6 : Get All Math Students info");
        printf("\n\t 7 : Exit");
        printf("\n\t   ---~~~***~~~---");

        printf("\n\t Enter your choice : \t");
        scanf("%d",&ch);
        switch(ch){
            case 1 :{
                limit = getLimit();
                stud = (Student *) malloc (sizeof(Student) * limit);
                break;
            }//end of case 1
            case 2 :
                printf("\n\t Enter %d Students info.", limit);

                if(stud){

                }else
                    printf("Memory allocation error...");
            break;
        }//end of switch

    }while(ch);
    return 0;
}
