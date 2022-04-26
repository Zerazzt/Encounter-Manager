#include "pch.h"

using namespace System;
#include "base.h"

using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew application::MAIN()); 
	return 0;
}