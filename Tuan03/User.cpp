#include<iostream>
#include"User.h"
#include<string>
#include<bits/stdc++.h>
using namespace std;

void User::Register(){
	username = new (char);
    password = new char;
    email = new char;
    fstream file;
    file.open("CSDL.txt",ios::app);
    cout<<"Username: ";
    cin>>username; file<<username<<"\n";
    cout<<"Password: ";
    cin>>password; file<<password<<"\n";
    cout<<"Email: ";
    cin>>email;file<<email<<"\n";
    file.close();
}
void User::Login(){
	string username = "", password = "";
    fstream rfile;
    rfile.open("CSDL.txt",ios::in);
    string s[100];
    int i=0;
    while(!rfile.eof()){
        getline(rfile,s[i]);
        i++;
    }
    cout<<"Your Username: ";cin>>username;
    cout<<"Your Password: ";cin>>password;
    for(int j = 0; j < i; j+=2){
        if(s[j].compare(username) == 0){
            if(s[j+1].compare(password) == 0){
                cout<<"Login Susscessfuly!"<<endl;
                flat = 1;
            }else{
                cout<<"Wrong Password!!!"<<endl;
                flat = 0;
            }
        }
    }
}
void User::Logout(){
	flat = 0;
	cout<<"Has been Logout!"<<endl;
}
bool User::isLogin(){
	if(flat == 1) return true;
	else return false;
}
void User::SendMess(){
	fstream sfile("Mess.txt",ios::app);
	fstream LF("ListFriend.txt",ios::in);
	
	char *dt;
    string a[100];
    int i=0;
    while(!LF.eof()){
        getline(LF,a[i]);
        i++;
    }
    cout<<"Send messenger!"<<endl;
	if(isLogin()){
		int id;
		char mess[100];
		char fr[10];
		char *dt;
		dt = new char;
		fflush(stdin);
		cout<<"Choose your friend: ";
		cin.getline(fr,10);	
		for(int j = 0; j < i; j+=2){
        if(a[j].compare(fr) == 0){
        	
            cout << "Messenger: \n";
            sfile<<"Messenger to "<<fr<<": ";
            cin.getline(mess,100);
			sfile<<mess<<"\t ++detail++ \t";
        	time_t hientai = time(0);
        	dt = ctime(&hientai);
        	sfile<<dt;
        	cout<<"\n Done!!! \n";
        	}else{
        	cout<<"Ten khong co trong listfriend!!";
		}
    }
    	sfile.close();
		LF.close();
		
	}else{
		cout<<"\n+++++Ban chua dang nhap+++\n"<<endl;
	}
	
}
void User::Detail(){
	int i;
	string a[100];
	if(isLogin()){
		fstream detail("Mess.txt",ios::in);
		while(!detail.eof()){
			getline(detail,a[i]);			
			cout<<a[i]<<endl;
			i++;
		}
	}else{
        	cout<<"\n+++++Ban chua dang nhap+++\n"<<endl;
		}
}
void User::AddFriend(){
	if(isLogin()){
		fstream add("ListFriend.txt",ios::app);
		char name[10];
		fflush(stdin);
		cout<<"Enter your new friend: ";
		cin.getline(name,10);
		add<<name<<"\n";
		cout<<name;
		add.close();
	}else{
		cout<<"\n+++++Ban chua dang nhap+++\n"<<endl;
	}
}
void User::ShowFriend(){
	int i;
	string a[100];
	if(isLogin()){
		ifstream ListFriend("ListFriend.txt");
		cout<<"Your ListFriend: "<<endl;
		while(!ListFriend.eof()){
			getline(ListFriend,a[i]);			
			cout<<a[i]<<endl;
			i++;
		}
		
	}else{
		cout<<"+++++Ban chua dang nhap+++\n"<<endl;
	}
}

