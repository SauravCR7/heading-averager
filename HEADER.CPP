#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
float total=0,heading;

cout<<"enter the no. of compass readings"<<endl;
int no;
cin>>no;

for(int i=0;i<no;i++)
{cout<<"enter the "<<i+1<<" values"<<endl;
cin>>heading;
if((heading>360)||(heading<0))     //checking if input is valid//
{while((heading>360)||(heading<0)) //accepting values untill a valid value is entered//
{
heading=0;
cout<<"invalid reading!!! please enter the correct value"<<endl;
cin>>heading;}}
total=total+heading;
heading=0;}

cout<<"the average of the compass readings is"<<endl<<total/no; //displaying average
getch();}