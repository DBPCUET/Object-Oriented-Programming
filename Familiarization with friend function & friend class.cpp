/*Programm-1: Write a class having two private variables 
and one member function which will return the area of the 
rectangle.*/

#include<bits/stdc++.h>
#define endl "\n";
#define cerr(x) cerr << "\n" << (#x) << " is " << (x) << endl;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
using namespace std;
class even_odd {
  int x;
  public:
    void getdata() {
      cin >> x;
    }
  friend void print(even_odd p);
  friend class even_odd_friend;
};
void print(even_odd p) {
  cout << "Using friend function : ";
  (p.x % 2 == 0) ? cout << "Even": cout << "Odd";
  cout << endl;
}
class even_odd_friend {
  public: void output(even_odd r) {
    cout << "Using friend class : ";
    (r.x & 1) ? cout << "Odd": cout << "Even";
    cout << endl;
  }
};
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  even_odd a;
  a.getdata();
  print(a);
  even_odd_friend b;
  b.output(a);
}




/*Programm-2: Write a program to add two complex 
number by using friend function and friend class.*/

#include<bits/stdc++.h>
#define endl "\n";
#define cerr(x) cerr << "\n" << (#x) << " is " << (x) << endl;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
using namespace std;
class Complex {
  double real, img;
  public:
    void getdata() {
      cin >> real >> img;
    }
  friend void add(Complex a, Complex b);
  friend class Complex_friend;
};
void add(Complex a, Complex b) {
  Complex ans;
  ans.real = a.real + b.real;
  ans.img = a.img + b.img;
  cout << "Using friend function" << endl;
  cout << ans.real << "+" << ans.img << "i" << endl;
}
class Complex_friend {
  public: void print(Complex a, Complex b) {
    Complex ans;
    ans.real = a.real + b.real;
    ans.img = a.img + b.img;
    cout << "Using friend class" << endl;
    cout << ans.real << "+" << ans.img << "i" << endl;
  }
};
int main() {
  Complex num, num2;
  num.getdata();
  num2.getdata();
  add(num, num2);
  Complex_friend obj;
  obj.print(num, num2);
}




/*Programm-3: Write a program to define a class Student 
with the following specifications,
roll number: 6 digits roll number
static member count: To keep track on number of object 
static function getcount(): return the value of count function 
getnumber(): To take roll number as input function
putnumber(): To show the roll number
Access all the data members and member functions using 
the objects of class Student.*/

#include<bits/stdc++.h>
#define endl "\n";
#define cerr(x) cerr << "\n" << (#x) << " is " << (x) << endl;
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
using namespace std;
class Student {
  int roll_number;
  static int count;
  public:
    void getnumber() {
      count++;
      cout << "Enter Roll No.: ";
      cin >> roll_number;
    }
  static void getcount() {
    cout << "Finally number of objects: " << count << endl;
  }
  void putnumber() {
    cout << "Roll No.: " << roll_number << endl;
  }
};
int Student::count;
int main() {
  int n;
  cout << "Initially number of objects: " << 0 << endl;
  cout << "Enter number of entry: ";
  cin >> n;
  Student s[n];
  for (int i = 0; i < n; i++) {
    s[i].getnumber();
  }
  cout << endl;
  Student::getcount();
  for (int i = 0; i < n; i++) {
    s[i].putnumber();
  }
}