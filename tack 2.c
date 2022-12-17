
#include <stdio.h>
#define N 1 //number of students
#define password 789789 //password maniuall

typedef struct {
    float D_programing;
    float D_data;
    float D_math;
    float D_algorithms;
     int  ID;
}student ;

int main() {
    int pass, id ,choice;
    printf("enter the passowrd os system :");
    scanf("%d", &pass);
    if (pass == password) {
        student st[N];

        for (int i = 0; i < N; i++) {
            printf("enter The ID of Student %d \n", i + 1);
            scanf("%d", &st[i].ID);
            printf("enter The programing degree of Student %d \n", i + 1);
            scanf("%f", &st[i].D_programing);
            printf("enter The Data Structure degree of Student %d \n", i + 1);
            scanf("%f", &st[i].D_data);
            printf("enter The Direct Maths degree of Student %d \n", i + 1);
            scanf("%f", &st[i].D_math);
            printf("enter The Algorithms degree of Student %d \n", i + 1);
            scanf("%f", &st[i].D_algorithms);
        }
        printf("the student degree are successfully added \n");

        for (int i = 0; i <= N; i++) {/*to check if id is correct or not*/
            printf("enter the student id which need to  change his degree :\n");
            scanf("%d", &id);
            if (st[i].ID == id) {
                printf("enter the code of subject {0}programing ,{1} data structure ,{2}direct math ,{3} algorithms");
                scanf("%d",&choice);
                switch (choice) {
                    case 0: {
                        printf("enter the degree of programing :");
                        scanf("%f", &st[i].D_programing);
                        break;
                    }
                    case 1: {
                        printf("enter the degree of data structure :");
                        scanf("%f", &st[i].D_data);
                        break;
                    }
                    case 2: {
                        printf("enter the degree of direct math :");
                        scanf("%f", &st[i].D_math);
                        break;
                    }
                    case 3: {
                        printf("enter the degree of algorithms :");
                        scanf("%f", &st[i].D_algorithms);
                        break;
                    }
                }
                printf("\n the degree of student with  ID {%d} after editing\n", st[i].ID);
                printf(" The programing degree of Student of  is : %.3f \n", st[i].D_programing);
                printf(" The Data Structure degree of Student of  is : %.3f \n", st[i].D_data);
                printf(" The Direct Maths degree of Student of  is : %.3f \n", st[i].D_math);
                printf(" The Algorithms degree of Student of  is : %.3f \n", st[i].D_algorithms);

            }else printf("in correct id \n");

        }
    }else printf("in correct password");
 return 0;
}
