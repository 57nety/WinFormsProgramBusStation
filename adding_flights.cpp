#include "adding_flights.h"
#include "functions.h"

// ��������� ����� ��� ��������
#include "admin_menu.h"
#include "flight_input.h"
#include "delete_all_flights.h"

// ��������� � ���� ��������������
System::Void practical_work::adding_flights::����������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	admin_menu^ form = gcnew admin_menu();
	this->Hide();
	form->Show();
}
// ����� �� ���������
System::Void practical_work::adding_flights::����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	Application::Exit();
}
// �� ����
System::Void practical_work::adding_flights::������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("� ���� ���� �� ������ �������� ����� � ������������, ��� ������� ��� ����� �� ���� ������ (��� ����� ���� ����� ������ �� ������ ��������������), � ��������� ���� ������ ������. ��� �� �� ������ ��������� � ���� ��������������, ��� ����� �� ���������.","�� ����");
}
// �������� �����
System::Void practical_work::adding_flights::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	flight_input^ form = gcnew flight_input();
	this->Hide();
	form->Show();
}
// ������� ��� �����
System::Void practical_work::adding_flights::button2_Click(System::Object^  sender, System::EventArgs^  e)
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
			if( number_of_flights == 0 )
			{
				MessageBox::Show("������ ������ ����!","������");
			}
			else
			{
				delete_all_flights^ form = gcnew delete_all_flights();
				form->ShowDialog();
			}
		}
	}
}