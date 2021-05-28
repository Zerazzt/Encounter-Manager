#include "pch.h"
#include "base.h"

void application::MAIN::open(void)
{
	this->components = gcnew System::ComponentModel::Container();
	this->Name = L"Character_Sheet";
	this->Text = L"Character Sheet";
	this->Padding = System::Windows::Forms::Padding(0);
	this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	this->MaximizeBox = false;
	this->MaximumSize = System::Drawing::Size(1266, 639);
	this->MinimumSize = System::Drawing::Size(1266, 639);
	this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
	this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
}