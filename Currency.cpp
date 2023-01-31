#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
struct Currency 
{
	double *type;
	double coefficient;
};

int main() 
{
	Currency cur;
	double RUB, EUR, USD, UAH, GBP;
	unsigned short choise;
	char Quest;
	double amount;
	cout.setf(ios_base::fixed);
	cout<<"Choose your currency:"<<endl;
	cout<<"1 - Russian RUB\n";
	cout<<"2 - Euro EUR\n";
	cout<<"3 - United States dollar USD\n";
	cout<<"4 - Ukranian hryvna UAH\n";
	cout<<"5 - Great Britain pound GBP\n";
	cin>>choise;
	switch (choise) 
		{
		case 1:cur.type = &RUB;
		       cout<<"You've choose RUB\n";
		       cout<<"Input your amount of money:\n";
		       cin>>RUB;
		       cout<<"You have "<<RUB<<" Russian rubbles. Do you want to exchange your money? (Y)es? (N)o?\n";
		       cin>>Quest;
		            switch(Quest) 
		            {
		            	case ('Y'|'y'):
		            		cout<<"Which one of currencies do you want to buy?\n";
							cout<<"1 - Euro EUR\n";
							cout<<"2 - United States dollar USD\n";
							cout<<"3 - Ukranian hryvna UAH\n";
							cout<<"4 - Great Britain pound GBP\n";
							cin>>choise;
					        switch(choise)
					         {
						      case 1:cur.coefficient=0.013341;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {
								 cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Euro \n";
						      RUB=RUB-amount;
						      EUR=amount*cur.coefficient;
						      cout<<"Now you have "<<RUB<<" rubbles and "<<EUR<<" euro\n";break;
						      case 2:
						      cur.coefficient=0.014466;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {
								 cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" USDollars \n";
						      RUB=RUB-amount;
						      USD=amount*cur.coefficient;
						      cout<<"Now you have "<<RUB<<" rubbles and "<<USD<<" USDollars\n";break;
						      case 3:cur.coefficient=0.53529;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Hryvnas \n";
						      RUB=RUB-amount;
						      UAH=amount*cur.coefficient;
						      cout<<"Now you have "<<RUB<<" rubbles and "<<UAH<<" Hryvnas\n";break;
						      case 4:cur.coefficient=0.011706;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Great Britain pounds \n";
						      RUB=RUB-amount;
						      GBP=amount*cur.coefficient;
						      cout<<"Now you have "<<RUB<<" rubbles and "<<GBP<<" Great Britain pounds\n";break;
					         }
					   case ('N'|'n'):break;
					}
			   getch();break;
		case 2:cur.type = &EUR;
		       cout<<"You've choose EUR\n";
		       cout<<"Input your amount of money:\n";
		       cin>>EUR;
		       cout<<"You have "<<EUR<<" Euro\n";
		       cout<<"Do you want to exchange your money? (Y)es? (N)o?\n";
		       cin>>Quest;
		            switch(Quest) 
		            {
		            	case ('Y'|'y'):
		            		cout<<"Which one of currencies do you want to buy?\n";
							cout<<"1 - Russian rubbles RUB\n";
							cout<<"2 - United States dollar USD\n";
							cout<<"3 - Ukranian hryvna UAH\n";
							cout<<"4 - Great Britain pound GBP\n";
							cin>>choise;
					        switch(choise)
					         {
						      case 1:cur.coefficient=74.96;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Russian rubbles \n";
						      EUR=EUR-amount;
						      RUB=amount*cur.coefficient;
						      cout<<"Now you have "<<EUR<<" euros and"<<RUB<<" rubbles\n";break;
						      case 2:cur.coefficient=1.09;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" USDollars \n";
						      EUR=EUR-amount;
						      USD=amount*cur.coefficient;
						      cout<<"Now you have "<<EUR<<" euros and "<<USD<<" USDollars\n";break;
						      case 3:cur.coefficient=40.08;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Hryvnas \n";
						      EUR=EUR-amount;
						      UAH=amount*cur.coefficient;
						      cout<<"Now you have "<<EUR<<" euros and "<<UAH<<" Hryvnas\n";break;
						      case 4:cur.coefficient=0.88248;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Great Britain pounds \n";
						      EUR=EUR-amount;
						      GBP=amount*cur.coefficient;
						      cout<<"Now you have "<<EUR<<" euros and "<<GBP<<" Great Britain pounds\n";break;
					         }
					   case ('N'|'n'):break;
					}
			   getch();break;
		case 3:cur.type = &USD;cout<<"You've choose USD\n";
		        cout<<"Input your amount of money:\n";
		       cin>>USD;
		       cout<<"You have "<<USD<<" United States dollars\n";
			   cout<<"Do you want to exchange your money? (Y)es? (N)o?\n";
		       cin>>Quest;
		            switch(Quest) 
		            {
		            	case ('Y'|'y'):
		            		cout<<"Which one of currencies do you want to buy?\n";
							cout<<"1 - Russian rubbles RUB\n";
							cout<<"2 - Euro EUR\n";
							cout<<"3 - Ukranian hryvna UAH\n";
							cout<<"4 - Great Britain pound GBP\n";
							cin>>choise;
					        switch(choise)
					         {
						      case 1:cur.coefficient=69.13;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Russian rubbles \n";
						      USD=USD-amount;
						      RUB=amount*cur.coefficient;
						      cout<<"Now you have "<<USD<<" US Dollars and "<<RUB<<" rubbles\n";break;
						      case 2:cur.coefficient=0.91794;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Euros \n";
						      USD=USD-amount;
						      EUR=amount*cur.coefficient;
						      cout<<"Now you have "<<USD<<" US Dollars and "<<EUR<<" Euros\n";break;
						      case 3:cur.coefficient=36.97;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Hryvnas \n";
						      USD=USD-amount;
						      UAH=amount*cur.coefficient;
						      cout<<"Now you have "<<USD<<" US Dollars and "<<UAH<<" Hryvnas\n";break;
						      case 4:cur.coefficient=0.80678;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Great Britain pounds \n";
						      USD=USD-amount;
						      GBP=amount*cur.coefficient;
						      cout<<"Now you have "<<USD<<" US Dollars and "<<GBP<<" Great Britain pounds\n";break;
					         }
					   case ('N'|'n'):break;
					}getch();break;
		case 4:cur.type = &UAH;cout<<"You've choose UAH\n";
		       cout<<"Input your amount of money:\n";
		       cin>>UAH;
		       cout<<"You have "<<UAH<<" Hryvnas\n";
		       cout<<"Do you want to exchange your money? (Y)es? (N)o?\n";
		       cin>>Quest;
		            switch(Quest) 
		            {
		            	case ('Y'|'y'):
		            		cout<<"Which one of currencies do you want to buy?\n";
							cout<<"1 - Russian rubbles RUB\n";
							cout<<"2 - Euro EUR\n";
							cout<<"3 - United States dollar USD\n";
							cout<<"4 - Great Britain pound GBP\n";
							cin>>choise;
					        switch(choise)
					         {
						      case 1:cur.coefficient=1.87;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Russian rubbles \n";
						      UAH=UAH-amount;
						      RUB=amount*cur.coefficient;
						      cout<<"Now you have "<<UAH<<" Ukranian hryvnas and "<<RUB<<" rubbles\n";break;
						      case 2:cur.coefficient=0.024847;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Euros \n";
						      UAH=UAH-amount;
						      EUR=amount*cur.coefficient;
						      cout<<"Now you have "<<UAH<<" Ukranian hryvnas and "<<EUR<<" Euros\n";break;
						      case 3:cur.coefficient=0.027075;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" US Dollars \n";
						      UAH=UAH-amount;
						      USD=amount*cur.coefficient;
						      cout<<"Now you have "<<UAH<<" Ukranian hryvnas and "<<USD<<" US Dollars \n";break;
						      case 4:cur.coefficient=0.02189;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Great Britain pounds \n";
						      UAH=UAH-amount;
						      GBP=amount*cur.coefficient;
						      cout<<"Now you have "<<UAH<<" Ukranian hryvnas and "<<GBP<<" Great Britain pounds\n";break;
					         }
					   case ('N'|'n'):break;
					}
		       getch();break;
		case 5:cur.type = &GBP;cout<<"You've choose GBP\n";
		       cout<<"Input your amount of money:\n";
		       cin>>GBP;
		       cout<<"You have "<<GBP<<" Great Britain pounds\n";
			   cout<<"Do you want to exchange your money? (Y)es? (N)o?\n";
		       cin>>Quest;
		            switch(Quest) 
		            {
		            	case ('Y'|'y'):
		            		cout<<"Which one of currencies do you want to buy?\n";
							cout<<"1 - Russian rubbles RUB\n";
							cout<<"2 - Euro EUR\n";
							cout<<"3 - United States dollar USD\n";
							cout<<"4 - Ukranian hryvna UAH\n";
							cin>>choise;
					        switch(choise)
					         {
						      case 1:cur.coefficient=85.43;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Russian rubbles \n";
						      GBP=GBP-amount;
						      RUB=amount*cur.coefficient;
						      cout<<"Now you have "<<GBP<<" Great Britain pounds and "<<RUB<<" rubbles\n";break;
						      case 2:cur.coefficient=1.13;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Euros \n";
						      GBP=GBP-amount;
						      EUR=amount*cur.coefficient;
						      cout<<"Now you have "<<GBP<<" Great Britain pounds and "<<EUR<<" Euros\n";break;
						      case 3:cur.coefficient=1.24;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" US Dollars \n";
						      GBP=GBP-amount;
						      USD=amount*cur.coefficient;
						      cout<<"Now you have "<<GBP<<" Great Britain pounds and "<<USD<<" US Dollars \n";break;
						      case 4:cur.coefficient=45.68;
						      cout<<"What amount of money do you want to excange? \n";
					       	  cin>>amount;
					       	  if(amount>*cur.type) {cout<<"You haven't enough money \n"; break;}
						      cout<<"You have amount to exchange: "<<amount<<endl;
						      cout<<"You bought "<<amount*cur.coefficient<<" Ukranian hryvnas \n";
						      GBP=GBP-amount;
						      UAH=amount*cur.coefficient;
						      cout<<"Now you have "<<GBP<<" Great Britain pounds and "<<UAH<<" Ukranian hryvnas\n";break;
					         }
					   case ('N'|'n'):break;
					}
			   getch();break;
		default: cout<<"Incorrect choise "<<endl;
	}
ofstream file;
file.open("H:\\Curren.txt",ios::out);
if(!file.is_open()) 
{
	cout<<"File not found\n";
	return -1;
}
else 
{
	cout<<"File is open. It's OK\n";
	return 1;
}
file<<cur.coefficient;
file.close();
return 0;
}