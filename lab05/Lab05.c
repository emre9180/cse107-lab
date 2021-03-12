#include <stdio.h>



int main(){
	
	float kg;
	float meter;
	printf("Enter your weight (kg) :");
	scanf("%f",&kg);
	printf("Enter your height (m)) :");
	scanf("%f",&meter);
	
	float bmi;
	bmi = kg / (meter*meter);
	
	printf("\n");
	
	if (bmi<18.5) printf("Your BMI is %f. You are underweight.",bmi);
	
	else if (bmi>=18.5 && bmi<24.9) printf("Your BMI is %f. You are Healthy Weight.",bmi);
	
	else if (bmi>=25 && bmi<29.9)  printf("Your BMI is %f. You are Overweight.",bmi);
	
	else if (bmi>=30 && bmi<34.9) printf("Your BMI is %f. You are Obese (Class.1).",bmi);
	
	else if (bmi>=35 && bmi<39.9) printf("Your BMI is %f. You are Aeveraly Obese (Class.2).",bmi);
	
	else if (bmi>=40 && bmi<49.9) printf("Your BMI is %f. You are Morbidly Obese (Class.3).",bmi);
	
	else if (bmi>=50) printf("Your BMI is %f. You are Super Obese (Class.4).",bmi);
		 
	
	
	
}
