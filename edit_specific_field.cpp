#include "edit_specific_field.h"
#include "functions.h"

// ��������� ����� ��� ��������
#include "edit_type_selection.h"

// ��������� � ����� ���� ��������������
System::Void practical_work::edit_specific_field::����������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	edit_type_selection^ form = gcnew edit_type_selection();
	this->Hide();
	form->Show();
}
// ����� �� ���������
System::Void practical_work::edit_specific_field::����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	Application::Exit();
}
// �� ����
System::Void practical_work::edit_specific_field::������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("��� �������������� ����������� ������, ��� ���� �������� �� ���, ������ ����� ���������� � ��������������� ���� � ������ ������ ��������� ���������","�� ����");
}
// ����� ������ �� ���� ������ ��� �������� �����
System::Void practical_work::edit_specific_field::edit_specific_field_Shown(System::Object^  sender, System::EventArgs^  e)
{
	FILE *fptr;
	char flight_number[SIZE] = {},destination[SIZE] = {},departure_date[SIZE] = {},departure_time[SIZE] = {},total_number_of_seats[SIZE] = {},ticket_price[SIZE] = {};
	int number_of_flights;
    fptr = fopen("flight_schedule.txt","at");
	if( fptr == NULL)
	{
		fclose(fptr);
		MessageBox::Show("�� ������� ������� ���� flight_schedule.txt","������");
		this->Hide();
	}
	else
	{
		fclose(fptr);
		fptr = fopen("flight_schedule.txt","rt");
		if( fptr == NULL)
		{
			fclose(fptr);
			MessageBox::Show("�� ������� ������� ���� flight_schedule.txt","������");
			this->Hide();
		}
		else
		{
			rewind(fptr);
			number_of_flights = 0;
			while( fscanf(fptr,"%s%s%s%s%s%s", flight_number,destination,departure_date,departure_time,total_number_of_seats,ticket_price) != EOF )
				number_of_flights++;
			fclose(fptr);
		}
	}
	// ������ ������� � ��������
	dataGridView->Rows->Clear();
	dataGridView->Columns->Clear();

	// ����� ������� ������
	Header();

	// ������ �������
	dataGridView->RowCount = number_of_flights;
	dataGridView->ColumnCount = 6;

	// ����� �������
	Show();

	// ������������ �������
	dataGridView->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridView->AutoResizeColumns();
}
// ����� �������
void practical_work::edit_specific_field::Header()
{
	DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
	c1->Name = "flight_number";
	c1->HeaderText = "����� �����";
	c1->Width = 150;
	dataGridView->Columns->Add(c1);

	DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
	c2->Name = "destination";
	c2->HeaderText = "����� ����������";
	c2->Width = 150;
	dataGridView->Columns->Add(c2);

	DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
	c3->Name = "departure_date";
	c3->HeaderText = "���� �����������";
	c3->Width = 150;
	dataGridView->Columns->Add(c3);

	DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
	c4->Name = "departure_time";
	c4->HeaderText = "����� �����������";
	c4->Width = 150;
	dataGridView->Columns->Add(c4);

	DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
	c5->Name = "total_number_of_seats";
	c5->HeaderText = "����� ���������� ����";
	c5->Width = 150;
	dataGridView->Columns->Add(c5);

	DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
	c6->Name = "ticket_price";
	c6->HeaderText = "���� ������";
	c6->Width = 150;
	dataGridView->Columns->Add(c6);

	dataGridView->TopLeftHeaderCell->Value = "����� �������";
	dataGridView->AutoResizeColumns(); // ������������ �������
}
// ����� ������ � �������
void practical_work::edit_specific_field::Show()
{
	FILE *fptr;
	char flight_number[SIZE] = {},destination[SIZE] = {},departure_date[SIZE] = {},departure_time[SIZE] = {},total_number_of_seats[SIZE] = {},ticket_price[SIZE] = {};
	int i;
    fptr = fopen("flight_schedule.txt","at");
	if( fptr == NULL)
	{
		fclose(fptr);
		MessageBox::Show("�� ������� ������� ���� flight_schedule.txt","������");
		this->Hide();
	}
	else
	{
		fclose(fptr);
		fptr = fopen("flight_schedule.txt","rt");
		if( fptr == NULL)
		{
			fclose(fptr);
			MessageBox::Show("�� ������� ������� ���� flight_schedule.txt","������");
			this->Hide();
		}
		else
		{
			rewind(fptr);
			i = 0;
			while( fscanf(fptr,"%s%s%s%s%s%s", flight_number,destination,departure_date,departure_time,total_number_of_seats,ticket_price) != EOF )
			{
				dataGridView->Rows[i]->HeaderCell->Value = Convert::ToString(i+1);
				// ����� ������ � ������
				dataGridView->Rows[i]->Cells[0]->Value = Convert_string_to_String((std::string)flight_number);
				dataGridView->Rows[i]->Cells[1]->Value = Convert_string_to_String((std::string)destination);
				dataGridView->Rows[i]->Cells[2]->Value = Convert_string_to_String((std::string)departure_date);
				dataGridView->Rows[i]->Cells[3]->Value = Convert_string_to_String((std::string)departure_time);
				dataGridView->Rows[i]->Cells[4]->Value = Convert_string_to_String((std::string)total_number_of_seats);
				dataGridView->Rows[i]->Cells[5]->Value = Convert_string_to_String((std::string)ticket_price);
				i++;
			}
			fclose(fptr);
		}
	}
}
// ��������� ���������
System::Void practical_work::edit_specific_field::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	int number_column = Convert::ToInt32(dataGridView->CurrentCellAddress.X), flag;

	flag = 0;
	if( new_info->Text == "" )
	{
		MessageBox::Show("�� �� ����� � ��������������� ���� �� ����������, �� ������� ������ �������� ��������� � ��������� ������.","������");
	}
	else
	{
		if( number_column == 2 || number_column == 3 || number_column == 4 || number_column == 5 )
		{
			if( letter_entry_protection( Convert_String_to_char( new_info->Text ) ) )
			{
				MessageBox::Show("����� ����������, ������� �� ������ ������ � ��������� ������, �� ������ ��������� ����.","������");
				new_info->Text = "";
			}
			else
			{
				if( number_column == 2 )
				{
					if( strlen( Convert_String_to_char( new_info->Text ) ) != 10 || Convert_String_to_char( new_info->Text )[2] != '.' || Convert_String_to_char( new_info->Text )[5] != '.' )
					{
						MessageBox::Show("���� ���� ����������� ������ ����� ��� (��.��.����).","������");
						new_info->Text = "";
					}
					else
					{
						flag = 1;
						dataGridView->CurrentCell->Value = new_info->Text;
						new_info->Text = "";
					}
				}
				else
				{
					flag = 1;
					dataGridView->CurrentCell->Value = new_info->Text;
					new_info->Text = "";
				}
			}
		}
		else
		{
			flag = 1;
			dataGridView->CurrentCell->Value = new_info->Text;
			new_info->Text = "";
		}
	}

	if( flag == 1 )
	{
		FILE *fptr;
		fptr = fopen("new_flight.txt","wt");
		if( fptr == NULL )
		{
			fclose(fptr);
			MessageBox::Show("�� ������� ������� ���� new_flight.txt","������");
			this->Hide();
		}
		else
		{
			for( int i = 0; i < dataGridView->RowCount; i++ )
			{
				fprintf(fptr," %s ",Convert_String_to_char(dataGridView->Rows[i]->Cells[0]->Value->ToString()));
				fprintf(fptr," %s ",Convert_String_to_char(dataGridView->Rows[i]->Cells[1]->Value->ToString()));
				fprintf(fptr," %s ",Convert_String_to_char(dataGridView->Rows[i]->Cells[2]->Value->ToString()));
				fprintf(fptr," %s ",Convert_String_to_char(dataGridView->Rows[i]->Cells[3]->Value->ToString()));
				fprintf(fptr," %s ",Convert_String_to_char(dataGridView->Rows[i]->Cells[4]->Value->ToString()));
				fprintf(fptr," %s \n",Convert_String_to_char(dataGridView->Rows[i]->Cells[5]->Value->ToString()));
			}
			fclose(fptr);
			remove("flight_schedule.txt");
			rename("new_flight.txt","flight_schedule.txt");
		}
	}
}