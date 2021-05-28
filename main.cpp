#include "pch.h"
#include "base.h"

[System::STAThread]
int main() {
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	System::Windows::Forms::Application::Run(gcnew application::MAIN());
	return 0;
}