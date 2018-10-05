//add library
#include<iostream>
using namespace std;

//input function
int input(){
	int x;
	cout<<"Enter the numbers of shoes sold every week: ";
	cin>>x;

	return x;}
     
	// function for 1st plan of salary
float salary1(int x){
	float sal=600.0;
	return sal;
}
     
	// function for 2nd plan of salary
float salary2(int x){
	float sal;
	sal=7*40.0+10*x*225/100.0;
	return sal;
}
     
	//function for 3rd plan of salary
float salary3(int x){
	float sal;
	sal=20.0*x+20*x*225/100.0;
	return sal;
}
     
	//main function
int main()
	{
	int p=input();
	int a=salary1(p);
	int b=salary2(p);
	int c=salary3(p);
		
	if (a>b)
		{
		if (a>c)
			{
              		cout<<"First option is best with "<<a<<" salary per week";
			}
          	else
			{
              		cout<<"Third option is best with "<<c<<" salary per week";
			}
		}
     	else
		{
		if (b>c)
			{
			cout<<"Second option is best with "<<b<<" salary per week";
			}
		else
			{
			cout<<"Third option is best with "<<c<<" salary per week";
			}
		}  
return 0;
	}
