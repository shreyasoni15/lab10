#include <iostream> //library
using namespace std;
class Rectangle //defining class rctangle for finding perimeter
{
	public:
	double length;
	double breadth;
	Rectangle(double len,double bre)
	{
		length=len;
		breadth=bre;
	}
	double area()
	{
		return length*breadth;
	}
	double perimeter()
	{
		return 2*(length+breadth);
	}
};
int main()
{
	double l,b=0.0;
	cout<<"Enter the length of the first rectangle\n"; //taking outputs
	cin>>l;
	cout<<"Enter the breadth of the first rectangle\n";
	cin>>b;
	Rectangle rect1(l,b);
	cout<<"Enter the length of the second rectangle\n";
	cin>>l;
	cout<<"Enter the breadth of the second rectangle\n";
	cin>>b;
	Rectangle rect2(l,b);
	cout<<"Area of the first rectangle is "<<rect1.area()<<" square units\n"; //output of the area
	cout<<"Area of the second rectangle is "<<rect2.area()<<" square units\n";
	if(rect1.area()>rect2.area()) //specifying conditions for if else
	cout<<"Area of the first reactangle is greater than the second rectangle\n";
	else if(rect1.area()<rect2.area())
	cout<<"Area of the second reactangle is greater than the first rectangle\n";
	else
	cout<<"Both the rectangles have the same area\n";
	cout<<"Perimeter of the first rectangle is "<<rect1.perimeter()<<" units\n"; //output for perimeter
	cout<<"Perimeter of the second rectangle is "<<rect2.perimeter()<<" units\n";
	if(rect1.perimeter()>rect2.perimeter()) //specifying conditions for comparing perimeter
	cout<<"Perimeter of the first reactangle is greater than the second rectangle\n";
	else if(rect1.perimeter()<rect2.perimeter())
	cout<<"Perimeter of the second reactangle is greater than the first rectangle\n";
	else
	cout<<"Both the rectangles have the same perimeter.\n";
	return 0;
}
