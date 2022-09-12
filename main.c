#include <stdio.h>
#include <stdlib.h>

// Structures && function
    struct person{
         char ID [10] ;
         char Name [20];
         int Age;
     };

     void insertP(char c [20],char n [10] ,int age){//create  function with parameters
    struct person p1;
    strcpy(p1.ID,c);
    strcpy(p1.Name,n);
    p1.Age=age;
     if(age>=18){

         printf("welcome %s \n your ID  :%s \n  and yur age is : %d",p1.Name,p1.ID,p1.Age);
     }
     else{
         printf("sorry %s \n   and your age is : %d   \n u need 18 for coming "   ,p1.Name,p1.Age);
     }
}
 int main(){

     char name [20];
     int age;
     printf("tape your name ");
     scanf("%s",&name);
     printf("tape your age ");
     scanf("%d",&age);
     insertP("1",name,age); //call function


     return 0;
 }

