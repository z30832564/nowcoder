#include <iostream>
#include <vector>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, f, i,j, fenshu;
	string ming="";
	vector<string> name[101];
	while (cin >> n >> f){
	for(i=0;i<n;i++)
	{
		cin>>ming>>fenshu;
		name[fenshu].push_back(ming);
	}
	if(f==1){
		for(i=0;i<=100;i++)
		{
			if(name[i].size()>0){
			
				for(j=0;j<name[i].size();j++)
				{
					cout<< name[i][j] <<" " <<i<<endl;
				}
			}
		}
	}
	else{
		for(i=100;i>=0;i--)
		{
			if(name[i].size()>0){
			
				for(j=0;j<name[i].size();j++)
				{
					cout<< name[i][j] <<" " <<i<<endl;
				}
			}
		}
	}
}
	return 0;
}
