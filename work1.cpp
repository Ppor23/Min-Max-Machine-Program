#include <iostream>
using namespace std;
int main()
{
	int fah=0,s=0,menu=0,fcout=1,cmin=0,cmax=0,af=0,ac=0;
	int max = -99999 , min = 99999;
	char again='Y';
	do
	{
		cout<<"1.START"<<endl;
		cout<<"2.Result"<<endl;
		cout<<"3.Exit!"<<endl;
		cout<<"Select:";
		cin>>menu;
		switch(menu)
		{
			case 1:
				do
				{
					system("cls");
					cout<<"Enter Fahrenheit:";
					cin>>fah;
					if(max == -99999 && min == 99999) 
					{
					min = fah;
					max= fah;
					}
					if(fah > max) 
        			{
           				max = fah; 
        			} 
        			else if(fah < min)
        			{
           				min = fah;
        			}
					cout<<endl;
					cout<<"Again? Y/N:";
					cin>>again;
					if((again=='Y')||(again=='y'))
					{
						fcout+=1;
					}
					else if((again=='N')||(again=='n'))
					{
						fcout+=0;
					}
				}		
					while((again=='Y')||(again=='y'));
					system("cls");
					break;
			case 2:
				{
					system("cls");
					cout<<"Result!!!"<<endl;
					cout<<"Enter Fahrenheit:"<<fcout<<" Time"<<endl<<endl;
					cout<<"Max = "<<max<<" Fahrenheit";
					cmax=(max - 32)*5/9;
					cout<<"/"<<cmax<<" Celsius";
					cout<<endl<<endl;
					cout<<"Min = "<<min<<" Fahrenheit";
					cmin=(min - 32)*5/9;
					cout<<"/"<<cmin<<" Celsius";
					cout<<endl<<endl;
					af=(min+max)/fcout;
					ac=(cmin+cmax)/fcout;
					cout<<"Average:"<<af<<" Fahrenheit"<<"/"<<ac<<"	Celsius"<<endl<<endl;
					system("pause");
					system("cls");
					break;
				}
			case 3:
				{
					system("cls");
					cout<<"Thank You";
					break;
				}
		}
	}
	while((menu==1)||(menu==2));
	return 0;
}
