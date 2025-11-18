#include<stdio.h>
#include<stdlib.h>

struct Employee{
int id;
char name[50];
float salary;
};

int main(){
int i,n;
float sum=0;

printf("enter the no of employees");
scanf("%d",&n);
struct Employee *emp = (struct Employee *)malloc(n * sizeof(struct Employee));
if (emp==NULL){
printf("MEMEORY ALLOCATION FAILED");
}
for (i = 0; i < n; i++) {
printf("\nEnter details of employee %d\n", i + 1);

printf("id: ");
scanf("%d", &emp[i].id);

printf("Name: ");
scanf("%s", emp[i].name);

printf("Salary: ");
scanf("%f", &emp[i].salary);

sum+= emp[i].salary;
}
printf("the total salary is %f\n" ,12*sum);

}
