#include <iostream>

using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,i,j,count;
	while(cin>>n){
		int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			count=0;
			for(j=1;j*j<a[i];j++){
				if(a[i]%j==0){
				count += 2;
			}
			if(j*j==a[i])count++;
		}
			cout<<count<<endl;
		}
	}
	return 0;
}
