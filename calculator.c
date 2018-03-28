#include <iostream.h>
#include <conio.h>
void main ( )
{
 float x , y , z;
 char a , oper ;
 do
 {
cout << "\nEnter First number,Operator,Second number: ";
cin >> x >> oper >> y ;
switch (oper)
{
case '+' : z=x+y ; break;
case '-' : z=x-y ; break;
case '*' : z=x*y ; break;
case '/' : z=x/y ; break;
default : z=0;
}
cout << "The answer is: " << z;
cout << "\nDo another (y/n)?";
cin >> a ;
}
while (a != 'n');
getch ();
}
