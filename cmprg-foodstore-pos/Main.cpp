#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream.h>
int main()
{
	char *l = " ------------------------------------------------------------------------------\n";
	int order=1;
	char name[50], choice;
	char gotostart;
	int num1=0, num2=0, num3=0, num4=0;
	int again=1, ans=1;
	double UnitPrice1= 20.00, UnitPrice2= 30.00,UnitPrice3= 15.00, UnitPrice4= 10.00;
	double AmountofSale1=0, AmountofSale2=0, AmountofSale3=0, AmountofSale4=0, maxCash=999999999, change=0, total=0;

	while (ans != 0)
	{
	system("CLS");
	gotoxy(24,1);
	printf("=== Welcome to CMPRG Foodstore! ===");
	printf("\n\nPlease enter your name : ");
	scanf("%s", &name);

	do
	{
		system("CLS");
		printf("\nHello Cashier %s!", name);
		printf("\n\nDo you want to proceed to the main menu, %s?", name);
		printf("\nEnter [Y] to continue.\n\nEnter Choice: ");
		scanf("%c", &choice);
		} while ((choice !='Y')&&(choice !='y'));
		system("CLS");
			switch (choice)
				case 1=='Y'|'y':
				gotoxy(0,0);
				printf("\n\t\t\t\t= STORE MENU =");
				printf("\n\n\t\tItem List \t\t\tItem Price");
				printf("\n\n\t\t1 = Burger \t\t\tPhp 20.00");
				printf("\n\t\t2 = Cheese Burger \t\tPhp 30.00");
				printf("\n\t\t3 = Fries \t\t\tPhp 15.00");
				printf("\n\t\t4 = Coke \t\t\tPhp 10.00");
				while (again != 0)
		{
			do
			{
			printf("\n\nPlease enter your choice : ");
			scanf("%d", &order);
			} while ((order > 4)&&(order < 1));
			switch (order)
			{
				case 1:
					cout<<"\n\t\t>> Item Name: [Burger] <P20> per each";
					cout<<"\n\t\t>> Quantity: ";
					cin>>num1;
					AmountofSale1 = UnitPrice1 * num1;
					break;
				case 2:
					cout<<"\n\t\t>> Item Name: [Cheese Burger] <P30> per each";
					cout<<"\n\t\t>> Quantity: ";
					cin>>num2;
					AmountofSale2 = UnitPrice2 * num2;
					break;
				case 3:
					cout<<"\n\t\t>> Item Name: [Fries] <P15> per each";
					cout<<"\n\t\t>> Quantity: ";
					cin>>num3;
					AmountofSale3 = UnitPrice3 * num3;
					break;
				case 4:
					cout<<"\n\t\t>> Item Name: [Coke] <P10> per each";
					cout<<"\n\t\t>> Quantity: ";
					cin>>num4;
					AmountofSale4 = UnitPrice4 * num4;
					break;
				default:
					cout<<"That is not among the choices.\n";
					break;
			}
		printf("\nYou have ordered: \n\n");
		printf("ITEM\t\t\tQUANTITY\tUNIT PRICE\tAMOUNT OF SALE\n");
		cout<<"<1> Burger\t\t"<<num1<<"\t\tP "<<UnitPrice1<<"\t\tP "<<AmountofSale1<<"\n";
		cout<<"<2> Cheese Burger\t"<<num2<<"\t\tP "<<UnitPrice2<<"\t\tP "<<AmountofSale2<<"\n";
		cout<<"<3> French Fries\t"<<num3<<"\t\tP "<<UnitPrice3<<"\t\tP "<<AmountofSale3<<"\n";
		cout<<"<4> Coke\t\t"<<num4<<"\t\tP "<<UnitPrice4<<"\t\tP "<<AmountofSale4<<"\n";
		total=0;
		total=total+AmountofSale1+AmountofSale2+AmountofSale3+AmountofSale4;
		cout<<"\n\t\t\t\t\t\tTotal Price:  P "<<total<<"\n";
		do
		{
			printf("\nOrder Again? [0] NO [1] YES : ");
			scanf("%d", &again);
		} while ((again != 0)&&(again != 1));
		}
		do {
			system("CLS");
			if (maxCash < total)
			{
			printf("\n\t\t\tInsufficient Cash! Please try again.\n");
			}
			printf("\n\t\t\t\t= ORDERED LIST =\n\n");
			cout << l;
			printf("\tITEM\t\tQUANTITY\tUNIT PRICE\tAMOUNT OF SALE\n");
			cout << l;
			if (num1 != 0)
			{
				cout<<"\tBurger\t\t"<<num1<<"\t\tP "<<UnitPrice1<<"\t\tP "<<AmountofSale1<<"\n";
				}
			if (num2 != 0)
			{
				cout<<"\tCheese Burger\t"<<num2<<"\t\tP "<<UnitPrice2<<"\t\tP "<<AmountofSale2<<"\n";
				}
			if (num3 != 0)
			{
				cout<<"\tFrench Fries\t"<<num3<<"\t\tP "<<UnitPrice3<<"\t\tP "<<AmountofSale3<<"\n";
				}
			if (num4 != 0)
			{
				cout<<"\tCoke\t\t"<<num4<<"\t\tP "<<UnitPrice4<<"\t\tP "<<AmountofSale4<<"\n";
				}
		cout<<l;
		cout<<"\tTotal : P"<<total<<"";
		cout<<"\n\tEnter Received Cash : ";
		cin>>maxCash;
		} while (maxCash < total);
		change = maxCash - total;
		cout<<"\tYour change is : P"<<change<<"\n\n\n\n\t\t";
		do
		{
		   cout<<" New transaction [0] no [1] yes : ";
		   cin >> ans;
		} while ((ans != 0)&&(ans != 1));
	}
	system("cls\n\n\n\t\t");
	system("PAUSE");
	return 0;
}
