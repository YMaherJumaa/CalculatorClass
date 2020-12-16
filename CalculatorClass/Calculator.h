#pragma once
class Calculator
{
private:
	int number1, number2; //master branch
public:
	Calculator();
	//master branch
	void setNumber1(int x)
	{
		number1 = x;
	}
	void setNumber2(int y)
	{
		number2 = y;
	}
	int addition()
	{
		return (number1 + number2);
	}
	//subtraction branch
	int subtraction()
	{
		if (number1 > number2) return (number1 - number2);
		else return (number2 - number1);
	}
	~Calculator();
};

