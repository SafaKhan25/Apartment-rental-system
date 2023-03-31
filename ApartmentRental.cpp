#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <iomanip> 

using namespace std;
class customer{
    public:
    string name;
    string rno;
    char key;
    int floorno;
    char data;
};

class rent: public customer{
    public:
        int days=0,rent=0;
        void data(){
            int login();
            login();
            cout<<"\t\t\t\t Please enter you name: ";
            cin>> name;
            cout<<endl;
            do{
                cout<<"\t\t\t\t Please enter the number of rooms required (2/3/4): ";
                cin>> rno;
                cout<<endl;
                if(rno=="2"){
                    system("CLS");
                    cout<<"You have selected for an apartment with 2 rooms."<<endl;
                    system("PAUSE");
                    system ("CLS");
                    Sleep(2);
                }
                if(rno=="3"){
                    system("CLS");
                    cout<<"You have selected for an apartment with 3 rooms."<<endl;
                    system("PAUSE");
                    system ("CLS");
                    Sleep(2);
                }
                if(rno=="4"){
                    system("CLS");
                    cout<<"You have selected for an apartment with 4 rooms."<<endl;
                    system("PAUSE");
                    system ("CLS");
                    Sleep(2);
                }
                if(rno!="2" && rno!="3" && rno!="4"){
                    cout<<"Invalid number. Please try again."<< endl;
                }
            }while(rno!="2" && rno!="3" && rno!="4");
            cout << "Please provide following information: "<<endl; 
	        //  getting data from user related to rental service
            cout<<"Number of days you wish to rent the appartment : ";
            cin >> days;
            cout<<"Desired floor: ";
            cin>> floorno;
            cout<<endl;
            }
        void calculate(){
            /*rents-
            2 rooms- rupees 1000 per day
            3 rooms-rupees 2000 per day
            4 rooms -rupees 3000 per day*/ 
            Sleep(1);
            system("CLS");
            cout<<"Calculating rent. Please wait ..."<<endl;
            Sleep(2);
            if(rno=="2"){
                rent=days*1000;
            }
            if(rno=="3"){
                rent=days*2000;
            }
            if(rno=="4"){
                rent=days*3000;
            }
        }
        void showrent(){
            
        cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
        cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<name<<" |"<<endl;
        cout << "\t\t	| Floor No. :"<<"--------------------|"<<setw(10)<<floorno<<" |"<<endl;
        cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<days<<" |"<<endl;
        cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rent<<" |"<<endl;
        cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
        cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
        cout << "\t\t	 ________________________________________________________"<<endl;
        cout <<"\n";
        cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rent<<" |"<<endl;
        cout << "\t\t	 ________________________________________________________"<<endl;
        cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
        cout << "\t\t	 require an authorised signture #"<<endl;
        cout <<" "<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
        cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
        cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
        int f;
        system("PAUSE");
        
        system ("CLS");
        
            ifstream inf("thanks.txt");

  
  char str[300];

  while(inf) {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
}
};
class welcome //welcome class
{
	public:
	int welcum()
	{
 ifstream in("welcome.txt"); //displaying welcome ASCII image text on output screen fn1353

  if(!in) {
    cout << "Cannot open input file.\n";
  }
  char str[1000];
  while(in) {
    in.getline(str, 1000);  // delim defaults to '\n' cp
    if(in) cout << str << endl;
  }
  in.close();
  Sleep(1);
  cout<<"\nStarting the program please wait....."<<endl;
  Sleep(1);
  cout<<"\nloading up files....."<<endl;
  Sleep(1); //function which waits for (n) seconds
  system ("CLS"); //cleares screen
  return 0;
}
};
int login(){
   string pass ="";
   char ch;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t APPARTMENT RENTAL SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t------------------------------\n\n";	
   cout << "\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
      system("PAUSE");
      system ("CLS");
   }else{
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
   }
   return 0;
}

int main(){
    welcome p1; //object created for welcome class
    p1.welcum(); //welcum function is called
    rent p2; 
    //object created for rent class and further member functions are called
    p2.data();
    p2.calculate(); 
    p2.showrent();

    return 0; //end of the program
}