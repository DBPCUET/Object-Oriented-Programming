/*Programm-1: Write a class having two private variables 
and one member function which will return the area of the 
rectangle.*/

#include<bits/stdc++.h>
using namespace std ;
class Rectangle
{
 double height,width ;
 public:
 double x,y ;
 void getdata()
 {
 cin >> height >> width ;
 }
 void area()
 {
 getdata() ;
 cout << "The area of the rectangle is " << ( height*width ) ;
 }
} ;
int main()
{
 Rectangle obj ;
 obj.area() ;
}


/*Programm-2: Write a C++ Program to define a class 
batsman with the following specifications:
Private members:
batsman code: 4 digits code number batsman name: 20 characters(string) total 
innings, notout innings, toal runs: integer type batting avg: [toal runs/(total 
innings-notout innings)] (formula to calculate batting average) calcavg(): Function 
to compute batavg
Public members:
readdata(): Function to accept value from batsman code, batsman name, total 
innings, notout innings, total runs and invoke the function calcavg(). 
displaydata(): Function to display the data members on the screen.
Access all the data members and member functions 
to calculate batting average of a batsman by 
creating its object.*/


#include <bits/stdc++.h>
using namespace std;
class batsman
{
 double batsman_code, total_innings, notout_innings, total_runs, 
batting_avg;
 string batsman_name;
 void calcavg()
 {
 (total_innings!=notout_innings) ? batting_avg = total_runs / 
(total_innings - notout_innings) : batting_avg = 0 ; 
 }
 public:
 void readdata()
 {
 cin >> batsman_code ;
 getchar() ;
 getline(cin,batsman_name) ;
 cin >> total_innings >> notout_innings >> total_runs ;
 calcavg();
 }
 void displaydata()
 {
 readdata() ;
 cout << "Code: " << batsman_code << endl ;
 cout << "Name: " << batsman_name << endl ;
 cout << "Innings: " << total_innings << endl ;
 cout << "Notout innings: " << notout_innings << endl ;
 cout << "Total runs: " << total_runs << endl ;
 cout << "Batting average: " << batting_avg << endl ;
 }
};
int main()
{
 batsman obj ;
 obj.displaydata() ;
}
