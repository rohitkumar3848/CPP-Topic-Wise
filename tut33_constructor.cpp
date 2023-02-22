#include<iostream>
#include<cmath>
using namespace std;
class Point
{
    int x,y;
    friend void distancePoint(Point , Point );
    public:
    Point(int a, int b);
    void printPoint()
    {
        cout<<"Your point is: "<<x <<" and "<<y<<endl; 
    }
};
Point :: Point(int a, int b)
{

    x=a;
    y=b;
}
void distancePoint(Point p1, Point p2)
{
    float dis=sqrt(pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
    cout<<"The distance between two points : " <<dis;
}
int main()
{
    //Implicit call
    Point c1(4,6);
    Point c2(1,2);
    c1.printPoint();
    c2.printPoint();

    distancePoint(c1,c2);
    return 0;

}