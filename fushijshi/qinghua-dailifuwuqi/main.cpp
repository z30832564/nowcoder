#include <iostream>
#include <string>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int d,f,i,j;
	string daili[1000];
	string fuwu[5000];
	while(cin>>d){
		for(i=0;i<d;i++){
			cin>>daili[i];
		}
		cin>>f;
		for(i=0;i<f;i++){
			cin>>fuwu[i];
		}
		int ans=-1,max=0,start=0;
		if(d==1){
			for(i=0;i<f;i++){
				if(daili[0]==fuwu[i])break;
			}
			if(i!=f)cout<<-1;
		}
		else{
		while(start!=f){
			for(i=0;i<d;i++){
				for(j=start;j<f;j++){
					if(daili[i]==fuwu[j]){
						if(max<j-start)max=j-start;
						break;
					}
				}
			}
			start += max;
			ans++;
	}
	cout<<ans;
}
}
	return 0;
}
