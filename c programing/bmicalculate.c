#include<stdio.h>
void main()
{
    float height, weight;
    printf("enter the height in meters:");
    scanf("%f",&height);
    printf("enter the weight in kgs:");
    scanf("%f",&weight);
    float BMI = weight / height*height;
    printf("BMI =%f\n",BMI);
    if(BMI < 15)
    printf("starvation");
    else if(BMI >= 15.1 && BMI <= 17.5)
    printf("anorexic");
    else if(BMI >= 17.6 && BMI <= 18.5)
    printf("underweight");
    else if(BMI >= 18.6 && BMI <=24.9)
    printf("ideal");
    else if(BMI >= 25 && BMI <= 25.9)
    printf("over weight");
    else if("BMI >= 30 && BMI<=30.9")
    printf("obese");
    else if(BMI >= 40)
    printf("Morbidity Obese");
}