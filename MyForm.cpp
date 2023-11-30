#include "MyForm.h"
#include <iostream>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TestingApp::MyForm form;
	Application::Run(% form);
};