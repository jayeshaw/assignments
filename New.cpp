#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class text{
	public:
		string name;
	text(){
	}
	text(string n){
		std::ifstream in_file;
		in_file.open(n.c_str());
		while(!in_file.eof()){
			name=in_file.get();
			cout<<name;
		}
	}
	void contents(){
		cout<<name;
	}
};

int main(){
	string file;
	cin>>file;
	text Me(file);
	Me.contents();
	return 0;
}
