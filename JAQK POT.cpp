/* *********|**********|**********|
Program: TT04_A1_Baajajah_Ayman.cpp
Course: TCP1101 Programming Fundamentals
Class: TC02, TT04
Year: 2017/18 Trimester 2
Name: Ba-Ajajah, Ayman Khaled Omar
ID: 1161302846
Email: a.baajaja@gmail.com
Phone: 013-252 1340
**********|**********|********* */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main()
{
 cout << "+-------------------------+" << endl;
 cout << "| Ba-Ajajah, Ayman Khaled |" << endl; 
 cout << "|                         |" << endl;
 cout << "|       1161302846        |" << endl;
 cout << "+-------------------------+" << endl << endl;
 system ("pause");
 system("cls");
 
 double sum;
 int target = 10;
 double withdraw_rm, withdraw, withdraw_original;
 int num[4];
 int random_arr[4];
 double jaqk[4] = {0.05, 0.10, 0.20, 0.50};
 
 //Option what you want to do
 string option;
 
 //Random generate 4 numbers equal to 10
		srand( time(0) );
		 while ( sum != target ) {
      sum = 0;
      for ( int i = 0; i < 4; i++ )
      {
         random_arr[i] = rand() % ( target + 1 );
         sum += random_arr[i];
      }      
		} 
 // do-while loop		
  do
	{
	  
 cout << "       ..:  JAQK POT  :.. " << endl;
 cout << "*************************************" << endl;
 cout << "   Jack     Ace     Queen     King" << endl;
 cout << "   5c       10c     20c       50c" << endl;
 cout << "   " << random_arr[0] << "        " << random_arr[1] << "       " << random_arr[2] << "         " << random_arr[3] << endl << endl;
 cout << "Total = RM " << (random_arr[0] * jaqk[0]) + (random_arr[1] * jaqk[1]) + (random_arr[2] * jaqk[2]) + (random_arr[3] * jaqk[3]) << endl << endl;
 cout << "Press D or d if you want to deposit." << endl;
 cout << "Press W or w if you want to withdraw." << endl;
 cout << "Press R or r if you want to reset." << endl;
 cout << "==> ";
 cin >> option;
 
	// checnk the options
 if (option != "D" && option != "d" && option != "W" && option != "w" && option != "R" && option != "r" && option != "N" && option != "n")
 {
	while (option != "D" && option != "d" && option != "W" && option != "w" && option != "R" && option != "r" && option != "N" && option != "n")
	{
		 cout << "\nError: Invalid input!\n";
		 cout << "Press D or d if you want to deposit." << endl;
		 cout << "Press W or w if you want to withdraw." << endl;
		 cout << "Press R or r if you want to reset." << endl;
		 cout << "==> ";
		 cin >> option;
	}
 } 
 
     // Option d or D (deposit) 
	if (option == "D" || option == "d")
	{
	cout << "How many  5c coins? => ";
	cin >> num[0];
	while (num[0] < 1 )
	{
	cout << "ERROR: Invaild Coin Amount !" << endl;
	cout << "How many  5c coins? => ";
	cin.clear();
    cin.ignore();
	cin >> num[0];

	}
	
	cout << "How many 10c coins? => ";
	cin >> num[1];
	while (num[1] < 1 )
	{
	cout << "ERROR: Invaild Coin Amount !" << endl;
	cout << "How many 10c coins? => ";
	cin.clear();
    cin.ignore();
	cin >> num[1];

	}
	
	cout << "How many 20c coins? => ";
	cin >> num[2];
	while (num[2] < 1 )
	{
	cout << "ERROR: Invaild Coin Amount !" << endl;
	cout << "How many 20c coins? => ";
	cin.clear();
    cin.ignore();
	cin >> num[2];

	}
	
	cout << "How many 50c coins? => ";
	cin >> num[3];
	while (num[3] < 1 )
	{
	cout << "ERROR: Invaild Coin Amount !" << endl;
	cout << "How many 50c coins? => ";
	cin.clear();
    cin.ignore();
	cin >> num[3];

	}
	
	cout << endl << endl;
	cout << "   Jack     Ace     Queen     King" << endl;
    cout << "   5c       10c     20c       50c" << endl;
    cout << "   " << random_arr[0] + num[0] << "        " << random_arr[1] + num[1] << "       " << random_arr[2] + num[2] << "         " << random_arr[3] + num[3] << endl << endl;
    cout << "Total = RM " << ( jaqk[0] *(random_arr[0] + num[0])) + ( jaqk[1] *(random_arr[1] + num[1])) + ( jaqk[2] *(random_arr[2] + num[2])) + ( jaqk[3] *(random_arr[3] + num[3])) << endl << endl;
	random_arr[0] += num[0];
	random_arr[1] += num[1];
	random_arr[2] += num[2];
	random_arr[3] += num[3];
	
}

	// option w or W (withdraw)
	if (option == "W" || option == "w")
	{
		cout << "Please enter the amount (in RM) => ";
		cin >>  withdraw_rm;
		while ( withdraw_rm < 0.04 )
		{
		cout << "ERROR: Invaild withdrawal Amount !" << endl;
		cout << "Please enter the amount (in RM) => ";
		cin.clear();
		cin.ignore();
		cin >>  withdraw_rm;
		}
		withdraw_original = withdraw;
		withdraw = withdraw_rm * 100;
		double j = (random_arr[0] * jaqk[0]) * 100;
		double a = (random_arr[1] * jaqk[1]) * 100;
		double q = (random_arr[2] * jaqk[2]) * 100;
		double k = (random_arr[3] * jaqk[3]) * 100;
		
		int d50 = withdraw / 50;
		if (d50 > k)
			d50 = k;
		withdraw -= d50 * 50;
		
		int d20 = withdraw / 20;
		if (d20 > q)
			d20 = q;
		withdraw -= d20 * 20;
		
		int d10 = withdraw / 10;
		if (d10 > a)
			d10 = a;
		withdraw -= d10 * 10;
		
		int d5 = withdraw /  5;
		if (d5 > j)
			d5 = j;
		withdraw -= d5 * 5;
		
		
		cout << "Yes please collect your coins:" << endl;
		cout << "50c x " << d50 << endl;
		cout << "20c x " << d20 << endl;
		cout << "10c x " << d10 << endl;
		cout << " 5c x " << d5 << endl;
		
		cout << endl;
		cout << "   Jack     Ace     Queen     King" << endl;
		cout << "   5c       10c     20c       50c" << endl;
		cout << "   " << random_arr[0] - d5 << "        " << random_arr[1] - d10 << "       " << random_arr[2] - d20 << "         " << random_arr[3] - d50 << endl << endl;
		cout << "Total = RM " << ( jaqk[0] *(random_arr[0] - d5)) + ( jaqk[1] *(random_arr[1] - d10)) + ( jaqk[2] *(random_arr[2] - d20)) + ( jaqk[3] *(random_arr[3] - d50)) << endl << endl;
		
		random_arr[0] -= d5;
		random_arr[1] -= d10;
		random_arr[2] -= d20;
		random_arr[3] -= d50;
	
	}
	
	// option r or R (reset)
	if (option == "R" || option == "r")
	{
		
	cout << "How many  5c coins? => ";
	cin >> random_arr[0];
	if ( random_arr[0] < 0 )
	{
	cout << "ERROR: Invaild Coin Amount !" << endl;
	cout << "How many  5c coins? => ";
	cin.clear();
    cin.ignore();
	cin >> random_arr[0];
	}
	
	cout << "How many 10c coins? => ";
	cin >> random_arr[1];
	while ( random_arr[1] < 0 )
	{
	cout << "ERROR: Invaild Coin Amount !" << endl;
	cout << "How many 10c coins? => ";
	cin.clear();
    cin.ignore();
	cin >> random_arr[1];

	}
	
	cout << "How many 20c coins? => ";
	cin >> random_arr[2];
	while ( random_arr[2] < 0 )
	{
	cout << "ERROR: Invaild Coin Amount !" << endl;
	cout << "How many 20c coins? => ";
	cin.clear();
    cin.ignore();
	cin >> random_arr[2];

	}
	
	cout << "How many 50c coins? => ";
	cin >> random_arr[3];
	while ( random_arr[3] < 0 )
	{
	cout << "ERROR: Invaild Coin Amount !" << endl;
	cout << "How many 50c coins? => ";
	cin.clear();
    cin.ignore();
	cin >> random_arr[3];

	}
	
	cout << endl << endl;
	cout << "   Jack     Ace     Queen     King" << endl;
    cout << "   5c       10c     20c       50c" << endl;
    cout << "   " << random_arr[0] << "        " << random_arr[1] << "       " << random_arr[2] << "         " << random_arr[3] << endl << endl;
    cout << "Total = RM " << (random_arr[0] * jaqk[0]) + (random_arr[1] * jaqk[1]) + (random_arr[2] * jaqk[2]) + (random_arr[3] * jaqk[3]) << endl << endl;
}

	// option n or N (exit)
	cout << "Please press any key to continue, " << endl << "press N or n to exit the program => ";
	cin >> option;
	if ( option == "n" || option == "N" )
	{ 
		 exit(0);
	}
	else
	{
		 cout << "       ..:  JAQK POT  :.. " << endl;
		 cout << "*************************************" << endl;
		 cout << "   Jack     Ace     Queen     King" << endl;
		 cout << "   5c       10c     20c       50c" << endl;
		 cout << "   " << random_arr[0] << "        " << random_arr[1] << "       " << random_arr[2] << "         " << random_arr[3] << endl << endl;
		 cout << "Total = RM " << (random_arr[0] * jaqk[0]) + (random_arr[1] * jaqk[1]) + (random_arr[2] * jaqk[2]) + (random_arr[3] * jaqk[3]) << endl << endl;
		 cout << "Press D or d if you want to deposit." << endl;
		 cout << "Press W or w if you want to withdraw." << endl;
		 cout << "Press R or r if you want to reset." << endl;
		 cout << "==> ";
		 cin >> option;
	}

	
	} while (option == "D" || option == "W" || option == "R" || option == "d" || option == "w" || option == "r" || option == "n" || option == "N");

 return 0;
 
 }