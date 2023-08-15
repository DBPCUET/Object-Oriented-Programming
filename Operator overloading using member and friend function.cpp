/*Problem A: Sum of Even/Odd
Description:
Write an object oriented program that reads a set of non-negative 
integer numbers and output the sum of odd numbers and even numbers 
from that. To create the program, you have to write a class name 
IntegerFactory where there will be an integer array as private variable. 
There will also be public member functions that will responsible for 
providing the sums. 
Input Format:
Program will read an integer n, followed by n integers and an integer 
c for choice to show either the sum of even number or the sum of odd
numbers of these n integers. c=0 for sum of odd numbers and c=1 for 
sum of even numbers.
Constraints: 0 < n <= 10000, 0 <= c <= 1*/

#include<bits/stdc++.h>
using namespace std;
class IntegerFactory {
  int n;
  vector < int > b;
  public:
    int ev = 0, od = 0;
  void pass(vector < int > V, int t) {
    n = t;
    for (int i = 0; i < n; i++) {
      b.push_back(V[i]);
    }
  }
  void task(int nm) {
    for (int i = 0; i < n; i++) {
      if ((b[i] & 1) == 0) {
        ev += b[i];
      } else {
        if (b[i] & 1 != 0) {
          od += b[i];
        }
      }
    }
    if (nm == 0) {
      cout << od << endl;
    } else if (nm == 1) {
      cout << ev << endl;
    }
  }
};
int main() {
  int n;
  cin >> n;
  vector < int > V;
  for (int i = 0; i < n; i++) {
    int t;
    cin >> t;
    V.push_back(t);
  }
  int num;
  cin >> num;
  IntegerFactory array;
  array.pass(V, n);
  array.task(num);
}




/*Problem B: Planet
Description:
Our solar system consists of the sun, eight planets, moons, many dwarf planets 
(or plutoids), an asteroid belt, comets, meteors, and others. The sun is the 
center of our solar system; the planets, their moons, a belt of asteroids, comets, 
and other rocks and gas orbit the sun. The eight planets that orbit the sun are (in 
order from the sun): Mercury, Venus, Earth, Mars, Jupiter, Saturn, Uranus, 
Neptune.
You have to create a class Planet which has following data members and 
member functions.
Private Members: 
• planer name: string
• distance (from sun): double
• diameter: double 
• number of moons: int
Create setter and getter functions for each element,
Member Functions: • get planet name(), set planet name() • get no of 
moons(),set no of moons() • get diameter(),set diameter() • get distance from 
sun(),set distanc from sun()
You also have to create a friend function called light() that takes as an argument 
an object of type Planet and returns the number of seconds that it takes light 
from sun to reach the planet. (Assumes that light travels the sun travels at 1, 86, 
000 miles per second and that distance from sun is specified in miles.)
Input Format:
First line will contain the number of T test cases. Each test case will 
contain four inputs describing the planet name(P), distance from 
sun(DS), diameter(D) and number of moons(M).
Constraints: 0 < T <= 100, 0 <= DS <= 1000, 0 < D < 105, 0 < M < 67*/

#include<bits/stdc++.h>
using namespace std;
class Planet {
  string planet_name;
  double distance, diameter, number_of_moons;
  public:
    void get_planet_name() {
      cin >> planet_name;
    }
  void get_distance_from_sun() {
    cin >> distance;
  }
  void get_diameter() {
    cin >> diameter;
  }
  void get_no_of_moons() {
    cin >> number_of_moons;
  }
  friend void light(Planet x) {
    cout << (x.distance / (0.186));
  }
};
int main() {
  Planet s;
  int t;
  cin >> t;
  while (t--) {
    s.get_planet_name();
    s.get_distance_from_sun();
    s.get_diameter();
    s.get_no_of_moons();
    light(s);
    cout << endl;
  }
}