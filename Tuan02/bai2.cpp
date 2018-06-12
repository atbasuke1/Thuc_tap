#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;
char s[100];
vector<int>a;
int count=0;
string keyword;
string newword;
int CheckFile(){
	cout<<"> Enter file:";
	cin.getline(s,100);
	ifstream myfile(s);
	if(myfile.is_open()){
		cout<<"> Valid file, please choose the features:"<<endl
			<<"----------------------------------------"<<endl;
		return 1;
	}
	cout<<"> File not exist!"<<endl;
	return 0;
}
void Search(){
	string line;
	cin>>keyword;
	fstream fi;
	fi.open(s);
	count=0;
	int check=1;
	if(a.size()>0){
		a.erase(a.begin(),a.end());
	}
	int xuongdong=0;
	while(!fi.eof()){
		getline(fi,line);
		if(line==""){
			xuongdong++;
		}
		else if(line!="") 
		{
			for(int n=0;n<xuongdong;n++){
				line="\n"+line;
			}
			for(int i=0;i<line.length();i++){
			if(line[i]==keyword[0]){
				int j=i;
				check=1;
				for(int k=0;k<keyword.length();k++){
					if(line[j]!=keyword[k]) {
						check=0; break;
						
					}	
					j++;				
				}
				
				if(check==1){
					count++;
					if(line[j]==' '||line[j]=='\0') a.push_back(i);
					}
					
				}		
			}
			xuongdong=0;
			a.push_back(-1);
		}
		
	}
}
int CheckWord(string line,string word,int i){
	int k=i+1;
	for(int j=1;j<word.length();j++){
		if(line[k]!=word[j]) return 0;
		k++;
	}
	if(line[k]==' '||line[k]=='\0') return 1;
	return 0;
}
void GetData(){
	fstream fo("INPUT.txt");
	fstream f(s);
	string data;
	while(!fo.eof()){
		getline(fo,data);
		f<<data<<endl;
	}
}
void Replace(){
	cout<<"> Enter word(s):";
	Search();
	cout<<"> Enter newword(s):";
	cin>>newword;
	string line;
	fstream fi(s);
	fstream foo("intput.txt");
	
	while(!fi.eof()){
		
		getline(fi,line);
		for(int i=0;i<line.length();i++){
			if(line[i]==keyword[0]&&CheckWord(line,keyword,i)==1){
				line.erase(i,keyword.length());
				line.insert(i,newword);
			}
		}
		foo<<line<<endl;
	}

	
	cout<<">Total appeared time:"<<count<<endl;
	int ln=1;
	for(int i=0;i<a.size();i++){
		if(a[i]==-1){
			++ln;			
		}
		else{
				cout<<"\tLn:"<<ln<<", Col:"<<a[i]<<endl;
		}
	}
	GetData();
	cout<<"Replace"<<"<"<<keyword<<"> by"<<" <"<<newword<<"> sucsessfuly"<<endl;
}

void Menu(){
	int select=0;
	int context=0;
	ofstream fo;
		fo.open("OUTPUT.INP");
	do{
		cout<<"1.Search"<<endl;
		cout<<"2.Replace"<<endl;
		cout<<"3.Exit"<<endl;
		cout<<"----------------------------------------"<<endl;
		cin>>select;
		switch(select){
			case 1:{
				cout<<"> Enter keyword:";
				fflush(stdin);
				Search();
				cout<<">Total appeared time:"<<count<<endl;
				int ln=1;
				for(int i=0;i<a.size();i++){
					if(a[i]==-1){
						++ln;
						
					}
					else{
						cout<<"\tLn:"<<ln<<", Col:"<<a[i]<<endl;
					}
				}
				break;
			}
			case 2:{
				Replace();
				break;
			}
			case 3:{
				
				break;
			}
		}	
	
		if(select==1||select==2){
			++context;
			fo<<"Input file:"<<s<<endl;
			fo<<"Context "<<context<<": ";
			if(select==1){
				fo<<"search keyword"<<endl;
				fo<<"Keyword:"<<keyword<<endl;				
			}
			if(select==2){
				fo<<"replace by new keyword"<<endl;
				fo<<"Keyword:"<<keyword<<endl;
				fo<<"New keyword:"<<newword<<endl;
			}
			fo<<"Total position(s):"<<count<<endl;
			int ln=1;
			for(int i=0;i<a.size();i++){
				if(a[i]==-1){
					++ln;
						
				}
				else{
					fo<<"\tLn:"<<ln<<", Col:"<<a[i]<<endl;
				}
			}
		}
		
	}while(select!=3);
}
int main(){
	if(CheckFile()==0) return 0;
	Menu();
	return 0;
}
