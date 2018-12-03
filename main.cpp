#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Simple{
	public:
		int n;
	Simple(int num){
		cout<<"Constructor called";
		cout<<endl<<"The number is "<<num;
		n=num;
	}
	~Simple(){
		cout<<endl<<"Destructor called";
		cout<<endl<<"The number was "<<n;
	}
};

int main(int argc, char** argv) {
		Simple name(100);
	return 0;
}
