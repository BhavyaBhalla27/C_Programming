#include<stdio.h>
int main(){
    char st[6] = "Bhavya";
    char st1[6];
    int i=0;
    for(i=0;i<6;i++){
        st1[i] = st[i];
           }
    st1[i]='\0';
    printf("The value of st1 is %s",st1);
    return 0;
}