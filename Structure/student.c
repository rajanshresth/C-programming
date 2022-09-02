//A structure named student that has name,rollno and marks.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct student{
    char name[20];
    int rollno;
    int marks;
};

int main(){
    struct student s[100];
    read(s);
    display(s);
    // average(s);
    return 0;
}

int read(struct student s[10]){
    for(int i=0;i<10;i++){
        printf("Enter the name, rollno and marks of student %d: ", i+1);
        scanf("%s%d%d", s[i].name, &s[i].rollno, &s[i].marks);
    }
    return 0;
}

int display(struct student s[10]){
    printf("\nName\tRollno\tMarks\n");
    for(int i=0;i<10;i++){
        printf("%s \t %d \t %d\n", s[i].name, s[i].rollno, s[i].marks);
    }
    return 0;
}
/* int average(struct student s[10]){
    int sum=0;
    for(int i=0;i<10;i++){
        sum=sum+s[i].marks;
    }
    printf("\nAverage of marks is: %d", sum/10);
    return 0;
} */
