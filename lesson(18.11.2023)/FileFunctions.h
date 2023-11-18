#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include "arrayfunctions.h"

vector<string> GetLines(string path) {
	vector<string> result;

	ifstream file;
	file.open(path);

	string str;
	while (getline(file, str)) {
		result.push_back(str);
	}

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