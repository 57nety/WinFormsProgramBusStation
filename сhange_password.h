#pragma once

namespace practical_work {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� �hange_password
	/// </summary>
	public ref class �hange_password : public System::Windows::Forms::Form
	{
	public:
		�hange_password(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~�hange_password()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  old_pas;
	protected: 

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  new_pas;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;




	private:
		/// <summary>
		/// ��������� ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ������������ ����� ��� ��������� ������������ - �� ���������
		/// ���������� ������� ������ ��� ������ ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->old_pas = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->new_pas = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(41, 253);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(470, 62);
			this->button1->TabIndex = 0;
			this->button1->Text = L"������� ������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &�hange_password::button1_Click);
			// 
			// old_pas
			// 
			this->old_pas->Location = System::Drawing::Point(20, 32);
			this->old_pas->Name = L"old_pas";
			this->old_pas->Size = System::Drawing::Size(432, 22);
			this->old_pas->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->old_pas);
			this->groupBox1->Location = System::Drawing::Point(41, 45);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(470, 80);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"������� ������ ������";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->new_pas);
			this->groupBox2->Location = System::Drawing::Point(41, 152);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(470, 80);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"������� ����� ������";
			// 
			// new_pas
			// 
			this->new_pas->Location = System::Drawing::Point(20, 32);
			this->new_pas->Name = L"new_pas";
			this->new_pas->Size = System::Drawing::Size(432, 22);
			this->new_pas->TabIndex = 1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->�����ToolStripMenuItem, 
				this->������ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(558, 28);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->����������������������������ToolStripMenuItem, 
				this->����������������ToolStripMenuItem});
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// ����������������������������ToolStripMenuItem
			// 
			this->����������������������������ToolStripMenuItem->Name = L"����������������������������ToolStripMenuItem";
			this->����������������������������ToolStripMenuItem->Size = System::Drawing::Size(327, 24);
			this->����������������������������ToolStripMenuItem->Text = L"��������� � ���� ��������������";
			this->����������������������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &�hange_password::����������������������������ToolStripMenuItem_Click);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(327, 24);
			this->����������������ToolStripMenuItem->Text = L"����� �� ���������";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &�hange_password::����������������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(78, 24);
			this->������ToolStripMenuItem->Text = L"�� ����";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &�hange_password::������ToolStripMenuItem_Click);
			// 
			// �hange_password
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(558, 345);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(576, 392);
			this->MinimumSize = System::Drawing::Size(576, 392);
			this->Name = L"�hange_password";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������� ������";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

// ������� ������
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
// ��������� � ���� ��������������
private: System::Void ����������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
// ����� �� ���������
private: System::Void ����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
// �� ����
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);

};
}
