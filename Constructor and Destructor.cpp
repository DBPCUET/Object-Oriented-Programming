/*Programm-1: 
A University wishes to keep information on its students. The proposed 
Student class has the following instance variables:
studentNo: String 
studentName: String
dateOfBirth: String 
tariffPoints: Integer
Tariff Points represents the entry qualification achieved by a student, 
which is a number between 20 and 280. A class variable is also 
required, called noOfStudents, which will be incremented each time a 
Student instance is created. Write program to perform the following,
1. Show the declaration of the Student class, including any setter and 
getter methods.
2. Declare two constructors as follows; both constructors should 
increment the class variable appropriately:
• The first is a default constructor that has no parameters and sets the 
instance variables to either ”not known” for the strings, 20 for the 
integer and 1st January 1995 for the date.
• The second takes 4 parameters, one for each of the instance variables. 
3. Show how both constructors could be used to instantiate an object.
Source code:*/


#include<bits/stdc++.h>
using namespace std;
class student {
 string no, name, dob;
 int tp;
 public:
 static int nos;
 student() {
 no = "Not Known";
 name = "Not Known";
 dob = "1st January,1995";
 tp = 20;
 }
 student(string a, string b, string c, int d) {
 no = a;
 name = b;
 dob = c;
 tp = d;
 }
 void get() {
 cin >> no;
 cin >> name;
 cin >> dob;
 cin >> tp;
 nos++;
 }
 void show() {
 cout << no << " " << name << " " << dob << " " << tp;
 }
};
int student::nos;
int main() {
 int n;
 cin >> n;
 student obj[n];
 int cnt = 0;
 int time = 4;
 int initial = 0;
 bool dflt = false;
 while (time--) {
 cout << "Press\n1. for creating student instance with unknown value.\n2. for creating 
student instance with known value.\n3. to display.\n4. to exit.\n ";
 cout << "Enter your choice";
 cout << endl;
 int nt;
 cin >> nt;
 if (nt == 1) {
 dflt = true;
 initial++;
 } else if (nt == 2) {
 for (int i = 0; i < (n - initial); i++) {
 obj[i].get();
 }
 } else if (nt == 3) {
 cout << "Displaying Students details";
 cout << endl;
 cout << "Student No" << " " << " " << "Name" << " " << " " << "Date of Birth" << " 
" << " " << "Tariff Points" << " ";
 cout << endl;
 if (dflt = true) {
 cout << "Not known" << " " << "Not known" << " " << "1stJanuary1995" << " " << 
20;
 cout << endl;
 } {
 for (int j = 0; j < (n - initial); j++) {
 obj[j].show();
 cout << endl;
 }
 }
 if (dflt = true) {
 cout << "Number of instance " << (obj[0].nos) + 1;
 } else {
 cout << "Number of instance " << obj[0].nos;
 }
 } else if (nt == 4) {
 break;
 }
 cout << endl;
 }
}



/*Programm-2:
A book shop maintains the inventory of books that are being sold at the 
shop. The list includes details such as author, title, price, publisher and 
stock position. Whenever a customer wants a book, the sales person 
inputs the title and author and the system searches the list and displays 
whether it is available or not. If it is not, an appropriate message is 
displayed. If it is, then the system displays the book details and requests 
for the number of copies required. If the requested copies are available, 
the total cost of the required copies is displayed, otherwise the message 
Sorry! These many copies are not in stock is displayed. Design a system 
using a class called stock with suitable member functions and 
constructors.*/


#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class stock {
 string author;
 string publisher;
 string title;
 double price;
 int copy;
 public:
 stock() {
 cout << "\nEnter the title\n";
 getline(cin, title);
 cout << "Enter author name\n";
 getline(cin, author);
 cout << "Enter the publisher name\n";
 getline(cin, publisher);
 cout << "Enter the price\n";
 cin >> price;
 cout << "Enter copies\n";
 cin >> copy;
 cin.ignore();
 }
 void copychecker(int nm);
 int match(string a, string b);
};
int stock::match(string a, string b) {
 if (title == a and author == b)
 return 1;
 return 0;
}
void stock::copychecker(int nm) {
 if (copy >= nm) {
 cout << "\nThe cost of" <<
 nm << "books is " << (price * nm) << endl;
 } else {
 cout << "\nSorry! These many copies are unavailable!";
 }
}
int main() {
 string ttl;
 string writer;
 int n;
 cout << "===Book Management System===" << endl;
 cout << "Number of available books" << endl;
 cin >> n;
 cin.ignore();
 stock book[n];
 for (int i = 0; i < n; i++) {
 book[i];
 }
 cout << endl;
 cout << "\nEnter title name of desired book\n";
 getline(cin, ttl);
 cout << "\nEnter Author name of desired book\n";
 getline(cin, writer);
 int cpy_num;
 for (int i = 0; i < n; i++) {
 if (book[i].match(ttl, writer)) {
 cout << "\nHow many copies?";
 cin >> cpy_num;
 book[i].copychecker(cpy_num);
 return 0;
 }
 }
 cout << "Book not found\n" << endl;
}
