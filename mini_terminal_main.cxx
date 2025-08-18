#include <iostream>
#include <limits>
#include <string>
#include <vector>
#include <random>
#include <ctime>
#include <algorithm> 
#include <cctype>     
#include "data_storage.h"
using namespace std;
char opCheck(string mss)
{     bool check1=false;
	  char value;
    cout << mss << endl;
    while (true) {
        cin >> ws >> value;
        if (cin.fail()) // when user enter invalid input like numbers in char
        {
            cin.clear();
            cout << "invalide input, please try again" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // to clean buffer
            check1=true;
        }
        if(check1==true){
        	if(value=='+' || value=='-' || value=='*' || value=='/') {
        		return value;
        	}else{
        		cout<<"⚠ Invalid operator! Please use only +, -, * or /. Try again."<<endl;
        	}
        }
    }
}
char checkingchar(string mss) // check input of char
{
    char value;
    cout << mss << endl;
    while (true) {
        cin >> ws >> value;
        if (cin.fail()) // when user enter invalid input like numbers in char
        {
            cin.clear();
            cout << "invalide input, please try again" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // to clean buffer
            return value;
        }
    }
}

double checkingNumber(string mss) // check input of numbers
{
    double value;
    cout << mss << endl;
    while (true) {
        cin >> value;
        if (cin.fail()) // when user enter invalid input like ABC in double or int
        {
            cin.clear();
            cout << "invalide input, please try again" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // to clean buffer
            return value;
        }
    }
}

