//add library
#include<iostream>
using namespace std;

//input function
int inputt(){
	int x;
	cout<<"Enter the numbers of shoes sold every week: ";
	cin>>x;

	return 0;}
     
	// function for 1st plan of salary
float salary1(int s){
	float sal=600.0;
	return sal;
}
     
	// function for 2nd plan of salary
float salary2(int s){
	float sal;
	sal=7*40.0+10*s*225/100.0;
	return sal;
}
     
	//function for 3rd plan of salary
float salary3(int s){
	float sal;
	sal=20.0*s+20*s*225/100.0;
	return sal;
}
     
	//main function
int main()
	{

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
