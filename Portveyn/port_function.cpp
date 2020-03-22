#include "port.h"
#include <iostream>
#include <cstring>

using namespace std;

Port::Port(char *br, char *st, int b){
	bottles = b;
	brand = new char[strlen(br)+1];
	strcpy(brand,br);
	strcpy(style,st);
}

 Port :: ~Port(){
	 delete[] brand;
}

 void Port :: Show() const {
	 cout<< "Brand: "<< brand << " Style: "<< style << " number of bottles: "<< bottles<<endl;
 }

 Port::Port(const Port &p){
	 bottles = p.bottles;
	 brand = new char[strlen(p.brand)+1];
	 strcpy(brand, p.brand);
	 strcpy(style, p.style);
 }

 Port & Port::operator=(const Port &p){
 if(this == &p)
	 return *this;
 delete [] brand;
  bottles = p.bottles;
	 brand = new char[strlen(p.brand)+1];
	 strcpy(brand, p.brand);
	 strcpy(style, p.style);
	 return *this;
 } 

 Port & Port ::operator+(const Port &p){
	 this->bottles = this->bottles + p.bottles;
	return *this;
 }

  Port & Port ::operator-(const Port &p){
	this->bottles = this->bottles - p.bottles;
	return *this;
 }

  ostream & operator <<(ostream &os, const Port &p){
  os<<  "Brand: "<< p.brand << " Style: "<< p.style << " number of bottles: "<< p.bottles ;
  return os;
  }

  VintagePort::VintagePort(char *br,  int b , char *nick, int yr):Port(br, nick, b), year(yr){}
  VintagePort::VintagePort(const VintagePort &p){
	 bottles = p.bottles;
	 brand = new char[strlen(p.brand)+1];
	 strcpy(brand, p.brand);
	 strcpy(style, p.style);
	 year= p.year;
  }

 VintagePort & VintagePort::operator=(const VintagePort &p){
 if(this == &p)
	 return *this;
 delete [] brand;
  bottles = p.bottles;
	 brand = new char[strlen(p.brand)+1];
	 strcpy(brand, p.brand);
	 strcpy(style, p.style);
	 year = p.year;
	 return *this;
 } 

 ostream & operator <<(ostream & os, const VintagePort &p){
 os<<(Port) p;
 os<<" year"<< p.year;
 return os;
 
 }

 //VintagePort::~VintagePort(){
 //delete[] brand;
 //}

 void VintagePort :: Show() const {
	 cout<< "Brand: "<< brand << " Style: "<< style << " number of bottles: "<< bottles<<" " << year<<endl;
 }