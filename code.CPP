#include<conio>
#include<iostream>
#include<iomanip>
#include<math>
#define rad 10
void vvid(int[rad]);
void vyvid(int[rad]);
void suma(int[rad]);
void dob(int[rad]);;
void main()
{
 int imas[rad];
 vvid(imas);
 cout<<"\n";
 vyvid(imas);
 cout<<"\n";
 dob(imas);
 cout<<"\n";
 suma(imas);
 getch();
 }
//---------------------------------------------
 void vvid(int mas[rad]){
 int i;
cout<<"vvedit  masiv"<<endl;
 for (i=0;i<rad;i++)
 cin>>mas[i];}
//-----------------------------------------------------
void vyvid(int mas[rad]){
int i;
cout<<"Masiv"<<endl;
for(int i=0;i<rad;i++)
if (mas[i]>-1)cout<<mas[i];
for(int i=0;i<rad;i++)
if (mas[i]<0)cout<<mas[i];
cout<<"\n";}
//----------------------------------------------------
void dob(int mas[rad]){
int sam=0,i;
for(i=0;i<rad;i++)
if(i%2==0)sam=sam*mas[i];
cout<<"dobytok = "<<sam;
getch();}
//------------------------------------------------------
void suma(int mas[rad]){
int f=0;
for(int i=0;i<rad;i++)
if(mas[i]==0){f=i;break;}
cout<<"pershuy = "<<f<<"\n";
int l;
for(int i=0;i<rad;i++)
if(mas[i]==0)l=i;
cout<<"ostanniy = "<<l<<"\n";
int q=0;
for(int i=f;i<l+1;i++)q=q+mas[i];
cout<<"suma = "<<q<<"\n";
getch();}
