#include "flight_input.h"
#include "functions.h"

// ��������� ����� ��� ��������
#include "adding_flights.h"

// ��������� � ���� ������
System::Void practical_work::flight_input::��������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	adding_flights^ form = gcnew adding_flights();
	this->Hide();
	form->Show();
}
// ����� �� ���������
System::Void practical_work::flight_input::����������������ToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e)
{
	Application::Exit();
}
// ���������� �� ����
System::Void practical_work::flight_input::������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("� ������ ������ ����� ������, �� ���������� ���� ������ � ������, �� ���� �� �������� ���� ������ ���� ������ � ������� �����.���� �� ������ �������� ������ � ������������ ���� ������, ����� �������� ���: ���� �������������� -> �������������� ��������� ������ -> �������� ����������� ����� ������. ��������� ��� ���� � ������� �������� ���� ��� ����, ����� �������� ��� � ��. ������ ����� �����: ����� �����, ����� ���������� - ����� ��������, ���� - ��.��.����, �����,����� ������������ ����,���� �� ����� - ������ ����� � �������(.���:). �� ������� ����� �� ������ ��������� � ���� ������������� ��� ����� �� ���������.","�� ����");
}
// ���� �����������
System::Void practical_work::flight_input::departure_date_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	if( letter_entry_protection( Convert_String_to_char( departure_date->Text ) ) )
	{
		MessageBox::Show("���� ���� ����������� �� ������ ��������� ����.","������");
		departure_date->Text = "";
	}
}
// ����� �����������
System::Void practical_work::flight_input::departure_time_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	if( letter_entry_protection( Convert_String_to_char( departure_time->Text ) ) )
	{
		MessageBox::Show("���� ������� ����������� �� ������ ��������� ����.","������");
		departure_time->Text = "";
	}
}
// ����� ���������� ����
System::Void practical_work::flight_input::total_number_of_seats_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	if( letter_entry_protection( Convert_String_to_char( total_number_of_seats->Text ) ) )
	{
		MessageBox::Show("���� ������ ����� ���������� ���� �� ������ ��������� ����.","������");
		total_number_of_seats->Text = "";
	}
}
// ���� �� �����
System::Void practical_work::flight_input::ticket_price_TextChanged(System::Object^  sender, System::EventArgs^  e)
{
	if( letter_entry_protection( Convert_String_to_char( ticket_price->Text ) ) )
	{
		MessageBox::Show("���� ���� �� ����� �� ������ ��������� ����.","������");
		ticket_price->Text = "";
	}
}
// �������� ����
System::Void practical_work::flight_input::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	FILE *fptr;
	if( strlen( Convert_String_to_char( flight_number->Text ) ) == 0 || strlen( Convert_String_to_char( destination->Text ) ) == 0 || strlen( Convert_String_to_char( departure_date->Text ) ) == 0 || strlen( Convert_String_to_char( departure_time->Text ) ) == 0 || strlen( Convert_String_to_char( total_number_of_seats->Text ) ) == 0 || strlen( Convert_String_to_char( ticket_price->Text ) ) == 0 )
	{
		MessageBox::Show("��� ����, ����� �������� ���� � ���� ������, �� ������ ��������� ��� ����.","������");
	}
	else
	{
		if( strlen( Convert_String_to_char( departure_date->Text ) ) != 10 || Convert_String_to_char( departure_date->Text )[2] != '.' || Convert_String_to_char( departure_date->Text )[5] != '.' )
		{
			MessageBox::Show("���� ���� ����������� ������ ����� ��� (��.��.����).","������");
			departure_date->Text = "";
		}
		else
		{
			fptr = fopen("flight_schedule.txt","at");
			if( fptr == NULL)
			{
				fclose(fptr);
				MessageBox::Show("�� ������� ������� ���� flight_schedule.txt.","������");
				this->Hide(); // �������� �����
			}
			else
			{
				fprintf(fptr," %s %s %s %s %s %s \n",Convert_String_to_char(flight_number->Text),Convert_String_to_char(destination->Text),Convert_String_to_char(departure_date->Text),Convert_String_to_char(departure_time->Text),Convert_String_to_char(total_number_of_seats->Text),Convert_String_to_char(ticket_price->Text));
				fclose(fptr);
				flight_number->Text = "";
				destination->Text = "";
				departure_date->Text = "";
				departure_time->Text = "";
				total_number_of_seats->Text = "";
				ticket_price->Text = "";
				MessageBox::Show("���� ������� �������� � ���� ������ (� ���� flight_schedule.txt).","���������� �����");
			}
		}
	}
}