#include <iostream>
using namespace std;

int main(){
	cout<<system("cat /proc/meminfo | grep 'MemTotal'")<<"\n";
	cout<<system("cat /proc/meminfo | grep 'MemFree'")<<"\n";
	cout<<system("cat /proc/meminfo | grep 'SwapTotal'");
	cout<<system("cat /proc/meminfo | grep 'SwapFree'");
	return 0;
}
