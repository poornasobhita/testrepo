#include<stdio.h>
float remaining_milk(int gallons);
int main(){
float gallons;
float ans;
printf("enter the value of x:");
scanf("%f",&gallons);
ans=remaining_milk(gallons);
printf("the number of litres left %f",ans);

return 0;
}
float remaining_milk(int gallons)
{
float result;
result = (gallons*3.785)-36;
return result;

}
