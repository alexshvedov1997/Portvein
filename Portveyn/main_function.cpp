#include <iostream>
#include "port.h"

using namespace std;

int main(){
	Port por("Vino", "trent" , 23);
	por.Show();
	Port por2("Vino2", "trent2" , 2);
    Port porRes;
	porRes = por + por2;
	cout<< porRes<<endl;
	VintagePort vinPort("Vino",  23, "shardone",43);
	cout<<vinPort<<endl;

	return 0;
}