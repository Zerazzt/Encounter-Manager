#include "pch.h"
#include "base.h"
#include "second.h"
void application::MAIN::createButton(void)
{
	testB = (gcnew System::Windows::Forms::Button());
	components->Add(testB);
	testB->Location = System::Drawing::Point(5, 5);
	testB->Size = System::Drawing::Size(100, 20);
	testB->Text = L"TEST";
	testB->Click += gcnew System::EventHandler(this, &application::MAIN::test);
	Controls->Add(testB);
}

void application::MAIN::test(System::Object^ send, System::EventArgs^ e)
{
	MAIN2^ u = (gcnew MAIN2());
	u->Show();
}