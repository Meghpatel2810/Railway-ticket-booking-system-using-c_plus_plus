#include<iostream>
#include<windows.h> //For sleep function
using namespace std;

class train{


};

class passenger{
    private:
       string name, gender;
       string preference_berth;
       string arrival_location, departure_location;
       long long contact_number;
    public:
       void passenger_details(){
             cout<<"Enter your name: ";
             getline(cin,name);
             cin.clear();
             cout<<"Enter your Contact Number: ";
             cin>>contact_number;
             cout<<"From where you want to start your Journey: ";
             cin>>departure_location;
             cout<<"At where you want to conclude your Journey: ";
             cin>>arrival_location;
             cout<<"Enter your Preferable Berth: ";
             cin>>preference_berth;
       }   
       void choose_Quotas(){
             cout<<"We have the Following types of Quotas:"<<endl;
             cout<<"General"<<endl;
             cout<<"Ladies"<<endl;
             cout<<"Lower Berth/ Senior Citizen"<<endl;
             cout<<"Person with Disability"<<endl;
             cout<<"Duty Pass"<<endl;
             cout<<"Tatkal"<<endl;
             cout<<"Premium Tatkal"<<endl;
             cout<<"Please type your required Quota"<<endl;
       }
};

//Inherit diffrent types of trains and passenger classes 

int main()
{
    //Take necessary inputs from user
    cout<<"Welcome to CRCTC"<<endl;
    //Show a complete ticket and thank you
    passenger p;
    p.passenger_details();
    p.choose_Quotas();
}
