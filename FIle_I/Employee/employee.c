// A filed named employee.txt stores name, employee id and employee salary.

#include <stdio.h>

struct employee
{
    int empid;
    char name[20];
    int salary;
};

int main(){
    FILE *fp;
    struct employee e[48],temp;
    int i,j,n;
    fp = fopen("employee.txt","r");
    if(fp==NULL){
        printf("Error!!!");
        exit(1);
    }
    for(i=0;i<48;i++){
        fscanf(fp,"%d %s %d",&e[i].empid,e[i].name,&e[i].salary);
    }
    for(i=0;i<48;i++){
        for(j=i+1;j<48;j++){
            if(e[i].salary<e[j].salary){
                temp=e[i];
                e[i]=e[j];
                e[j]=temp;
            }
        }
    }

    printf("Employee details in descending order of salary");
    for(i=0;i<48;i++){
        printf("%d %s %d",e[i].empid,e[i].name,e[i].salary);
    }
    fclose(fp);
    return 0;
}
