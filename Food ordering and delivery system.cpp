/*OOP CONCEPTS INVOLVED:

  1. Inheritance:
     Multiple
     Multilevel
     Hybrid
  2. Template
  3. Filing
  4. Polymorphism(Abstract Class) 
  5. Global Function instead of friend -----> 1.Ad() 2.Discount() 3.GlobalFun()
  6. Encapsulation
  7. Abstraction 
  8. Map ---> in Suggestions
  9. Exception Handling  --->Switch Controls in Global Function
  10. Copy Constructor --> class Kolachi

*/
#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
#include<unistd.h>
#include<windows.h> 
#include<map>
#include<dos.h>
#include<ctime>
#include<stdexcept>
using namespace std;

//## Module
int Exit()
{
	system("CLS");
	system("CLS");
	cout << "\n\t\t\t\t\tThis Wonderful CLI Deployment has been developed through the joint efforts of, and is brought to you by Zain-Abdullah-Umer Software Enterprises"<< endl;
}   
string guser;

//## Module
    void Ad()
{ 
    srand(time(0));
    int r=rand()%4;
    srand(time(0));
    int p= rand()%5;
    if((p==1) || (p==3))
    {
    switch(r)
    {
	
	    case 1:
		{
	system("cls");
    system("Color 1F");

  	Sleep(300);
	      
	map<string,int> deal;
	deal["1 Jumbo Slice + 1 Slice Tertrapack = Rs."]=1000;
	cout<<"\n\n\n\n\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!AD BANNER- ONLY THE BEST CAN BEAT THE REST!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	cout<<"\n\t\t\t\t\t============================================================\n";
	cout<<"\t\t\t\t\t||                BROUGHT TO YOU BY SLICE                 ||"   ;
	cout<<"\n\t\t\t\t\t============================================================\n";
	cout<<"\t\t\t\t\tOrange Season is Over? NO WORRIES! \n\n";
	cout<<"\t\t\t\t\t\tAaye, Slice Peejiye Aur...\n\n";
	cout<<"\t\t\t\t\t\t\tZindagi Dobhara Se Jeelijye!\n\n";
	cout<<"\n\t\t\t\t\t\t!!!!!\t!!!!\t!!    \n\t\t\t\t\t\t!    !\t !!\t!!      \n\t\t\t\t\t\t!    !\t !!\t!!     \n\t\t\t\t\t\t!!!!!\t!!!!\t!!!!!\n\t\t\t\t\t\t\t\t\tse!\n\n\n\n";
	map<string,int>::iterator itr;
    for(itr=deal.begin();itr!=deal.end();itr++)
	{
		cout<<"\t\t\t\t\t"<<(*itr).first<<" "<<(*itr).second<<"\n";
	}

	cout<<"\n\t\t\t\t\t\t";
   	            system("PAUSE");

      			}
    break;


        case 2:
    	{
    system("cls");
    system("Color 1F");

  	Sleep(300);
	      
	map<string,int> deal;
	deal["1 JUMBO COKACOLA + 1 REGULAR COKACOLA + 1 COKACOLA CAN = Rs."]=800;
	cout<<"\n\n\n\n\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!AD BANNER- ONLY THE BEST CAN BEAT THE REST!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	cout<<"\n\t\t\t\t\t============================================================\n";
	cout<<"\t\t\t\t\t||                BROUGHT TO YOU BY COKACOLA                 ||"   ;
	cout<<"\n\t\t\t\t\t============================================================\n";
	cout<<"\t\t\t\t\tKHALE \n\n";
	cout<<"\t\t\t\t\t\tPEELE\n\n";
	cout<<"\t\t\t\t\t\t\tJEELE\n\n";
	cout<<"\n\t\t\t\t\t\t!!!!!\t!!!!\t!!    \n\t\t\t\t\t\t!    !\t !!\t!!      \n\t\t\t\t\t\t!    !\t !!\t!!     \n\t\t\t\t\t\t!!!!!\t!!!!\t!!!!!\n\t\t\t\t\t\t\t\t\tse!\n\n\n\n";
	map<string,int>::iterator itr;
    for(itr=deal.begin();itr!=deal.end();itr++)
	{
		cout<<"\t\t\t\t\t"<<(*itr).first<<" "<<(*itr).second<<"\n";
	}
	

	cout<<"\n\t\t\t\t\t\t";
   	            system("PAUSE");

    }
    break;
    
    case 3:
    {
			
    system("cls");
    system("Color 1F");

  	Sleep(300);
	      
	map<string,int> deal;
	deal[" 1 REGULAR ENERGY STING = Rs."]=150;
	cout<<"\n\n\n\n\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!AD BANNER- ONLY THE BEST CAN BEAT THE REST!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	cout<<"\n\t\t\t\t\t============================================================\n";
	cout<<"\t\t\t\t\t||                BROUGHT TO YOU BY STING                 ||"   ;
	cout<<"\n\t\t\t\t\t============================================================\n";
	cout<<"\t\t\t\t\tAB \n\n";
	cout<<"\t\t\t\t\t\tLAGEGA\n\n";
	cout<<"\t\t\t\t\t\t\tZINDAGI\n\n";
	cout<<"\t\t\t\t\t\t\t\tKA\n\n";
	cout<<"\t\t\t\t\t\t\t\t\tJHATKA\n\n";
	
	cout<<"\n\t\t\t\t\t\t!!!!!\t!!!!\t!!    \n\t\t\t\t\t\t!    !\t !!\t!!      \n\t\t\t\t\t\t!    !\t !!\t!!     \n\t\t\t\t\t\t!!!!!\t!!!!\t!!!!!\n\t\t\t\t\t\t\t\t\tMAIN!\n\n\n\n";
	map<string,int>::iterator itr;
    for(itr=deal.begin();itr!=deal.end();itr++)
	{
		cout<<"\t\t\t\t\t"<<(*itr).first<<" "<<(*itr).second<<"\n";
	}
	cout<<"\n\t\t\t\t\t\t";
   	            system("PAUSE");

    }
    break;
    
    case 4:
		{
	system("cls");
    system("Color 1F");

  	Sleep(300);
	      
	map<string,int> deal;
	deal["1 JUMBO PEPSI + 1 REGULAR PEPSI + 1 PEPSI CAN = Rs."]=1000;
	cout<<"\n\n\n\n\n\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!AD BANNER- ONLY THE BEST CAN BEAT THE REST!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	cout<<"\n\t\t\t\t\t============================================================\n";
	cout<<"\t\t\t\t\t||                BROUGHT TO YOU BY PEPSI                 ||"   ;
	cout<<"\n\t\t\t\t\t============================================================\n";
	cout<<"\t\t\t\t\tKHALE \n\n";
	cout<<"\t\t\t\t\t\tPEELE\n\n";
	cout<<"\t\t\t\t\t\t\tJEELE\n\n";
	cout<<"\n\t\t\t\t\t\t!!!!!\t!!!!\t!!    \n\t\t\t\t\t\t!    !\t !!\t!!      \n\t\t\t\t\t\t!    !\t !!\t!!     \n\t\t\t\t\t\t!!!!!\t!!!!\t!!!!!\n\t\t\t\t\t\t\t\t\tse!\n\n\n\n";
	map<string,int>::iterator itr;
    for(itr=deal.begin();itr!=deal.end();itr++)
	{
		cout<<"\t\t\t\t\t"<<(*itr).first<<" "<<(*itr).second<<"\n";
	}
	

	cout<<"\n\t\t\t\t\t\t";
   	            system("PAUSE");

      			}
    break;

}}
}

//## Module

class Restaurant{
    public:
    	
	void total()
      {
      		
      		int count = 0;
      		string userId; //for user id of administrator
      		string pwd;
      		system("Color 5F");

			d:
			if (count >=2)
			{cout << endl << "You have entered the wrong credentials multiple times. Please try again." << endl;
			exit (1);
			}	
			cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t---------------------------------";
			cout<<"\n\t\t\t\t\t\t\tPlease Enter Your Login Credentials:"<< endl ;
			cout<<"\t\t\t\t\t\t\t";cin>>userId;
			cout<<"\t\t\t\t\t\t\t--------------------------------------";
			if((userId!="food")&& (userId!="cookie")&& (userId!="brownie"))
			{
				cout<<"\nPlease Enter The Correct Login Credentials.\n";
				count++;
				goto d;
			}
			count = 0;
			z:
		if (count >=2)
			{cout << endl << "You have entered the wrong credentials multiple times. Please try again." << endl;
			exit (1);
			}
			string pass="";  //empty string
			if(userId == "food")
			pwd ="brownfox";
			if(userId == "cookie")
			pwd ="biscuit";
			if(userId == "brownie")
			pwd ="choco";
			
			char c;	
				cout<<"\n\n\t\t\t\t\t\t\t---------------------";
			    cout<<"\n\t\t\t\t\t\t\tPassword = "; 
				cout <"\t\t\t";
				p:
				c=getch();
				cout<<"*";   //for printing * instead for password
				if(c!=13)
				{
					pass=pass+c;  //for concatenating the string
					goto p;
				}   
				cout<<"\n\t\t\t\t\t\t\t---------------------";
			    	
      			cout << endl <<"Username :" <<guser << endl;
      			if(pass==pwd)
      			{
      				cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\t==============================================";
      				cout<<"\n\t\t\t\t\t\t|| Access Granted. Greetings User! ||\n";
      				guser = userId;
      				cout<<"\t\t\t\t\t\t==============================================\n\n\n\n";
   	            
			        Ad();
			        system("Color 5F");
				}
				else
				{
				cout<<"\n\t\t\t\tWrong Password\n";
				count++;
				goto z;
				}
			}		
		
};

//## Module

template<class T,class T1>
T Discount(T s)
{
	T a;
	T1 c,b;
	
	cout<<"\n\n\n\t\t\tDo you have Discount Coupon? (Yes/No)";
	cin>>c;
	
	if(c=="yes")
	{
	cout<<"\t\t\tEnter Discount Coupon Code:\n";
	cin>>b;
	
	if(b=="123")
	{
	s=s-(s*10/100);
	system("cls");
	cout<<"\t\t\tCongrats 10 % Discount Granted !\n\n";
	cout<<"\t\t\t\t=====================================\n";
	cout<<"\t\t\t\t     Bill after Discount:"<<s<<endl;
	cout<<"\t\t\t\t=====================================\n";
	}
	else
	{
		system("cls");
		cout<<"Wrong coupon Code Hence No discount!\n";
		s=s;
		cout<<"\t\t\t\t=====================================\n";
	    cout<<"\t\t\t\t     Bill after No Discount:"<<s<<endl;
	    cout<<"\t\t\t\t=====================================\n";
	
	}
    }
    else
    {
    	cout<<"No Worry!";
	}
}

//Abstract class covered
//## Module
class Desi:public Restaurant{
	public:
		virtual void menu()=0;
};

//Class Templates Covered
//## Module
template<class T,class T1>

class Kolachi:public Desi{
	protected:
		 T  pizza,ch,u,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0,z=0,Distance[12],extraCharges,tem_bill=0,selection,sector_distance=0;;
         T1 y,ye, restaurantDes,sector;
     public:
     	Kolachi(const Kolachi &obj)
     	{
     		pizza =obj.pizza;
     		ch=obj.ch;
     		a=obj.ch,
			 b=obj.b;
			 c=obj.c;
			 d=obj.d;
			 e=obj.e;
			 f=obj.f;
			 g=obj.g;
			 h=obj.h;
			 i=obj.i;
			 j=obj.j;
			 k=obj.k;
			 l=obj.l;
			 m=obj.m;
			 n=obj.n;
			 o=obj.o;
			 p=obj.p;
			 q=obj.q;
			 r=obj.r;
			 s=obj.s;
     		
     		y=obj.y;
			ye=obj.ye;
		}
		Kolachi & operator=(const Kolachi& a)
		{
		return *this;
		}
     explicit Kolachi()
	 {
	 	pizza=0,ch=0,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0;
	 }	
    void menu()
    {
    	cout << endl <<"Username :" <<guser << endl;
	    system("Color E4");

	cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO KOLACHI RESTAURANT=========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Chicken Biryani (Rs.180)\t\t\t[2] Chicken Tikka(Rs.440)\t\t\t\t[3] Pinacolada (Rs.580)\n\t[4] Chicken Handi (Rs.1000)\t\t\t[5] Chicken Boti Roll (Rs.350)\t\t\t\t[6] Oreo Shake (Rs.400)\n\t[7] Chicken Karahi (Rs.420)\t\t\t[8] Beef Boti (Rs.240)\t\t\t\t\t[9] Custard (Rs.548)\n\t[10] Chicken Haleem (Rs.800)\t\t\t[11] Seekh Kabab (Rs.225)\t\t\t\t[12] Strawberry Shake(Rs.225)\n\t[13] Beef Nihari (Rs.860)\t\t\t[14] Bihari Boti (Rs235)\t\t\t\t[15] Cold Coffee (Rs.224)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;
    }
    
