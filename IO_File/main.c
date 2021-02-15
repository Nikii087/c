#include <stdio.h>
#define size 2
int age[size];
char name[size][10], city[size][10];

// creating file pointer to work with files
FILE *fptr;

/*
**** console IO oprations
*/

//read from console
void read_user(){
    for(int i = 0; i < size ; i++){
        printf("\n\t Enter Name ");
        scanf("%s", &name[i]);
        //printf("%s", name[i]);
        printf("\n\t Enter City ");
        scanf("%s", &city[i]);
        printf("\n\t Enter age ");
        scanf("%d", &age[i]);
        printf("\n\t ----------------");
    }
}

//display on console
void display_user(){
    printf("\n\t All Records");
    for(int i = 0; i < size ; i++){
        printf("\n\t Name : \t%s", name[i]);
        printf("\n\t City : \t%s", city[i]);
        printf("\n\t Age  : \t%d", age[i]);
        printf("\n\t ----- *** -----");
    }
}

/*
**** File IO oprations
*/
void writeOnFile(){
    // opening file in writing mode
    fptr = fopen("program.txt", "w+");
    // exiting program
    if (fptr == NULL) {
        printf("Error!");
        exit(1);
    }
    for(int i = 0; i < size ; i++){
        fprintf(fptr,"\n\t Name : \t%s", name[i]);
        fprintf(fptr,"\n\t City : \t%s", city[i]);
        fprintf(fptr,"\n\t Age  : \t%d", age[i]);
        fprintf(fptr,"\n\t ----- *** -----");
    }
}

void readOnFile() {

}

int main()
{
    read_user();
    display_user();

    //on file oprations
    writeOnFile();
    readOnFile();

    //close file pointer
    fclose(fptr);

    return 0;
}
