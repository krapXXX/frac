#include<iostream> 
using namespace std;

class Fraction
{
	int x;
	int y;
public:
	Fraction()
	{
		x = 1;
		y = 3;
	}
	Fraction(int a, int b)
	{
		x = a;
		y = b;
	}
	Fraction(int a)
	{
		x = y = a;
	}

	void Input()
	{
		cout << "X: ";
		cin >> x;
		cout << "Y: ";
		cin >> y;
	}
	void Show()
	{
		cout << x << "\\" << y << endl;
	}
	void SetX(int a)
	{
		x = a;
	}
	void SetY(int a)
	{
		y = a;
	}
	int GetX()
	{
		return x;
	}
	int GetY()
	{
		return y;
	}
	Fraction Sum(Fraction& b)
	{
		Fraction rez;
		rez.x = x + b.x;
		rez.y = y + b.y;
		return rez;
	}
	Fraction Min(Fraction& b)
	{
		Fraction rez;

		rez.x = x - b.x;
		rez.y = y - b.y;
		return rez;
	}
	Fraction Mult(Fraction& b)
	{
		Fraction rez;
		rez.x = x * b.x;
		rez.y = y * b.y;
		return rez;
	}
	Fraction Div(Fraction& b)
	{
		Fraction rez;
		rez.x = x * b.x;
		rez.y = y * b.y;
		return rez;
	}
};

int main()
{
	Fraction a;
	a.Input();
	a.Show();

	Fraction fr;
	fr.Show();
	Fraction fr1(10, 20);
	fr1.Show();
	Fraction fr2(10);
	fr2.Show();
	Fraction b;
	b.SetX(5);
	b.SetY(6);
	int x = b.GetX();
	int y = b.GetY();
	Fraction fr3(x, y);
	fr3.Show();
	cout << endl;

	Fraction sum = a.Sum(fr);
	sum.Show();

	Fraction min = fr.Min(fr1);
	min.Show();

	Fraction mult = fr1.Mult(fr2);
	mult.Show();

	Fraction div = fr2.Div(fr3);
	div.Show();



	system("pause");
	return 0;
}