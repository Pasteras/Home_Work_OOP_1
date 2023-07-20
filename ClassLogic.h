#pragma once
#include <iostream>

using namespace std;

class Kalkulator
{
private:
	int f_name;
	short s_name;
public:

	void SetF_name(int value_f)
	{
		f_name = value_f;
	}
	int GetF_name()
	{
		return f_name;
	}

	void SetS_name(int value_S)
	{
		s_name = value_S;
	}
	int GetS_name()
	{
		return s_name;
	}
};

