﻿#include "FileFunctions.h"

int main()
{
	int total_lines, correct_lines = 0, incorrect_lines = 0;
	const char delimiter = '_';
	string input_path = "D:\\code\\lessons\\lesson18.11.2023\\lesson(18.11.2023)\\variables.txt";
	string output_path = "D:\\code\\lessons\\lesson18.11.2023\\lesson(18.11.2023)\\output.txt";
	string incorrect_delimiters = "*/- ;&?.,|";
	vector<string> lines = GetLines(input_path, &total_lines);
	
	for (size_t i = 0; i < lines.size(); i++){
		string temp = lines[i];
		CorrectLines(&lines[i], delimiter, incorrect_delimiters);
		if (lines[i] == temp) correct_lines++;
	}

	PrintAmountOfLines(&total_lines, &correct_lines, &incorrect_lines);

	OutputToFile(output_path, lines);
}