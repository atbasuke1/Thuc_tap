#include<iostream>
#include<math.h>
#include<string>
#include <stack>
#include<vector>
#include <fstream>
#include<conio.h>
using namespace std;
string s,t;
int choose;
int a[100000],n;
void BHT(string &s, int a[]){
	int k = 0;
    a[0] = 0;
    for(int i = 1 ;i < s.length(); i++){
        while(k > 0 && s[k] != s[i]) k = a[k];
        if(s[k] == s[i]) k = k+1;
        a[i] = k;
}
}
void search(string &s, string &t){
	BHT(s,a);
	int j=0,k=0;
    int m = s.length(); int n = t.length();
    while(j+m <= n){
        while (k < m && s[k] == t[j+k]) k++;
        if( k == m) {

            cout << "Found in Line: " << n << "   ";
            cout << "Colum: " << j << endl;
        }
        if( k == 0) j++;
        else {
            j = j+k-a[k-1];

            k = a[k-1];     
        }

    }
}
int main(){
	fstream file;
	file.open("input.txt");
	
	int key =0;
	do{
		cout << "Chon chuc nang :" <<endl;
    	cout << "   1.Search" <<endl;
		cout <<  "  2.Replace"<<endl;
		cout <<   " 3.Exit"   <<endl;
    	cout << "-------------------------------------" << endl;
    	cin>> key;
    	int	n = 0;
    	switch(key){
    		case 1:{
    			cout << "Enter keyword: ";
    			string keyword;
    			string string;
   				cin >> keyword;
   				while(!file.eof()){
        			n++;
        			getline(file,string);
        			cout << "Line " << n << ": " << string << endl;
       				search(keyword,string);
    			}
    file.close();
				break;
			}
			case 2:{
				break;
			}
			case 3:{
				break;
			}
		}
	}while(key != 3);
	return 0;
}


