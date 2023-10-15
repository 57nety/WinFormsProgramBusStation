#include "admin_menu.h"
#include "functions.h"

// ��������� ����� ��� ��������
#include "user_choice.h"
#include "adding_flights.h"
#include "edit_type_selection.h"
#include "flight_output.h"
#include "flight_output_on_request.h"
#include "�hange_password.h"

// ��������� � ����� ������������
System::Void practical_work::admin_menu::���������������������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	user_choice^ form = gcnew user_choice();
	this->Hide();
	form->Show();
}
// ����� �� ���������
System::Void practical_work::admin_menu::����������������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	Application::Exit();
}
// ���������� �� ����
System::Void practical_work::admin_menu::������ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
{
	MessageBox::Show("�� � ������ ��������������. �������� ��������, ������� ������ �������, ��� �� ������ �� ������� ����� ��������� � ����� ������������, ��� ������� ���������.","�� ����");
}
// ���� ������
System::Void practical_work::admin_menu::button1_Click(System::Object^  sender, System::EventArgs^  e)
{
	adding_flights^ form = gcnew adding_flights();
	this->Hide();
	form->Show();
}
// �������������� ��������� ������
System::Void practical_work::admin_menu::button2_Click(System::Object^  sender, System::EventArgs^  e)
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
				edit_type_selection^ form = gcnew edit_type_selection();
				this->Hide();
				form->Show();
			}
		}
	}
}
// ����� ��������� ������
System::Void practical_work::admin_menu::button3_Click(System::Object^  sender, System::EventArgs^  e)
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
				flight_output^ form = gcnew flight_output();
				this->Hide();
				form->Show();
			}
		}
	}
}
// ����� ������ �� �������
System::Void practical_work::admin_menu::button4_Click(System::Object^  sender, System::EventArgs^  e)
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
				flight_output_on_request^ form = gcnew flight_output_on_request();
				this->Hide();
				form->Show();
			}
		}
	}
}
// ������� ������
System::Void practical_work::admin_menu::button5_Click(System::Object^  sender, System::EventArgs^  e)
{
	�hange_password^ form = gcnew �hange_password();
	this->Hide();
	form->Show();
}