#include<iostream>
#include "User.cpp"

#include<bits/stdc++.h>
using namespace std;

int main(){
	int choose;
	while(1){
		cout<<"========Quan Ly Nguoi Dung==========="<<endl;
		cout<<"\t 1. Register "<<endl;
		cout<<"\t 2. Login "<<endl;
		cout<<"\t 3. Logout"<<endl;
		cout<<"========Quan Ly Tin Nhan==========="<<endl;
		cout<<"\t 4. send message "<<endl;
		cout<<"\t 5. Detail"<<endl;
		cout<<"\t 6. message"<<endl;
		cout<<"========Quan Ly Ban Be==========="<<endl;
		cout<<"\t 7. Add friend "<<endl;
		cout<<"\t 8. Show list friend"<<endl;
		cout<<"\t 9. Block friend"<<endl;
		cout<<"\n";
		cout<<"===========END=============="<<endl;
		cout<<"Enter your choose: ";
		cin>>choose;
		User u = User();
		switch(choose){
			case 1:{
				u.Register();
				break;
			}
			case 2:{
				u.Login();
				break;
			}
			case 3:{
				u.Logout();
				break;
			}
			case 4:{
				u.SendMess();
				break;
			}
			case 5:{
				u.Detail();
				break;
			}
			case 6:{
				
				break;
			}
			case 7:{
				u.AddFriend();
				break;
			}
			case 8:{
				u.ShowFriend();
				break;
			}
			case 9:{
				
				break;
			}
			default:
                cout << "Xin moi nhap lai\n";
                break;
		}
	};
	
	
	return 0;
}
