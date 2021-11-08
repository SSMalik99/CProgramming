#include<stdio.h>
#include<string.h>
// array is to store one type of variable
// Structures are to store multiple type of data... 
// Structures are use to make custom type of datatype let create one
// Two way to struct 
// 1st Way
// struct myDataType{
//     int id;
//     char name[30];
//     float salary;
// };

// 2nd Way
typedef struct myDataType{
    int id;
    char name[30];
    float salary;
}mDT; // what does that mean 

// Both ways are satisfactory the 1st way will define myDataType and we will have use
// struct myDataType variable; ----> just like "int variable;"
// IN 2nd way
// we can simply use "mDT variable;" to define a variable 
// That's mean 2nd way will define an alias and we will use it to define variables and use it

// void showStructureVariableData(struct myDataType variable);
void showTypeDefVari(mDT variable);
void showDataWithPointer(mDT *ptr);

int main(){

    // Lets do  with first way....
    // struct myDataType{
    //     int id;
    //     char name[30];
    //     float salary;
    // };
    
    
    // Assign varibles 
    // struct myDataType firstVar;
    // firstVar.id = 101;
    // strcpy(firstVar.name, "Saravjeet Singh"); // Why we are using string copy cause we need to fill a string which is and array so its a good way to do
    // firstVar.salary = 89.99;

    // 2nd way
    // struct myDataType firstVar = {102, "singh is king", 567.9};
    // printf("Id of the data : %d\n", firstVar.id);
    // printf("name of the data : %s\n", firstVar.name);
    // printf("Salary of the data : %.2f\n", firstVar.salary);


    // To make every variable zero...
    // struct myDataType firstVar = {0};
    // printf("Id of the data : %d\n", firstVar.id);
    // printf("name of the data : %s\n", firstVar.name);
    // printf("Salary of the data : %.2f\n", firstVar.salary);

    // Take input from the 
    // struct myDataType firstVar;
    // printf("Please enter Id of the collection:");
    // scanf("%d", &firstVar.id);
    // printf("Please enter Name of the collection:");
    // scanf("%s", &firstVar.name);
    // // gets(firstVar.name); Not working
    // printf("Please enter salary of the collection:");
    // scanf("%f", &firstVar.salary);
    
    // printf("Id of the data : %d\n", firstVar.id);
    // printf("name of the data : %s\n", firstVar.name);
    // printf("Salary of the data : %.2f\n", firstVar.salary);

    // // Write a program to store the details of 3 employees from user-defined data. Use the structure declared above.
    // struct myDataType el1, el2, el3;
    
    // printf("Please enter Id of the first collection:");
    // scanf("%d", &el1.id);
    // printf("Please enter Name of the first collection:");
    // scanf("%s", &el1.name);
    // printf("Please enter salary of the first collection:");
    // scanf("%f", &el1.salary);
    
    // printf("Please enter Id of the second collection:");
    // scanf("%d", &el2.id);
    // printf("Please enter Name of the second collection:");
    // scanf("%s", &el2.name);
    // printf("Please enter salary of the second collection:");
    // scanf("%f", &el2.salary);
    
    // printf("Please enter Id of the third collection:");
    // scanf("%d", &el3.id);
    // printf("Please enter Name of the third collection:");
    // scanf("%s", &el3.name);
    // printf("Please enter salary of the third collection:");
    // scanf("%f", &el3.salary);

    // printf("Id of the first data : %d\n", el1.id);
    // printf("name of the first data : %s\n", el1.name);
    // printf("Salary of the first data : %.2f\n", el1.salary);
    
    // printf("Id of the 2nd data : %d\n", el2.id);
    // printf("name of the 2nd data : %s\n", el2.name);
    // printf("Salary of the 2nd data : %.2f\n", el2.salary);
    
    // printf("Id of the first 3rd data : %d\n", el3.id);
    // printf("name of the first 3rd data : %s\n", el3.name);
    // printf("Salary of the first 3rd data : %.2f\n", el3.salary);
    

    // array can be made for the struct data-type
    // struct myDataType varArray[3];
    
    // for(int i =0 ; i < 3 ; i++){
    //     printf("Please enter Id of the collection%d:", i+1);
    //     scanf("%d", &varArray[i].id);
    //     printf("Please enter Name of the collection%d:", i+1);
    //     scanf("%s", &varArray[i].name);
    //     printf("Please enter salary of the collection%d:", i+1);
    //     scanf("%f", &varArray[i].salary);
    // }
    
    // for(int i =0 ; i < 3 ; i++){
    //     printf("Id of the collection%d : %d\n", i+1, varArray[i].id);
    //     printf("name of the collection%d : %s\n", i+1, varArray[i].name);
    //     printf("Salary of the collection%d : %.2f\n", i+1, varArray[i].salary);
    // }

    // structers in memory ----->>>> in structure it stored like array first first collection of structure then next and so on....

    // Pointer in Structure....
    // struct myDataType *ptr;
    // struct myDataType variable = {101, "Singh", 45555.77};
    // Access with variable name.....
    // printf("Id of the collection : %d\n", variable.id);
    // printf("name of the collection : %s\n", variable.name);
    // printf("Salary of the collection : %.2f\n", variable.salary);
    
    // ptr = &variable;
    // Access with pointer
    // 1st way...
    // printf("Id of the collection : %d\n", (*ptr).id);
    // printf("name of the collection : %s\n", (*ptr).name);
    // printf("Salary of the collection : %.2f\n", (*ptr).salary);

    // 2nd way to access variable data with pointer is by using
    // Arrow operator(->) // when using arrow operator no need to use the *ptr we can directly acess ptr->
    // printf("Id of the collection : %d\n", ptr->id);
    // printf("name of the collection : %s\n", ptr->name);
    // printf("Salary of the collection : %.2f\n", ptr->salary);

    // Passing structes to the function
    // struct myDataType variable = {101, "Singh", 45555.77};
    // showStructureVariableData(variable);


    // let's now do this with the typedef
    
    // mDT = struct myDataType
    mDT varii = {101, "dddd", 545.44};
    
    // showTypeDefVari(varii);
    // mDT *ptr = &varii;
    // printf("%u", ptr);
    // showDataWithPointer(ptr);
    printf("Enter id :");
    scanf("%d", &varii.id);
    printf("Enter Name :");
    scanf("%s", &varii.name);
    printf("Enter Salary :");
    scanf("%f", &varii.salary);
    showTypeDefVari(varii);

    return 0;

}

void showDataWithPointer(mDT *ptr){
    printf("---->>>>1st Way<<<<-----\n");
    printf("Id of the collection : %d\n", (*ptr).id);
    printf("name of the collection : %s\n", (*ptr).name);
    printf("Salary of the collection : %.2f\n", (*ptr).salary);
    printf("---->>>>2nd Way<<<<-----\n");
    printf("Id of the collection : %d\n", ptr->id);
    printf("name of the collection : %s\n", ptr->name);
    printf("Salary of the collection : %.2f\n", ptr->salary);
}
void showTypeDefVari(mDT variable){
    printf("Id of the collection : %d\n", variable.id);
    printf("name of the collection : %s\n", variable.name);
    printf("Salary of the collection : %.2f\n", variable.salary);
}

// void showStructureVariableData(struct myDataType variable){
//     printf("Id of the collection : %d\n", variable.id);
//     printf("name of the collection : %s\n", variable.name);
//     printf("Salary of the collection : %.2f\n", variable.salary);   
// }