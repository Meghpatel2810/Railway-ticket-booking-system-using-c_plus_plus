#include<iostream>
#include<windows.h> //For sleep function
#include<stdio.h>
using namespace std;

class train{

    private:
    string Class_preference;
    string date;
    string train_name;
    public:
    void setdate(){
       cout<<"Enter your preferrable date for your Journey(DD/MM/YYYY): ";
       cin>>date;
    }
    void choose()
    {
        cout<<"We have the following Classes for train"<<endl<<"All Classes (General)"<<endl<<"Anubhuti class (EA)"<<endl<<"AC first class (1A)"<<endl<<"Vistadome AC (EV)"<<endl<<"Exec. Chair Car (EC)"<<endl<<"AC 2 tier (2A)"<<endl;
        cout<<"First class (FC)"<<endl<<"AC 3 tier (3A)"<<endl<<"AC 3 Economy (3E)"<<endl<<"Vistadome chair car (VC)"<<endl<<"AC Chair car (CC)"<<endl<<"Sleeper (SL)"<<endl;
        cout<<"Vistadome Non AC (VS)"<<endl<<"Second Sitting (2S)"<<endl<<endl;
        cout<<"Please select your preference: ";
        cin>>Class_preference;
        cin.clear();

    }

    void choose_name()
    {
        cout<<"The trains available on "<<date<<" :-"<<endl;

        cout<<"Rajdhani Express"<<endl<<"Shatabdi Express"<<endl<<"Maharaja Express"<<endl
            <<"Gujarat Express"<<endl<<"Vande Bharat Express"<<endl<<"Golden Chariot"<<
            endl<<"Deccan Odyssey"<<endl<<"Gatimaan Express"<<endl<<"Duronto Express"<<endl
            <<"Maitree Express"<<endl;
    }
    
    
};
class passenger : public train{
    private:
       string name, gender;
       string passenger_preference, berth_preference;
       string arrival_location, departure_location;
       string date;
       long long contact_number;
    public:
        void passenger_details()
        {
            cout<<"Enter your name: ";
            getline(cin,name);
            cin.clear();

            cout<<"Enter your Contact Number: ";
            cin>>contact_number;

            cout<<"From where you want to start your Journey: ";
            cin>>departure_location;
            cout<<"At where you want to conclude your Journey: ";
            cin>>arrival_location;


        }   
       void choose_Quota()
       {
            cout<<"We have the following Quotas:"<<endl;
            cout<<"General"<<endl;
            cout<<"Ladies"<<endl;
            cout<<"Lower Berth/ Senior Citizen"<<endl;
            cout<<"Person with Disability"<<endl;
            cout<<"Duty Pass"<<endl;
            cout<<"Tatkal"<<endl;
            cout<<"Premium Tatkal"<<endl;
            cout<<"Please type your preference: ";
            cin>>passenger_preference;
            cin.clear();
       } 
       
       void showTicket(){
            string xyz;
            //cout<<"Unique ID: "<<xyz<<endl;
            cout<<"Name of Passenger: "<<name<<endl;
            cout<<"Date: "<<date<<endl;
            cout<<"From: "<<departure_location<<endl;
            cout<<"To: "<<arrival_location<<endl;
            cout<<"Quota: "<<passenger_preference<<endl;
           // cout<<"Class: "<<Class_preference<<endl;
       }

};
class select_train_with_timing{
      private:
      string time,train_name;
      int i;
      public:
      /*
      for(i=0; i<10; i++)
      {
        cin>>train_name;
        cout<<"-";
        cin>>time;
      }
      */
};

//Inherit diffrent types of trains and passenger classes 

int main()
{
   //Take necessary inputs from user
    cout<<"Welcome to CRCTC"<<endl;
    train t;
    passenger p;
    p.passenger_details();
    t.setdate();
    t.choose_name();
    t.choose();
    p.choose_Quota();
    cin.clear();
    string choice;
    cout<<"Do you want to confirm your ticket (Press 'Y' to Book or Press 'N' to not book): ";
    cin>>choice;
    cin.clear();
    p.showTicket();
}
