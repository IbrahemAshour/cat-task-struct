
#include <stdio.h>
typedef struct employee{
    int salary;
    int bonus;
    int deductions;
}em ;

int main() {
em mohsen ;
em maged ;
em mariam;
printf("enter the salary ,bonus and deductions of mohsen :\n");
scanf("%d %d %d",&mohsen.salary,&mohsen.bonus,&mohsen.deductions);
 printf("enter the salary ,bonus and deductions of maged :\n");
 scanf("%d %d %d",&maged.salary,&maged.bonus,&maged.deductions);
    printf("enter the salary ,bonus and deductions of mariam :\n");
    scanf("%d %d %d",&mariam.salary,&mariam.bonus,&mariam.deductions);
    int T_salary=mohsen.salary + maged.salary + mariam.salary;
    int T_bonus=mohsen.bonus +maged.bonus + mariam.bonus;
    int T_deducations=mohsen.deductions + maged.deductions + mariam.deductions;
    printf("\n the salary of mohsen is : %d \n",(mohsen.salary + mohsen.bonus - mohsen.deductions));
    printf("\n the salary of maged is : %d \n",(maged.salary +maged.bonus -maged.deductions));
    printf("\n the salary of mariam is : %d \n",(mariam.salary +mariam.bonus -mariam.deductions));
    printf("\n the total team finance is %d \n",(T_salary + T_bonus -T_deducations));
 return 0;
}
;