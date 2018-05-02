#include <iostream>
#include <string>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int findpos(char s){
	int i;
	string d="abcdefghijklmnopqrstuvwxyz";
	for(i=0;i<26;i++){
		if(d[i]==s){
			break;
		}
	}
	if(i>=0 && i<=2)return 2;
	else if(i>2 && i<=5)return 3;
	else if(i>5 && i<=8)return 4;
	else if(i>8 && i<=11)return 5;
	else if(i>11 && i<=14)return 6;
	else if(i>14 && i<=18)return 7;
	else if(i>18 && i<=21)return 8;
	else return 9;
}
int findp(char s){
	int i;
	string d="abcdefghijklmnopqrstuvwxyz";
	for(i=0;i<26;i++){
		if(d[i]==s){
			break;
		}
	}
	if(i>=0 && i<=2)return i+1;
	else if(i>2 && i<=5)return i-2;
	else if(i>5 && i<=8)return i-5;
	else if(i>8 && i<=11)return i-8;
	else if(i>11 && i<=14)return i-11;
	else if(i>14 && i<=18)return i-14;
	else if(i>18 && i<=21)return i-18;
	else return i-21;
}
int main(int argc, char** argv) {
	string s;
	int i,count,pos1,pos2;
	while(cin>>s){
		count=0;
		count+=findp(s[0]);
		pos1=findpos(s[0]);
		for(i=1;i<s.length();i++){
			pos2=findpos(s[i]);
			if(pos2==pos1)count+=2;
			count+=findp(s[i]);
			pos1=pos2;
		}
		cout<<count<<endl;
	}
	
	return 0;
}
