#pragma once

namespace application {
	public ref class MAIN : public System::Windows::Forms::Form
	{
	public:
		MAIN(void)
		{
			open();
			createButton();
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
		System::Windows::Forms::Button^ testB;
		System::ComponentModel::Container ^components;
		void open(void);
		void createButton(void);
		void test(System::Object^ send, System::EventArgs^ e);
	};
}
