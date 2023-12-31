#include "LandingPage.h"
#include "User.h"
#include "BookSystem.h"

using namespace System;
using namespace System::Windows::Forms;
void main()
{

	User admin("root", "root", "root", "root", "root", "root");
	admin.setAdmin(true);
	User user1("user1", "user1", "user1", "user1", "user1", "user1");
	User user2("user2", "user2", "user2", "user2", "user2", "user2");
	BookSystem bookSystem;
	bookSystem.addUser(admin);
	bookSystem.addUser(user1);
	bookSystem.addUser(user2);
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OnlineBookStore::LandingPage form;
	Application::Run(% form);
}