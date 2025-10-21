#include<stdio.h>
int main () {
    int age;
    char c_status;
    char c_record;
    printf("\nEnter your age : ");
    scanf("%d",&age);
    printf("\nEnter your citizenship status : ");
    scanf("%c",&c_status);
    printf("\nEnter your criminal record : ");
    scanf("%c",&c_record);
    if(age >= 18 && c_status == 'Y' && c_record == 'N' ) {
        printf("\nEligible to be a citizen.");
    }
    else {
        printf("\nNot eligible to be a citizen.");
    }
    if(age >= 60) {
        printf("\nSenior citizen eligible ");
    }
    else {
    printf("\nSenior citizen  not eligible ");
    }
    return 0;
}
