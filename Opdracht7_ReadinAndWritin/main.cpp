#include <iostream>
#include "ReaderAndWriter.h"

ReaderAndWriter readAndWriter;

std::string fileIn = "../Opdracht7_ReadinAndWritin/jabberwocky.txt";
std::string fileInLat = "../Opdracht7_ReadinAndWritin/jabberwocky_lat.txt";


int main()
{
	readAndWriter.writeToFileReversed(fileIn, "../Opdracht7_ReadinAndWritin/outputReversed.txt");
	readAndWriter.writeToFileInterval(fileIn, fileInLat, "../Opdracht7_ReadinAndWritin/outputInterval.txt");

	return 0;
}
