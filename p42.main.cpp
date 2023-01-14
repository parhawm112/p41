#include <iostream>

using namespace std;

int main() {
	
	 int x,y,z,m;
	 cout<<"x:";
	 cin>>x;
	 cout<<"y:";
	 cin>>y;
	 cout<<"z:";
	 cin>>z;
	 
	 m=(x-y)*(x+y)/(x+y+z)*(x+y+z)+1;
	 cout<<"m:"<<m;
	return 0;
	
	 
}