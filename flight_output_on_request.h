#pragma once

namespace practical_work {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� flight_output_on_request
	/// </summary>
	public ref class flight_output_on_request : public System::Windows::Forms::Form
	{
	public:
		flight_output_on_request(void)
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
		~flight_output_on_request()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox4;
	protected: 

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  t1;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  t2;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  t3;

	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::TextBox^  t6;



	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::TextBox^  t5;

	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::TextBox^  t4;

	private: System::Windows::Forms::DataGridView^  dataGridView;





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
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->t1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->t2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->t3 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->t6 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->t5 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->t4 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->dataGridView);
			this->groupBox4->Location = System::Drawing::Point(12, 41);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1122, 335);
			this->groupBox4->TabIndex = 17;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"��� ��������� �����";
			// 
			// dataGridView
			// 
			this->dataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView->Location = System::Drawing::Point(6, 21);
			this->dataGridView->Name = L"dataGridView";
			this->dataGridView->ReadOnly = true;
			this->dataGridView->RowTemplate->Height = 24;
			this->dataGridView->Size = System::Drawing::Size(1110, 308);
			this->dataGridView->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Arial", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(128, 645);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(904, 68);
			this->button1->TabIndex = 16;
			this->button1->Text = L"��������� ������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &flight_output_on_request::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->t1);
			this->groupBox1->Location = System::Drawing::Point(12, 407);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(338, 100);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"������� �������� ����� �����";
			// 
			// t1
			// 
			this->t1->Location = System::Drawing::Point(6, 44);
			this->t1->Name = L"t1";
			this->t1->Size = System::Drawing::Size(326, 22);
			this->t1->TabIndex = 1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->�����ToolStripMenuItem, 
				this->������ToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1146, 28);
			this->menuStrip1->TabIndex = 15;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->����������ToolStripMenuItem, 
				this->����������������ToolStripMenuItem});
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(65, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(327, 24);
			this->����������ToolStripMenuItem->Text = L"��������� � ���� ��������������";
			this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &flight_output_on_request::����������ToolStripMenuItem_Click);
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(327, 24);
			this->����������������ToolStripMenuItem->Text = L"����� �� ���������";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &flight_output_on_request::����������������ToolStripMenuItem_Click);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(78, 24);
			this->������ToolStripMenuItem->Text = L"�� ����";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &flight_output_on_request::������ToolStripMenuItem_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->t2);
			this->groupBox2->Location = System::Drawing::Point(403, 407);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(338, 100);
			this->groupBox2->TabIndex = 15;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"������� �������� ����� ����������";
			// 
			// t2
			// 
			this->t2->Location = System::Drawing::Point(6, 44);
			this->t2->Name = L"t2";
			this->t2->Size = System::Drawing::Size(326, 22);
			this->t2->TabIndex = 1;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->t3);
			this->groupBox3->Location = System::Drawing::Point(796, 407);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(338, 100);
			this->groupBox3->TabIndex = 15;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"������� �������� ����";
			// 
			// t3
			// 
			this->t3->Location = System::Drawing::Point(6, 44);
			this->t3->Name = L"t3";
			this->t3->Size = System::Drawing::Size(326, 22);
			this->t3->TabIndex = 1;
			this->t3->TextChanged += gcnew System::EventHandler(this, &flight_output_on_request::t3_TextChanged);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->t6);
			this->groupBox5->Location = System::Drawing::Point(796, 513);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(338, 100);
			this->groupBox5->TabIndex = 17;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"������� �������� ���� �� �����";
			// 
			// t6
			// 
			this->t6->Location = System::Drawing::Point(6, 44);
			this->t6->Name = L"t6";
			this->t6->Size = System::Drawing::Size(326, 22);
			this->t6->TabIndex = 1;
			this->t6->TextChanged += gcnew System::EventHandler(this, &flight_output_on_request::t6_TextChanged);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->t5);
			this->groupBox6->Location = System::Drawing::Point(403, 513);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(338, 100);
			this->groupBox6->TabIndex = 18;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"������� �������� ���������� ����";
			// 
			// t5
			// 
			this->t5->Location = System::Drawing::Point(6, 44);
			this->t5->Name = L"t5";
			this->t5->Size = System::Drawing::Size(326, 22);
			this->t5->TabIndex = 1;
			this->t5->TextChanged += gcnew System::EventHandler(this, &flight_output_on_request::t5_TextChanged);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->t4);
			this->groupBox7->Location = System::Drawing::Point(12, 513);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(338, 100);
			this->groupBox7->TabIndex = 16;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"������� �������� �����";
			// 
			// t4
			// 
			this->t4->Location = System::Drawing::Point(6, 44);
			this->t4->Name = L"t4";
			this->t4->Size = System::Drawing::Size(326, 22);
			this->t4->TabIndex = 1;
			this->t4->TextChanged += gcnew System::EventHandler(this, &flight_output_on_request::t4_TextChanged);
			// 
			// flight_output_on_request
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1146, 755);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1164, 802);
			this->MinimumSize = System::Drawing::Size(1164, 802);
			this->Name = L"flight_output_on_request";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"����� ������ �� �������";
			this->Shown += gcnew System::EventHandler(this, &flight_output_on_request::flight_output_on_request_Shown);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
// ��������� � ���� ��������������
private: System::Void ����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
// ����� �� ���������
private: System::Void ����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
// �� ����
private: System::Void ������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
// ����� ������ ��� �������� �����
private: System::Void flight_output_on_request_Shown(System::Object^  sender, System::EventArgs^  e);
// ����� �������
private: void Header();
// ����� ������ � �������
private: void Show();
// ��������� ������
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
// �������� ����
private: System::Void t3_TextChanged(System::Object^  sender, System::EventArgs^  e);
// �������� �����
private: System::Void t4_TextChanged(System::Object^  sender, System::EventArgs^  e);
// �������� ���������� ����
private: System::Void t5_TextChanged(System::Object^  sender, System::EventArgs^  e);
// �������� ����
private: System::Void t6_TextChanged(System::Object^  sender, System::EventArgs^  e);
};
}
