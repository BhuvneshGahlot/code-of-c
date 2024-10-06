#include <stdio.h>

int main (){

float n;

printf("enter no. :");
scanf("%f",&n);

if (n<=10){
printf("very cold");

}
else if (n<=20){
printf("cold");
}
else if (n<=30){
printf("normal");

}
else if (n<=40){
printf("hot");
}
else {
printf("very hot");
}
}
