#include<iostream>
using namespace std;

class Point
{

	double x_second_dot;
	double y_second_dot;
public:
	double distance()const
	{
		return pow(pow(x_second_dot, 2) + pow(y_second_dot, 2), 0.5);
	}
	void set_x_second_dot(double x_second_dot)
	{
		this->x_second_dot = x_second_dot;
	}
	void set_y_second_dot(double y_second_dot)
	{
		this->y_second_dot = y_second_dot;
	}
};
double distance(double x_first_dot, double y_first_dot, double x_second_dot, double y_second_dot);


void main()
{
	double x_first_dot;
	double y_first_dot;
	double x_second_dot;
	double y_second_dot;
	setlocale(LC_ALL, "");
	cout << "������� x ������ ����� "; cin >> x_first_dot;
	cout << "������� y ������ ����� "; cin >> y_first_dot;
	cout << "������� x ������ ����� "; cin >> x_second_dot;
	cout << "������� y ������ ����� "; cin >> y_second_dot;

	Point A;
	A.set_x_second_dot(x_second_dot);
	A.set_y_second_dot(y_second_dot);
	
	cout << "���������� �� ����� ����� " <<  A.distance() << endl;
	cout << "���������� ����� ������� ����� " <<  distance(x_first_dot, y_first_dot,  x_second_dot, y_second_dot) << endl;
}
double distance(double x_first_dot, double y_first_dot, double x_second_dot, double y_second_dot)
{
	return pow(pow(x_second_dot - x_first_dot, 2) + pow(y_second_dot - y_first_dot, 2), 0.5);
}