#include "MainForm.h"
#include "SignupForm.h"

using namespace System;
using namespace System::Windows::Forms;
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	OnlineBookStore::MainForm form;
	Application::Run(% form);
}