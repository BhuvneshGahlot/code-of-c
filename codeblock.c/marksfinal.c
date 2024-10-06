#include <stdio.h>

int main (){
int maths,physic,chemistry;

printf("enter a no. of maths :");
scanf("%d",&maths);

printf("enter a no. of physics :");
scanf("%d",&physic);

printf("enter a no. of chemistry :");
scanf("%d",&chemistry);

// condition a :

if (maths >= 70 && physic >= 70){
printf("person is eligible for con a ");
}
else {
printf("person is not eligible for con a ");

}

// condition b:

if ( maths + physic + chemistry >= 188){
printf("person is eligible for con b ");

}
else {
printf("person is not eligible for con b");
}
 return 0;
}
