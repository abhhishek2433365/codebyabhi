#include<stdio.h>

struct Employee 
{
	int Code,Phone_number;
	char Name[10],Department[10],Address[10],Designation[10];
	float Salary; 
 };
 int main()
 {
 	int n,i,Dita;
 	float Di;
	 char Acc,Dit,nam,dep,add,des; 
 	printf("enter numbre of Employee data you featch: ");
 	scanf("%d",&n);
 	 struct Employee e[n];
	 
 	
 	for(i=0;i<n;i++)
 	{
 		printf("Enter the code of employee: ");
 		scanf("%d",&e[i].Code);
 		printf("Enter the Name of employee: ");
 		scanf("%s",e[i].Name);
 		printf("Enter Designation of employee: ");
 		scanf("%s",e[i].Designation );
 		printf("Enter the Department of employee: ");
 		scanf("%s",e[i].Department );
 		printf("Enter salary of employee: ");
 		scanf("%f",&e[i].Salary);
 		printf("Enter Address of employee: ");
 		scanf("%s",e[i].Address);
 		printf("Enter Phone number of employee: ");
 		scanf("%d",&e[i].Phone_number);
 		
 		
 		
	 }
	 printf("Please enter how to access employee data for code press C,for Name press N,for Designation press D,for salary press S,for department press B,for Address press A,for Phone number press P \n By: ");
	 scanf("%s\n",& Acc);
	 
	 
	 if(Acc=='N'||Acc=='D'||Acc=='B'||Acc=='P')
	 {
	 printf("Enter the %s to access your employee data:",Acc);
	 scanf("%s\n",&Dit);}
	 
	 else if(Acc=='C'||Acc=='P')
	 {
	 printf("Enter the %s to access your employee data:",Acc);
	 scanf("%d\n",&Dita);}
	 
	 else if(Acc=='S')
	 {
	 printf("Enter the salary to access your employee data:",Acc);
	 scanf("%f\n",&Di);}
	 
	 //1
	 
	 
	 if (Acc =='C')
{
	 
	 printf("Code  Name  Designation  Salary  Department  Address  Phone number\n");
	 
	 for(i=1;i<=n;i++)
	 {
	 	
	 	if(e[i].Code==Dita){
		
	 	printf("%d  %s  %s  %s  %f  %s  %d\n");
	 	 }
	 }
}

//4
      else if (Acc =='S')
{
	 
	 printf("Code  Name  Designation  Salary  Department  Address  Phone number\n");
	 
	 for(i=1;i<=n;i++)
	 {  if(e[i].Salary==Di){
	 	printf("%d  %s  %s  %s  %f  %s  %d\n");
	 }}
}

//7
           else if (Acc =='P')
    {
	 
	 printf("Code  Name  Designation  Salary  Department  Address  Phone number\n");
	 
	 for(i=1;i<=n;i++)
	 {if(e[i].Phone_number==Dita){
	 	printf("%d  %s  %s  %s  %f  %s  %d\n");
	 }}
}
}
   
