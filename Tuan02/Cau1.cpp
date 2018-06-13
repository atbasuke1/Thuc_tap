#include<iostream>
#include<math.h>
#include<string>
#include <stack>
#include <fstream>
#include<conio.h>
using namespace std;
string s,t;
int choose;
void Cau1(){
	ifstream infile;
	infile.open("BRACKET.INP", ios::in);
	int n = 0;
	int x;
	stack <char> str;
	string s;
	infile >> s;
	for (int i = 0; i < s.length(); i++){
		
		if (s[i] == '(') str.push(s[i]); //neu la ( thi dua no vao trong stack
		
		if(s[i] == ')'){				
			
			if(!str.empty())  str.pop();	// neu trong stack co ( thi xoa phan tu ( do
			else{
				n++;						// neu khong tang n len 1 dv 
			}	
		}
	}
		x = n; // x la so ngoac dong thua
		while(!str.empty()){
			n++;			//dem so ngoac mo thua
			str.pop(); 
		}						
		
	//n luc nay se la so ngoac dong + mo thua
	ofstream outfile;
	outfile.open("BRACKET.OUT");	
	outfile << n << endl;
	if (n != 0)
	{
		for (int i = 1; i <= n; i++)
		{
			if (i <= x) 						//neu i<x thi do la )
				outfile << "(" << i - 1 << endl;		//them ( va sau vi tri )
			else 
				outfile << ")" << s.length() -x + i -1<< endl;

		}
	}
	infile.close();
	outfile.close();
	
}

int main(){
	Cau1();
	return 0;
}


