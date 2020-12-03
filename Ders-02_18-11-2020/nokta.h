#pragma once
class nokta
{
public:
	nokta();
	nokta(int, int);
	~nokta();
	int getX() const;
	void setX(int);
	int getY() const;
	void setY(int);

private:
	int x = 0;
	int y = 0;
};
