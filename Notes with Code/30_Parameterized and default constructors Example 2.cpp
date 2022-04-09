#include<iostream>
#include<cmath>
using namespace std;

class Point
{
    // Co-ordinates of x and y points
    int x, y;

    // friend void distance(Point, Point);
    
    public:
        Point(int a, int b)
        {
            x = a;
            y = b;
        }

        void displayPoint()
        {
            cout<<"The point is ("<<x<<" , "<<y<< ")"<<endl;
        }
};


// Quiz: Create a function (Hint: Make it a friend function) which takes 2 point objects and computes the distance between those 2 points

// Use these examples to check your code:
// Distance between (1, 1) and (1, 1) is 0
// Distance between (0, 1) and (0, 6) is 5
// Distance between (1, 0) and (70, 0) is 69

// Formula: ((x2 - x1)^2 + (y2 - y1)^2)^2

// properly not execute
// void distance(Point obj1, Point obj2)
// {
//     int dis_result = (sqrt(sqrt(obj1.y - obj1.x) + sqrt(obj2.y - obj2.x)));
//     cout<<"The distance is :" << dis_result<< endl;
    
// }


int main(){
    Point p(0, 1);
    p.displayPoint();

    Point q(0, 6);
    q.displayPoint();

    // distance(p, q);
    return 0;
}