#pragma once
class Calculator
{
private:
	int number1, number2;
public:
	Calculator();
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
	
	//multiplication
	int multiplication()
	{
		return (number1 * number2);
	}

	~Calculator();
};

