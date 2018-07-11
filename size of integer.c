#include<stdio.h>
#include<math.h>

int main()
{
int number=123456;
int size = floor(log10(abs(number))) + 1;
printf("Size of the %d is %d",number,size);
return 0;
}