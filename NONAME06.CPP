#include<iostream.h>
#include<conio.h>
void main()
 {
 char N[20];
 int Rollno;
 float Totalpercent,bee,bme,em,ep,fcp;
 cout<<"Enter Roll nomber :"<<endl;
 cin>>Rollno;
 cout<<"Enter student Name ::"<<endl;
 cin>>N;
 cout<<"Enter Father name ::"<<endl;
 cin>>N;
 cout<<"Enter your subject max ::"<<endl;
 cout<<"BEE ::  "<<endl;
 cin>>bee;
 cout<<"FCP ::   "<<endl;
 cin>>fcp;
 cout<<"EM ::    "<<endl;
 cin>>em;
 cout<<"BME ::  "<<endl;
 cin>>bme;
 cout<<"EP ::  "<<endl;
 cin>>ep;
 Totalpercent=(em+fcp+bee+ep+bme)/5;
 cout<<"Totalpercent   ="<<Totalpercent<<endl;
     if(Totalpercent>75)
     {
     {
     if(Totalpercent>65<75)
     {
     cout<<"Your Grade is B"<<endl;
      }

      else

      cout<<"Your Grade is C"<<endl;

      }

	  {
      if(Totalpercent>33<45)
      {
      cout<<"Your Grade is D"<<endl;
      }
      else

      {
      cout<<"Your Grade is  E"<<endl;
      }
       }
      getch();
      }}