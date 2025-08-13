#include <iostream>
#include <limits>
#include<string>
using namespace std;
char checkingchar(string mss) //check input of char
{   char value;
	cout<<mss<<endl;
    while (true){
	cin>>ws>>value;
	if(cin.fail())
	{
		cin.clear();
		cout<<"invalide input, please try again"
		        <<endl;
		 cin.ignore (numeric_limits<streamsize>::max(),'\n') ;
 	}else
 	{
 	     cin.ignore (numeric_limits<streamsize>::max(),'\n') ;
 	    return value;
 	}
   }
}
double checkingNumber(string mss) //check input of numbers 
{   double value;
	cout<<mss<<endl;
	while (true) {
	cin>>value;
	if(cin.fail())
	{
		cin.clear();
		cout<<"invalide input, please try again"
		        <<endl;
		 cin.ignore (numeric_limits<streamsize>::max(),'\n') ;
 	}else
 	{
 	     cin.ignore (numeric_limits<streamsize>::max(),'\n') ;

 	    return value;
 	}
   }
}
void task_1(){//calculator
	double n1=0;
	double n2=0;
	char op;
	n1=checkingNumber("enter first number\n");
	op=checkingchar("enter your operatore");
	n2=checkingNumber("enter second number");
	cout<<"result is::::::";
	switch(op)
	{
	case '+':
	     cout<<n1+n2<<endl;
	    break;
	 case '-': 
	    cout<<n1-n2<<endl;
	  break;
	  case '*': 
	     cout<<n1*n2<<endl;
	   break;
	   case '/' :
	      if(n2 !=0)
	      {
	      	cout<<n1/n2<<endl;
	      	}
	      	else 
	      	{
	      		cout<<"wait.....what !ofc you can't divide by zero , are you kidding me?! "<<endl;
	      	};
	};
};
void task_2()//temperature converter
{
        char to;
        char from;
        double value ;
        double result=0.0;
  cout << "Welcome to the Temperature Converter!\n\n"
     << "Available units:\n"
     << "\t- Celsius (C)\n"
     << "\t- Fahrenheit (F)\n"
     << "\t- Kelvin (K)\n\n";
     value=checkingNumber( "Please enter the temperature value you want to convert.\n");
     from=checkingchar ("Then specify the unit you're converting from (C, F, or K).\n");
    to=checkingchar ("Finally, specify the unit you want to convert to (C, F, or K).\n");
    to=toupper(to);
    from=toupper(from);
 if((from=='K' || from=='C' ||from=='F') && (to=='K' || to=='C' || to=='F'))//check the input must be one of K, C, F
 {
  if(to!=from)//check " to" to is not like "from"
  {
    if(from=='F')//converte to C
    {
    	result=(value-32)*5/9;//F->C
    }else if(from=='K')
    {
    	result=value-273.15;//K->C
    }else{
    	result=value;//C
    }
    if(to=='F') 
    {
    	result=(result*9/5) +32;//C->F
    }else if(to=='K')
    {
    	result=result+273.15;//C->K""
    }
  }else{
  }else{
    cout << "⚠ Conversion not needed:  source and target units are the same (" 
         << from << ")." << endl;
    cout << "Final value: " << value << " " << from << endl;
}
  }
 }else{
 	cout<<"invalide unit should be  C, F or K"<<endl;
 }
 cout<<" the result is:::::"<<result<<to<<endl;
};
int main (){
    string consol ; //commands 
    cout << R"(  
  __  __ _       _     _______                  _             _ 
 |  \/  (_)     | |   |__   __|                | |           | |
 | \  / |_ _ __ | | __   | |_ __ __ _ _ __  ___| |_ _ __ __ _| |
 | |\/| | | '_ \| |/ /   | | '__/ _` | '_ \/ __| __| '__/ _` | |
 | |  | | | | | |   <    | | | | (_| | | | \__ \ |_| | | (_| | |
 |_|  |_|_|_| |_|_|\_\   |_|_|  \__,_|_| |_|___/\__|_|  \__,_|_|
-----------------------------------------------------------------
             Mini Terminal - by Fraj
-----------------------------------------------------------------
)";
  cout<<endl; 
  while (true)//terminal repet commands
  {
  	for(int i=0;i<5; i++)
  	{
  		cout<<endl;
  	}
  cout<<"menu:::::::::::::::::: \n 1-calculator \n 2- Temperature Converter"<<endl;
  cout<<"also you can quit the terminal by exit or quit"<<endl;
    cout<<" please enter a Command"<<endl;
  cin>>consol;
  if(consol=="1" || consol=="calculator" || consol=="Calculator")
  {
  	task_1();
  }else if(consol=="2" || consol=="temperature converter" ||    consol=="Temperature Converter" ||  consol=="Temperature converter" ||  consol=="temperature Converter" ||  consol=="temperature_converter")
  {
  	task_2();
  }else if(consol=="quit" || consol=="exit")
  {   break;
  }
  else {
    cout<<"unkown tool"<<endl;
  }
  }
};