#pragma once
#include "base.h"
namespace application {
	public ref class MAIN2 : public System::Windows::Forms::Form
	{
	public:
		MAIN2(void)
		{
			open();
			//createButton();
		}
	protected:
		~MAIN2()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::Windows::Forms::Button^ testB;
		System::ComponentModel::Container^ components;
		void open(void)
		{
			components = gcnew System::ComponentModel::Container();
			Name = L"Character_Sheet";
			Text = L"Character Sheet";
			Padding = System::Windows::Forms::Padding(0);
			AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			MaximizeBox = false;
			MaximumSize = System::Drawing::Size(1266, 639);
			MinimumSize = System::Drawing::Size(1266, 639);
			SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
		}
		//void createButton(void);
		//void test(System::Object^ send, System::EventArgs^ e);
	};
}
