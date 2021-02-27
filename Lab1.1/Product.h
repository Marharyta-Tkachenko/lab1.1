#pragma once

class Product
{
private:
	int first;
	double second;

public:
	int GetFirst() const { return first; }
	double GetSecond() const { return second; }
	void SetFirst(int value);
	void SetSecond(double value);

	bool Init(int x, double y);
	void Display() const;
	void Read();

	double Power();
};

