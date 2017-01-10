#include <cstdio>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>


#define OUTPUT_FILENAME "output.txt"

int main(int argc, char *argv[])
{
	std::string input_filename, genome, B;
	if (argc != 2)
	{
		std::cout << "Potrebno je navesti ime datoteke s genomom kao argument naredbenog retka.";
		exit(1);
	}
	input_filename = argv[1];
	std::ifstream infile(input_filename);
	infile >> genome;
	

	// TODO

	std::ofstream outfile(OUTPUT_FILENAME);
	outfile << B << std::endl;
	return 0;
}