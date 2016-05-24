/*
Solution to problem found at rosalind.info/problems/rna

An RNA string is a string formed from the alphabet containing 'A', 'C', 'G', and 'U'.

Given a DNA string tt corresponding to a coding strand, its transcribed RNA string uu is formed by replacing all occurrences of 'T' in tt with 'U' in uu.

Given: A DNA string tt having length at most 1000 nt.

Return: The transcribed RNA string of tt.
*/


#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string sequence;

	ifstream input("rosalind_rna.txt");

	if (input.is_open()) {
		getline(input, sequence);

		for (unsigned __int16 i = 0; i < sequence.size(); i++) {
			if (sequence[i] == 'T') {
				sequence[i] = 'U';
			}
		}
	}

	ofstream output("output.txt");

	output << sequence;
}