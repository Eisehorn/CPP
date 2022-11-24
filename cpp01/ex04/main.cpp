#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(int argc, char **argv) {
	if (argc != 4) {
		std::cout<<"Wrong number of inputs! Three strings required!"<<std::endl;
		return 0;
	}
	const char *filename = argv[1];
	std::string comp;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	char *dest = (char *)malloc(strlen(filename));
	strcpy(dest, filename);
	char *temp = (char *)malloc(strlen(dest) + strlen(".replace"));
	temp = strcat(dest, ".replace");
	std::cout<<"ciao----"<<temp<<"+++"<<dest<<std::endl;;
	std::fstream fs;
	std::ofstream fs_1;
	int i;
	fs.open(filename, std::fstream::in);
	fs_1.open(temp, std::fstream::out | std::fstream::trunc);
	while (!fs.eof() && fs.is_open()) {
		comp[0] = fs.get();
		std::cout<<comp[0];
		if (comp[0] == s1[0]) {
			for (i = 0; i < (int)s1.length(); i++) {
				comp[i] = fs.get();
				std::cout<<comp<<"--"<<s1<<std::endl;
				if (comp[i] != s1[i]) {
					fs_1 << comp;
					for(int j = i; j > 0; j--)
						comp[j] = '\0';
					break;
				}
			}
			if (i == (int)s1.length()) {
				fs_1 << s2;
			}
		}
		else
			fs_1 << comp[0];
		comp[0] = '\0';
	}
	fs.close();
	fs_1.close();
	free(dest);
	// free(temp);
	return (0);
}