#include<iostream>
#include<string.h>
#include<conio.h>
#include<iomanip>
using namespace std;
class PIZZA_HUT{
	private:
	string name; 
	string pizzas[13] = {"TIKKA","ITALIAN","SPICY","B.B.Q","CHEESE","PEPPERONI","FAJITA","MARGHERITA","VEGGIE","OREGANO","MEXICAN","MUET-SPECIAL"};
	string coldrinks[7]={"PEPSI","COCACOLA","7-UP","STRING","RANI","SLICE","NETSLE"};
    double n,money,how_many_pizza,size,which_cold,cold_money,how_many_colds,dt_money;
	char y_or_n,bill,m_enter;
	
	public:	
	void welcome(){
		cout<<"Note: If name is HIRA AMIR just Enter HIRA";
		cout<<endl<<"PLEASE ENTER YOUR FIRST NAME: ";
		
cin>>name;
cout<<endl<<" ------------- WELCOME -------------  "<<endl<<endl<<endl<<endl;
cout<<"\t\t\t ------------- "<<name<<" ------------- "<<endl<<endl<<endl<<endl;
cout<<" \t\t\t\t------------- TO -------------  "<<endl<<endl<<endl<<endl;
cout<<" \t\t\t\t\t------------- PIZZA HUT -------------  "<<endl<<endl<<endl;}
	
