#include <iostream>

using namespace std;

class Port{
protected:
	char *brand;
	char style[20];
	int bottles;
public:
	Port(char *br ="none", char *st = "none", int b = 0);
	Port(const Port &p);
	virtual ~Port();
	Port & operator=(const Port &);
	Port & operator+(const Port &);
	Port & operator-(const Port &);
	int BottleCount() const{ return bottles;}
	virtual void Show() const;
	friend ostream &operator <<(ostream & os, const Port &p);
};

class VintagePort : public Port{
private:
	//char * nickname;
	int year;
public:
	VintagePort(char *br ="none", int b = 0, char *nick="none", int yr=0);
	VintagePort(const VintagePort &p);
	//~VintagePort();
		VintagePort & operator=(const VintagePort &);
		void Show() const;
		friend ostream &operator <<(ostream & os, const VintagePort &vp);
};


