#include<stdio.h>
int main () {
    float height;
    float weight;
    float BMI;
    int age;
    printf("\nEnter your age :");
    scanf("%d",&age);
    printf("\nEnter the height and weight : ");
    scanf("%f %f", &height, &weight);
     BMI = weight/(height * height);
      if(BMI < 18.5) {
        printf("\nUNDERWEIGHT !!");
      }
      else if(18.5 <= BMI < 25.0) {
        printf("\nNORMAL");
      }
      else {
        printf("\nOBESE !!");
      }
    if(BMI >=30.0 && age >40) {
        printf("\nYou should consult a doctor !");
    }
    return 0;
}
