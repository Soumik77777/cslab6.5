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
	int salary1;
	int salary2;
	int salary3;
		
	if (salary1>salary2)
		{
		if (salary1>salary3)
			{
              		cout<<"First option is best with "<<salary1<<" salary per week";
			}
          	else
			{
              		cout<<"Third option is best with "<<salary3<<" salary per week";
			}
		}
     	else
		{
		if (salary2>salary3)
			{
			cout<<"Second option is best with "<<salary2<<" salary per week";
			}
		else
			{
			cout<<"Third option is best with "<<salary3<<" salary per week";
			}
		}  
return 0;
	}
