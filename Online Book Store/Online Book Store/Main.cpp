#include "LandingPage.h"


using namespace System;
using namespace System::Windows::Forms;
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OnlineBookStore::LandingPage form;
	Application::Run(% form);
}