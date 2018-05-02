#include <iostream>
#include <string> 
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string shuru;
	int i;
	while(cin>>shuru){
		for(i=shuru.length()-1;i>=0;i--)
		{
			cout<<shuru[i];
		}
		cout<<endl;
	}
	return 0;
}
