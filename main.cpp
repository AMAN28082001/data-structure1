/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<typeinfo>
#include<iostream>
using namespace std;
int main(){
	auto  a=10;
	auto b=15.5;
	cout<<a<<"\n"<<b<<"\n";
	cout<<typeid(a).name()<<"\n"<<typeid(b).name();
	return 0;
}