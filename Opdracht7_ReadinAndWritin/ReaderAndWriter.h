#pragma once
#include <iostream>
#include <fstream>
#include <string>

class ReaderAndWriter
{
public:
	ReaderAndWriter();
	~ReaderAndWriter();

	void writeToFileReversed(std::string inPath, std::string outPath);
	void writeToFileInterval(std::string inPath1, std::string inPath2, std::string outPath);

private:
};