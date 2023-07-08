#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main()
{
    
    /*
    this is the value session where the value are inputed at rest 
    */
    float height = 0.0;
    float weight = 0.0;
    float BMI = 0.0;
    
     /*
    this is my input session where users are allowed to input the value they want 
    */

    printf("What is your height: ");
    scanf("%f", height);
    printf("what is your weight: ");
    scanf("%f", weight);
    BMI = weight * 703 /(height * height);
    
     /*
    this is logic session where i calculate the value for BMI and know if the user is overweight 
    */

    if(BMI <= 29.5)
        printf("you are underweight %.2f. you should eat more", BMI);
    else if (BMI <= 29.5 && BMI >= 35.5)
        printf("you score is %.2f, you are eating well", BMI);
    else
    printf("your score is %f, visit the gym", BMI);

}







