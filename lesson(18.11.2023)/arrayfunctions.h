#pragma once
#include <string>
#include <algorithm>
using namespace std;

void CorrectLines(string* str, char correct_delimiter, string incorrect_delimiters) {
    for (char sym : incorrect_delimiters) {
        size_t pos;
        while ((pos = str->find(sym)) != string::npos) {
            replace(str->begin(), str->end(), sym, correct_delimiter);
        }
    }
}