void task_1() // calculator
{
    double n1 = 0;
    double n2 = 0;
    char op; // op=operator
    n1 = checkingNumber("enter first number\n");
    op = opCheck("enter your operatore");
    n2 = checkingNumber("enter second number");
    switch (op) {
        case '+': // when operator is +
           cout << "result is::::::";
            cout << n1 + n2 << endl;
            break;
        case '-': // when operator is -
           cout << "result is::::::";
            cout << n1 - n2 << endl;
            break;
        case '*': // when operator is *
           cout << "result is::::::";
            cout << n1 * n2 << endl;
            break;
        case '/': // when operator is /
        while(true){
            if (n2 != 0) // n2 must be not 0
            {   cout << "result is::::::";
                cout << n1 / n2 << endl;
                break;
            } else {
                cout << "⚠ Error: Division by zero is not allowed. Please enter a valid non-zero divisor." << endl;
                n2= checkingNumber("please try again\n");
            };
        }
    };
}
void task_2() // temperature converter
{
    char to;
    char from;
    double value;
    double result = 0.0;
    // tool menu
    cout << "Welcome to the Temperature Converter!\n\n"
         << "Available units:\n"
         << "\t- Celsius (C)\n"
         << "\t- Fahrenheit (F)\n"
         << "\t- Kelvin (K)\n\n";
    value = checkingNumber("Please enter the temperature value you want to convert.\n");
    from = checkingchar("Then specify the unit you're converting from (C, F, or K).\n");
    to = checkingchar("Finally, specify the unit you want to convert to (C, F, or K).\n");
    to = toupper(to);
    from = toupper(from);
    if ((from == 'K' || from == 'C' || from == 'F') && (to == 'K' || to == 'C' || to == 'F')) // check the input must be one of K, C, F
    {
        if (to != from) // check "to" is not like "from"
        {
            if (from == 'F') // convert to C
            {
                result = (value - 32) * 5 / 9; // F->C
            } else if (from == 'K') {
                result = value - 273.15; // K->C
            } else {
                result = value; // C
            }
            if (to == 'F') {
                result = (result * 9 / 5) + 32; // C->F
            } else if (to == 'K') {
                result = result + 273.15; // C->K
            }
        } else { // when to=from
            cout << "⚠ Conversion not needed: source and target units are the same (" 
                 << from << ")." << endl;
            cout << "Final value: " << value << " " << from << endl;
        }
    } else { // when input is not C, F or K
        cout << "invalide unit should be C, F or K" << endl;
    }
    if(to!=from){
    cout << " the result is:::::" << result << to << endl;
    }
}
void task_3(){
	for(int a=0; a<5;a++)
	{cout<<endl;}	cout<<"╔════════════════════════════════════════════════════════════╗" ;
	cout<<"\n🌟 Welcome to the Quiz Challenge! 🌟  \n Get ready to test your 🧠 knowledge and have some fun! 🎯  \n📜 You’ll see a series of questions, each with multiple-choice answers.  \n💡 You can answer by typing either the number 1️⃣, 2️⃣, 3️⃣... \n  or the text of the answer — uppercase/lowercase doesn’t matter.  \n  ⚙️ Behind the scenes, this quiz uses: \n   📦 Vectors to store questions, answers, and correct options.  \n   🔁 Loops to control the flow.  \n✅ Conditional statements to check answers. \n  🏁 At the end, you’ll see your final score:   \n how many questions you got right out of the total.  \n🔥 Good luck… and let’s begin! 🚀\n tip:you can simply exit by quit"<<endl;
	cout<<"╚════════════════════════════════════════════════════════════ " ;
	
	vector<string> answers_back_end;
	answers_back_end=answers ;
	for(auto &s : answers_back_end) {
    for(auto &c : s) {
        c = tolower(c);
    }
}
	string chose ;
	int score =0;
	int index;
	int n=19;
	mt19937 engine(time(0));
  while(true){
   n=19;
   for (int i=0; i<10 ;i++)
   {    
   	 uniform_int_distribution<int> dist(0, n);
   	 n=n-1;
   index=dist(engine);
   cout<<Qu[index]<<endl;
   cout<<options[index]<<endl;
   cin>>chose;
   transform(chose.begin(), chose.end(), chose.begin(), ::tolower);
   if(chose==answers_back_end[index] || chose==numb[index]){
   	score++;
       answers_back_end.erase(answers_back_end.begin()+index);
       answers.erase(answers.begin()+index);
       numb.erase(numb.begin()+index);
       Qu.erase(Qu.begin() +index);
       options.erase(options.begin() +index);
   	if(index<5)
   	{
   		cout<<"🎯 Great job! That's the right answer."<<endl;
   	}else {
   		cout << "🎉 Well done! You got it right." << endl;
   	}// } of line 176 (if index<5)
   	cout<<"your score now is::"<<score<<endl;
   }else if(chose=="quit") {
   	cout<<"ok bey ;) \n";
   	break;
   	
   }else{
   	if(index<5)
   	{
   		cout << "❌ Oops! That's not correct." << endl;
   	}else{
   		cout << "⚠️ Incorrect answer." << endl;
   	}// } of line 187
   	cout<<"answer is :: "<<numb[index]<<")"<<answers[index]<<endl;
   	answers_back_end.erase(answers_back_end.begin()+index);
       answers.erase(answers.begin()+index);
       numb.erase(numb.begin()+index);
       Qu.erase(Qu.begin() +index);
       options.erase(options.begin() +index);
   	
   }// } of line 183
   }
   if(chose!="quit"){
   cout<<"👏"<<endl;
   char again;
   again=checkingchar ("play again(y/n) \n");
   again=toupper(again);
   if(again=='N'){
   	break;
   }
   }else{
   	break;
   }
  }
}
void clear() {
	#ifdef _win32
			system("cls");
	#else 
			system("clear");
	#endif
}
void pause() {
	#ifdef _win32
			system("pause");
	#else
			cout<<"press enter to continue"<<endl;
			cin.ignore();
	#endif
}
int main()
{
    string consol;
    cout << endl;
    while (true) // terminal repeat
    {			
       	clear() ;
            cout << R"(  
  __  __ _       _     _______                  _             _ 
 |  \/  (_)     | |   |__   __|                | |           | |
 | \  / |_ _ __ | | __   | |_ __ __ _ _ __  ___| |_ _ __ __ _| |
 | |\/| | | '_ \| |/ /   | | '__/ _` | '_ \/ __| __| '__/ _` | |
 | |  | | | | | |   <    | | | | (_| | | | \__ \ |_| | | (_| | |
 |_|  |_|_|_| |_|_|\_\   |_|_|  \__,_|_| |_|___/\__|_|  \__,_|_|
-----------------------------------------------------------------
             Mini Terminal - by Voidoxin 
-----------------------------------------------------------------
)";
        for (int i = 0; i < 3; i++) // under title some space
        {
            cout << endl;
        }
        cout << "menu:::::::::::::::::: \n 1-calculator \n 2- Temperature Converter \n 3-quiz" << endl;
        cout << "also you can quit the terminal by exit or quit" << endl;
        cout << " please enter a Command" << endl;
        cin >> consol;
        if (consol == "1" || consol == "calculator" || consol == "Calculator") {
            task_1(); //calculator function
            	pause();
        } else if (consol == "2" || consol == "temperature converter" || consol == "Temperature Converter" ||
                   consol == "Temperature converter" || consol == "temperature Converter" || consol == "temperature_converter") {
            task_2(); //temperature converter fonction 
            	pause();
        } else if (consol == "quit" || consol == "exit") { // user exit
            cout << "bey ; ) " << endl;
            break;
        }else if(consol=="3" || consol=="QUIZ" || consol=="Quiz" || consol=="quiz")
        {
	     	task_3();
	     	pause();
        } else {
            cout<<endl;
            cout <<"--->:unkown tool" << endl;
        }
    }
};