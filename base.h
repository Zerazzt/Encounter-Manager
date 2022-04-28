#pragma once

namespace application {
	public ref class MAIN : public System::Windows::Forms::Form
	{
	public:
		MAIN(void)
		{
			open();
			createButton();
			createCombatElements();
		}
	protected:
		~MAIN()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		System::ComponentModel::Container^ components;

		System::Windows::Forms::Button^ testB;
		System::Windows::Forms::ComboBox^ combat;

		void open(void);
		void createButton(void);
		void createCombatElements(void);
		void test(System::Object^ send, System::EventArgs^ e);
	};
}