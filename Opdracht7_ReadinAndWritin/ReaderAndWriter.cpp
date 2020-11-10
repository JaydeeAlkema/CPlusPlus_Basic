#include "ReaderAndWriter.h"

ReaderAndWriter::ReaderAndWriter()
{

}

ReaderAndWriter::~ReaderAndWriter()
{

}

void ReaderAndWriter::writeToFileReversed(std::string inPath, std::string outPath)
{
	std::ifstream in_stream;
	in_stream.open(inPath);
	if (!in_stream) {
		std::cout << "Probleem bij openen file" << std::endl;
		exit(1);
	}

	std::ofstream out_stream;
	out_stream.open(outPath);
	if (!out_stream) {
		std::cout << "Probleem bij openen output file" << std::endl;
		exit(1);
	}

	in_stream >> std::noskipws;
	std::string inputText;

	char ch;
	in_stream >> ch;
	while (!in_stream.eof()) {
		in_stream >> ch;
		inputText += ch;
	}

	std::reverse(inputText.begin(), inputText.end());
	out_stream << inputText;

	in_stream.close();
	out_stream.close();
}

void ReaderAndWriter::writeToFileInterval(std::string inPath1, std::string inPath2, std::string outPath)
{
	std::ifstream in_stream1;
	in_stream1.open(inPath1);
	if (!in_stream1) {
		std::cout << "Probleem bij openen file1" << std::endl;
		exit(1);
	}

	std::ifstream in_stream2;
	in_stream2.open(inPath2);
	if (!in_stream2) {
		std::cout << "Probleem bij openen file2" << std::endl;
		exit(1);
	}

	std::ofstream out_stream;
	out_stream.open(outPath);
	if (!out_stream) {
		std::cout << "Probleem bij openen output file" << std::endl;
		exit(1);
	}

	std::string file1Line;
	std::string file2Line;

	while (std::getline(in_stream1, file1Line) && std::getline(in_stream2, file2Line))
	{
		out_stream << file1Line << std::endl << file2Line << std::endl;
	}

	in_stream1.close();
	in_stream2.close();
	out_stream.close();
}

