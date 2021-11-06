#include<stdio.h>

int main(){
    
    // int length, bredth, area;
    // Area of reactangle with hardcoded values
    // length = 22;
    // bredth = 10;
    // area = length*bredth; 
    // printf("area of rectangel is %d", area);
    // Output :: area of rectangel is 220 
    
    // With user input
    // printf("enter the length of rectangle = ");
    // scanf("%d", &length);
    // printf("enter the bredth of rectangle = ");
    // scanf("%d", &bredth);
    // printf("Area of rectangle = %d", length * bredth);
    // Output:: Area of rectangle = 242




    // Area of circle and volume of cylinder
    // int radius;
    // float pi = 3.14;
    // printf("enter the radius of circle\n");
    // scanf("%d", &radius);
    // printf("Area of circle = %f\n", pi * radius * radius);
    // int height;
    // printf("enter the Height of Cylinder\n");
    // scanf("%d", &height);
    // printf("Voluem of cylinder = %f\n", pi * radius * radius * height);


    // Celsius to Fahrenheit
    // float celcuius;
    // float fahrenheit;
    // printf("Enter celcius \n");
    // scanf("%f", &celcuius);
    // fahrenheit = ((celcuius * 9)/5) + 32;
    // printf("Temprature in Fahrenheit = %f", fahrenheit);

    // calculate simple interest for a set of values representing principle, no of years, and rate of interest.
    // int principle, rate, years;
    // printf("Enter principle value \n");
    // scanf("%d", &principle);
    // printf("Enter rate \n");
    // scanf("%d", &rate);
    // printf("Enter time in years\n");
    // scanf("%d", &years);
    // int simpleInterest = (principle * rate * years)/100;
    // printf("Interes money = %d\n", simpleInterest);
    // printf("Total money = %d", principle+simpleInterest);


    // Practice for the Control instructions
    /*
        which is invalid
        i) int a; b = a; // invalid because b is not declared means int or float...
        ii) int v = 3^3; // valid because its bitwise operator in C
        iii) char dt = '21idi' //Invalid because char only have one char

        what datatype this will return 3.0/8 - 2 (this will return double because most of the compiler return double in this of statement) float is also true but double is more valid.

    */

    //  A program to check number is divisible by 97 or not;
    // int dividend;
    // printf("Enter Number you want to check division with the 97 \n");
    // scanf("%d", &dividend);
    // We will check if 0 then divisible if not then not divisble 
    // printf("Divisble test : %d", dividend % 97);
    // but we will do with if else in further steps
    

    /* Explain step by step evaluation of  3*x/y-z+k where x =2, y=3, z=3, k =1
    3*2 = 6/3 = 2-3 = -1 +1 = 0
    */
    // int x =2, y=3, z=3, k =1;
    // printf("vlaue is : %d\n", 3*x/y-z+k);
    //Output : vlaue is : 0

    // 3.0 + 1 will be i) int ii) float iii) char
    // my Answer float

    // >>>>>>--------------------<<<<<<<<<<<<<<<<<,

    // program to find student pass or fail if it requires a total of 40% and at least 33% in each subject to pass.
    // int obtainedMarks, studentMarks, MathMarks, hindiMarks, punjabiMarks;
    // printf("Enter Marks in Punajbi subjects\n");
    // scanf("%d", &punjabiMarks);
    // printf("Enter Marks in Hindi subjects\n");
    // scanf("%d", &hindiMarks);
    // printf("Enter Marks in Math subjects\n");
    // scanf("%d", &MathMarks);

    // studentMarks = MathMarks + hindiMarks + punjabiMarks;
    // printf("Total Marks :%d\n", studentMarks);
    // float percentage = (studentMarks/3);//3 because we assume only three sunjects are there
    // // printf("%f", percentage);
    // if((percentage <= 40) || hindiMarks < 33 || MathMarks < 33 || punjabiMarks < 33 ){
    //     printf("You are fail in the exam and your total percentage is %f\n", percentage);
    // }else{
    //     printf("You are Pass in the exam and your total percentage is %f\n", percentage);
    // }

    /*
    Calculate income tax paid by an employee to the government as per the slabs mentioned below:
        Income Slab	Tax
        2.5L-5.0L	5%
        5.0L-10.0L	20%
        Above 10.0L	30%
        Note that there is no tax below 2.5L. Take income amount as an input from the user.
    */
    // float salary, tax;
    // printf("Enter You salary\n");
    // scanf("%f", &salary);
    // if(salary > 250000 && salary <= 500000){
    //     tax += 0.05*(salary-250000);
    // }
    // if(salary > 500000 && salary <= 1000000){
    //     tax += 0.20*(salary-500000);
    // }
    // if(salary > 1000000){
    //     tax += 0.30*(salary-1000000);
    // }
    // printf("Your have to pay tax %f amount", tax);


    // Leap year finder 
    // int enteredYear;
    // printf("Enter Year You want to find\n");
    // scanf("%d", &enteredYear);

    // if(enteredYear % 4 == 0){
    //     if((enteredYear % 100)%2 == 0){
    //         if(enteredYear % 400 == 0){
    //             printf("%d year is a leap year1\n", enteredYear);
    //         }else{
    //             printf("%d year is not a leap year1\n", enteredYear);
    //         }
    //     }else{
    //         printf("%d year is a leap year2\n", enteredYear);    
    //     }

    // }else{
    //     printf("%d year is not a leap year2", enteredYear);
    // }

    // character entered by the user is lowercase or not.

    // char ch;
    // printf("Enter a character");
    // // 97-122 asci for lower character
    // scanf("%c", &ch);
    // if(ch>=97 && ch <= 122){
    //     printf("%c is a lowercase character", ch);
    // }
    // else{
    //     printf("%c is not a lowercase character", ch);
    // }


    // greatest of four numbers

    // int num1, num2, num3, num4;
    // printf("Enter number 1\n");
    // scanf("%d", &num1);
    
    // printf("Enter number 2\n");
    // scanf("%d", &num2);

    // printf("Enter number 3\n");
    // scanf("%d", &num3);

    // printf("Enter number 4\n");
    // scanf("%d", &num4);

    // if(num1 >= num2){
    //     if(num1 >= num3){
    //         if(num1 >= num4){
    //             printf("%d is greater", num1);
    //         }else{
    //             printf("%d is greater", num4);
    //         }
    //     }else{
    //         if(num3 >= num4){
    //             printf("%d is greater", num3);
    //         }else{
    //             printf("%d is greater", num4);
    //         }
    //     }

    // }else if(num2 >= num3){
    //     if(num2 > num4){
    //         printf("%d is greater", num2);
    //     }else{
    //         printf("%d is greater", num4);
    //     }
    // }else if(num3 >= num4){
    //     printf("%d is greater", num3);
    // }else{
    //     printf("%d is greater", num4);
    // }

    // loop practice sets
    // Write a program to print the multiplication table of a given number n.
    // int num;
    // printf("Enter Number\n");
    // scanf("%d", &num);
    // printf("Table of %d \n", num);
    // int i = 1 ;
    // while(i <= 10){
    //     printf("%d \n", num*i);
    //     i++;
    // }

    // Write a program to print a multiplication table of 10 in reversed order
    // int i;
    // int num = 10;
    // printf("table of 10 in reverse order:\n");
    // for(i = 10; i ; i--){
    //     printf("%d\n", 10*i);
    // }

    // Write a program to sum the first ten natural numbers using a while loop.
    // int i = 1;
    // int sum = 0;
    // while(i <= 10){
    //     sum += i;
    //     i++;
    // }
    // printf("Sum of first 10 natural number %d\n", sum);

    // Write a program to implement program 5 using for and do-while loop.
    // int i = 1;
    // int sum = 0;
    // do{
    //     sum += i;
    //     i++;
    // }while(i <= 10);

    // printf("Sum of first 10 natural number %d\n", sum);

    //  Write a program to calculate the sum of the numbers occurring in the multiplication table of 8
    
    // int num, sum = 0;
    // printf("Enter Number:\n");
    // scanf("%d", &num);
    // for (int i = 1; i <= 10; i++)
    // {
    //     sum += (num*i);
    // }

    // printf("Sum of the table of %d number = %d \n", num, sum);
    
    //  Write a program to calculate the factorial of a given number using for loop.
    // int num, factorial = 1;
    // printf("Enter Number:\n");
    // scanf("%d", &num);
    // for(int i = num ; i; i--){
    //     factorial *= i;
    // }
    // printf("Factorial of %d = %d", num, factorial);

    // // /Repeat 8 using a while loop.
    // int num, factorial = 1;
    // printf("Enter Number:\n");
    // scanf("%d", &num);
    // int i = num;
    // while(i){
    //     factorial *= i;
    //     i--;
    // }
    // printf("Factorial of %d = %d \n", num, factorial);

    // Write a program to check whether a given number is prime or not using loops.
    // int num, prime = 1;
    // printf("Enter Number:\n");
    // scanf("%d", &num);
    // for(int i = 2; i < num ; i++){
    //     if(num%i == 0){
    //         prime = 0;
    //         break;
    //     }
    // }
    // if(prime == 0){
    //     printf("%d is not a prime number", num);
    // }else{
    //     printf("%d is a prime number", num);
    // }

    // Above program with other loops
    // int num, prime = 1, i = 2;
    // printf("Enter Number:\n");
    // scanf("%d", &num);
    // do{
        
    //     if(num % i == 0){
    //         prime = 0;
    //         break;
    //     }
    //     i++;
        
    // }while(i < num);
    // while(i < num){
    //     if(num%i == 0){
    //         prime = 0;
    //         break;
    //     }
    //     i++;
    // }

    // if(!prime){
    //     printf("%d is not a number\n", num);
    // }else{
    //     printf("%d is a prime number", num);
    // }
    return 0;

}