#include <iostream>
using namespace std;
void task_1(){
	double n1=0;
	double n2=0;
	char op;
	cout<<"enter first number"<<endl;
	cin>>n1;
	cout<<"enter your operators"<<endl;
	cin>>op;
	cout<<"enter second number"<<endl;
	cin>>n2;
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
void task_2()
{
        char to;
        char from;
        float value ;
        double result=0.0;
  cout << "Welcome to the Temperature Converter!\n\n"
     << "Available units:\n"
     << "\t- Celsius (C)\n"
     << "\t- Fahrenheit (F)\n"
     << "\t- Kelvin (K)\n\n"
     << "Please enter the temperature value you want to convert.\n";
     cin>>value;
     cout<< "Then specify the unit you're converting from (C, F, or K).\n";
     cin>>from;
    cout << "Finally, specify the unit you want to convert to (C, F, or K).\n";
    cin>>to;
    to=toupper(to);
    from=toupper(from);
 if(from=='K' || from=='C' ||from=='F' && to=='K' || to=='C' || to=='F')
 {
  if(to!=from)
  {
    if(from=='F')
    {
    	result=(value-32)*5/9;
    }else if(from=='K')
    {
    	result=value-273.15;
    }else if(from!='C')
    {
    	cout<<"how this happining it's impossible is this a bug or you're hacker?!!"<<endl;
    }else {
    	result=value;
    }
    if(to=='F') 
    {
    	result=(result*9/5) +32;
    }else if(to=='K')
    {
    	result=result+273.15;
    }
  }else{
  	cout<<" you want to converte from "<<from<<" to "<<to<<" are you crazy?! "<<endl;
  }
 }else{
 	cout<<"invalide unit should be  C, F or K"<<endl;
 }
 cout<<" the result is:::::"<<result<<to<<endl;
};
int main (){
    string consol ;
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
  while (true)
  {
  	for(int i=0;i<5; i++)
  	{
  		cout<<endl;
  	}
  cout<<"menu:::::::::::::::::: \n 1-calculator \n 2- Temperature Converter"<<endl;
    cout<<" please enter a Command"<<endl;
  cin>>consol;
  if(consol=="1" || consol=="calculator" || consol=="Calculator")
  {
  	task_1();
  }else if(consol=="2" || consol=="temperature converter" ||    consol=="Temperature Converter" ||  consol=="Temperature converter" ||  consol=="temperature Converter" ||  consol=="temperature_converter")
  {
  	task_2();
  }
  else {
    cout<<"unkown tool"<<endl;
  }
  }
};