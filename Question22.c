 // find force of attraction on a body 
# include<stdio.h>
float force(float mass);
int main()
{
   float mass;
   printf("enter the mass of body:");
   scanf("%f",&mass);
   printf("Force of atteraction is:%.2f",force(mass));
}
float force(float mass)
{
    return (mass*9.8);
}