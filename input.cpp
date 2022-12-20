#include <bits/stdc++.h>
using namespace std;

int main()
{
	string name;
	while (true){
		cout << "nhap ten: ";
		getline(cin,name);
		cin.ignore(-1);
		cout << name << "\t" << name.length() << "\t" << name.size() << endl;
	}
	return 0;
}