    void menu1()
    {  
	  ofstream write;
      write.open("order.text");
    
	if(!write)
    {
	cout<<"file can not open"<<endl;
	exit (-1);
    } 

    a:
   	b:
    c:
    u:
   	cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
    cin>>ch;
    
    cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
    cin>>ye;
 
    if(ye=="y"|| ye=="Y")
    {
  	 goto b;
    }
    else
    {
      switch(ch)
    {
   	case 1:
   		cout<<"\n\n\tHOW MUCH KILO CHICKEN BIRYANI YOU WANT :";
   		cin>>pizza;
   	
   		a=180;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Chicken Biryani : 480";
   		write<<" \n";
   		write<<"NUMBER OF KILOS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER  Chicken Biryani "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	
        
    break;
   	

   	case 2:
   		cout<<"\n\n\tHOW MANY CHICKEN TIKKA YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  CHICKEN TIKKA : 440";
   		write<<" \n";
   		write<<"NUMBER OF CHICKEN TIKKA IS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER  CHICKEN TIKKA "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY PINA COLADA SHAKES YOU WANT :";
   		cin>>pizza;
   	
   		c=580;
   		s=s+c*pizza;
   			write<<"YOU ORDER  PINA COLADA : 580";
   			write<<" \n";
   			write<<"NUMBER OF PINA COLADA SHAKES IS : "<<pizza;
   		    write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER PINA COLADA "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MUCH KILO Chicken Handi  YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER  Chicken Handi  : 1000";
   	write<<" \n";
   		write<<"NUMBER OF KILOS OF Chicken Handi  IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  Chicken Handi  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW Chicken Boti Roll YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER Chicken Boti Roll: 350";
   		write<<" \n";
   			write<<"NUMBER OF Chicken Boti Roll IS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Chicken Boti Roll "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	    break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY Oreo Shakes YOU WANT:";
   		cin>>pizza;
   	
   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER Oreo Shake : 400";
   		write<<"\n ";
   			write<<"NUMBER OF Oreo Shake IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Oreo Shake "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY Chicken Karahi YOU WANT:";
   		cin>>pizza;
   	
   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER Chicken Karahi: 420";
   		write<<"\n ";
   			write<<"NUMBER OF Chicken Karahi IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Karahi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MANY Beef Boti YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER Beef Boti : 540";
   		write<<" \n";
   			write<<"NUMBER OF Beef Boti IS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Beef Boti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tHOW MANY Custard YOU WANT :";
   		cin>>pizza;
   	
		i=548;
		s=s+i*pizza;
		write<<"YOU ORDER Custard : 548";
		write<<" \n";
			write<<"NUMBER OF Custard IS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Custard "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 10:
   		
		cout<<"\n\n\tHOW MUCH KILO Chicken Haleem YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER Chicken Haleem : 800";
   		write<<" \n";
   			write<<"NUMBER OF KILOS OF Chicken Haleem IS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Chicken Haleem "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   		cout<<"\n\n\tHOW MANY KILOS OF Chicken Haleem (Rs.800)\t\t\t[11] Chicken Jalfarezi (Rs.425)\t\t\t\t[12] Strawberry Shake YOU WANT :";
   		cin>>pizza;
   	
   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER Seekh Kabab : 225";
   		write<<" \n";
   			write<<"NUMBER OF Seekh Kabab IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Seekh Kabab "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MANY Strawberry Shakes YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER Strawberry Shake: 225";
   		write<<" \n";
   			write<<"NUMBER OF Strawberry Shake IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Strawberry Shake "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 13:
   		cout<<"\n\n\tHOW MUCH KILO Beef Nihari YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDER Beef Nihari : 860";
   		write<<" \n";
   			write<<"NUMBER OF KILOS OF Beef Nihari IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Beef Nihari "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY Bihari Boti YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER Bihari Boti : 235";
   		write<<" \n";
   			write<<"NUMBER OF Bihari Boti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Bihari Boti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY Cold Coffees YOU WANT :";
   		cin>>pizza;
   	
   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDERED Cold Coffee : 224";
   		write<<"\n ";
   		write<<"NUMBER OF Cold Coffee IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Cold Coffee "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By Zain-Abdullah-Umer Software Enterprises";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	//## Module
   	system("cls");
   	cout<<"\n\n\t\t\t\t<----------------------DELIVERY AREAS------------------------------>";
    //cin>>restaurantDes;
    int Distance[12]={10,14,15,21,25,28,30,33,35,40,42,44};
    cout<<"\n\n\n\t\tWe Deliver in these Areas of Karachi!"<<endl;
    cout<<"\t\t[1]  North Nazimabad "<<endl;
    cout<<"\t\t[2]  Defence (All Phases) "<<endl;
    cout<<"\t\t[3]  North Karachi"<<endl;
    cout<<"\t\t[4]  Bahria Town"<<endl;
    cout<<"\t\t[5]  Saddar"<<endl;
    cout<<"\t\t[6]  New Karachi "<<endl;
    cout<<"\t\t[7]  Malir"<<endl;
    cout<<"\t\t[8]  Industrial Area"<<endl;
    cout<<"\t\t[9]  Federal B Area "<<endl;
    cout<<"\t\t[10] Naya Nazimabad "<<endl;
    cout<<"\t\t[11] Gulshan-e-Maymar"<<endl;
    cout<<"\t\t[12] Model Town"<<endl;
    cout<<"\n\n\t\tSelect your Residence: "<<endl;
    cin>>selection;
    sector_distance=Distance[selection]-20;
    if(Distance[selection-1]>20)
    {
    	//s+=150;
    	cout<<"\n\n\t\t\t\t\tAdditional Charges due \n\t\t\t\t[1]Accept!\n";
        cin>>z;
		
		switch(z)
		{
			case 1:
				s+=150;
				cout<<"Additional Charges applied!\n";
				break;
			default: 
			{
				goto u;
			}
		}    
	}
    else
    {
      cout<<"\t\t\t\tYour Order will arrive in 20 minutes!\n"; 
	 }
	 Ad();
	 
	system("Color E4");
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	
  
   	for(T a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "///";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
   }
    system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Ali Wahid"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
                        Discount<int,string>(s);
                
  write.close();
  }
  
  void show1()
  {
  	menu();
  	menu1();
  }
  
};
   
template<class T,class T1>

class Kababjee:public Desi{
	protected:
		 T  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0,Distance[12],extraCharges,tem_bill=0,selection,sector_distance=0;;
         T1 y,ye, restaurantDes,sector;
     public:
      
    void menu()
    {
    	cout << endl <<"Username :" <<guser << endl;
	   system("Color E4");
	
		cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO KABABJEE RESTAURANT=========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Chicken Biryani (Rs.180)\t\t\t[2] Chicken Tikka(Rs.440)\t\t\t\t[3] Pinacolada (Rs.580)\n\t[4] Chicken Handi (Rs.1000)\t\t\t[5] Chicken Boti Roll (Rs.350)\t\t\t\t[6] Oreo Shake (Rs.400)\n\t[7] Chicken Karahi (Rs.420)\t\t\t[8] Beef Boti (Rs.240)\t\t\t\t\t[9] Custard (Rs.548)\n\t[10] Chicken Haleem (Rs.800)\t\t\t[11] Seekh Kabab (Rs.225)\t\t\t\t[12] Strawberry Shake(Rs.225)\n\t[13] Beef Nihari (Rs.860)\t\t\t[14] Bihari Boti (Rs235)\t\t\t\t[15] Cold Coffee (Rs.224)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;
    }
    void menu1()
    {  
	  ofstream write;
      write.open("order.text");
    
	if(!write)
    {
	cout<<"file can not open"<<endl;
	exit (-1);
    } 

    a:
   	b:
    c:
   	cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
    cin>>ch;
    
      
    cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
    cin>>ye;
 
    if(ye=="y"|| ye=="Y")
    {
  	 goto b;
    }
    else
    {
      switch(ch)
    {
   	case 1:
   		cout<<"\n\n\tHOW MUCH KILO CHICKEN BIRYANI YOU WANT :";
   		cin>>pizza;
   	
   		a=180;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Chicken Biryani : 480";
   		write<<" \n";
   		write<<"NUMBER OF KILOS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Biryani "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY CHICKEN TIKKA YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  CHICKEN TIKKA : 440";
   		write<<" \n";
   			write<<"NUMBER OF CHICKEN TIKKA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  CHICKEN TIKKA "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY PINA COLADA SHAKES YOU WANT :";
   		cin>>pizza;
   	
   		c=580;
   		s=s+c*pizza;
   			write<<"YOU ORDER  PINA COLADA : 580";
   			write<<" \n";
   				write<<"NUMBER OF PINA COLADA SHAKES IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER PINA COLADA "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MUCH KILO Chicken Handi YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER  Chicken Handi  : 1000";
   	write<<" \n";
   		write<<"NUMBER OF KILOS OF Chicken Handi  IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  Chicken Handi  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW Chicken Boti Roll YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER Chicken Boti Roll: 350";
   		write<<" \n";
   			write<<"NUMBER OF Chicken Boti Roll IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Chicken Boti Roll "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY Oreo Shakes YOU WANT:";
   		cin>>pizza;
   	
   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER Oreo Shake : 400";
   		write<<"\n ";
   			write<<"NUMBER OF Oreo Shake IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Oreo Shake "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY Chicken Karahi YOU WANT:";
   		cin>>pizza;
   	
   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER Chicken Karahi: 420";
   		write<<"\n ";
   			write<<"NUMBER OF Chicken Karahi IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Karahi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MANY Beef Boti YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER Beef Boti : 540";
   		write<<" \n";
   			write<<"NUMBER OF Beef Boti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Beef Boti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tHOW MANY Custard YOU WANT :";
   		cin>>pizza;
   	
		i=548;
		s=s+i*pizza;
		write<<"YOU ORDER Custard : 548";
		write<<" \n";
			write<<"NUMBER OF Custard IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Custard "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 10:
   		
		cout<<"\n\n\tHOW MUCH KILO Chicken Haleem YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER Chicken Haleem : 800";
   		write<<" \n";
   			write<<"NUMBER OF KILOS OF Chicken Haleem IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Chicken Haleem "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   		cout<<"\n\n\tHOW MANY KILOS OF Chicken Haleem (Rs.800)\t\t\t[11] Chicken Jalfarezi (Rs.425)\t\t\t\t[12] Strawberry Shake YOU WANT :";
   		cin>>pizza;
   	
   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER Seekh Kabab : 225";
   		write<<" \n";
   			write<<"NUMBER OF Seekh Kabab IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Seekh Kabab "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MANY Strawberry Shakes YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER Strawberry Shake: 225";
   		write<<" \n";
   			write<<"NUMBER OF Strawberry Shake IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Strawberry Shake "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 13:
   		cout<<"\n\n\tHOW MUCH KILO Beef Nihari YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDER Beef Nihari : 860";
   		write<<" \n";
   			write<<"NUMBER OF KILOS OF Beef Nihari IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Beef Nihari "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY Bihari Boti YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER Bihari Boti : 235";
   		write<<" \n";
   			write<<"NUMBER OF Bihari Boti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Bihari Boti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY Cold Coffees YOU WANT :";
   		cin>>pizza;
   	
   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDERED Cold Coffee : 224";
   		write<<"\n ";
   			write<<"NUMBER OF Cold Coffee IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Cold Coffee "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By Zain-Abdullah-Umer Software Enterprises";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	system("cls");
   	cout<<"\t\t\t\t<----------------------DELIVERY AREAS------------------------------>";
    //cin>>restaurantDes;
    int Distance[12]={10,14,15,21,25,28,30,33,35,40,42,44};
    cout<<"\n\t\\t\ttWe Deliver in these Areas of Karachi!"<<endl;
    cout<<"\t\t\t[1]  North Nazimabad "<<endl;
    cout<<"\t\t\t[2]  Defence (All Phases) "<<endl;
    cout<<"\t\t\t[3]  North Karachi"<<endl;
    cout<<"\t\t\t[4]  Bahria Town"<<endl;
    cout<<"\t\t\t[5]  Saddar"<<endl;
    cout<<"\t\t\t[6]  New Karachi "<<endl;
    cout<<"\t\t\t[7]  Malir"<<endl;
    cout<<"\t\t\t[8]  Industrial Area"<<endl;
    cout<<"\t\t\t[9]  Federal B Area "<<endl;
    cout<<"\t\t\t[10] Naya Nazimabad "<<endl;
    cout<<"\t\t\t[11] Gulshan-e-Maymar"<<endl;
    cout<<"\t\t\t[12] Model Town"<<endl;
    cout<<"\t\t\tSelect your Residence: "<<endl;
    cin>>selection;
    sector_distance=Distance[selection]-20;
    if(Distance[selection-1]>20)
    {
    	cout<<"Sorry! Its out of range!\n";
    
	}
    else
    {
      cout<<"\t\t\t\tYour Order will arrive in 20 minutes!\n"; 
	 }
	 Ad();
	system("Color E4");
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(T a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Harry"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   	Discount<int,string>(s);
   
  write.close();
  }
};

template<class T,class T1>

class Lalqila:public Desi{
	protected:
		 T  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0,Distance[12],extraCharges,tem_bill=0,selection,sector_distance=0;;
         T1 y,ye, restaurantDes,sector;
     public:
     	 
    void menu()
    {
    	cout << endl <<"Username :" <<guser << endl;
	system("Color E4");

		cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO LALQILA RESTAURANT=========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Chicken Biryani (Rs.180)\t\t\t[2] Chicken Tikka(Rs.440)\t\t\t\t[3] Pinacolada (Rs.580)\n\t[4] Chicken Handi (Rs.1000)\t\t\t[5] Chicken Boti Roll (Rs.350)\t\t\t\t[6] Oreo Shake (Rs.400)\n\t[7] Chicken Karahi (Rs.420)\t\t\t[8] Beef Boti (Rs.240)\t\t\t\t\t[9] Custard (Rs.548)\n\t[10] Chicken Haleem (Rs.800)\t\t\t[11] Seekh Kabab (Rs.225)\t\t\t\t[12] Strawberry Shake(Rs.225)\n\t[13] Beef Nihari (Rs.860)\t\t\t[14] Bihari Boti (Rs235)\t\t\t\t[15] Cold Coffee (Rs.224)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;
    }
    void menu1()
    {  
	  ofstream write;
      write.open("order.text");
    
	if(!write)
    {
	cout<<"file can not open"<<endl;
	exit (-1);
    } 

    a:
   	b:
    c:
   	cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
    cin>>ch;
    
      
    cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
    cin>>ye;
 
    if(ye=="y"|| ye=="Y")
    {
  	 goto b;
    }
    else
    {
      switch(ch)
    {
   	case 1:
   		cout<<"\n\n\tHOW MUCH KILO CHICKEN BIRYANI YOU WANT :";
   		cin>>pizza;
   	
   		a=180;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Chicken Biryani : 480";
   		write<<" \n";
   		write<<"NUMBER OF KILOS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Biryani "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY CHICKEN TIKKA YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  CHICKEN TIKKA : 440";
   		write<<" \n";
   			write<<"NUMBER OF CHICKEN TIKKA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  CHICKEN TIKKA "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY PINA COLADA SHAKES YOU WANT :";
   		cin>>pizza;
   	
   		c=580;
   		s=s+c*pizza;
   			write<<"YOU ORDER  PINA COLADA : 580";
   			write<<" \n";
   				write<<"NUMBER OF PINA COLADA SHAKES IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER PINA COLADA "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MUCH KILO Chicken Handi  YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER  Chicken Handi  : 1000";
   	write<<" \n";
   		write<<"NUMBER OF KILOS OF Chicken Handi  IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  Chicken Handi  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW Chicken Boti Roll YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER Chicken Boti Roll: 350";
   		write<<" \n";
   			write<<"NUMBER OF Chicken Boti Roll IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Chicken Boti Roll "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY Oreo Shakes YOU WANT:";
   		cin>>pizza;
   	
   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER Oreo Shake : 400";
   		write<<"\n ";
   			write<<"NUMBER OF Oreo Shake IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Oreo Shake "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY Chicken Karahi YOU WANT:";
   		cin>>pizza;
   	
   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER Chicken Karahi: 420";
   		write<<"\n ";
   			write<<"NUMBER OF Chicken Karahi IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Karahi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MANY Beef Boti YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER Beef Boti : 540";
   		write<<" \n";
   			write<<"NUMBER OF Beef Boti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Beef Boti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tHOW MANY Custard YOU WANT :";
   		cin>>pizza;
   	
		i=548;
		s=s+i*pizza;
		write<<"YOU ORDER Custard : 548";
		write<<" \n";
			write<<"NUMBER OF Custard IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Custard "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 10:
   		
		cout<<"\n\n\tHOW MUCH KILO Chicken Haleem YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER Chicken Haleem : 800";
   		write<<" \n";
   			write<<"NUMBER OF KILOS OF Chicken Haleem IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Chicken Haleem "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   		cout<<"\n\n\tHOW MANY KILOS OF Chicken Haleem (Rs.800)\t\t\t[11] Chicken Jalfarezi (Rs.425)\t\t\t\t[12] Strawberry Shake YOU WANT :";
   		cin>>pizza;
   	
   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER Seekh Kabab : 225";
   		write<<" \n";
   			write<<"NUMBER OF Seekh Kabab IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Seekh Kabab "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MANY Strawberry Shakes YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER Strawberry Shake: 225";
   		write<<" \n";
   			write<<"NUMBER OF Strawberry Shake IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Strawberry Shake "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 13:
   		cout<<"\n\n\tHOW MUCH KILO Beef Nihari YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDER Beef Nihari : 860";
   		write<<" \n";
   			write<<"NUMBER OF KILOS OF Beef Nihari IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Beef Nihari "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY Bihari Boti YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER Bihari Boti : 235";
   		write<<" \n";
   			write<<"NUMBER OF Bihari Boti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Bihari Boti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY Cold Coffees YOU WANT :";
   		cin>>pizza;
   	
   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDERED Cold Coffee : 224";
   		write<<"\n ";
   			write<<"NUMBER OF Cold Coffee IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Cold Coffee "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By Zain-Abdullah-Umer Software Enterprises";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	system("cls");
   	cout<<"\t\t\t\t<----------------------DELIVERY AREAS------------------------------>";
    //cin>>restaurantDes;
    int Distance[12]={10,14,15,21,25,28,30,33,35,40,42,44};
    cout<<"\n\t\\t\ttWe Deliver in these Areas of Karachi!"<<endl;
    cout<<"\t\t\t[1]  North Nazimabad "<<endl;
    cout<<"\t\t\t[2]  Defence (All Phases) "<<endl;
    cout<<"\t\t\t[3]  North Karachi"<<endl;
    cout<<"\t\t\t[4]  Bahria Town"<<endl;
    cout<<"\t\t\t[5]  Saddar"<<endl;
    cout<<"\t\t\t[6]  New Karachi "<<endl;
    cout<<"\t\t\t[7]  Malir"<<endl;
    cout<<"\t\t\t[8]  Industrial Area"<<endl;
    cout<<"\t\t\t[9]  Federal B Area "<<endl;
    cout<<"\t\t\t[10] Naya Nazimabad "<<endl;
    cout<<"\t\t\t[11] Gulshan-e-Maymar"<<endl;
    cout<<"\t\t\t[12] Model Town"<<endl;
    cout<<"\t\t\tSelect your Residence: "<<endl;
    cin>>selection;
    sector_distance=Distance[selection]-20;
    if(Distance[selection-1]>20)
    {
    	cout<<"Sorry! Its out of range!\n";
    
	}
    else
    {
      cout<<"\t\t\t\tYour Order will arrive in 20 minutes!\n"; 
	 }
	 Ad();
	system("Color E4");
	
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(T a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Harry"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   	Discount<int,string>(s);
   
  write.close();
  }
};

template<class T,class T1>
class Dua:public Desi{
	protected:
	   	T  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0,Distance[12],extraCharges,tem_bill=0,selection,sector_distance=0;;
         T1 y,ye, restaurantDes,sector;
     public:
    void menu()
    {
	cout << endl <<"Username :" <<guser << endl;
     	 system("Color E4");

		cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO DUA RESTAURANT=========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Chicken Biryani (Rs.180)\t\t\t[2] Chicken Tikka(Rs.440)\t\t\t\t[3] Pinacolada (Rs.580)\n\t[4] Chicken Handi (Rs.1000)\t\t\t[5] Chicken Boti Roll (Rs.350)\t\t\t\t[6] Oreo Shake (Rs.400)\n\t[7] Chicken Karahi (Rs.420)\t\t\t[8] Beef Boti (Rs.240)\t\t\t\t\t[9] Custard (Rs.548)\n\t[10] Chicken Haleem (Rs.800)\t\t\t[11] Seekh Kabab (Rs.225)\t\t\t\t[12] Strawberry Shake(Rs.225)\n\t[13] Beef Nihari (Rs.860)\t\t\t[14] Bihari Boti (Rs235)\t\t\t\t[15] Cold Coffee (Rs.224)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;
    }
    void menu1()
    {  
	  ofstream write;
      write.open("order.text");
    
	if(!write)
    {
	cout<<"file can not open"<<endl;
	exit (-1);
    } 

    a:
   	b:
    c:
   	cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
    cin>>ch;
    
      
    cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
    cin>>ye;
 
    if(ye=="y"|| ye=="Y")
    {
  	 goto b;
    }
    else
    {
      switch(ch)
    {
   	case 1:
   		cout<<"\n\n\tHOW MUCH KILO CHICKEN BIRYANI YOU WANT :";
   		cin>>pizza;
   	
   		a=180;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Chicken Biryani : 480";
   		write<<" \n";
   		write<<"NUMBER OF KILOS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Biryani "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY CHICKEN TIKKA YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  CHICKEN TIKKA : 440";
   		write<<" \n";
   			write<<"NUMBER OF CHICKEN TIKKA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  CHICKEN TIKKA "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY PINA COLADA SHAKES YOU WANT :";
   		cin>>pizza;
   	
   		c=580;
   		s=s+c*pizza;
   			write<<"YOU ORDER  PINA COLADA : 580";
   			write<<" \n";
   				write<<"NUMBER OF PINA COLADA SHAKES IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER PINA COLADA "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MUCH KILO Chicken Handi  YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER  Chicken Handi  : 1000";
   	write<<" \n";
   		write<<"NUMBER OF KILOS OF Chicken Handi  IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  Chicken Handi  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW Chicken Boti Roll YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER Chicken Boti Roll: 350";
   		write<<" \n";
   			write<<"NUMBER OF Chicken Boti Roll IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Chicken Boti Roll "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY Oreo Shakes YOU WANT:";
   		cin>>pizza;
   	
   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER Oreo Shake : 400";
   		write<<"\n ";
   			write<<"NUMBER OF Oreo Shake IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Oreo Shake "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY Chicken Karahi YOU WANT:";
   		cin>>pizza;
   	
   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER Chicken Karahi: 420";
   		write<<"\n ";
   			write<<"NUMBER OF Chicken Karahi IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Karahi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MANY Beef Boti YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER Beef Boti : 540";
   		write<<" \n";
   			write<<"NUMBER OF Beef Boti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Beef Boti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tHOW MANY Custard YOU WANT :";
   		cin>>pizza;
   	
		i=548;
		s=s+i*pizza;
		write<<"YOU ORDER Custard : 548";
		write<<" \n";
			write<<"NUMBER OF Custard IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Custard "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 10:
   		
		cout<<"\n\n\tHOW MUCH KILO Chicken Haleem YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER Chicken Haleem : 800";
   		write<<" \n";
   			write<<"NUMBER OF KILOS OF Chicken Haleem IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Chicken Haleem "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   		cout<<"\n\n\tHOW MANY KILOS OF Chicken Haleem (Rs.800)\t\t\t[11] Chicken Jalfarezi (Rs.425)\t\t\t\t[12] Strawberry Shake YOU WANT :";
   		cin>>pizza;
   	
   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER Seekh Kabab : 225";
   		write<<" \n";
   			write<<"NUMBER OF Seekh Kabab IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Seekh Kabab "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MANY Strawberry Shakes YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER Strawberry Shake: 225";
   		write<<" \n";
   			write<<"NUMBER OF Strawberry Shake IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Strawberry Shake "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 13:
   		cout<<"\n\n\tHOW MUCH KILO Beef Nihari YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDER Beef Nihari : 860";
   		write<<" \n";
   			write<<"NUMBER OF KILOS OF Beef Nihari IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Beef Nihari "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY Bihari Boti YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER Bihari Boti : 235";
   		write<<" \n";
   			write<<"NUMBER OF Bihari Boti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Bihari Boti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY Cold Coffees YOU WANT :";
   		cin>>pizza;
   	
   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDERED Cold Coffee : 224";
   		write<<"\n ";
   			write<<"NUMBER OF Cold Coffee IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Cold Coffee "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By Zain-Abdullah-Umer Software Enterprises";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	system("cls");
   	cout<<"\t\t\t\t<----------------------DELIVERY AREAS------------------------------>";
    //cin>>restaurantDes;
    int Distance[12]={10,14,15,21,25,28,30,33,35,40,42,44};
    cout<<"\n\t\\t\ttWe Deliver in these Areas of Karachi!"<<endl;
    cout<<"\t\t\t[1]  North Nazimabad "<<endl;
    cout<<"\t\t\t[2]  Defence (All Phases) "<<endl;
    cout<<"\t\t\t[3]  North Karachi"<<endl;
    cout<<"\t\t\t[4]  Bahria Town"<<endl;
    cout<<"\t\t\t[5]  Saddar"<<endl;
    cout<<"\t\t\t[6]  New Karachi "<<endl;
    cout<<"\t\t\t[7]  Malir"<<endl;
    cout<<"\t\t\t[8]  Industrial Area"<<endl;
    cout<<"\t\t\t[9]  Federal B Area "<<endl;
    cout<<"\t\t\t[10] Naya Nazimabad "<<endl;
    cout<<"\t\t\t[11] Gulshan-e-Maymar"<<endl;
    cout<<"\t\t\t[12] Model Town"<<endl;
    cout<<"\t\t\tSelect your Residence: "<<endl;
    cin>>selection;
    sector_distance=Distance[selection]-20;
    if(Distance[selection-1]>20)
    {
    	cout<<"Sorry! Its out of range!\n";
    
	}
    else
    {
      cout<<"\t\t\t\tYour Order will arrive in 20 minutes!\n"; 
	 }
	 Ad();
	 system("Color 2E");
	
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(T a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Harry"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   	Discount<int,string>(s);
   
  write.close();
  }
};


class Fastfood:public Restaurant{
	public:
		virtual void menu()=0;
};

template <class T,class T1>
class Broadway:public Fastfood
	{
	protected:
		 T  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0,Distance[12],extraCharges,tem_bill=0,selection,sector_distance=0;;
         T1 y,ye, restaurantDes,sector;
     public:
     	
    void menu()
    {
	cout << endl <<"Username :" <<guser << endl;
	    system("Color 2E");
	cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO BROADWAY RESTAURANT =========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Tetrazzini (Rs.420)\t\t\t\t[8] Double Cheese (Rs.540)\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Chicken Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Fajitas (Rs.335)\t\t\t\t[14] Tempura (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;
    }
     void menu1()
{    

    ofstream write;
    write.open("order.text");
    if(!write)
   {
	cout<<"file can not open"<<endl;
	exit (-1);
   }   

        a:
   	    b:
   		c:
   	    cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
        cin>>ch;
    
      
  cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
  cin>>ye;
 
  if(ye=="y"|| ye=="Y")
  {
  	goto b;
  }
  else
  {
   switch(ch)
   {
   	case 1:
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		a=480;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Veggie Supreme : 480";
   		write<<" \n";
   		write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Veggie Supreme "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  Exotica : 440";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Exotica "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
   		cin>>pizza;
   	
   		c=580;
   		s=s+c*pizza;
   			write<<"YOU ORDER  Chicken Sizzler : 580";
   			write<<" \n";
   				write<<"NUMBER OF Chicken Sizzler IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Sizzler "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER  Chrispy Chicken : 520";
   	write<<" \n";
   		write<<"NUMBER OF Chrispy Chicken IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  Chrispy Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW MANY SPAGHETTI YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER  Spaghetti : 350";
   		write<<" \n";
   			write<<"NUMBER OF Spaghetti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Spaghetti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT:";
   		cin>>pizza;
   	
   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER Country Feast : 400";
   		write<<"\n ";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Country Feast "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY TETRAZZINI YOU WANT:";
   		cin>>pizza;
   	
   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER Tetrazzini : 420";
   		write<<"\n ";
   			write<<"NUMBER OF Tetrazzini IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tetrazzini "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER Double Cheese : 540";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Double Cheese "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tHOW MANY MAKIZUSHI YOU WANT :";
   		cin>>pizza;
   	
		i=548;
		s=s+i*pizza;
		write<<"YOU ORDER Makizushi : 548";
		write<<" \n";
			write<<"NUMBER OF Makizushi IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Makizushi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 10:
   		cout<<"\n\n\tHOW MANY Chicken BURGER YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDER Chicken Burger : 390";
   		write<<" \n";
   			write<<"NUMBER OF Chicken Burger IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Chicken Burger "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER Margherita : 525";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Margherita "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
   		cin>>pizza;
   	
   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER Fish 'n' Chips : 425";
   		write<<" \n";
   			write<<"NUMBER OF Fish 'n' Chips IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Fish 'n' Chips "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 13:
   		cout<<"\n\n\tHOW MANY FAJITAS YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER  Fajitas  : 335";
   		write<<" \n";
   			write<<"NUMBER OF Fajitas IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Fajitas "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY TEMPURA YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER Tempura : 324";
   		write<<" \n";
   			write<<"NUMBER OF Tempura IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tempura "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY HOT DOG YOU WANT :";
   		cin>>pizza;
   	
   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDER  Hot Dog : 360";
   		write<<"\n ";
   			write<<"NUMBER OF Hot Dog IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Hot Dog "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By code-projects.org";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	system("cls");
   	cout<<"\t\t\t\t<----------------------DELIVERY AREAS------------------------------>";
    //cin>>restaurantDes;
    int Distance[12]={10,14,15,21,25,28,30,33,35,40,42,44};
    cout<<"\n\t\\t\ttWe Deliver in these Areas of Karachi!"<<endl;
    cout<<"\t\t\t[1]  North Nazimabad "<<endl;
    cout<<"\t\t\t[2]  Defence (All Phases) "<<endl;
    cout<<"\t\t\t[3]  North Karachi"<<endl;
    cout<<"\t\t\t[4]  Bahria Town"<<endl;
    cout<<"\t\t\t[5]  Saddar"<<endl;
    cout<<"\t\t\t[6]  New Karachi "<<endl;
    cout<<"\t\t\t[7]  Malir"<<endl;
    cout<<"\t\t\t[8]  Industrial Area"<<endl;
    cout<<"\t\t\t[9]  Federal B Area "<<endl;
    cout<<"\t\t\t[10] Naya Nazimabad "<<endl;
    cout<<"\t\t\t[11] Gulshan-e-Maymar"<<endl;
    cout<<"\t\t\t[12] Model Town"<<endl;
    cout<<"\t\t\tSelect your Residence: "<<endl;
    cin>>selection;
    sector_distance=Distance[selection]-20;
    if(Distance[selection-1]>20)
    {
    	cout<<"Sorry! Its out of range!\n";
    
	}
    else
    {
      cout<<"\t\t\t\tYour Order will arrive in 20 minutes!\n"; 
	 }
	 Ad();
	 system("Color 2E");
	
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(int a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Harry"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   	Discount<int,string>(s);
   
  write.close();
}
};


template <class T,class T1>
class KFC:public Fastfood
	{
	protected:
		 T  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0,Distance[12],extraCharges,tem_bill=0,selection,sector_distance=0;;
         T1 y,ye, restaurantDes,sector;
     public:
     	
    void menu()
    {
	cout << endl <<"Username :" <<guser << endl;
	
	    system("Color 2E");
		cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO KFC =========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Tetrazzini (Rs.420)\t\t\t\t[8] Double Cheese (Rs.540)\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Chicken Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Fajitas (Rs.335)\t\t\t\t[14] Tempura (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;
    }
     void menu1()
{    
    ofstream write;
    write.open("order.text");
    if(!write)
   {
	cout<<"file can not open"<<endl;
	exit (-1);
   }   

        a:
   	    b:
   		c:
   	    cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
        cin>>ch;
    
      
  cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
  cin>>ye;
 
  if(ye=="y"|| ye=="Y")
  {
  	goto b;
  }
  else
  {
   switch(ch)
   {
   	case 1:
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		a=480;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Veggie Supreme : 480";
   		write<<" \n";
   		write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Veggie Supreme "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  Exotica : 440";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Exotica "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
   		cin>>pizza;
   	
   		c=580;
   		s=s+c*pizza;
   			write<<"YOU ORDER  Chicken Sizzler : 580";
   			write<<" \n";
   				write<<"NUMBER OF Chicken Sizzler IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Sizzler "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER  Chrispy Chicken : 520";
   	write<<" \n";
   		write<<"NUMBER OF Chrispy Chicken IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  Chrispy Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW MANY SPAGHETTI YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER  Spaghetti : 350";
   		write<<" \n";
   			write<<"NUMBER OF Spaghetti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Spaghetti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT:";
   		cin>>pizza;
   	
   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER Country Feast : 400";
   		write<<"\n ";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Country Feast "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY TETRAZZINI YOU WANT:";
   		cin>>pizza;
   	
   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER Tetrazzini : 420";
   		write<<"\n ";
   			write<<"NUMBER OF Tetrazzini IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tetrazzini "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER Double Cheese : 540";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Double Cheese "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tHOW MANY MAKIZUSHI YOU WANT :";
   		cin>>pizza;
   	
		i=548;
		s=s+i*pizza;
		write<<"YOU ORDER Makizushi : 548";
		write<<" \n";
			write<<"NUMBER OF Makizushi IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Makizushi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 10:
   		cout<<"\n\n\tHOW MANY Chicken BURGER YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDER Chicken Burger : 390";
   		write<<" \n";
   			write<<"NUMBER OF Chicken Burger IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Chicken Burger "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER Margherita : 525";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Margherita "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
   		cin>>pizza;
   	
   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER Fish 'n' Chips : 425";
   		write<<" \n";
   			write<<"NUMBER OF Fish 'n' Chips IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Fish 'n' Chips "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 13:
   		cout<<"\n\n\tHOW MANY FAJITAS YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER  Fajitas  : 335";
   		write<<" \n";
   			write<<"NUMBER OF Fajitas IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Fajitas "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY TEMPURA YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER Tempura : 324";
   		write<<" \n";
   			write<<"NUMBER OF Tempura IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tempura "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY HOT DOG YOU WANT :";
   		cin>>pizza;
   	
   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDER  Hot Dog : 360";
   		write<<"\n ";
   			write<<"NUMBER OF Hot Dog IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Hot Dog "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By code-projects.org";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	system("cls");
   	cout<<"\t\t\t\t<----------------------DELIVERY AREAS------------------------------>";
    //cin>>restaurantDes;
    int Distance[12]={10,14,15,21,25,28,30,33,35,40,42,44};
    cout<<"\n\t\\t\ttWe Deliver in these Areas of Karachi!"<<endl;
    cout<<"\t\t\t[1]  North Nazimabad "<<endl;
    cout<<"\t\t\t[2]  Defence (All Phases) "<<endl;
    cout<<"\t\t\t[3]  North Karachi"<<endl;
    cout<<"\t\t\t[4]  Bahria Town"<<endl;
    cout<<"\t\t\t[5]  Saddar"<<endl;
    cout<<"\t\t\t[6]  New Karachi "<<endl;
    cout<<"\t\t\t[7]  Malir"<<endl;
    cout<<"\t\t\t[8]  Industrial Area"<<endl;
    cout<<"\t\t\t[9]  Federal B Area "<<endl;
    cout<<"\t\t\t[10] Naya Nazimabad "<<endl;
    cout<<"\t\t\t[11] Gulshan-e-Maymar"<<endl;
    cout<<"\t\t\t[12] Model Town"<<endl;
    cout<<"\t\t\tSelect your Residence: "<<endl;
    cin>>selection;
    sector_distance=Distance[selection]-20;
    if(Distance[selection-1]>20)
    {
    	cout<<"Sorry! Its out of range!\n";
    
	}
    else
    {
      cout<<"\t\t\t\tYour Order will arrive in 20 minutes!\n"; 
	}
	Ad();
	system("Color 2E");
	
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(int a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Harry"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   	Discount<int,string>(s);
   
  write.close();
}
};


template <class T,class T1>
class Mcdonald:public Fastfood
	{
	protected:
		 T  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0,Distance[12],extraCharges,tem_bill=0,selection,sector_distance=0;;
         T1 y,ye, restaurantDes,sector;
     public:
     	
    void menu()
    {
	system("Color 2E");
	cout << endl <<"Username :" <<guser << endl;
		cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO MCDONALD'S =========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Tetrazzini (Rs.420)\t\t\t\t[8] Double Cheese (Rs.540)\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Chicken Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Fajitas (Rs.335)\t\t\t\t[14] Tempura (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;
    }
     void menu1()
{    
    ofstream write;
    write.open("order.text");
    if(!write)
   {
	cout<<"file can not open"<<endl;
	exit (-1);
   }   

        a:
   	    b:
   		c:
   	    cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
        cin>>ch;
    
      
  cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
  cin>>ye;
 
  if(ye=="y"|| ye=="Y")
  {
  	goto b;
  }
  else
  {
   switch(ch)
   {
   	case 1:
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		a=480;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Veggie Supreme : 480";
   		write<<" \n";
   		write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Veggie Supreme "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  Exotica : 440";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Exotica "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
   		cin>>pizza;
   	
   		c=580;
   		s=s+c*pizza;
   			write<<"YOU ORDER  Chicken Sizzler : 580";
   			write<<" \n";
   				write<<"NUMBER OF Chicken Sizzler IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Sizzler "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER  Chrispy Chicken : 520";
   	write<<" \n";
   		write<<"NUMBER OF Chrispy Chicken IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  Chrispy Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW MANY SPAGHETTI YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER  Spaghetti : 350";
   		write<<" \n";
   			write<<"NUMBER OF Spaghetti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Spaghetti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT:";
   		cin>>pizza;
   	
   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER Country Feast : 400";
   		write<<"\n ";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Country Feast "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY TETRAZZINI YOU WANT:";
   		cin>>pizza;
   	
   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER Tetrazzini : 420";
   		write<<"\n ";
   			write<<"NUMBER OF Tetrazzini IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tetrazzini "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER Double Cheese : 540";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Double Cheese "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tHOW MANY MAKIZUSHI YOU WANT :";
   		cin>>pizza;
   	
		i=548;
		s=s+i*pizza;
		write<<"YOU ORDER Makizushi : 548";
		write<<" \n";
			write<<"NUMBER OF Makizushi IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Makizushi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 10:
   		cout<<"\n\n\tHOW MANY Chicken BURGER YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDER Chicken Burger : 390";
   		write<<" \n";
   			write<<"NUMBER OF Chicken Burger IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Chicken Burger "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER Margherita : 525";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Margherita "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
   		cin>>pizza;
   	
   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER Fish 'n' Chips : 425";
   		write<<" \n";
   			write<<"NUMBER OF Fish 'n' Chips IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Fish 'n' Chips "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 13:
   		cout<<"\n\n\tHOW MANY FAJITAS YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER  Fajitas  : 335";
   		write<<" \n";
   			write<<"NUMBER OF Fajitas IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Fajitas "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY TEMPURA YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER Tempura : 324";
   		write<<" \n";
   			write<<"NUMBER OF Tempura IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tempura "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY HOT DOG YOU WANT :";
   		cin>>pizza;
   	
   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDER  Hot Dog : 360";
   		write<<"\n ";
   			write<<"NUMBER OF Hot Dog IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Hot Dog "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By code-projects.org";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	system("cls");
   	cout<<"\t\t\t\t<----------------------DELIVERY AREAS------------------------------>";
    //cin>>restaurantDes;
    int Distance[12]={10,14,15,21,25,28,30,33,35,40,42,44};
    cout<<"\n\t\\t\ttWe Deliver in these Areas of Karachi!"<<endl;
    cout<<"\t\t\t[1]  North Nazimabad "<<endl;
    cout<<"\t\t\t[2]  Defence (All Phases) "<<endl;
    cout<<"\t\t\t[3]  North Karachi"<<endl;
    cout<<"\t\t\t[4]  Bahria Town"<<endl;
    cout<<"\t\t\t[5]  Saddar"<<endl;
    cout<<"\t\t\t[6]  New Karachi "<<endl;
    cout<<"\t\t\t[7]  Malir"<<endl;
    cout<<"\t\t\t[8]  Industrial Area"<<endl;
    cout<<"\t\t\t[9]  Federal B Area "<<endl;
    cout<<"\t\t\t[10] Naya Nazimabad "<<endl;
    cout<<"\t\t\t[11] Gulshan-e-Maymar"<<endl;
    cout<<"\t\t\t[12] Model Town"<<endl;
    cout<<"\t\t\tSelect your Residence: "<<endl;
    cin>>selection;
    sector_distance=Distance[selection]-20;
    if(Distance[selection-1]>20)
    {
    	cout<<"Sorry! Its out of range!\n";
    
	}
    else
    {
      cout<<"\t\t\t\tYour Order will arrive in 20 minutes!\n"; 
    }
    Ad();
    system("Color 2E");
	
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(int a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Harry"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   	Discount<int,string>(s);
   
  write.close();
}
};


template <class T,class T1>
class Burgerlab:public Fastfood
	{
	protected:
		 T  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0,Distance[12],extraCharges,tem_bill=0,selection,sector_distance=0;;
         T1 y,ye, restaurantDes,sector;
     public:
     	
    void menu()
    {
	system("Color 2E");
	cout << endl <<"Username :" <<guser << endl;
		cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO BURGER LAB =========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Veggie Supreme (Rs.480)\t\t\t[2] Exotica Pizza(Rs.440)\t\t\t\t[3] Chicken Sizzler (Rs.580)\n\t[4] Chrispy Chicken (Rs.520)\t\t\t[5] Spaghetti (Rs.350)\t\t\t\t\t[6] Country Feast (Rs.400)\n\t[7] Tetrazzini (Rs.420)\t\t\t\t[8] Double Cheese (Rs.540)\t\t\t\t[9] Makizushi (Rs.548)\n\t[10] Chicken Burger (Rs.390)\t\t\t[11] Margherita Pizza(Rs.525)\t\t\t\t[12] Fish 'n' Chips (Rs.425)\n\t[13] Fajitas (Rs.335)\t\t\t\t[14] Tempura (Rs.324)\t\t\t\t\t[15] Hot Dog (Rs.360)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;
    }
     void menu1()
{    
    ofstream write;
    write.open("order.text");
    if(!write)
   {
	cout<<"file can not open"<<endl;
	exit (-1);
   }   

        a:
   	    b:
   		c:
   	    cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
        cin>>ch;
    
      
  cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
  cin>>ye;
 
  if(ye=="y"|| ye=="Y")
  {
  	goto b;
  }
  else
  {
   switch(ch)
   {
   	case 1:
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		a=480;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Veggie Supreme : 480";
   		write<<" \n";
   		write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Veggie Supreme "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  Exotica : 440";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Exotica "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY CHICKEN SIZZLER YOU WANT :";
   		cin>>pizza;
   	
   		c=580;
   		s=s+c*pizza;
   			write<<"YOU ORDER  Chicken Sizzler : 580";
   			write<<" \n";
   				write<<"NUMBER OF Chicken Sizzler IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Chicken Sizzler "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MANY CHRISPY CHICKEN YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER  Chrispy Chicken : 520";
   	write<<" \n";
   		write<<"NUMBER OF Chrispy Chicken IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER  Chrispy Chicken "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW MANY SPAGHETTI YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER  Spaghetti : 350";
   		write<<" \n";
   			write<<"NUMBER OF Spaghetti IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Spaghetti "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT:";
   		cin>>pizza;
   	
   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER Country Feast : 400";
   		write<<"\n ";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Country Feast "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY TETRAZZINI YOU WANT:";
   		cin>>pizza;
   	
   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER Tetrazzini : 420";
   		write<<"\n ";
   			write<<"NUMBER OF Tetrazzini IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tetrazzini "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER Double Cheese : 540";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Double Cheese "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tHOW MANY MAKIZUSHI YOU WANT :";
   		cin>>pizza;
   	
		i=548;
		s=s+i*pizza;
		write<<"YOU ORDER Makizushi : 548";
		write<<" \n";
			write<<"NUMBER OF Makizushi IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Makizushi "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 10:
   		cout<<"\n\n\tHOW MANY Chicken BURGER YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDER Chicken Burger : 390";
   		write<<" \n";
   			write<<"NUMBER OF Chicken Burger IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Chicken Burger "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   			cout<<"\n\n\tHOW MANY PIZZA YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER Margherita : 525";
   		write<<" \n";
   			write<<"NUMBER OF PIZZA IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER   Margherita "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MANY FISH 'n' CHIPS YOU WANT :";
   		cin>>pizza;
   	
   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER Fish 'n' Chips : 425";
   		write<<" \n";
   			write<<"NUMBER OF Fish 'n' Chips IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Fish 'n' Chips "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 13:
   		cout<<"\n\n\tHOW MANY FAJITAS YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER  Fajitas  : 335";
   		write<<" \n";
   			write<<"NUMBER OF Fajitas IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Fajitas "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY TEMPURA YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER Tempura : 324";
   		write<<" \n";
   			write<<"NUMBER OF Tempura IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Tempura "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY HOT DOG YOU WANT :";
   		cin>>pizza;
   	
   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDER  Hot Dog : 360";
   		write<<"\n ";
   			write<<"NUMBER OF Hot Dog IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Hot Dog "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By code-projects.org";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	system("cls");
   	cout<<"\t\t\t\t<----------------------DELIVERY AREAS------------------------------>";
    //cin>>restaurantDes;
    int Distance[12]={10,14,15,21,25,28,30,33,35,40,42,44};
    cout<<"\n\t\\t\ttWe Deliver in these Areas of Karachi!"<<endl;
    cout<<"\t\t\t[1]  North Nazimabad "<<endl;
    cout<<"\t\t\t[2]  Defence (All Phases) "<<endl;
    cout<<"\t\t\t[3]  North Karachi"<<endl;
    cout<<"\t\t\t[4]  Bahria Town"<<endl;
    cout<<"\t\t\t[5]  Saddar"<<endl;
    cout<<"\t\t\t[6]  New Karachi "<<endl;
    cout<<"\t\t\t[7]  Malir"<<endl;
    cout<<"\t\t\t[8]  Industrial Area"<<endl;
    cout<<"\t\t\t[9]  Federal B Area "<<endl;
    cout<<"\t\t\t[10] Naya Nazimabad "<<endl;
    cout<<"\t\t\t[11] Gulshan-e-Maymar"<<endl;
    cout<<"\t\t\t[12] Model Town"<<endl;
    cout<<"\t\t\tSelect your Residence: "<<endl;
    cin>>selection;
    sector_distance=Distance[selection]-20;
    if(Distance[selection-1]>20)
    {
    	cout<<"Sorry! Its out of range!\n";
    
	}
    else
    {
      cout<<"\t\t\t\tYour Order will arrive in 20 minutes!\n"; 
	 }
	 Ad();
	 system("Color 2E");
	
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(int a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Harry"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   	Discount<int,string>(s);
   
  write.close();
}
};


class Chinese:public Restaurant{
	public:
		virtual void menu()=0;
};


//Templates Covered
template<class T,class T1>

class Greatwall:public Chinese{
	protected:
		 T  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0,Distance[12],extraCharges,tem_bill=0,selection,sector_distance=0;;
         T1 y,ye, restaurantDes,sector;
     public:
     	
    void menu()
    {
	system("Color 3F");
	cout << endl <<"Username :" <<guser << endl;
	cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO GREATWALL RESTAURANT=========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Chicken Chowmein (Rs.180)\t\t\t[2] Fried Rice(Rs.440)\t\t\t\t\t[3] Stuff Chilli Prawn (Rs.580)\n\t[4] Thai soup (Rs.1000)\t\t\t\t[5] Chicken Spring Roll (Rs.350)\t\t\t[6] Prawn Balls (Rs.400)\n\t[7] Chicken Wonton (Rs.420)\t\t\t[8] KUNG PAOU CHICKEN GRAVY (Rs.240)\t\t\t[9] SPICY SCHEZWAN CHICKEN (Rs.548)\n\t[10] Dried Red Pepper Chicken (Rs.800)\t\t[11] Dragon Prawn (Rs.225)\t\t\t\t[12] CLASSIC BEEF CHILLI DRY(Rs.225)\n\t[13] Beef Steak (Rs.860)\t\t\t[14] SPECIAL XINJIANG SOUP (Rs235)\t\t\t[15] Spicy Noodles (Rs.224)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;
    }
    void menu1()
    {  
	  ofstream write;
      write.open("order.text");
    
	if(!write)
    {
	cout<<"file can not open"<<endl;
	exit (-1);
    } 

    a:
   	b:
    c:
   	cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
    cin>>ch;
    
      
    cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
    cin>>ye;
 
    if(ye=="y"|| ye=="Y")
    {
  	 goto b;
    }
    else
    {
      switch(ch)
    {
   	case 1:
   		cout<<"\n\n\tHOW MUCH Chicken Chowmein YOU WANT :";
   		cin>>pizza;
   	
   		a=180;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Chicken Chowmein  : 480";
   		write<<" \n";
   		write<<"NUMBER OF KILOS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Chicken Chowmein "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY Fried Ries YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  Fried Rice : 440";
   		write<<" \n";
   			write<<"NUMBER OF Fried Rice IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Fried Rice "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY STUFF CHILLI PRAWNS YOU WANT :";
   		cin>>pizza;
   	
   		c=580;
   		s=s+c*pizza;
   			write<<"YOU ORDER  STUFF CHILLI PRAWNS : 580";
   			write<<" \n";
   				write<<"NUMBER OF STUFF CHILLI PRAWNS IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER STUFF CHILLI PRAWNS "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MUCH THAI SOUP YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER THAI SOUP  : 1000";
   	write<<" \n";
   		write<<"NUMBER OF THAI SOUP  IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER   THAI SOUP  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW CHICKEN SPRING ROLLS YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER CHICKEN SPRING ROLLS: 350";
   		write<<" \n";
   			write<<"NUMBER OF CHICKEN SPRING ROLLS IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER CHICKEN SPRING ROLLS "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY PRAWN BALLS YOU WANT:";
   		cin>>pizza;
   	
   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER PRAWN BALLS : 400";
   		write<<"\n ";
   			write<<"NUMBER OF PRAWN BALLS IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER PRAWN BALLS "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY CHICKEN WONTON YOU WANT:";
   		cin>>pizza;
   	
   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER CHICKEN WONTON: 420";
   		write<<"\n ";
   			write<<"NUMBER OF CHICKEN WONTON IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  CHICKEN WONTON "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MUCH KUNG PAOU CHICKEN GRAVY YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER KUNG PAOU CHICKEN GRAVY : 540";
   		write<<" \n";
   			write<<"NUMBER OF KUNG PAOU CHICKEN GRAVY IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER KUNG PAOU CHICKEN GRAVY "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tHOW MANY SPICY SCHEZWAN CHICKEN YOU WANT :";
   		cin>>pizza;
   	
		i=548;
		s=s+i*pizza;
		write<<"YOU ORDER SPICY SCHEZWAN CHICKEN : 548";
		write<<" \n";
			write<<"NUMBER OF SPICY SCHEZWAN CHICKEN IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER SPICY SCHEZWAN CHICKEN "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 10:
   		
		cout<<"\n\n\tHOW MUCH KILO DRIED RED PEPPER CHICKEN YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER DRIED RED PEPPER CHICKEN : 800";
   		write<<" \n";
   			write<<"NUMBER OF KILOS OF DRIED RED PEPPER CHICKEN IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER DRIED RED PEPPER CHICKEN "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   		cout<<"\n\n\tHOW MANY KILOS OF DRAGON PRAWN (Rs.800)\t\t\t[11] Chicken Jalfarezi (Rs.425)\t\t\t\t[12] Strawberry Shake YOU WANT :";
   		cin>>pizza;
   	
   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER DRAGON PRAWN : 225";
   		write<<" \n";
   			write<<"NUMBER OF DRAGON PRAWN IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER DRAGON PRAWN "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MUCH CLASSIC BEEF CHILLI DRY YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER CLASSIC BEEF CHILLI DRY: 225";
   		write<<" \n";
   			write<<"NUMBER OF CLASSIC BEEF CHILLI DRY IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER CLASSIC BEEF CHILLI DRY "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 13:
   		cout<<"\n\n\tHOW MANY BEEF STEAK YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDERED BEEF STEAK : 860";
   		write<<" \n";
   			write<<"NUMBER OF BEEF STEAK IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER BEEF STEAK "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY SPECIAL XINJIANG SOUP YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER SPECIAL XINJIANG SOUP : 235";
   		write<<" \n";
   			write<<"NUMBER OF SPECIAL XINJIANG SOUP IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER SPECIAL XINJIANG SOUP "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY SPICY NOODLES YOU WANT :";
   		cin>>pizza;
   	
   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDERED SPICY NOODLES : 224";
   		write<<"\n ";
   			write<<"NUMBER OF SPICY NOODLES IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER SPICY NOODLES "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By Zain-Abdullah-Umer Software Enterprises";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	system("cls");
   	cout<<"\t\t\t\t<----------------------DELIVERY AREAS------------------------------>";
    //cin>>restaurantDes;
    int Distance[12]={10,14,15,21,25,28,30,33,35,40,42,44};
    cout<<"\n\t\\t\ttWe Deliver in these Areas of Karachi!"<<endl;
    cout<<"\t\t\t[1]  North Nazimabad "<<endl;
    cout<<"\t\t\t[2]  Defence (All Phases) "<<endl;
    cout<<"\t\t\t[3]  North Karachi"<<endl;
    cout<<"\t\t\t[4]  Bahria Town"<<endl;
    cout<<"\t\t\t[5]  Saddar"<<endl;
    cout<<"\t\t\t[6]  New Karachi "<<endl;
    cout<<"\t\t\t[7]  Malir"<<endl;
    cout<<"\t\t\t[8]  Industrial Area"<<endl;
    cout<<"\t\t\t[9]  Federal B Area "<<endl;
    cout<<"\t\t\t[10] Naya Nazimabad "<<endl;
    cout<<"\t\t\t[11] Gulshan-e-Maymar"<<endl;
    cout<<"\t\t\t[12] Model Town"<<endl;
    cout<<"\t\t\tSelect your Residence: "<<endl;
    cin>>selection;
    sector_distance=Distance[selection]-20;
    if(Distance[selection-1]>20)
    {
    	cout<<"Sorry! Its out of range!\n";
    
	}
    else
    {
      cout<<"\t\t\t\tYour Order will arrive in 20 minutes!\n"; 
	}
	Ad();
	system("Color 3F");
	
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(T a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Harry"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   	Discount<int,string>(s);
   
  write.close();
  }
  void show1()
  {
  	menu();
  	menu1();
  }
  
};
   
template<class T,class T1>

class Lechine:public Chinese{
	protected:
		 T  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0,Distance[12],extraCharges,tem_bill=0,selection,sector_distance=0;;
         T1 y,ye, restaurantDes,sector;
     public:
     	
    void menu()
    {
	system("Color 3F");
	cout << endl <<"Username :" <<guser << endl;
	cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO LECHINE RESTAURANT=========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Chicken Chowmein (Rs.180)\t\t\t[2] Fried Rice(Rs.440)\t\t\t\t\t[3] Stuff Chilli Prawn (Rs.580)\n\t[4] Thai soup (Rs.1000)\t\t\t\t[5] Chicken Spring Roll (Rs.350)\t\t\t[6] Prawn Balls (Rs.400)\n\t[7] Chicken Wonton (Rs.420)\t\t\t[8] KUNG PAOU CHICKEN GRAVY (Rs.240)\t\t\t[9] SPICY SCHEZWAN CHICKEN (Rs.548)\n\t[10] Dried Red Pepper Chicken (Rs.800)\t\t[11] Dragon Prawn (Rs.225)\t\t\t\t[12] CLASSIC BEEF CHILLI DRY(Rs.225)\n\t[13] Beef Steak (Rs.860)\t\t\t[14] SPECIAL XINJIANG SOUP (Rs235)\t\t\t[15] Spicy Noodles (Rs.224)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;
    }
    void menu1()
    {  
	  ofstream write;
      write.open("order.text");
    
	if(!write)
    {
	cout<<"file can not open"<<endl;
	exit (-1);
    } 

    a:
   	b:
    c:
   	cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
    cin>>ch;
    
      
    cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
    cin>>ye;
 
    if(ye=="y"|| ye=="Y")
    {
  	 goto b;
    }
    else
    {
      switch(ch)
    {
   	case 1:
   		cout<<"\n\n\tHOW MUCH Chicken Chowmein YOU WANT :";
   		cin>>pizza;
   	
   		a=180;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Chicken Chowmein  : 480";
   		write<<" \n";
   		write<<"NUMBER OF KILOS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Chicken Chowmein "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY Fried Ries YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  Fried Rice : 440";
   		write<<" \n";
   			write<<"NUMBER OF Fried Rice IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Fried Rice "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY STUFF CHILLI PRAWNS YOU WANT :";
   		cin>>pizza;
   	
   		c=580;
   		s=s+c*pizza;
   			write<<"YOU ORDER  STUFF CHILLI PRAWNS : 580";
   			write<<" \n";
   				write<<"NUMBER OF STUFF CHILLI PRAWNS IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER STUFF CHILLI PRAWNS "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MUCH THAI SOUP YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER THAI SOUP  : 1000";
   	write<<" \n";
   		write<<"NUMBER OF THAI SOUP  IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER   THAI SOUP  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW CHICKEN SPRING ROLLS YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER CHICKEN SPRING ROLLS: 350";
   		write<<" \n";
   			write<<"NUMBER OF CHICKEN SPRING ROLLS IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER CHICKEN SPRING ROLLS "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY PRAWN BALLS YOU WANT:";
   		cin>>pizza;
   	
   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER PRAWN BALLS : 400";
   		write<<"\n ";
   			write<<"NUMBER OF PRAWN BALLS IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER PRAWN BALLS "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY CHICKEN WONTON YOU WANT:";
   		cin>>pizza;
   	
   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER CHICKEN WONTON: 420";
   		write<<"\n ";
   			write<<"NUMBER OF CHICKEN WONTON IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  CHICKEN WONTON "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MUCH KUNG PAOU CHICKEN GRAVY YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER KUNG PAOU CHICKEN GRAVY : 540";
   		write<<" \n";
   			write<<"NUMBER OF KUNG PAOU CHICKEN GRAVY IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER KUNG PAOU CHICKEN GRAVY "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tHOW MANY SPICY SCHEZWAN CHICKEN YOU WANT :";
   		cin>>pizza;
   	
		i=548;
		s=s+i*pizza;
		write<<"YOU ORDER SPICY SCHEZWAN CHICKEN : 548";
		write<<" \n";
			write<<"NUMBER OF SPICY SCHEZWAN CHICKEN IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER SPICY SCHEZWAN CHICKEN "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 10:
   		
		cout<<"\n\n\tHOW MUCH KILO DRIED RED PEPPER CHICKEN YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER DRIED RED PEPPER CHICKEN : 800";
   		write<<" \n";
   			write<<"NUMBER OF KILOS OF DRIED RED PEPPER CHICKEN IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER DRIED RED PEPPER CHICKEN "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   		cout<<"\n\n\tHOW MANY KILOS OF DRAGON PRAWN (Rs.800)\t\t\t[11] Chicken Jalfarezi (Rs.425)\t\t\t\t[12] Strawberry Shake YOU WANT :";
   		cin>>pizza;
   	
   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER DRAGON PRAWN : 225";
   		write<<" \n";
   			write<<"NUMBER OF DRAGON PRAWN IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER DRAGON PRAWN "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MUCH CLASSIC BEEF CHILLI DRY YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER CLASSIC BEEF CHILLI DRY: 225";
   		write<<" \n";
   			write<<"NUMBER OF CLASSIC BEEF CHILLI DRY IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER CLASSIC BEEF CHILLI DRY "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 13:
   		cout<<"\n\n\tHOW MANY BEEF STEAK YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDERED BEEF STEAK : 860";
   		write<<" \n";
   			write<<"NUMBER OF BEEF STEAK IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER BEEF STEAK "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY SPECIAL XINJIANG SOUP YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER SPECIAL XINJIANG SOUP : 235";
   		write<<" \n";
   			write<<"NUMBER OF SPECIAL XINJIANG SOUP IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER SPECIAL XINJIANG SOUP "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY SPICY NOODLES YOU WANT :";
   		cin>>pizza;
   	
   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDERED SPICY NOODLES : 224";
   		write<<"\n ";
   			write<<"NUMBER OF SPICY NOODLES IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER SPICY NOODLES "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By Zain-Abdullah-Umer Software Enterprises";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	system("cls");
   	cout<<"\t\t\t\t<----------------------DELIVERY AREAS------------------------------>";
    //cin>>restaurantDes;
    int Distance[12]={10,14,15,21,25,28,30,33,35,40,42,44};
    cout<<"\n\t\\t\ttWe Deliver in these Areas of Karachi!"<<endl;
    cout<<"\t\t\t[1]  North Nazimabad "<<endl;
    cout<<"\t\t\t[2]  Defence (All Phases) "<<endl;
    cout<<"\t\t\t[3]  North Karachi"<<endl;
    cout<<"\t\t\t[4]  Bahria Town"<<endl;
    cout<<"\t\t\t[5]  Saddar"<<endl;
    cout<<"\t\t\t[6]  New Karachi "<<endl;
    cout<<"\t\t\t[7]  Malir"<<endl;
    cout<<"\t\t\t[8]  Industrial Area"<<endl;
    cout<<"\t\t\t[9]  Federal B Area "<<endl;
    cout<<"\t\t\t[10] Naya Nazimabad "<<endl;
    cout<<"\t\t\t[11] Gulshan-e-Maymar"<<endl;
    cout<<"\t\t\t[12] Model Town"<<endl;
    cout<<"\t\t\tSelect your Residence: "<<endl;
    cin>>selection;
    sector_distance=Distance[selection]-20;
    if(Distance[selection-1]>20)
    {
    	cout<<"Sorry! Its out of range!\n";
    
	}
    else
    {
      cout<<"\t\t\t\tYour Order will arrive in 20 minutes!\n"; 
	}
	Ad();
	system("Color 3F");
	
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(T a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Harry"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   	Discount<int,string>(s);
   
  write.close();
  }
  void show1()
  {
  	menu();
  	menu1();
  }
  
};

template<class T,class T1>

class Chopsoy:public Chinese{
	protected:
		 T  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0,Distance[12],extraCharges,tem_bill=0,selection,sector_distance=0;;
         T1 y,ye, restaurantDes,sector;
     public:
     	
    void menu()
    {
	system("Color 3F");
	cout << endl <<"Username :" <<guser << endl;
		cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO CHOPSOY RESTAURANT=========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Chicken Chowmein (Rs.180)\t\t\t[2] Fried Rice(Rs.440)\t\t\t\t\t[3] Stuff Chilli Prawn (Rs.580)\n\t[4] Thai soup (Rs.1000)\t\t\t\t[5] Chicken Spring Roll (Rs.350)\t\t\t[6] Prawn Balls (Rs.400)\n\t[7] Chicken Wonton (Rs.420)\t\t\t[8] KUNG PAOU CHICKEN GRAVY (Rs.240)\t\t\t[9] SPICY SCHEZWAN CHICKEN (Rs.548)\n\t[10] Dried Red Pepper Chicken (Rs.800)\t\t[11] Dragon Prawn (Rs.225)\t\t\t\t[12] CLASSIC BEEF CHILLI DRY(Rs.225)\n\t[13] Beef Steak (Rs.860)\t\t\t[14] SPECIAL XINJIANG SOUP (Rs235)\t\t\t[15] Spicy Noodles (Rs.224)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;
    }
    void menu1()
    {  
	  ofstream write;
      write.open("order.text");
    
	if(!write)
    {
	cout<<"file can not open"<<endl;
	exit (-1);
    } 

    a:
   	b:
    c:
   	cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
    cin>>ch;
    
      
    cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
    cin>>ye;
 
    if(ye=="y"|| ye=="Y")
    {
  	 goto b;
    }
    else
    {
      switch(ch)
    {
   	case 1:
   		cout<<"\n\n\tHOW MUCH Chicken Chowmein YOU WANT :";
   		cin>>pizza;
   	
   		a=180;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Chicken Chowmein  : 480";
   		write<<" \n";
   		write<<"NUMBER OF KILOS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER Chicken Chowmein "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY Fried Ries YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  Fried Rice : 440";
   		write<<" \n";
   			write<<"NUMBER OF Fried Rice IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  Fried Rice "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY STUFF CHILLI PRAWNS YOU WANT :";
   		cin>>pizza;
   	
   		c=580;
   		s=s+c*pizza;
   			write<<"YOU ORDER  STUFF CHILLI PRAWNS : 580";
   			write<<" \n";
   				write<<"NUMBER OF STUFF CHILLI PRAWNS IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER STUFF CHILLI PRAWNS "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MUCH THAI SOUP YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER THAI SOUP  : 1000";
   	write<<" \n";
   		write<<"NUMBER OF THAI SOUP  IS : "<<pizza;
   		write<<"\n";
	   cout<<"\n\n\n\tYOU ORDER   THAI SOUP  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW CHICKEN SPRING ROLLS YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER CHICKEN SPRING ROLLS: 350";
   		write<<" \n";
   			write<<"NUMBER OF CHICKEN SPRING ROLLS IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER CHICKEN SPRING ROLLS "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY PRAWN BALLS YOU WANT:";
   		cin>>pizza;
   	
   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER PRAWN BALLS : 400";
   		write<<"\n ";
   			write<<"NUMBER OF PRAWN BALLS IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER PRAWN BALLS "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY CHICKEN WONTON YOU WANT:";
   		cin>>pizza;
   	
   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER CHICKEN WONTON: 420";
   		write<<"\n ";
   			write<<"NUMBER OF CHICKEN WONTON IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  CHICKEN WONTON "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MUCH KUNG PAOU CHICKEN GRAVY YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER KUNG PAOU CHICKEN GRAVY : 540";
   		write<<" \n";
   			write<<"NUMBER OF KUNG PAOU CHICKEN GRAVY IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER KUNG PAOU CHICKEN GRAVY "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tHOW MANY SPICY SCHEZWAN CHICKEN YOU WANT :";
   		cin>>pizza;
   	
		i=548;
		s=s+i*pizza;
		write<<"YOU ORDER SPICY SCHEZWAN CHICKEN : 548";
		write<<" \n";
		write<<"NUMBER OF SPICY SCHEZWAN CHICKEN IS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER SPICY SCHEZWAN CHICKEN "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 10:
   		
		cout<<"\n\n\tHOW MUCH KILO DRIED RED PEPPER CHICKEN YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER DRIED RED PEPPER CHICKEN : 800";
   		write<<" \n";
   		write<<"NUMBER OF KILOS OF DRIED RED PEPPER CHICKEN IS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER DRIED RED PEPPER CHICKEN "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   		cout<<"\n\n\tHOW MANY KILOS OF DRAGON PRAWN (Rs.800)\t\t\t[11] Chicken Jalfarezi (Rs.425)\t\t\t\t[12] Strawberry Shake YOU WANT :";
   		cin>>pizza;
   	
   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER DRAGON PRAWN : 225";
   		write<<" \n";
   		write<<"NUMBER OF DRAGON PRAWN IS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER DRAGON PRAWN "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MUCH CLASSIC BEEF CHILLI DRY YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER CLASSIC BEEF CHILLI DRY: 225";
   		write<<" \n";
   		write<<"NUMBER OF CLASSIC BEEF CHILLI DRY IS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER CLASSIC BEEF CHILLI DRY "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 13:
   		cout<<"\n\n\tHOW MANY BEEF STEAK YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDERED BEEF STEAK : 860";
   		write<<" \n";
   		write<<"NUMBER OF BEEF STEAK IS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER BEEF STEAK "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY SPECIAL XINJIANG SOUP YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER SPECIAL XINJIANG SOUP : 235";
   		write<<" \n";
   		write<<"NUMBER OF SPECIAL XINJIANG SOUP IS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER SPECIAL XINJIANG SOUP "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY SPICY NOODLES YOU WANT :";
   		cin>>pizza;
   	
   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDERED SPICY NOODLES : 224";
   		write<<"\n ";
   		write<<"NUMBER OF SPICY NOODLES IS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER SPICY NOODLES "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By Zain-Abdullah-Umer Software Enterprises";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	system("cls");
   	cout<<"\t\t\t\t<----------------------DELIVERY AREAS------------------------------>";
    //cin>>restaurantDes;
    int Distance[12]={10,14,15,21,25,28,30,33,35,40,42,44};
    cout<<"\n\t\\t\ttWe Deliver in these Areas of Karachi!"<<endl;
    cout<<"\t\t\t[1]  North Nazimabad "<<endl;
    cout<<"\t\t\t[2]  Defence (All Phases) "<<endl;
    cout<<"\t\t\t[3]  North Karachi"<<endl;
    cout<<"\t\t\t[4]  Bahria Town"<<endl;
    cout<<"\t\t\t[5]  Saddar"<<endl;
    cout<<"\t\t\t[6]  New Karachi "<<endl;
    cout<<"\t\t\t[7]  Malir"<<endl;
    cout<<"\t\t\t[8]  Industrial Area"<<endl;
    cout<<"\t\t\t[9]  Federal B Area "<<endl;
    cout<<"\t\t\t[10] Naya Nazimabad "<<endl;
    cout<<"\t\t\t[11] Gulshan-e-Maymar"<<endl;
    cout<<"\t\t\t[12] Model Town"<<endl;
    cout<<"\t\t\tSelect your Residence: "<<endl;
    cin>>selection;
    sector_distance=Distance[selection]-20;
    if(Distance[selection-1]>20)
    {
    	cout<<"Sorry! Its out of range!\n";
    
	}
    else
    {
      cout<<"\t\t\t\tYour Order will arrive in 20 minutes!\n"; 
	}
	Ad();
	system("Color 3F");

   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	for(T a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Harry"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   	Discount<int,string>(s);
   
  write.close();
  }
  void show1()
  {
  	menu();
  	menu1();
  }
  
};

template<class T,class T1>
class Ginsoy:public Chinese{
	protected:
		 T  pizza,ch,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s=0,Distance[12],extraCharges,tem_bill=0,selection,sector_distance=0;;
         T1 y,ye, restaurantDes,sector;
     public:
     	
    void menu()
    {
	    system("Color 3F");
	    cout << endl <<"Username :" <<guser << endl;
		cout<<"\n\n\n\t\t\t\t\t\t ========== WELCOME TO GINSOY RESTAURANT=========="<<endl;
	cout<<"\n\n\t\t\t\t\t\t\t       =====START YOUR ORDER====="<<endl;
	cout<<"\n\n\n\t===========================\t\t\t==========================\t\t\t\t==========================="<<endl;
	cout<<"\t[1] Chicken Chowmein (Rs.180)\t\t\t[2] Fried Rice(Rs.440)\t\t\t\t\t[3] Stuff Chilli Prawn (Rs.580)\n\t[4] Thai soup (Rs.1000)\t\t\t\t[5] Chicken Spring Roll (Rs.350)\t\t\t[6] Prawn Balls (Rs.400)\n\t[7] Chicken Wonton (Rs.420)\t\t\t[8] KUNG PAOU CHICKEN GRAVY (Rs.240)\t\t\t[9] SPICY SCHEZWAN CHICKEN (Rs.548)\n\t[10] Dried Red Pepper Chicken (Rs.800)\t\t[11] Dragon Prawn (Rs.225)\t\t\t\t[12] CLASSIC BEEF CHILLI DRY(Rs.225)\n\t[13] Beef Steak (Rs.860)\t\t\t[14] SPECIAL XINJIANG SOUP (Rs235)\t\t\t[15] Spicy Noodles (Rs.224)\n\t===========================\t\t\t==============================\t\t\t\t===========================\n\n\n\t\t\t\t\t\t\t\t[16] EXIT"<<endl;
    cout<<"\n\t======================================================================================================================================="<<endl;
    }
    void menu1()
    {  
	  ofstream write;
      write.open("order.text");
    
	if(!write)
    {
	cout<<"file can not open"<<endl;
	exit (-1);
    } 

    a:
   	b:
    c:
   	cout<<"\n\n\tENTER YOUR ORDER (one order at a time): "; 
    cin>>ch;
    
      
    cout<<"\n\n\tDO YOU WANT TO UPDATE YOUR ORDER (y/n) :";
 
    cin>>ye;
 
    if(ye=="y"|| ye=="Y")
    {
  	 goto b;
    }
    else
    {
      switch(ch)
    {
   	case 1:
   		cout<<"\n\n\tHOW MUCH Chicken Chowmein YOU WANT :";
   		cin>>pizza;
   	
   		a=180;
   		s=s+a*pizza;
   		write<<"YOU ORDER  Chicken Chowmein  : 480";
   		write<<" \n";
   		write<<"NUMBER OF KILOS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER Chicken Chowmein "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 2:
   		cout<<"\n\n\tHOW MANY Fried Ries YOU WANT :";
   		cin>>pizza;
   		
		   b=440;
   		s=s+b*pizza;
   		write<<"YOU ORDER  Fried Rice : 440";
   		write<<" \n";
   			write<<"NUMBER OF Fried Rice IS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER  Fried Rice "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 3:
   		cout<<"\n\n\tHOW MANY STUFF CHILLI PRAWNS YOU WANT :";
   		cin>>pizza;
   	
   		c=580;
   		s=s+c*pizza;
   		write<<"YOU ORDER  STUFF CHILLI PRAWNS : 580";
   		write<<" \n";
   		write<<"NUMBER OF STUFF CHILLI PRAWNS IS : "<<pizza;
   		write<<"\n";
   	    cout<<"\n\n\n\tYOU ORDER STUFF CHILLI PRAWNS "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 4:
   		cout<<"\n\n\tHOW MUCH THAI SOUP YOU WANT :";
   		cin>>pizza;
   	
   		d=520;
   		s=s+d*pizza;
   		write<<"YOU ORDER THAI SOUP  : 1000";
   	write<<" \n";
   		write<<"NUMBER OF THAI SOUP  IS : "<<pizza;
   		write<<"\n";
	    cout<<"\n\n\n\tYOU ORDER   THAI SOUP  "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 5:
   		cout<<"\n\n\tHOW CHICKEN SPRING ROLLS YOU WANT:";
   		cin>>pizza;
   	
   		e=350;
   		s=s+e*pizza;
   		write<<"YOU ORDER CHICKEN SPRING ROLLS: 350";
   		write<<" \n";
   		write<<"NUMBER OF CHICKEN SPRING ROLLS IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER CHICKEN SPRING ROLLS "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 6:
   		cout<<"\n\n\tHOW MANY PRAWN BALLS YOU WANT:";
   		cin>>pizza;
   	
   		f=400;
   		s=s+f*pizza;
   		write<<"YOU ORDER PRAWN BALLS : 400";
   		write<<"\n ";
   			write<<"NUMBER OF PRAWN BALLS IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER PRAWN BALLS "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 7:
   		cout<<"\n\n\tHOW MANY CHICKEN WONTON YOU WANT:";
   		cin>>pizza;
   	
   		g=420;
   		s=s+g*pizza;
   		write<<"YOU ORDER CHICKEN WONTON: 420";
   		write<<"\n ";
   			write<<"NUMBER OF CHICKEN WONTON IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER  CHICKEN WONTON "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 8:
   		cout<<"\n\n\tHOW MUCH KUNG PAOU CHICKEN GRAVY YOU WANT :";
   		cin>>pizza;
   	
   		h=540;
   		s=s+h*pizza;
   		write<<"YOU ORDER KUNG PAOU CHICKEN GRAVY : 540";
   		write<<" \n";
   		write<<"NUMBER OF KUNG PAOU CHICKEN GRAVY IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER KUNG PAOU CHICKEN GRAVY "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
	case 9:
	cout<<"\n\n\tHOW MANY SPICY SCHEZWAN CHICKEN YOU WANT :";
   		cin>>pizza;
   	
		i=548;
		s=s+i*pizza;
		write<<"YOU ORDER SPICY SCHEZWAN CHICKEN : 548";
		write<<" \n";
			write<<"NUMBER OF SPICY SCHEZWAN CHICKEN IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER SPICY SCHEZWAN CHICKEN "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 10:
   		
		cout<<"\n\n\tHOW MUCH KILO DRIED RED PEPPER CHICKEN YOU WANT :";
   		cin>>pizza;
   	
   		k=525;
   		s=s+k*pizza;
   		write<<"YOU ORDER DRIED RED PEPPER CHICKEN : 800";
   		write<<" \n";
   			write<<"NUMBER OF KILOS OF DRIED RED PEPPER CHICKEN IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER DRIED RED PEPPER CHICKEN "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 11:
   		cout<<"\n\n\tHOW MANY KILOS OF DRAGON PRAWN (Rs.800)\t\t\t[11] Chicken Jalfarezi (Rs.425)\t\t\t\t[12] Strawberry Shake YOU WANT :";
   		cin>>pizza;
   	
   		l=425;
   		s=s+l*pizza;
   		write<<"YOU ORDER DRAGON PRAWN : 225";
   		write<<" \n";
   			write<<"NUMBER OF DRAGON PRAWN IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER DRAGON PRAWN "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 12:
   		cout<<"\n\n\tHOW MUCH CLASSIC BEEF CHILLI DRY YOU WANT :";
   		cin>>pizza;
   	
   		m=335;
   		s=s+m*pizza;
   		write<<"YOU ORDER CLASSIC BEEF CHILLI DRY: 225";
   		write<<" \n";
   			write<<"NUMBER OF CLASSIC BEEF CHILLI DRY IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER CLASSIC BEEF CHILLI DRY "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	
   	case 13:
   		cout<<"\n\n\tHOW MANY BEEF STEAK YOU WANT :";
   		cin>>pizza;
   	
   		j=390;
   		s=s+j*pizza;
   		write<<"YOU ORDERED BEEF STEAK : 860";
   		write<<" \n";
   			write<<"NUMBER OF BEEF STEAK IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER BEEF STEAK "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 14:
   		cout<<"\n\n\tHOW MANY SPECIAL XINJIANG SOUP YOU WANT :";
   		cin>>pizza;
   	
   		n=324;
   		s=s+n*pizza;
   		write<<"YOU ORDER SPECIAL XINJIANG SOUP : 235";
   		write<<" \n";
   			write<<"NUMBER OF SPECIAL XINJIANG SOUP IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER SPECIAL XINJIANG SOUP "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 15:
   		cout<<"\n\n\tHOW MANY SPICY NOODLES YOU WANT :";
   		cin>>pizza;
   	
   		o=360;
   		s=s+o*pizza; //fn1353
   		write<<"YOU ORDERED SPICY NOODLES : 224";
   		write<<"\n ";
   			write<<"NUMBER OF SPICY NOODLES IS : "<<pizza;
   		write<<"\n";
   	cout<<"\n\n\n\tYOU ORDER SPICY NOODLES "<<endl<<"\tYOUR ORDER SUCCESSFULLY SAVED "<<endl;
   	break;
   	
   	case 16:
   		cout<<"\n\t\t\t\t\t Brought To You By Zain-Abdullah-Umer Software Enterprises";
   	exit(0);
   	break;
   	
   	default:
   		cout<<"\n\n\t\t\t\t\t\t\tYOU ENTER WRONG ORDER KEY !!!!! "<<endl;
   		goto c;
   		break;
   }
   cout<<"\n\tDO YOU WANT ANOTHER ORDER (yes/no) :";
   cin>>y;
   if(y=="yes"|| y=="YES")
   {
   	goto a;
   }
   else
   {
   	cout<<"\t\t\t\t<----------------------DELIVERY AREAS------------------------------>";
    //cin>>restaurantDes;
    int Distance[12]={10,14,15,21,25,28,30,33,35,40,42,44};
    cout<<"\n\t\\t\ttWe Deliver in these Areas of Karachi!"<<endl;
    cout<<"\t\t\t[1]  North Nazimabad "<<endl;
    cout<<"\t\t\t[2]  Defence (All Phases) "<<endl;
    cout<<"\t\t\t[3]  North Karachi"<<endl;
    cout<<"\t\t\t[4]  Bahria Town"<<endl;
    cout<<"\t\t\t[5]  Saddar"<<endl;
    cout<<"\t\t\t[6]  New Karachi "<<endl;
    cout<<"\t\t\t[7]  Malir"<<endl;
    cout<<"\t\t\t[8]  Industrial Area"<<endl;
    cout<<"\t\t\t[9]  Federal B Area "<<endl;
    cout<<"\t\t\t[10] Naya Nazimabad "<<endl;
    cout<<"\t\t\t[11] Gulshan-e-Maymar"<<endl;
    cout<<"\t\t\t[12] Model Town"<<endl;
    cout<<"\t\t\tSelect your Residence: "<<endl;
    cin>>selection;
    sector_distance=Distance[selection]-20;
    if(Distance[selection-1]>20)
    {
    	cout<<"Sorry! Its out of range!\n";
    
	}
    else
    {
      cout<<"\t\t\t\tYour Order will arrive in 20 minutes!\n"; 
	}
	
	Ad();
	system("Color 3F");
		
   	cout<<"\n\t\t\t\t\t\t\tTHANK YOU FOR YOUR ORDER :) GENERATING BILL ";
   	
		
	   for(T a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		cout << "...";
	
	}
   	cout<<"\n\t\t\t\t\t\t\t";
   	system("PAUSE");
   }
}
system("cls");
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;
						cout << "\t\t\t\t\t\t\t|               Food Ordering System             |"<<endl;
						cout << "\t\t\t\t\t\t\t ================================================"<<endl;
						cout << endl;
						cout << endl;

						cout << "\t\t\t\t\t\t\t  Bill No : CP51           Order : NB1353"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t\t\t\t\t  Cashier :  Harry"<<endl;
						cout << endl;
                        cout<<"\t\t\t\t\t\t\t\t    YOUR TOTAL BILL IS Rs."<<s<<endl;
                        write<<"\t\t\t\t\t\t\t ";
                        write<<"\t\t\t\t\t\t\tTOTAL BILL IS : "<<s;
						cout << "\n\t\t\t\t\t\t\t ================================================"<<endl;

   	Discount<int,string>(s);
   
  write.close();
  }
  void show1()
  {
  	menu();
  	menu1();
  }
  
};
//map concept used in this function
void Deals()
{ 	         
	map<string,int> deal;
	deal["DEAL 1: Chicken Burger + Regular Fries + Coldrink"]=1000;
	deal["DEAL 2: Supreme Pizzas + Coldrink"]=1300;
	//cout<<"\n\n\t\t\t\t\t\t\t\t\t\t!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	cout<<"\n\t\t\t\t\t\t============================================================\n";
	cout<<"\t\t\t\t\t\t!!!!!!!!!!!!!!!!!!!LOOKING FOR DEALS!!!!!!!!!!!!!!!!!!!!!!!";
	cout<<"\n\t\t\t\t\t\t============================================================\n";
	cout<<"\n\t\t\t\t\t\t =============FAST FOOD RESTAURANTS DEALS==========";
	cout<<"\n\t\t\t\t\t\t ========== BOVICHIC RESTAURANT DHAMAKA OFFER=========="<<endl;
	cout<<"\n\t\t\t\t\t\t\t!!!!!!!!!!!!!DHAMAKA OFFERS!!!!!!!!!!!!!!!!!!!";
	cout<<"\n\t\t\t\t\t\t\t\t||\tDEAL\t||"<<endl;

	map<string,int>::iterator itr;
    for(itr=deal.begin();itr!=deal.end();itr++)
	{
		cout<<"\t\t\t\t\t\t"<<(*itr).first<<" "<<(*itr).second<<"\n";
	}
	
	map<string,int> deal1;
	deal1["DEAL 1: Chicken Burger + Regular Fries"]=1500;
	deal1["DEAL 2: Chicken Nuggets + Coldrink"]=1300;
	cout<<"\n\n\n\t\t\t\t\t\t ========== MCDONALDS RESTAURANT DHAMAKA OFFER=========="<<endl;
	cout<<"\n\t\t\t\t\t\t\t!!!!!!!!!!!!DHAMAKA OFFERS!!!!!!!!!!!!!!!!!!!";
	cout<<"\n\t\t\t\t\t\t\t\t||\tDEAL\t||"<<endl;

	map<string,int>::iterator itr1;
    for(itr1=deal1.begin();itr1!=deal1.end();itr1++)
	{
		cout<<"\t\t\t\t\t\t"<<(*itr1).first<<" "<<(*itr1).second<<"\n";
	}      				
}

//   Program Opening and Category Selection
template<class g>

void GlobalFun()
{
	cout << endl <<"Username :" <<guser << endl;
	g a,b;
	system("cls");
	cout<<"\t\t\t====================================================================================================\t\t\t\n";
	cout<<"\t\t\t====================ENTER THE CATEGORY OF RESTAURANT YOU WANT TO ORDER FROM=========================\n";
	cout<<"\t\t\t====================================================================================================\t\t\t\n";
	cout<<"\t\t\t\t1.Desi\n\n\t\t\t\t2.Fast Food\n\n\t\t\t\t3.Chinese\n\n\t\t\t\t4.Deals\n\n\t\t\t\t5.Exit";
	cout<<"\n\t\t\t====================================================================================================\t\t\t\n";
	cout<<"\t\t\t";cin>>a;
	try{
		    	if(a<0)
		    	{
		    		throw out_of_range("Error &e");
				}
				
			}
			catch(exception &e)
			{
				cout<<"Exception caught!"<<e.what();
			}
			
	switch(a)
	{
		
		case 1:
			{
	        system("cls");
			Ad();
			cout << endl <<"Username :" <<guser << endl;
		    cout<<"\t\t\t==========================SELECT THE RESTAURANT FROM WHICH YOU WANT TO ORDER==================\n\t\t\t 1.KOLACHI RESTAURANT\n\t\t\t 2.KABABJEES RESTAURANT:\n\t\t\t 3.LALQILA RESTAURANT\n\t\t\t 4.DUA RESTAURANT\n";
	        cin>>b;
		    
		    try{
		    	if(b<0)
		    	{
		    		throw out_of_range("Error &e");
				}
				
			}
			catch(exception &e)
			{
				cout<<"Exception caught!"<<e.what();
			}
			
	        switch(b)
	        {
	        	
	        	case 1:
	        	{
				system("cls");
	             Kolachi<int,string> k;
	             Kolachi<int,string>k1=k;
	             k1.menu();
	             k1.menu1();
	             //Deals();
	            }
	             break;
	             
	            case 2:
	          	{
	          		system("cls");
	             Kababjee<int,string> k2;
	             k2.menu();
	             k2.menu1();
	            }
				 break;
	            
				case 3:
		        {
				system("cls");
	            Lalqila<int,string> k2;
	            k2.menu();
	            k2.menu1();
	            }
				break;
	            
	            case 4:
	            	{
	            		system("cls");
	            		Dua<int,string> du;
	            		du.menu();
	            		du.menu1();
					}
					break;
					
	            default:
	            	{
					exit(1);
	            	break;
	                }
			}
			break;
		}
	    
	
			case 2:	
			{
				system("cls");
				Ad();
				cout << endl <<"Username :" <<guser << endl;
			cout<<"\t\t\t==========================SELECT THE RESTAURANT FROM WHICH YOU WANT TO ORDER==================\n\t\t\t 1.BROADWAY\n\t\t\t 2.KFC RESTAURANT:\n\t\t\t 3.MCDONALDS RESTAURANT\n\t\t\t 4.BURGER LAB\n";
	        cin>>b;
	        
			try{
		    	if(b<0)
		    	{
		    		throw out_of_range("Error &e");
				}
				
			}
			catch(exception &e)
			{
				cout<<"Exception caught!"<<e.what();
			}
			
	        switch(b)
	        {
	        	case 1:
	        	{
				system("cls");
	             Broadway<int,string> b;
	             b.menu();
	             b.menu1();
	            }
	             break;
	            case 2:
	            	{
	            		system("cls");
	            		KFC<int,string> f;
	            		f.menu();
	            		f.menu1();
					}
					break;
				case 3:
					{
						system("cls");
						Mcdonald<int,string> m;
						m.menu();
						m.menu1();
					}
					break;
				case 4:
					{
						system("cls");
						Burgerlab<int,string> l;
						l.menu();
						l.menu1();
					}
	        }
	        break;
	        
	        }
	        
	        
	        case 3:
			{
	        system("cls");
	        Ad();
	        cout << endl <<"Username :" <<guser << endl;
		    cout<<"\t\t\t==========================SELECT THE RESTAURANT FROM WHICH YOU WANT TO ORDER==================\n\t\t\t 1.GREATWALL RESTAURANT\n\t\t\t 2.LECHINE RESTAURANT:\n\t\t\t 3.SOYSHOP RESTAURANT\n\t\t\t 4.GINSOY RESTAURANT\n";
	        cin>>b;
		    
			try{
		    	if(b<0)
		    	{
		    		throw out_of_range("Error &e");
				}
				
			}
			catch(exception &e)
			{
				cout<<"Exception caught!"<<e.what();
			}
			
	        switch(b)
	        {
	        	
	        	case 1:
	        	{
				  system("cls");
	             Greatwall<int,string> great;
	             great.menu();
	             great.menu1();
	            }
	             break;
	             
	            case 2:
	          	{
	          		system("cls");
	             Lechine<int,string> Le;
	             Le.menu();
	             Le.menu1();
	            }
				 break;
	            
				case 3:
		        {
				system("cls");
	            Chopsoy<int,string> chop;
	            chop.menu();
	            chop.menu1();
	            }
				break;
	            
	            case 4:
	            	{
	            		system("cls");
	            		Ginsoy<int,string> gin;
	            		gin.menu();
	            		gin.menu1();
					}
					break;
					
	            default:
	            	{
					exit(1);
	            	break;
	                }
			}
			break;
		}
		case 4:
			{
				system("cls");
				Ad();
				cout << endl <<"Username :" <<guser << endl;
				Deals();
			}
		case 5:
			{
				system("cls");
				Ad();
				cout << endl <<"Username :" <<guser << endl << endl;
				Exit();
			}
	}
}
 
int main()
{
	Restaurant r;
	r.total();
	GlobalFun<int>();
}

