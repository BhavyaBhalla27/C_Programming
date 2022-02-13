#include<stdio.h>
int main(){
    int n_students=3,n_subjects=3;
    int marks[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the marks of student %d in subject %d: ",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }

    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Marks of student %d in subject %d is %d\n",i+1,j+1,marks[i][j]);
        }

    
}
return 0;
}