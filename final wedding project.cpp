#include <iostream>
#include <string>
//#include<math.h>
#include<fstream>
using namespace std;
struct customerDetails {
    string firstName;
	string lastName;
	string email;
    string mobileNO;

	};
double totalamount=0;
int no_of_guest;

double banquet(){

    banquet_start:
    cout<<"Venue    :        GRAND ROYALE BANQUET HALL"<<endl;
    cout<<"Type     :        Banquet"<<endl;
    cout<<"Capacity :        1500 Guests"<<endl;
    cout<<"Price    :        $5000"<<endl<<endl;

    cout<<"Enter number of guest you invited"<<endl;
    cin>>no_of_guest;
    if(no_of_guest>1500){
        cout<<"Sorry we have a capacity of 1500 Guests "<<endl<<endl;
        goto banquet_start;
    } return 5000;
	}


    double garden(){

    garden_start:
    cout<<"Venue    :        SECRET ENCHANTED GARDEN"<<endl;
    cout<<"Type     :        Garden"<<endl;
    cout<<"Capacity :        2000 Guests"<<endl;
    cout<<"Price    :        $8000"<<endl<<endl;
    cout<<"Enter number of guest you invited"<<endl;
    cin>>no_of_guest;
    if(no_of_guest>2000){
        cout<<"Sorry we have a capacity of 2000 Guests "<<endl<<endl;
        goto garden_start;
    }
    return 8000;
	}
    double resort(){

    resort_start:
    cout<<"Venue    :        SEASIDE HEAVEN RESORT"<<endl;
    cout<<"Type     :        Resort"<<endl;
    cout<<"Capacity :        1100 Guests"<<endl;
    cout<<"Price    :        $15000"<<endl<<endl;
    cout<<"Enter number of guest you invited"<<endl;
    cin>>no_of_guest;
    if(no_of_guest>1100){
        cout<<"Sorry we have a capacity of 1100 Guests "<<endl<<endl;
        goto resort_start;
    }
	return 15000;
	}
   double photography(){
    char photography;
    char photography_service;
    double totalamount = 0;
photographyoption:
cout<<"Would you like us to offer you photography services (y/n)"<<endl;
    cin>>photography;

    if (photography=='y' || photography=='Y'){
            photography_details:
        cout<<"\t^^^Please select your option^^^ : "<<endl;
        cout<<"(1)Only photography                    ->  $350"<<endl;
        cout<<"(2)Photography + video shooting        ->  $600"<<endl;
        cout<<"(3)photography + video + drone shots   ->  $850"<<endl;
        cin>>photography_service;

        if (photography_service=='1'){
            totalamount=totalamount+350;
            }
        else if (photography_service=='2'){
            totalamount=totalamount+600;
        }
        else if (photography_service=='3'){
             totalamount=totalamount+850;
        }
        else {
            cout<<"You choose a wrong option"<<endl;
            goto photography_details;
        }}
    else if (photography=='n' || photography=='N'){
		  totalamount+=0;
    }
    else{
    	cout<<"Invalid Option"<<endl;
    	goto photographyoption;
}
    return totalamount;
}
    double Theme(){
    char theme;
    char theme_services;
    double totalamount = 0;
themeoption:
cout<<"Would you like to add theme?(y/n)"<<endl;
    cin>>theme;

    if (theme=='y' ||theme=='Y'){
            theme_details:
        cout<<"\t^^^Please select your option^^^ : "<<endl;
        cout<<"(1)Stage only                                              ->  $200"<<endl;
        cout<<"(2)Stage + Decoration                                      ->  $800"<<endl;
        cout<<"(3)Stage + Decoration + colours of your own choice         ->  $1200"<<endl;
        cin>>theme_services;

        if (theme_services=='1'){
            totalamount=totalamount+200;
            }
        else if (theme_services=='2'){
            totalamount=totalamount+800;
        }
        else if (theme_services=='3'){
             totalamount=totalamount+1200;
        }
        else {
            cout<<"You choose a wrong option"<<endl;
            goto theme_details;
        }}
        else if (theme=='n' || theme=='N'){
		  totalamount+=0;

    }
    else{
    	cout<<"Invalid Option"<<endl;
    	goto themeoption;
	}

    return totalamount;
}
    double food(){
    char food;
    char food_service;
    double totalamount = 0;
foodoption:
cout<<"Would you like us to offer you food services?(y/n)"<<endl;
    cin>>food;

    if (food=='y' ||food=='Y'){
            food_details:
        cout<<"\t^^^Please select your option^^^ : "<<endl;
        cout<<"(1)Pakistani Cuisine only                                                ->  $10 per person"<<endl;
        cout<<"(2)Pakistani Cuisine + Chinese Cuisine                                   ->  $15 per person"<<endl;
        cout<<"(3)Pakistani Cuisine + Chinese Cuisine + Italian Cuisine                 ->  $20 per person"<<endl;
        cin>>food_service;
        if (food_service == '1') {
            totalamount = no_of_guest * 10;
        }
		else if (food_service == '2')
	    {
            totalamount = no_of_guest * 15;
        }
		else if (food_service == '3')
		{
            totalamount = no_of_guest * 20;
		}


        else {
            cout<<"You choose a wrong option"<<endl;
            goto food_details;
        }}
        else if (food=='n' || food=='N'){
		  totalamount+=0;

    }
    else{
    	cout<<"Invalid Option"<<endl;
    	goto foodoption;
	}
    return totalamount;
}
    double DJ(){
    char DJ;
    char DJ_service;
    double totalamount = 0;
Djoption:
cout<<"Would you like us to offer you DJ?(y/n)"<<endl;
    cin>>DJ;

    if (DJ=='y' || DJ=='Y'){
            DJ_details:
        cout<<"\t^^^Please select your option^^^ : "<<endl;
        cout<<"(1)Only Dj                    ->  $200"<<endl;
        cout<<"(2)DJ + Band                  ->  $600"<<endl;
        cout<<"(3)DJ+ Singer                 ->  $1000"<<endl;
        cin>>DJ_service;

        if (DJ_service=='1'){
            totalamount=totalamount+200;
            }
        else if (DJ_service=='2'){
            totalamount=totalamount+600;
        }
        else if (DJ_service=='3'){
             totalamount=totalamount+1000;
        }
        else {
            cout<<"You choose a wrong option"<<endl;
            goto DJ_details;
        }}
        else if (DJ=='n' || DJ=='N'){
		  totalamount+=0;

    }
    else{
    	cout<<"Invalid Option"<<endl;
    	goto Djoption;
	}

  return totalamount;
}

    int main(){
    start:
    string selectvenue;
    cout<<"-----WELCOME TO WEDDING EVENT MANAGEMENT SYSTEM-----"<<endl<<endl;
    cout<<"\t***SELECT YOUR VENUE***"<<endl<<endl;
    cout<<"BANQUET"<<endl;
    cout<<"GARDEN"<<endl;
    cout<<"RESORT "<<endl<<endl;
    cout<<"Select your option : ";
    getline(cin>>ws,selectvenue);

    if(selectvenue=="banquet"||selectvenue=="Banquet"||selectvenue=="BANQUET"){
        totalamount += banquet();
        totalamount += DJ();
        totalamount += food();
        totalamount += photography();
        totalamount += Theme();
        cout << "Total amount: $" << totalamount << endl;
    }
    else if(selectvenue=="garden"||selectvenue=="Garden"||selectvenue=="GARDEN"){
       totalamount += garden();
        totalamount += DJ();
        totalamount += food();
        totalamount += photography();
        totalamount += Theme();
        cout << "Total amount: $" << totalamount << endl;
    }
    else if (selectvenue=="resort"||selectvenue=="Resort"||selectvenue=="RESORT"){
        totalamount += resort();
        totalamount += DJ();
        totalamount += food();
        totalamount += photography();
        totalamount += Theme();
        cout << "Total amount: $" << totalamount << endl;
	}
	else{
		printf("invalid option,choose a correct option for venue");
		goto start;
	}
     cout<<"Fill the following requirements: "<<endl;
	 customerDetails customerDetail;

        cout << "Enter your email: ";
        getline(cin>>ws,customerDetail.email);
        cout << "Enter First name: ";
        getline(cin>>ws,customerDetail.firstName);
        cout << "Enter Last name: ";
        getline(cin>>ws,customerDetail.lastName);
        cout << "Enter Mobile no: ";
        getline(cin>>ws,customerDetail.mobileNO);
         ofstream myfil("customer_details.txt",ios::app );
   	myfil << "------------------------------------------------------------" << endl;
    myfil << "First Name: " << customerDetail.firstName << endl;
    myfil << "Last Name: " << customerDetail.lastName << endl;
    myfil << "Email Address: " << customerDetail.email << endl;
    myfil << "Phone Number: " << customerDetail.mobileNO << endl;
    myfil << "Number of guests: " << no_of_guest << endl;
    myfil << "Venue: " << selectvenue << endl;
    myfil << "Total Amount: $" << totalamount << endl;
    myfil.close();
    cout << "Your event is reserved" << endl;

    return 0;
}


