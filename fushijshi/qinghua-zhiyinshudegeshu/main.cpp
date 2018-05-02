#include <iostream>
#include <cmath>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	long n,j,k,ans;
	while(cin>>n){
		k=2;
		ans=0;
		while(k<sqrt(n)){
			if(n%k==0){
				n=n/k;
				ans++;
			}
			else{
				while(++k){
					for(j=2;j<=(long)sqrt(k);j++)
					{
						if(k%j==0)break; 
					} 
					if(j>sqrt(k)){
						break;
					}
			}
		}
		}
		if(n>1)ans++;
		cout<<ans<<endl;
	}
	return 0;
}

