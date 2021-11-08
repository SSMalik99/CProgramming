#include<stdio.h>

// typedef struct TwoDVector{
//     int xAxis;
//     int yAxis;
// }twoDvector;

// twoDvector sumVector(twoDvector firstVec, twoDvector secVec);
// void directPrint(twoDvector firstVector);
// void printWithArrowOperator(twoDvector *firstVector);

// typedef struct complexNumber{
//     float real;
//     float imagenary;
// }complex;

// void complexInputFromUser(complex *arrayNum, int index);
// void showComplexValues(complex complexNum, int index);
// typedef struct bankAccount{
//     int accountNo;
//     char Name[30];
//     char address[30];
// }bankAccount;

// typedef struct date{
//     int day;
//     int month;
//     int year;
// }date;

// int compareDate(date value1, date value2){
//     if(value1.day > value2.day){
//         return 1;
//     }
//     if(value1.day < value2.day){
//         return -1;
//     }
//     if(value1.month > value2.month){
//         return 1;
//     }
//     if(value1.month < value2.month){
//         return -1;
//     }
    
//     if(value1.year < value2.year){
//         return 1;
//     }
//     if(value1.year < value2.year){
//         return -1;
//     }

//     return 0;
// }

typedef struct myTimestamp{
    int day;
    int month;
    int year;
    int hours;
    int minutes;
    int seconds;
}myTimestamp;


int compareTimestamp( myTimestamp time1, myTimestamp time2){
    if(time1.day > time2.day || time1.month < time2.month || time1.year > time2.year){
        return 1;
    }
    
    if(time1.day < time2.day ||time1.month < time2.month || time1.year < time2.year){
        return -1;
    }

    if(time1.hours > time2.hours || time1.minutes > time2.minutes || time1.seconds > time2.seconds){
        return 1;
    }

    if(time1.hours < time2.hours || time1.minutes < time2.minutes || time1.seconds < time2.seconds){
        return -1;
    }
    
    return 0;
}

int main(){

    // Create a two-dimensional vector using structures in C.
    // twoDvector firstVector = {22, 33};
    // twoDvector secondVector = {25, 13};
    // printf("first vector =  %d + %di ", firstVector.xAxis, firstVector.yAxis);
    
    // Write a function SumVector which returns the sum of two vectors passed to it. The vectors must be two-dimensional.
    // twoDvector firstVector = {22, 33};
    // twoDvector secondVector = {25, 13};
    // twoDvector sum = sumVector(firstVector, secondVector);
    // printf("X-axis:%d\n", sum.xAxis);
    // printf("Y-axis:%d\n", sum.yAxis);


    // Write a program to illustrate the use of an arrow operator -> in C.
    // twoDvector firstVector = {22, 33};
    // directPrint(firstVector);
    // printWithArrowOperator(&firstVector);

    // Write a program with a structure representing a Complex number.
    // complex firstComplex = {33.55, 66.88};
    // printf("real part of complex number: %.2f\n", firstComplex.real);
    // printf("imagenary part of complex number: %.2f\n", firstComplex.imagenary);

    // complex complexNumberArray[5];
    
    // for(int i = 0; i < 5; i++){
    //     printf("Enter Real part of Element%d:", i+1);
    //     scanf("%f", &complexNumberArray[i].real);
    //     printf("Enter Imagenary part of Element%d:", i+1);
    //     scanf("%f", &complexNumberArray[i].imagenary);
    // }
    // printf("%d", complexNumberArray[0].real);
    // for (int j = 0; j < 5; j++){
    //     showComplexValues(complexNumberArray[j], j+1);    
    // }
    
    // Create a structure representing a bank account of a customer. What fields did you use and why?
    // bankAccount firstAccount = {123454, "Singh", "Baram"};
    // printf("Account Number : %d\n", firstAccount.accountNo);
    // printf("Account Holder Name : %s\n", firstAccount.Name);
    // printf("Account Holder Address : %s\n", firstAccount.address);
    

    // Write a structure capable of storing date. Write a function to compare those dates.
    // date dat1 = {1,12,2021}, dat2 = {1, 2, 2021};
    // int result = compareDate(dat1, dat2);
    
    // if(result > 0){
    //     printf("%d-%d-%d is greater than the %d-%d-%d", dat1.day, dat1.month, dat1.year, dat2.day, dat2.month, dat2.year);
    // }else if(result < 0){
    //     printf("%d-%d-%d is Lower than the %d-%d-%d", dat1.day, dat1.month, dat1.year, dat2.day, dat2.month, dat2.year);
    // }else{
    //     printf("%d-%d-%d is equal to %d-%d-%d", dat1.day, dat1.month, dat1.year, dat2.day, dat2.month, dat2.year);
    // }

    // Timestamp variable and comparison....
    myTimestamp time1 = { 1,2,2021, 1, 22, 33}, time2 = {1, 2, 2021, 12, 33, 55};
    int result = compareTimestamp(time1, time2);
    
    if(result > 0){
        printf("%d-%d-%d %d-%d-%d is greater than the %d-%d-%d %d-%d-%d", time1.day, time1.month, time1.year, time1.hours, time1.minutes, time1.seconds,time2.day, time2.month, time2.year, time2.hours, time2.minutes, time2.seconds);
    }else if(result < 0){
        printf("%d-%d-%d %d-%d-%d is Lower than the %d-%d-%d %d-%d-%d", time1.day, time1.month, time1.year, time1.hours, time1.minutes, time1.seconds,time2.day, time2.month, time2.year, time2.hours, time2.minutes, time2.seconds);
    }else{
        printf("%d-%d-%d %d-%d-%d is equal to %d-%d-%d %d-%d-%d", time1.day, time1.month, time1.year, time1.hours, time1.minutes, time1.seconds,time2.day, time2.month, time2.year, time2.hours, time2.minutes, time2.seconds);
    }
    

    return 0;

}

// twoDvector sumVector(twoDvector firstVec, twoDvector secVec){
//     twoDvector result;
//     result.xAxis = firstVec.xAxis + secVec.xAxis;
//     result.yAxis = firstVec.yAxis + secVec.yAxis;
//     return result;
// }

// void directPrint(twoDvector firstVector){
//     printf("X-axis without pointer : %d\n", firstVector.xAxis);
//     printf("Y-axis without pointer : %d\n", firstVector.yAxis);
// }

// void printWithArrowOperator(twoDvector *firstVector){
    
//     printf("X-axis with pointer and arrow operator : %d\n", firstVector->xAxis);
//     printf("Y-axis with pointer and arrow operator : %d\n", firstVector->yAxis);

// }

// Not working for me
// void complexInputFromUser(complex *arrayNum, int index){
//     printf("Enter Real part of Element%d:", index);
//     arrayNum = arrayNum+(index-1);
//     scanf("%f", arrayNum);
//     printf("Enter Imagenary part of Element%d:", index);
//     scanf("%f", arrayNum);
// }

// void showComplexValues(complex complexNum, int index){   
//     printf("real part of the element%d : %.2f\n", index, complexNum.real);
//     printf("imagenary part of the element%d : %.2f\n", index,complexNum.imagenary);
//     printf("Number = %.2f + %.2fi\n",complexNum.real, complexNum.imagenary);
// }