#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "arrayfunctions.h"

vector<string> GetLines(string path, int* total_lines = 0) {
	vector<string> result;
	int temp = 0;

	ifstream file;
	file.open(path);

	string str;
	while (getline(file, str)) {
		result.push_back(str);
		temp++;
	}
	*total_lines = temp;

	file.close();
	return result;
}
void OutputToFile(string path, vector<string> fullname) {
	ofstream file;

	file.open(path, ios_base::trunc);
	for (size_t i = 0; i < fullname.size(); i++)
	{
		file << fullname[i] << endl;
	}
	file.close();


}
void PrintAmountOfLines(int* total_lines, int* correct_lines, int* incorrect_lines) {
	*incorrect_lines = *total_lines - *correct_lines;
	cout << "Total lines = " << *total_lines << "\nCorrect lines = " << *correct_lines << "\nIncorrect lines = " << *incorrect_lines << endl;
}