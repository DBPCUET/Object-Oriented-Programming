#include<bits/stdc++.h>
using namespace std;
class shape
{
   protected:
   double height,width,radius,semi_major,semi_minor;
   public:
   virtual double area()=0;
};
class rectangle:public shape
{
   public:
         virtual void getdata()
   {
      cin>>height>>width ;
   }
     virtual double area()
     {
        return (height*width) ;
     }
};
class circle:public shape
{
   public:
         virtual void getdata()
   {
       cin>>radius;
   }
 virtual double area()
   {
      return (acos(-1))*radius*radius ;
   }
};
class square:public shape
{
   public:
      virtual void getdata()
   { 
      cin>>height;
   }
   virtual double area()
   {
      return (height*height) ;
   }
};
class elipse:public shape
{
   public:
   virtual void getdata()
   {
       cin>>semi_major>>semi_minor;
   }
   virtual double area()
   {
      return acos(-1)*semi_major*semi_minor ;
   }
};
class triangle:public shape
{
   public:
      virtual void getdata()
      {
         cin>>height>>width ;
      }
   virtual double area()
   {
      return (0.5*height*width) ;
   }
};
int main()
{
   rectangle obj1 ;
   obj1.getdata();
   circle obj2;
   obj2.getdata();
   triangle obj3;
   obj3.getdata();
   square obj4 ;
   obj4.getdata();
   elipse obj5[100];
   double sum=0;
   for(int i=0 ; i<2 ; i++)
   {
      obj5[i].getdata();
   }
   for(int i=0 ; i<2 ; i++)
   {
      sum+=obj5[i].area();
   }
   sum+=(obj1.area()+obj2.area()+obj3.area()+obj4.area());
   cout<<sum;
}
   
   