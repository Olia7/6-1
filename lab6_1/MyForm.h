#pragma once

namespace lab6_1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
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

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label5;
	protected:

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(298, 259);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Чабан Ольга";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 239);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(280, 60);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"2.Підрахувати середнє арифметичне всіх додатних елементів у даному одновимірному "
				L"масиві. ";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(149, 43);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(698, 104);
			this->dataGridView1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(169, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(43, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(9, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"n =";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(149, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 74);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Піднести всі елементи до квадрату";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(445, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(122, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Змінені елементи";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(573, 172);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(274, 22);
			this->textBox3->TabIndex = 9;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(282, 176);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 41);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Посортувати масив";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(573, 194);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(274, 22);
			this->textBox4->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(421, 194);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Посортований масив";
			this->label5->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(868, 362);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "Введіть " + textBox2->Text + " елементів масиву";
		dataGridView1->ColumnCount = Convert::ToInt32(textBox2->Text);
		dataGridView1->RowCount = 1;
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox3->Clear();
	int n = Convert::ToInt32(textBox2->Text);
	
	// піднесення елементів масиву до квадрату
	for (int i = 0; i < n; ++i)
	{
		int a = Convert::ToInt32(dataGridView1->Rows[0]->Cells[i]->Value);
		dataGridView1->Rows[0]->Cells[i]->Value = a * a;
	}
	// вивід елементів масиву
	for (int i = 0; i < n; ++i)
	{
		textBox3->AppendText(dataGridView1->Rows[0]->Cells[i]->Value + " ");
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox4->Clear();
	int n = Convert::ToInt32(textBox2->Text);
	// сортування обміном
	for (int i = 0; i < n - 1; ++i) {
		for (int j = 0; j < n - i - 1; ++j) {
			int a = Convert::ToInt32(dataGridView1->Rows[0]->Cells[j]->Value);
			int b = Convert::ToInt32(dataGridView1->Rows[0]->Cells[j + 1]->Value);
			if (a > b) {
				int tmp = Convert::ToInt32(dataGridView1->Rows[0]->Cells[j]->Value);
				dataGridView1->Rows[0]->Cells[j]->Value = Convert::ToInt32(dataGridView1->Rows[0]->Cells[j + 1]->Value);
				dataGridView1->Rows[0]->Cells[j + 1]->Value = tmp;
			}
		}
	}
	
	// вивід посортованого масиву
	for (int i = 0; i < n; ++i)
	{
		textBox4->AppendText(dataGridView1->Rows[0]->Cells[i]->Value + " ");
	}
}
};
}
