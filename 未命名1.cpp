#include <iostream>

using namespace std;

int f(){
	return f();
}
int main(){
	cout<<f();
}
