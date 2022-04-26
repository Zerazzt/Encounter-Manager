#include "pch.h"
#include "second.h"

void application::MAIN2::open(void)
{
	components = gcnew System::ComponentModel::Container();
	Text = L"Monster Editor";
	Padding = System::Windows::Forms::Padding(0);
	AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
	MaximizeBox = false;
	MaximumSize = System::Drawing::Size(500, 639);
	MinimumSize = System::Drawing::Size(500, 639);
	SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
	StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
}