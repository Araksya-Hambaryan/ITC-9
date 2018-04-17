#include <iostream>
#include <fstream>

void fileiTpum(int& qanak) {
	std::string tox;
	std::ifstream file("file.txt");
	if (file.is_open()) {
		while (getline(file, tox)) {
			std::cout << tox << std::endl;
			++qanak;
		}
		file.close();
	} else {
		std::cout <<"Hnaravor che bacel file" << std::endl;
	}
}

void anunneriAmsatveriCucak(std::string* anunneriCucak,  std::string* amsetveriCucak) {
	std::fstream file("file.txt");
	std::string anun;
	std::string amsetiv;
	int i = 0;
	while( file >> anun >> amsetiv) {
		anunneriCucak[i] = anun;
		amsetveriCucak[i] = amsetiv;
		++i;
	}
}

bool anunE(const std::string& mutqayinTvyal) {
	return (mutqayinTvyal[0] >= 'A' && mutqayinTvyal[0] <= 'Z');
}

void stugum( std::string& mutqayinTvyal, std::string* anunneriCucak, std::string* amsetveriCucak, int qanak) {
	bool fileumKa = false;
	if (anunE(mutqayinTvyal)) {
		for (int i = 0; i < qanak; ++i) {
			if (mutqayinTvyal == anunneriCucak[i]) {
				fileumKa = true;
				std::cout << "Handipmat amsativ " << amsetveriCucak[i] << std::endl;
			}
		}
		if (!fileumKa) {
			std::cout << "Fileum chka aydpisi anun" << std::endl;
		}
		return;
	} else {
		for (int i = 0; i < qanak; ++i) {
			if (mutqayinTvyal == amsetveriCucak[i]) {
				fileumKa = true;
				std::cout << "Handipel e "<<" " << anunneriCucak[i] << "-i" << " " <<"het" << std::endl;
			}
		}
		if (!fileumKa) {
			std::cout << "Fileum chka aydpisi amsetiv" << std::endl;
		}
		return;
	}
}


int main() {
	int qanak = 0;
	std::cout << "File-i Parunakutyun\n" << std::endl;
	fileiTpum(qanak);
	 std::string mutqayinTvyal;
	std::cout << "Mutqagrel anun kam amsetiv " << std::endl;
	getline(std::cin, mutqayinTvyal);

	std::string tox;

	 std::string* anunneriCucak = new std::string[qanak];
	 std::string* amsetveriCucak = new std::string[qanak];

	anunneriAmsatveriCucak (anunneriCucak, amsetveriCucak);

	stugum(mutqayinTvyal, anunneriCucak, amsetveriCucak, qanak);

//	delete [] anunneriCucak;
//	delete [] amsetveriCucak;

	return 0;
}
