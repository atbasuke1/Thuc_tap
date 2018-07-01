#include <iostream>
#include "sqlite3.h"
#include <bits/stdc++.h>

using namespace std;

class User{
		public:
			char *username;
			char *password;
			char *email;
			int id;
			int flat;
		public:	
			void Login();
			bool isLogin();
			void Register();
			void Logout();
			void Mess();
			void Detail();
			void SendMess();
			void AddFriend(int);
        	void ShowFriend(int);
        	void BlockFriend(int);
			
};


















