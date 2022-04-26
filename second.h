#pragma once
#include "base.h"

namespace application {
	public ref class MAIN2 : public System::Windows::Forms::Form
	{
	public:
		MAIN2(void)
		{
			open();
			bar1();
		}
	protected:
		~MAIN2()
		{
			if (components)
			{
				delete components;
			}
		}
	private:;
		   System::Windows::Forms::TextBox^ name;
		   System::Windows::Forms::TextBox^ size;
		   System::Windows::Forms::TextBox^ type;
		   System::Windows::Forms::TextBox^ alignment;
		   System::Windows::Forms::NumericUpDown^ armourClass;
		   System::Windows::Forms::NumericUpDown^ hitPoints;

		   System::ComponentModel::Container^ components;

		   void open(void);
		   void bar1(void);
	};
}