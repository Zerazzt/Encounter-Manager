#include "pch.h"
#include "second.h"

void application::MAIN2::bar1(void)
{
	name = gcnew System::Windows::Forms::TextBox();
	components->Add(name);
	name->BackColor = System::Drawing::SystemColors::MenuBar;
	name->Location = System::Drawing::Point(5, 5);
	name->Size = System::Drawing::Size(200, 40);
	Controls->Add(name);
}