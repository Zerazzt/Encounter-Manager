#pragma once

namespace application {
	public ref class MAIN : public System::Windows::Forms::Form
	{
	public:
		MAIN(void)
		{
			open();
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
		System::ComponentModel::Container ^components;
		void open(void);
	};
}
