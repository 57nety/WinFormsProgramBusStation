#include <stdio.h>
#include <string.h>
#include <iostream>

#define SIZE 256

// ������ �� ����� ����
int letter_entry_protection(char string[]);

/* ������� �������������� ����� */

// �� std::string � System::string^
System::String^ Convert_string_to_String(std::string& os, System::String^ s);

// �� std::string � System::string^
System::String^ Convert_string_to_String(std::string& os);

// �� System::String^ � char*
char* Convert_String_to_char(System::String^ string);

// �� char* � System::String^
System::String^ Convert_char_to_String(char* ch);

// �������� ������
int city_check(char input_town[],char end_simbol[]);
// ����� ������
int city_search(char input_town[],char output_town[]);
// ������� ��������� ���� � ��������
void from_uppercase_to_lowercase(char town[]);