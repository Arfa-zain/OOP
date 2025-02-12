#include <iostream>
#include <string>
using namespace std;
int grossSalary(int basic,int allow)
{
	int Gross=basic+allow;
}
int NetSalary(int Gross,int d)
{
	int netSalary=Gross-d;
}
int main()
{
	int basicSalary,Allowance,Deduction;
	int Gross,netSalary;
	float allowancePer , deductionPer;
	cout<<"enter your basic salary"<<"\n";
	cin>>basicSalary;
	cout<<"enter your allowance percentage"<<"\n";
	cin>>allowancePer;
	cout<<"enter your deduction percentage"<<"\n";
	cin>>deductionPer;
	Allowance=basicSalary*(allowancePer/100);
	Deduction=Gross-basicSalary;
	cout<<"Gross Salary"<<grossSalary(basicSalary,Allowance);
	cout<<"Net Salary"<<NetSalary(Gross,Deduction);
	return 0;
	
	}