#include <iostream>
#include <string>
using namespace std;
KilometersToMiles()
{
	float km,miles;
	cout<<"enter value in kilometer"<<"\n";
	cin>>km;
	miles=0.621*km;
	cout<<"values in miles"<<miles<<endl;
}
CelsiusToFahrenheit()
{
	float cel,fah;
	cout<<"enter values in celsius"<<"\n";
	cin>>cel;
	fah=cel*9/5+32;
	cout<<"values in fahrenheit"<<"\n";
}
SecondsIntoHoursAndSeconds()
{
	int sec,hr,min;
	cout<<"enter time in seconds"<<"\n";
	cin>>sec;
	hr=sec/3600;
	min=(sec%3600)/60;
	sec=(sec%3600)%60;
	cout<<"time in hour"<<hr<<endl;
		cout<<"time in minute"<<min<<endl;
	cout<<"time in second"<<sec<<endl;

}
int main()
{
	int menu,ch;
	cout<<"\n---Menu---\n";
	cout<<"1.Kilometers to Miles"<<"\n";
	cout<<"2.Celsius to Fahrenheit"<<"\n";
	cout<<"3. Seconds into Hours, Minutes & Seconds"<<"\n";
	cout<<"enter your choice"<<"\n";
	cin>>ch;
switch(ch)
{
	case 1:
	KilometersToMiles();
	break;
	case 2:
    CelsiusToFahrenheit();
    break;
	case 3:
    SecondsIntoHoursAndSeconds();
	break;
	default:
	cout<<"Invalid";	
}
}