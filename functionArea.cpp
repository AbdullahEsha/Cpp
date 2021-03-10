#include<iostream>
#define PI 3.14159
#include<string.h>
using namespace std;
int r, l, w, h, b, a;
float circleArea, rectangleArea, triangleArea, squareArea;
void circle(int r){
    cout<<"Insert radius of circle : "<<endl;
    cin>>r;
    cout<<"Area of circle is : "<<endl;
    circleArea = PI *(r*r);
    cout<<circleArea<<endl;
}
void rectangle(int l, int w){
    cout<<"Insert length of rectangle : ";
    cin>>l;
    cout<<"Insert width of rectangle : ";
    cin>>w;
    cout<<"Area of rectangle is : "<<endl;
    rectangleArea = l * w;
    cout<<rectangleArea<<endl;
}
void triangle(int h, int b){
    cout<<"Insert height of triangle : ";
    cin>>h;
    cout<<"Insert base of triangle : ";
    cin>>b;
    cout<<"Area of triangle is : "<<endl;
    triangleArea = 0.5* h * b;
    cout<<triangleArea<<endl;
}
void square(int a){
    cout<<"Insert a line of square : "<<endl;
    cin>>a;
    cout<<"Area of square is : "<<endl;
    squareArea = a*a;
    cout<<squareArea<<endl;
}
int main()
{
    cout<<"PRESS 1 to circle"<<endl<<"Press 2 to rectangle"<<endl<<"Press 3 to triangle"<<endl<<"Press 4 to square"<<endl;
    int k,p,q;
    cout<<"\nPlease select one : ";
    cin>>k;

    switch(k)
    {
        case 1:circle(p);
        break;
        case 2:rectangle(p,q);
        break;
        case 3:triangle(p,q);
        break;
        case 4:square(p);
        break;
    }
    main();
}
