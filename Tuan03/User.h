#include <iostream>

using namespace std;

class User{
		public:
			char *username;
			char *password;
			char *email;
			int id;
			int flat;
			User(){};
		public:	
			void Login();
			bool isLogin();
			void Register();
			void Logout();
			void Mess();
			void Detail();
			void SendMess();
			void AddFriend();
        	void ShowFriend();
        	void BlockFriend();
			
};


















