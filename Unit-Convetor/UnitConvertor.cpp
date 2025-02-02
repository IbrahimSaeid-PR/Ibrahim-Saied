#include<iostream>
#include<string>
using namespace std;
//Ibrahim Saeid
float speed_con(){
float kmPerHour,mPerSecond;
string opt;
do{
//the menu for (speed convertor)
cout<<"1.(km/h)--> (m/s)\n"<<"2.(m/s)--> (km/h)\n";
//input from the user
cin>>opt;
//option number 1
if(opt=="1"){
        cout<<"please enter your speed (km/h)\n";
//input for speed
cin>>kmPerHour;
//processing
    mPerSecond=kmPerHour*5/18;
//the result
    cout<<"your speed equal: "<<mPerSecond<<" (m/s)"<<endl;
break;

}
//option number 2
else if(opt=="2"){
        cout<<"please enter your speed (m/s)\n";
//input for speed
cin>>mPerSecond;
//prcessing
kmPerHour=mPerSecond*18/5;
//the result
cout<<"your speed equal: "<<kmPerHour<<" (km/h)"<<endl;
break;
}
else{
    cout<<"error!\n";
}//using (do...while) to repeat the menu if the user chooses wrong option
}while(opt!="1"||opt!="2");
return kmPerHour,mPerSecond;
}
//Mohammed Ehab
float timeCon (){
float Hours , minutes;
string opt;

do{
//the menu
        cout <<"1. Hours-->minutes"<<endl;
cout <<"2. minutes-->Hours"<<endl;
cin>>opt;


if(opt=="1"){


// this program we use it to convert from Hours to minutes

cout << "please enter your time in Hours \n " ;
// the input from the user
cin >> Hours ;
// processing
minutes = Hours * 60 ;
// output
cout << "Time in minutes equals: " << minutes << " mintues\n" ;
break;
}
else if(opt =="2"){
    // this program we use it to convert from minutes to Hours

cout << "please enter your time in minutes \n " ;
// the input from the user
cin >> minutes ;
// processing
Hours = minutes / 60 ;
// output
cout << "Time in Hours equals: " << Hours << " Hours\n" ;
break;
}
else{
    cout <<"error!\n";
    }
//using (do...while) to repeat the menu if the user chooses wrong option
}while(opt!="2"||opt!="1");
return Hours,minutes;
}
//Mohammed Alsayed
float weightCon(){
float ton;
float kilo;
string opt;
do{
//this code to convert weight between (Ton)and (kg)
//there are two options to choose it
    cout <<"1.Ton--> (Kg)\n"<<"2.Kg--> (Ton)\n";
//input from user
    cin>>opt;
//option number 1
    if(opt=="1"){
        cout<<"enter the number of tons to convert to kilograms"<<endl;
//input from the user
        cin>>ton;
//make processing and print the result
        cout <<"it is equal "<<ton*1000<<" Kg"<<endl;
        break;
    }
//option number 2
     else if(opt=="2"){

        cout <<"enter the number of kilograms to convert to tons"<<endl;
        //input from the user
        cin>>kilo;
//make processing and print the result
        cout<<"it is equal "<<kilo/1000<<" Ton"<<endl;
        break;
     }
     else {
//if the user chooses wrong option
        cout<<"error!\n";
     }
//using (do...while) to repeat the menu if the user chooses wrong option
    }while(opt!="1"||opt!="2");


    return kilo,ton;

}
//Kamal Abdel Aljawad
float TemCon(){



  float c;
    float k;
    string opt;
   do{
//the menu to convert between (kelvin)and(celsius)
        cout<<"1.(c)--> (k)\n"<<"2.(k)--> (c)\n";
    cin>>opt;
//option num1
if(opt=="1"){

    cout<<"PLEASA ENTER A TEMPERATURE in celsius value: " ;
//input from the user
    cin>>c;
//processing
       k=c+273 ;
//the result
   cout<<"kelvin is : "<< k << endl;
   break;
   }
//option num2
else if (opt=="2"){


    cout<<"PLEASA ENTER A TEMPERATURe IN KELVIN Value: " ;

//input from the user
    cin>>k;

//processing
        c=k-273;
//the result
     cout<<"celsius is : "<< c << endl;
     break;
}

else{
    cout<<"error!\n";
}//using (do...while) to repeat the menu if the user chooses wrong option
    }while(opt !="2"||opt!="1");
    return k,c;
}
//Ahmed Ali id:42310488
float lengthCon (){
float km , m ;
string opt;

do{

        cout <<"1. km-->m"<<endl;
cout <<"2. m-->km"<<endl;
cin>>opt;


if(opt=="1"){


// this code we use it to convert from kilometer to meter

cout << "please enter length in kilometers \n " ;
// the input from the user
cin >> km ;
// processing
m = km * 1000 ;
// output
cout << "length in meters  equals: " << m << " m\n" ;
break;
}
else if(opt =="2"){
    // this code we use it to convert from meter to kilometer

cout << "please enter length in meters \n " ;
// the input from the user
cin >> m ;
// processing
km = m / 1000 ;
// output
cout << "length in kilometers equals: " << km << " km\n" ;
break;
}
else{
    cout <<"error!\n";
    }
//using (do...while) to repeat the menu if the user chooses wrong option
} while(opt!="2"||opt!="1");
return km,m;
}
//Ibrahim Saeid
int main(){

 string choice;
 //this code for main menu
 //we use (do while)and (if...else)
    do{
cout <<"Unit Converter Menu\n"<<"1.Convert length\n"<<"2.Convert temperature\n"<<"3.Convert weight\n"<<"4.Convert time\n"<<"5.Convert speed\n"<<"6.Exit\n"<<"Enter your choice: ";
 cin>>choice;
if(choice=="1"){
// to active the length converter

    lengthCon();
    }
else if(choice =="2"){
// to active the temperature converter
    TemCon();
    }
    else if(choice=="3"){
// to active the weight converter
        weightCon();

    }
    else if(choice=="4"){
// to active the time converter

        timeCon();

    }
    else if(choice=="5"){
// to active the speed converter
        speed_con();
    }
    else if(choice=="6"){

//to close the program
    break;}
    else{
//if the user choices the wrong
    cout<<"error!\n";
    }

}
//using (do...while) to repeat the menu if the user chooses wrong option
    while (choice!="1"||choice!="2"||choice!="3"||choice!="4"||choice!="5"||choice!="6");
return 0;
}

