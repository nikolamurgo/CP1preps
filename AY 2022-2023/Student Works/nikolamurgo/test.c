#include <stdio.h>

typedef struct{
    char name[20];
    char id[10];
    int age;
    int grades[5];
}Student;

void printStudent(Student student){
    printf("Name: %s\n", student.name);
    printf("ID: %s\n", student.id);
    printf("Age: %d\n", student.age);
    printf("Grades: ");
    for(int i=0; i<5; i++){
        printf("%d ", student.grades[i]);
    }
}

int main(int argc, char const *argv[]){

    Student ucenikOne, ucenikTwo;

    printf("Enter name: ");
    scanf("%s", ucenikOne.name);
    printf("Enter ID: ");
    scanf("%s", ucenikOne.id);   
    printf("Enter age: ");
    scanf("%d", &ucenikOne.age);

    printf("Enter grades: ");
    for(int i=0; i < 5; i++){
        scanf("%d", &ucenikOne.grades[i]);
    }

    printf("Enter name: ");
    scanf("%s", ucenikTwo.name);
    printf("Enter ID: ");
    scanf("%s", ucenikTwo.id);   
    printf("Enter age: ");
    scanf("%d", &ucenikTwo.age);

    printf("Enter grades: ");
    for(int i=0; i < 5; i++){
        scanf("%d", &ucenikTwo.grades[i]);
    }

    printStudent(ucenikOne);
    printf("\n");
    printStudent(ucenikTwo);

    return 0;
}