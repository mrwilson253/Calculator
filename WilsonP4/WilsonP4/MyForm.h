#pragma once
#include "SimpleCalc.h"
#include <exception>

namespace WilsonP4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	SimpleCalc calc;
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ txtNum1;
	private: System::Windows::Forms::TextBox^ txtNum2;
	private: System::Windows::Forms::TextBox^ txtResult;
	private: System::Windows::Forms::Label^ lblOps;
	private: System::Windows::Forms::Label^ lblEqual;
	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btnSub;
	private: System::Windows::Forms::Button^ btnMult;
	private: System::Windows::Forms::Button^ btnDiv;
	private: System::Windows::Forms::Button^ btnClear;
	private: System::Windows::Forms::Button^ btnExit;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtNum1 = (gcnew System::Windows::Forms::TextBox());
			this->txtNum2 = (gcnew System::Windows::Forms::TextBox());
			this->txtResult = (gcnew System::Windows::Forms::TextBox());
			this->lblOps = (gcnew System::Windows::Forms::Label());
			this->lblEqual = (gcnew System::Windows::Forms::Label());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(31, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(369, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"         Welcome to the C++ Simple Calculator\r\nEnter two numbers and press the op"
				L"eration button";
			// 
			// txtNum1
			// 
			this->txtNum1->Location = System::Drawing::Point(34, 89);
			this->txtNum1->Name = L"txtNum1";
			this->txtNum1->Size = System::Drawing::Size(73, 20);
			this->txtNum1->TabIndex = 1;
			// 
			// txtNum2
			// 
			this->txtNum2->Location = System::Drawing::Point(140, 89);
			this->txtNum2->Name = L"txtNum2";
			this->txtNum2->Size = System::Drawing::Size(71, 20);
			this->txtNum2->TabIndex = 2;
			// 
			// txtResult
			// 
			this->txtResult->Location = System::Drawing::Point(244, 89);
			this->txtResult->Name = L"txtResult";
			this->txtResult->Size = System::Drawing::Size(128, 20);
			this->txtResult->TabIndex = 3;
			// 
			// lblOps
			// 
			this->lblOps->AutoSize = true;
			this->lblOps->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblOps->Location = System::Drawing::Point(113, 89);
			this->lblOps->Name = L"lblOps";
			this->lblOps->Size = System::Drawing::Size(0, 20);
			this->lblOps->TabIndex = 4;
			// 
			// lblEqual
			// 
			this->lblEqual->AutoSize = true;
			this->lblEqual->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblEqual->Location = System::Drawing::Point(217, 87);
			this->lblEqual->Name = L"lblEqual";
			this->lblEqual->Size = System::Drawing::Size(21, 20);
			this->lblEqual->TabIndex = 5;
			this->lblEqual->Text = L"=";
			this->lblEqual->Click += gcnew System::EventHandler(this, &MyForm::lblEqual_Click);
			// 
			// btnPlus
			// 
			this->btnPlus->BackColor = System::Drawing::Color::Black;
			this->btnPlus->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPlus->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnPlus->Location = System::Drawing::Point(34, 130);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(80, 50);
			this->btnPlus->TabIndex = 6;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = false;
			this->btnPlus->Click += gcnew System::EventHandler(this, &MyForm::btnPlus_Click);
			// 
			// btnSub
			// 
			this->btnSub->BackColor = System::Drawing::Color::Black;
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSub->Location = System::Drawing::Point(34, 188);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(80, 50);
			this->btnSub->TabIndex = 7;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = false;
			this->btnSub->Click += gcnew System::EventHandler(this, &MyForm::btnSub_Click);
			// 
			// btnMult
			// 
			this->btnMult->BackColor = System::Drawing::Color::Black;
			this->btnMult->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMult->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnMult->Location = System::Drawing::Point(163, 130);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(80, 50);
			this->btnMult->TabIndex = 8;
			this->btnMult->Text = L"*";
			this->btnMult->UseVisualStyleBackColor = false;
			this->btnMult->Click += gcnew System::EventHandler(this, &MyForm::btnMult_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->BackColor = System::Drawing::Color::Black;
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDiv->Location = System::Drawing::Point(163, 188);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(80, 50);
			this->btnDiv->TabIndex = 9;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = false;
			this->btnDiv->Click += gcnew System::EventHandler(this, &MyForm::btnDiv_Click);
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::Color::Red;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(288, 130);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(80, 50);
			this->btnClear->TabIndex = 10;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &MyForm::btnClear_Click);
			// 
			// btnExit
			// 
			this->btnExit->Location = System::Drawing::Point(357, 231);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(80, 50);
			this->btnExit->TabIndex = 11;
			this->btnExit->Text = L"Close";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &MyForm::btnExit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Turquoise;
			this->ClientSize = System::Drawing::Size(448, 287);
			this->Controls->Add(this->btnExit);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->lblEqual);
			this->Controls->Add(this->lblOps);
			this->Controls->Add(this->txtResult);
			this->Controls->Add(this->txtNum2);
			this->Controls->Add(this->txtNum1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"WilsonP4 SimpleCalc on a Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: void Calculate(char operation)
{
	double tmp1{ 0 }, tmp2{ 1 };
	try {
		if (txtNum1->Text != "" && txtNum2->Text != "") {
			tmp1 = Convert::ToDouble(txtNum1->Text);
			tmp2 = Convert::ToDouble(txtNum2->Text);
			calc.SetOperation(operation, tmp1, tmp2);
			txtResult->Text = gcnew String(calc.GetResults().c_str());
			lblOps->Text = Convert::ToChar(operation).ToString();
		}
		else {
			throw tmp1;
		}
		
	}
	catch(int e){
		txtResult->Text = "You must enter both numbers before selecting an operation!";
	}
}
private: System::Void lblEqual_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnPlus_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate('+');
}
private: System::Void btnSub_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate('-');
}
private: System::Void btnMult_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate('*');
}
private: System::Void btnDiv_Click(System::Object^ sender, System::EventArgs^ e) {
	Calculate('/');
}
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	txtNum1->Clear();
	txtNum2->Clear();
	txtResult->Clear();
	lblOps->Text = " ";
}
private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
