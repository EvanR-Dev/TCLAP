#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
  // Create cmd object, which will parse the argv arr based on the Arg objects it contains
  CmdLine cmd("TCLAP", ' ', "1.0");
  
  // Create ValueArg object for output file
  ValueArg<string> outfileArg("o", "outfile", "The name of the output file", false,
			      "output.txt", "output filename");
  cmd.add(outfileArg);
  
  // Create SwitchArg object for uppercase
  SwitchArg upperSwitch("u", "upper", "Convert all text to uppercase", cmd, false);
  // Create SwitchArg object for lowercase
  SwitchArg lowerSwitch("l", "lower", "Convert all text to lowercase", cmd, false);
  // Create UnlabeledValueArg object for input file
  UnlabeledValueArg<string> infileArg("infile", "Input file", true, "infile.txt",
				      "input filename", false);
  cmd.add(infileArg);
}