	void enter_m(){
			for(int i=0; i<=100; i++)
	{
		cout<<"ENTER 'm' TO SEE THE MENU: ";
		cin>>m_enter;
		if(m_enter=='m'){
			system("cls");
				cout<<"____________________________________ MENU ____________________________________ "<<endl;
                cout<<"S:NO"<<setw(12)<<"PIZZA"<<setw(49)<<"SMALL"<<setw(14)<<"MEDIUM"<<setw(14)<<"LARGE"<<endl;
                cout<<"1"<<setw(14)<<pizzas[0]<<" Pizza"<<setw(42)<<"150"<<setw(15)<<"250"<<setw(15)<<"350"<<endl;
                cout<<"2"<<setw(16)<<pizzas[1]<<" Pizza"<<setw(40)<<"250"<<setw(15)<<"350"<<setw(15)<<"450"<<endl;
                cout<<"3"<<setw(14)<<pizzas[2]<<" Pizza"<<setw(42)<<"100"<<setw(15)<<"200"<<setw(15)<<"300"<<endl;
                cout<<"4"<<setw(14)<<pizzas[3]<<" Pizza"<<setw(42)<<"250"<<setw(15)<<"350"<<setw(15)<<"450"<<endl;
                cout<<"5"<<setw(15)<<pizzas[4]<<" Pizza"<<setw(41)<<"150"<<setw(15)<<"250"<<setw(15)<<"350"<<endl;
                cout<<"6"<<setw(18)<<pizzas[5]<<" Pizza"<<setw(38)<<"100"<<setw(15)<<"150"<<setw(15)<<"200"<<endl;
                cout<<"7"<<setw(15)<<pizzas[6]<<" Pizza"<<setw(41)<<"150"<<setw(15)<<"250"<<setw(15)<<"350"<<endl;
                cout<<"8"<<setw(19)<<pizzas[7]<<" Pizza"<<setw(37)<<"250"<<setw(15)<<"350"<<setw(15)<<"450"<<endl;
                cout<<"9"<<setw(15)<<pizzas[8]<<" Pizza"<<setw(41)<<"100"<<setw(15)<<"150"<<setw(15)<<"200"<<endl;
                cout<<"10"<<setw(15)<<pizzas[9]<<" Pizza"<<setw(40)<<"150"<<setw(15)<<"250"<<setw(15)<<"350"<<endl;
                cout<<"11"<<setw(15)<<pizzas[10]<<" Pizza"<<setw(40)<<"250"<<setw(15)<<"350"<<setw(15)<<"450"<<endl;
                cout<<"12"<<setw(20)<<pizzas[11]<<" Pizza"<<setw(35)<<"100"<<setw(15)<<"150"<<setw(15)<<"200"<<endl;	
			break;
		}
	     else 
		 cout<<"DON'T BE SMART! "<<endl;	
	}
	}

void place_order(){
	cout<<"--------------------------------------------"<<endl;
cout<<"ENTER YOUR ORDER (one order at a time)(use serial number):";
      cin>>n;
		if(n==1){cout<<"HOW MANY "<<pizzas[0]<<" PIZZA DO U WANT: ";cin>>how_many_pizza;}
		if(n==2){cout<<"HOW MANY "<<pizzas[1]<<" PIZZA DO U WANT: ";cin>>how_many_pizza;}
		if(n==3){cout<<"HOW MANY "<<pizzas[2]<<" PIZZA DO U WANT: ";cin>>how_many_pizza;}
		if(n==4){cout<<"HOW MANY "<<pizzas[3]<<" PIZZA DO U WANT: ";cin>>how_many_pizza;}
		if(n==5){cout<<"HOW MANY "<<pizzas[4]<<" PIZZA DO U WANT: ";cin>>how_many_pizza;}
		if(n==6){cout<<"HOW MANY "<<pizzas[5]<<" PIZZA DO U WANT: ";cin>>how_many_pizza;}
		if(n==7){cout<<"HOW MANY "<<pizzas[6]<<" PIZZA DO U WANT: ";cin>>how_many_pizza;}
		if(n==8){cout<<"HOW MANY "<<pizzas[7]<<" PIZZA DO U WANT: ";cin>>how_many_pizza;}
		if(n==9){cout<<"HOW MANY "<<pizzas[8]<<" PIZZA DO U WANT: ";cin>>how_many_pizza;}
    	if(n==10){cout<<"HOW MANY "<<pizzas[9]<<" PIZZA DO U WANT: ";cin>>how_many_pizza;}
        if(n==11){cout<<"HOW MANY "<<pizzas[10]<<" PIZZA DO U WANT:";cin>>how_many_pizza;}
		if(n==12){cout<<"HOW MANY "<<pizzas[11]<<" PIZZA DO U WANT: ";cin>>how_many_pizza;}
				cout<<endl<<"S:NO         SIZES "<<endl;
				cout<<"1            SMALL "<<endl;
				cout<<"2            MEDIUM "<<endl;
				cout<<"3            LARGE  "<<endl<<endl;
				cout<<"ENTER SIZE(use serial number): ";
				cin>>size;
	if(n==1|| n==5 || n==7 || n==10 )
	        {
			     if(size==1)
				{
					money=150*how_many_pizza;
				}
				else if (size==2)
				{
					money=250*how_many_pizza;
				}
				else if (size==3){
					money=350*how_many_pizza;
				}
	        }
				
			
	if  (n==2 || n==4 || n==8 || n==11)
      	{
		     	if(size==1)
				{
					money=250*how_many_pizza;
				}
				else if (size==2)
				{
					money=350*how_many_pizza;
				}
				else if (size==3)
				{
					money=450*how_many_pizza;
				
				}
	    }
	    
	    
	if  (n==3 || n==6 || n==9 || n==12)
	    {
                 if(size==1)
				{
					money=100*how_many_pizza;
				}
				else if (size==2)
				{
					money=200*how_many_pizza;
				}
				else if (size==3)
				{
					money=300*how_many_pizza;
				}
	    }		
	}
	void others(){
		    cout<<"--------------------------------------------"<<endl;
	     	cout<<"DO YOU WANT TO VISIT COLCORNER (y/n): ";
	    	cin>>y_or_n;
	    	
	    	
	    	system( "cls");
	    	if (y_or_n=='y')
			{
			cout<<"______________________COLDCORNER______________________"<<endl<<endl;
			cout<<"HERE IS THE LIST OF COLDRINKS "<<endl;
			cout<<"1        "<<coldrinks[0]<<"                  50"<<endl;
            cout<<"2        "<<coldrinks[1]<<"               100"<<endl;
            cout<<"3        "<<coldrinks[2]<<"                   30"<<endl;
            cout<<"4        "<<coldrinks[3]<<"                 100"<<endl;
            cout<<"5        "<<coldrinks[4]<<"                   30"<<endl;
            cout<<"6        "<<coldrinks[5]<<"                  50"<<endl;
            cout<<"7        "<<coldrinks[6]<<"                 50"<<endl;
            cout<<endl<<"WHICH ONE DO YOU WANT(use serial number): ";
            cin>>which_cold;
            if(which_cold==1) {cout<<"HOW MANY "<<coldrinks[0]<<" DO YOU WANT: ";cin>>how_many_colds; }
            if(which_cold==2) {cout<<"HOW MANY "<<coldrinks[1]<<" DO YOU WANT: ";cin>>how_many_colds; }
            if(which_cold==3) {cout<<"HOW MANY "<<coldrinks[2]<<" DO YOU WANT: ";cin>>how_many_colds; }
            if(which_cold==4) {cout<<"HOW MANY "<<coldrinks[3]<<" DO YOU WANT: ";cin>>how_many_colds; }
            if(which_cold==5) {cout<<"HOW MANY "<<coldrinks[4]<<" DO YOU WANT: ";cin>>how_many_colds; }
            if(which_cold==6) {cout<<"HOW MANY "<<coldrinks[5]<<" DO YOU WANT: ";cin>>how_many_colds; }
            if(which_cold==7) {cout<<"HOW MANY "<<coldrinks[6]<<" DO YOU WANT: ";cin>>how_many_colds; }



            if(which_cold==1||which_cold==6||which_cold==7)
            {
	              cold_money=how_many_colds*50;
            }
            if(which_cold==2||which_cold==4)
            {
	               cold_money=how_many_colds*100;
            }
            if(which_cold==3||which_cold==5)
            {
	                cold_money=how_many_colds*30;
            }

            int time;
			cout<<endl<<"______________________DELIVERY TIME______________________"<<endl<<endl;
			cout<<"1   EXTRA FAST(5 MINS)            200"<<endl;
			cout<<"2   FAST(10 MINS)                 150"<<endl;
			cout<<"3   NORMAL(20 MINS)               100"<<endl<<endl;
			cout<<"ENTER DELIVERY TIME: ";
			cin>>time;
			
			
			if(time==1){
				dt_money=200;
			}
			if(time==2){
				dt_money=150;
			}
			if(time==3){
				dt_money=100;
			}
			
			
			
			system( "cls");
			cout<<"YOUR ORDER IS PLACED NOW "<<endl;
         	for(int i=0;i<=100;i++){
		     cout<<"FOR YOUR BILL ENTER 'b': ";
          	cin>>bill;
          	system("cls");
        	if(bill=='b'){
		cout<<endl<<"____________________________BILL____________________________"<<endl<<endl;
		cout<<"PIZZA                    "<<money<<endl;
	    cout<<"COLDRINKS                "<<cold_money<<endl;
	    cout<<"DELIVERY TIME            "<<dt_money<<endl;
		cout<<"TOTAL AMOUNT             "<<cold_money+money+dt_money<<endl;
		if(time==1)
		cout<<endl<<"YOUR ORDER WILL BE AT YOUR DOORSTEPS IN JUST 5 MINUTES"<<endl<<endl;
		if(time==2)
		cout<<endl<<"YOUR ORDER WILL BE AT YOUR DOORSTEPS IN JUST 10 MINUTES"<<endl<<endl;
		if(time==3)
		cout<<endl<<"YOUR ORDER WILL BE AT YOUR DOORSTEPS IN JUST 15 MINUTES"<<endl<<endl;
		cout<<endl<<"**************************THANKS FOR ORDERING**************************"<<endl<<endl;
		break;
		}else
	cout<<"PLEASE ENTER B!"<<endl;
	}	
	}
		else if(y_or_n=='n')
		{
			int time;
//			cout<<"--------------------------------------------"<<endl;
			cout<<endl<<"______________________DELIVERY TIME______________________ "<<endl<<endl;
			cout<<"1     EXTRA FAST(5 MINS)            200"<<endl;
			cout<<"2     FAST(10 MINS)                 150"<<endl;
			cout<<"3     NORMAL(20 MINS)               100"<<endl<<endl;
			cout<<"ENTER DELIVERY TIME: ";
			cin>>time;
			if(time==1){
				dt_money=200;
			}
			if(time==2){
				dt_money=150;
			}
			if(time==3){
				dt_money=100;
			}
			
			
			system( "cls");
			cout<<"YOUR ORDER IS PLACED NOW "<<endl;
			for(int i=0;i<=100;i++){
	           cout<<"FOR YOUR BILL ENTER 'b': ";
	            cin>>bill;
               	system("cls");
	        if(bill=='b'){
		cout<<endl<<"____________________________ BILL____________________________"<<endl<<endl;
		cout<<"PIZZA                    "<<money<<endl;
		cout<<"DELIVERY TIME            "<<dt_money<<endl;
		cout<<"TOTAL AMOUNT             "<<dt_money+money<<endl;
		if(time==1)
		cout<<endl<<"YOUR ORDER WILL BE AT YOUR DOORSTEPS IN JUST 5 MINUTES"<<endl<<endl;
		if(time==2)
		cout<<endl<<"YOUR ORDER WILL BE AT YOUR DOORSTEPS IN JUST 10 MINUTES"<<endl<<endl;
		if(time==3)
		cout<<endl<<"YOUR ORDER WILL BE AT YOUR DOORSTEPS IN JUST 15 MINUTES"<<endl<<endl;
		cout<<endl<<"**************************THANKS FOR ORDERING**************************"<<endl<<endl;
		break;
		
	}else
	cout<<"PLEASE ENTER B!"<<endl;
	}
	} }	};


int main(){	
PIZZA_HUT welcome1,welcome2;
welcome1.welcome();
welcome1.enter_m();
welcome1.place_order();
welcome1.others();
char last_step;
for (int i=0; i<=100; i++){
	cout<<"DO YOU WANT TO VISIT AGAIN (y/n): ";
	cin>>last_step;
	if(last_step=='y'){
	system( "cls");
	welcome2.enter_m();
    welcome2.place_order();
    welcome2.others();
	}
	else
	{
      cout<<"OKAY! ENJOY"<<endl;
      break;
	}	}
	return 0;
}
