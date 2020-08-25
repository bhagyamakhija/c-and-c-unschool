#include <iostream>
#include<math.h>

using namespace std;

double area(double radius){
double area_circle=3.14*radius*radius;
return area_circle;
}

double area(double length,double breadth){
double area_rect=length*breadth;
return area_rect;
}

double area(double side1,double side2,double side3){
    double s=(side1+side2+side3)/2;
double area_triangle=sqrt(s*(s-side1)*(s-side2)*(s*side3));
return area_triangle;
}


int main()
{
    double radius,length,breadth,side1,side2,side3;
    cout<<"\nEnter radius of circle:\t";
    cin>>radius;
    cout<<"\nArea of circle of radius "<<radius<<"cm is: "<<(area(radius));

    cout<<"\nEnter length and breadth of rectangle:\t";
    cin>>length;
    cin>>breadth;
    cout<<"\nArea of rectangle of length "<<length<<"cm and breadth "<<breadth<<"cm is: "<<(area(length,breadth));

     cout<<"\nEnter sides of triangle:\t";
    cin>>side1>>side2>>side3;

    cout<<"\nArea of triangle of sides "<<side1<<","<<side2<<","<<side3<<"cm is: "<<(area(side1,side2,side3));

    return 0;
}


