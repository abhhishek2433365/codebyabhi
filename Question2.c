// Area of circle and volume of cylinder
#include<stdio.h>
int main()
{
    float r,h,area,volume,pi=3.14;
    printf("Enter the radius of circle");
    scanf("%f",&r);
     printf("Enter the hight of cylinder");
    scanf("%f",&h);
    area=pi*r*r;
    volume=pi*r*r*h;
    printf("Area of circle is :%f\n",area);
    printf("Volume of cylinder is :%f\n",volume);
    return 0;
    

}