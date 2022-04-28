#include "pch.h"
#include "base.h"

void application::MAIN::open(void)
{
	components = gcnew System::ComponentModel::Container();
	Text = L"Encounter Manager";
	Padding = System::Windows::Forms::Padding(0);
	AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	MaximizeBox = false;
	MaximumSize = System::Drawing::Size(1266, 639);
	MinimumSize = System::Drawing::Size(1266, 639);
	SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
	StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
}

void application::MAIN::createCombatElements(void)
{
	combat = gcnew System::Windows::Forms::ComboBox();
	components->Add(combat);
	combat->DropDownStyle = System::Windows::Forms::ComboBoxStyle::Simple;
	combat->Location = System::Drawing::Point(5, 30);
	combat->Size = System::Drawing::Size(100, 400);
	combat->Name = L"combat";
	Controls->Add(combat);
}