#include <iostream>
using namespace std;
class Point
{
public:
	double X, Y;
	Point()
	{
		X = 0.0;
		Y = 0.0;
	}
	Point(double x, double y)
	{
		X = x;
		Y = y;
	}
	double getX()
	{
		return X;
	}
	double getY()
	{
		return Y;
	}
	void setX(double x)
	{
		x = X;
	}
	void setY(double y)
	{
		y = Y;
	}
	double DistanceTo(const Point& toPoint)
	{
		double dx = toPoint.X - X;
		double dy = toPoint.Y - Y;
		return pow((toPoint.X - X), 2) + pow((toPoint.Y - Y), 2);
	}

	Point operator + (const Point& toPoint)
	{
		Point toPoint2;
		toPoint2.X = toPoint.X + X;
		toPoint2.Y = toPoint.Y + Y;
		return toPoint2;
	}
	Point operator - (const Point& toPoint)
	{
		Point toPoint2;
		toPoint2.X = toPoint.X - X;
		toPoint2.Y = toPoint.Y - Y;
		return toPoint2;
	}
};
int main()
{
	double Distance;
	Point Point1(1, 2);
	cout << "First Point is (" << Point1.getX() << "," << Point1.getY() << ")" << endl;
	Point Point2(3, 4);
	cout << "Second Point is (" << Point2.getX() << "," << Point2.getY() << ")" << endl;
	Distance = Point1.DistanceTo(Point2);
	cout << "The distance between the two points is " << Distance << endl;
	Point Point3 = Point1 + Point2;
	cout << "The Third Point is (" << Point3.getX() << "," << Point3.getY() << ")" << endl;
	Point Point4 = Point1 - Point2;
	cout << "The Third Point is (" << Point4.getX() << "," << Point4.getY() << ")" << endl;
}

