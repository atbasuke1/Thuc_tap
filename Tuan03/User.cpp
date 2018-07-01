#include<iostream>
#include"User.h"
#include<bits/stdc++.h>
using namespace std;

void User::Register(){
	username = new (char);
    password = new char;
    email = new char;
    ofstream file;
    file.open("CSDL.txt");
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
    ifstream rfile;
    rfile.open("CSDL.txt");
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
                flat =0;
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
	ofstream sfile("Mess.txt");
	char *mess,*dt;
    mess = new char;
    dt = new char;
    cout<<"Send messenger!"<<endl;
	if(isLogin()){
		int id;
		cout<<"Choose your friend: ";
		char fr;
		cout << "Nhap Tin nhan: \n";
        cin >> mess; sfile<<mess;
        time_t hientai = time(0);
        dt = ctime(&hientai);
	}else{
		cout<<"===========ban chua dang nhap========\n"<<endl;
	}
}
