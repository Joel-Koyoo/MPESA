#include<iostream>
#include<conio.h>
//#include<vector>
//#include <string>
#include <sstream>

using namespace std;

int getInt()
{
    int Amount;
    bool jump=true;
    while(jump)
    {
        cout << "Enter Amount in your account" <<endl;
        string s;
        getline(cin, s);

        stringstream stream(s);
        if(stream >> Amount)
        {
            jump=false;
            continue;
        }
        cout << "Invalid!" << endl;
    }
}
int main()
{
	
cout<<"WELCOME TO MPESA SERVICES\n "<<endl;

cout<<"*************************** <PRESS ENTER TO CONTINUE>**********************\n";
getch();
int amounte;
int Amount;

if (Amount<0){
	cout<<"Invalid input";
}
else if(Amount>70000){
	cout<<"Amount has surpassed MPESA range ";
}

cout << getInt();
cout<<"\n";
cout<<"\n";
cout<<"Enter amount in your account for verification\n";
cin>>Amount;


cout<<"\n";
if (Amount<0){
	cout<<"Invalid input";
}
else if(Amount>70000){
	cout<<"Amount has surpassed MPESA range ";
}

else{cout<<"*************************** <PRESS ENTER KEY TO CONTINUE>**********************\n";
	string PIN;
    while(getline(cin,PIN) && PIN.size() != 4 ) {
        cout << "Please enter a valid PIN number\n";
}cout<<"*************************** <PRESS ANY KEY TO CONTINUE>**********************\n";
   string number;
	while(getline(cin,number) && number.size()!=10){
		cout<<"Enter Valid Phone number(four digits)\n ";
	
	}
cout<<"******************************* <IF INFORMATION IS CORRECT,PRESS ANY KEY TO CONTINUE>***********************************\n";
 getch();
 
 
cout<<"Select the procedure you require\n\n\n";

cout<<"1.Send Money\n";
cout<<"2.Withdraw Cash\n";
cout<<"3.Buy Airtime\n";
cout<<"4.Loans and Savings\n";
cout<<"5.Lipa na M-PESA\n";
cout<<"6.My Account\n";
cout<<"\n";


cout<<"**********************************************************************************************\n";
int input;
cin>>input;
int option;
string contacts_name;
string phone_number;
string pine;
int amount;
int balance;
int Agent_No;
int Credit;
char Activate;
int till_no;
int business_no;
string Acc_no;
int new_pin;
int repeat_pin;


int Trans;
if (amount<100){
	Trans=2;
}
else if(amount>100 && amount<1000){
	Trans=4;
}
else{
	Trans=10;
}



if(input==1){
	        cout<<"1.Search SIM contact\n";
			cout<<"2.Enter Phone no.\n"<<endl;
		cout<<"**********************************************************************************************\n";
cin>>option;
			
		switch(option){
			case 1:
			      cout<<"Contact's name: ";
	              cin>>contacts_name;
	              
	              	cout<<"********PROCESSING INFORMATION PRESS ANY KEY TO PROCEED*************************\n";
	              getch();
	              cout<<"********PROCESS COMPLETE PRESS ANY KEY*************************\n";
	              getch();
						cout<<"**********************************************************************************************\n";
		        	cout<<"No Match!";
			break;
			case 2:
					//cout<<"Enter phone no ";
              //	cin>>phone_number;
	
	while(getline(cin,phone_number) && phone_number.size()!=10){
		cout<<"Enter Valid Phone number\n ";
	}
					cout<<"**********************************************************************************************\n";
				cout<<"Enter Amount\n";
				cin>>amount;
				balance=Amount-amount;
				if(balance<0){
					cout<<"Insufficient balance";
				}else{
						cout<<"**********************************************************************************************\n";
				cout<<"Enter PIN\n ";
				cin>>pine;
				if (pine!=PIN){
					cout<<"Wrong PIN ";
				}
				else{
					cout<<"********PROCESSING INFORMATION PRESS ANY KEY TO PROCEED*************************\n";
	              getch();
	              cout<<"********PROCESS COMPLETE PRESS ANY KEY*************************\n";
	              getch();
						cout<<"**********************************************************************************************\n";
					cout<<"ODI3KWDJ55 Confirmed sending Kshs "<<amount<<" to "<<phone_number<<" on 13/4/20 at 10.34AM.New MPESA balance will be "<<balance<<" Transaction cost, "<<Trans<" Kshs";
				}
		}
			break;
		default:
			cout<<"Invalid Choice.";
			break;
		}	
}
else if(input==2){
	        cout<<"1.From Agent\n";
			cout<<"2.From ATM\n"<<endl;
		cout<<"**********************************************************************************************\n";
	cin>>option;
			
		switch(option){
			case 1:cout<<"Enter Agent Number\n ";
			       cin>>Agent_No;
			       
			       	cout<<"**********************************************************************************************\n";
			       	
			       cout<<"Enter Amount\n";
				cin>>amount;
				
					cout<<"**********************************************************************************************\n";
					
				balance=Amount-amount;
				if(balance<0){
					cout<<"Insufficient balance";
				}else{
					
						cout<<"**********************************************************************************************\n";
				cout<<"Enter PIN\n ";
				cin>>pine;
				if (pine!=PIN){
					cout<<"Wrong PIN ";
				}
				else{
						cout<<"********PROCESSING INFORMATION PRESS ANY KEY TO PROCEED*************************\n";
	              getch();
	              cout<<"********PROCESS COMPLETE PRESS ANY KEY*************************\n";
	              getch();
						cout<<"**********************************************************************************************\n";
					cout<<"ODI3KWDJ55 Confirmed withdrawing Kshs "<<amount<<" from "<<number<<" on 13/4/20 at 10.34AM.New MPESA balance will be "<<balance<<" Transaction cost, "<<Trans<" Kshs";
				}
		}
		                                               	break;
		
		case 2:cout<<"Enter Agent Number\n ";
			       cin>>Agent_No;
			       
			       	cout<<"**********************************************************************************************\n";
			        cout<<"Enter Amount\n";
				cin>>amount;
				balance=Amount-amount;
				if(balance<0){
					cout<<"Insufficient balance";
				}else{
						cout<<"**********************************************************************************************\n";
				cout<<"Enter PIN\n ";
				cin>>pine;
				if (pine!=PIN){
					cout<<"Wrong PIN ";
				}
				else{
						cout<<"********PROCESSING INFORMATION PRESS ANY KEY TO PROCEED*************************\n";
	              getch();
	              cout<<"********PROCESS COMPLETE PRESS ANY KEY*************************\n";
	              getch();
						cout<<"**********************************************************************************************\n";
					
				cout<<"ODI3KWDJ55 Confirmed withdrawing Kshs "<<amount<<" from "<<number<<" on 13/4/20 at 10.34AM.New MPESA balance will be "<<balance<<" Transaction cost, "<<Trans<" Kshs";
			
			     
}
}	break;
        	default:
			cout<<"Invalid Choice.";
		                             	break;
}
}
      else if(input==3){cout<<"1.My Phone\n ";
                    cout<<"2.Other Phone\n ";
                    	cout<<"**********************************************************************************************\n";
	cin>>option;
			
		switch(option){
			case 1:
				cout<<"Enter Amount\n ";
				cin>>Credit;
				balance=Amount-Credit;
				if(balance<0){
					cout<<"Insufficient balance";
				}else{
						cout<<"**********************************************************************************************\n";
				cout<<"Enter PIN\n ";
				cin>>pine;
				if (pine!=PIN){
					cout<<"Wrong PIN ";
				}
				else{
						cout<<"********PROCESSING INFORMATION PRESS ANY KEY TO PROCEED*************************\n";
	              getch();
	              cout<<"********PROCESS COMPLETE PRESS ANY KEY*************************\n";
	              getch();
						cout<<"**********************************************************************************************\n";
					cout<<"Confirmed, Credit worth "<<Credit<<" Bought for "<<number<<". Your new MPESA balance is Kshs "<<balance;
			     
				 }
               }
                                     break;

             case 2:  	while(getline(cin,phone_number) && phone_number.size()!=10){
	         	cout<<"Enter Valid Phone number\n ";
	}
             	cout<<"Enter Amount\n ";
				cin>>Credit;
				balance=Amount-Credit;
				if(balance<0){
					cout<<"Insufficient balance";
				}else{
						cout<<"**********************************************************************************************\n";
				cout<<"Enter PIN\n ";
				cin>>pine;
				if (pine!=PIN){
					cout<<"Wrong PIN ";
				}
				else{
						cout<<"********PROCESSING INFORMATION PRESS ANY KEY TO PROCEED*************************\n";
	              getch();
	              cout<<"********PROCESS COMPLETE PRESS ANY KEY*************************\n";
	              getch();
						cout<<"**********************************************************************************************\n";
					cout<<"Confirmed, Credit worth "<<
					Credit<<" Bought for "<<phone_number<<". Your new MPESA balance is Kshs "<<balance;
			     
				 }
}	break;
    default:cout<<"Invalid Choice ";
		             
             	
}
}
  else if(input==4){cout<<"1.M-Shwari\n";
                    cout<<"2.KCB-MPESA\n";
            cin>>option;
			
		switch(option){
			case 1:
				cout<<"1.Activate\n";
				cin>>Activate;
					cout<<"**********************************************************************************************\n";
				cout<<"Enter PIN\n ";
				cin>>pine;
				if (pine!=PIN){
					cout<<"Wrong PIN ";
				}
				else{
						cout<<"********PROCESSING INFORMATION PRESS ANY KEY TO PROCEED*************************\n";
	              getch();
	              cout<<"********PROCESS COMPLETE PRESS ANY KEY*************************\n";
	              getch();
						cout<<"**********************************************************************************************\n";
					cout<<"You have successfully activated your M-Shwari account. Stay Connected with Safaricom ";
					
			     
				 }
				 break;
		 case 2:	cout<<"1.Activate\n";
				cin>>Activate;
					cout<<"**********************************************************************************************\n";
				cout<<"Enter PIN\n ";
				cin>>pine;
				if (pine!=PIN){
					cout<<"Wrong PIN ";
				}
				else{
						cout<<"********PROCESSING INFORMATION PRESS ANY KEY TO PROCEED*************************\n";
	              getch();
	              cout<<"********PROCESS COMPLETE PRESS ANY KEY*************************\n";
	              getch();
						cout<<"**********************************************************************************************\n";
					cout<<"You have successfully activated your KCB-Mpesa savings account. Stay Connected with Safaricom ";
					
			     
				 }
				 break;
		default:cout<<"Invalid Choice ";
		
				 	
}
}

   else if(input==5){cout<<"1.Pay Bill\n";
                    cout<<"2.Buy Goods and Services\n ";
       	cin>>option;
	    int choose;
	
	 
			switch(option)	{
		case 1:
		 cout<<"1.Search SIM contacts\n ";
	cout<<"2.Enter Business Number\n ";				
cin>>choose;
	switch(choose){
		
		case 1:cout<<"Contact's name\n ";
	              cin>>contacts_name;
	              	cout<<"********PROCESSING INFORMATION PRESS ANY KEY TO PROCEED*************************\n";
	              getch();
	              cout<<"********PROCESS COMPLETE PRESS ANY KEY*************************\n";
	              getch();
						cout<<"**********************************************************************************************\n";
		        	cout<<"No Match!";
	
	case 2:cout<<"Enter Business number\n";
	        cin>>business_no; 
	        	cout<<"******************************************************************************************************\n";
			  cout<<"Enter Account no\n ";
			  cin>>Acc_no;
			  	cout<<"***************************************************************************************************************************\n";
			   cout<<"Enter Amount\n";
				cin>>amount;
				balance=Amount-amount;
				if(balance<0){
					cout<<"Insufficient balance";
				}else{
						cout<<"***************************************************************************************************\n";
				cout<<"Enter PIN\n ";
				cin>>pine;
				if (pine!=PIN){
					cout<<"Wrong PIN ";
			}
				else{
						cout<<"********PROCESSING INFORMATION PRESS ANY KEY TO PROCEED*************************\n";
	              getch();
	              cout<<"********PROCESS COMPLETE PRESS ANY KEY*************************\n";
	              getch();
						cout<<"**********************************************************************************************\n";
					cout<<"0DH9K4N687 Confirmed, Kshs "<<amount<<" Send for account "<<Acc_no<<" on 19/2/20 at 10.34AM. New MPESA balance is "<<balance<<" Transaction cost Kshs "<<Trans;
			     
}
}	break;
        	default:
			cout<<"Invalid Choice.";
			break;
			  }
		
			  case 2:cout<<"Enter Till number\n ";
			         cin>>till_no;
			         		cout<<"**********************************************************************************************\n";
			   cout<<"Enter Amount\n";
				cin>>amount;
				balance=Amount-amount;
				if(balance<0){
					cout<<"Insufficient balance";
				}else{
						cout<<"**********************************************************************************************\n";
				cout<<"Enter PIN\n ";
				cin>>pine;
				if (pine!=PIN){
					cout<<"Wrong PIN ";
				}
				else{
						cout<<"********PROCESSING INFORMATION PRESS ANY KEY TO PROCEED*************************\n";
	              getch();
	              cout<<"********PROCESS COMPLETE PRESS ANY KEY*************************\n";
	              getch();
						cout<<"**********************************************************************************************\n";
					cout<<"0DH9K4N687 Confirmed,You have paid Kshs "<<amount<<" to paybill "<<till_no<< "on 19/2/20 at 10.34AM. New MPESA balance is "<<balance<<"Transaction cost Kshs "<<Trans;
			     

}
}	  	
          }
      }
      else if(input==6){cout<<"1.Mini-statement\n ";
                        cout<<"2.Check Balance\n ";
                        cout<<"3.Change PIN\n ";
                        cout<<"4.Change Language\n ";
                        cout<<"5.Update Customer Menu\n ";
              cout<<"**********************************************************************************************\n";
			  cin>>option;
			
		switch(option){
			case 1:	cout<<"Enter PIN\n ";
				cin>>pine;
				if (pine!=PIN){
					cout<<"Wrong PIN ";
				}
				else{
						cout<<"********PROCESSING INFORMATION PRESS ANY KEY TO PROCEED*************************\n";
	              getch();
	              cout<<"********PROCESS COMPLETE PRESS ANY KEY*************************\n";
	              getch();
						cout<<"**********************************************************************************************\n";
					cout<<"Mini statement sent ";
				}
					break;
			case 2:	cout<<"Enter PIN\n ";
				cin>>pine;
				if (pine!=PIN){
					cout<<"Wrong PIN ";
				}
				else{
						cout<<"********PROCESSING INFORMATION PRESS ANY KEY TO PROCEED*************************\n";
	              getch();
	              cout<<"********PROCESS COMPLETE PRESS ANY KEY*************************\n";
	              getch();
						cout<<"**********************************************************************************************\n";
					cout<<"Your Balance is "<<Amount;
				}
					break;
			case 3: cout<<"Enter Old PIN\n ";
			       cin >>pine;
			       	if (pine!=PIN){
					cout<<"Wrong PIN ";
				   }
				   else{
				   cout<<"Enter New PIN\n ";
			       cin >>new_pin;
			       cout<<"Enter New PIN again\n ";
			       cin >>new_pin;
			       if(new_pin!=repeat_pin){
			       	cout<<"PIN dont match,Try Again";
				   }
				   else{
				   	cout<<"********PROCESSING INFORMATION PRESS ANY KEY TO PROCEED*************************\n";
	              getch();
	              cout<<"********PROCESS COMPLETE PRESS ANY KEY*************************\n";
	              getch();
						cout<<"**********************************************************************************************\n";
			       
			       cout<<"Dear Customer,Your new PIN is "<<new_pin;
			   }
		}
			   	break;
			   case 4:
			   	int Language;
			   		cout<<"1.English\n"<<endl;
			     	cout<<"2.Kiswahili\n"<<endl;
			   	cin>>Language;
			   	cout<<"**********************************************************************************************\n";
			   	switch(Language){
			   		cout<<"1.English\n"<<endl;
			     	cout<<"2.Kiswahili\n"<<endl;
				cout<<"**********************************************************************************************\n";
			   	case 1:cout<<"Dear Customer,Your Language is English"<<endl;
				break;
				   case 2:cout<<"Mpenzi Mtumiaji,Lugha sasa ni Kiswahili"<<endl;
				   break;
			       default:cout<<"Invalid Option"<<endl;
			       break;
			   }
			   break;
			   case 5:cout<<"Enter PIN\n ";
				cin>>pine;
				if (pine!=PIN){
					cout<<"Wrong PIN ";
				}
				else{
						cout<<"**********************************************************************************************\n";
					cout<<" Customer Menu updated";
						break;
			   default:cout<<"Invalid Option";
			       break;   
   }
    
      }
  }
		  }
      }
				


