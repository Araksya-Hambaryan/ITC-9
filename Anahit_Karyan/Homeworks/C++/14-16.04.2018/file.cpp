#include <iostream>
#include <fstream>

void FileiTpum(int& qanak) {
	std::string tox;
	std::ifstream File("file.txt");
	if (File.is_open()) {
		while (getline(File, tox)) {
			std::cout << tox << std::endl;
			++qanak;
		}
		File.close();
	} else {
		std::cout <<"Hnaravor che bacel file" << std::endl;
	}
}

void AnunneriAmsatveriCucak(std::string* AnunneriCucak, std::string* AmsetveriCucak) {
	std::fstream File("file.txt");
	std::string anun;
	std::string amsetiv;
	int i = 0;
	while( File >> anun >> amsetiv) {
		AnunneriCucak[i] = anun;
		AmsetveriCucak[i] = amsetiv;
		++i;
	}
}

bool AnunE(std::string MutqayinTvyal) {
	return (MutqayinTvyal[0] >= 'A' && MutqayinTvyal[0] <= 'Z');
}

void Stugum(std::string MutqayinTvyal, std::string* AnunneriCucak, std::string* AmsetveriCucak, int qanak) {
	bool FileumKa = false;
	if (AnunE(MutqayinTvyal)) {
		for (int i = 0; i < qanak; ++i) {
			if (MutqayinTvyal == AnunneriCucak[i]) {
				FileumKa = true;
				std::cout << "Handipmat amsativ " << AmsetveriCucak[i] << std::endl;
			}
		}
		if (!FileumKa) {
			std::cout << "Fileum chka aydpisi anun" << std::endl;
		}
		return;
	} else {
		for (int i = 0; i < qanak; ++i) {
			if (MutqayinTvyal == AmsetveriCucak[i]) {
				FileumKa = true;
				std::cout << "Handipel e "<<" " << AnunneriCucak[i] << "-i" << " " <<"het" << std::endl;
			}
		}
		if (!FileumKa) {
			std::cout << "Fileum chka aydpisi amsetiv" << std::endl;
		}
		return;
	}
}


int main() {
	int qanak = 0;
	std::cout << "File-i Parunakutyun\n" << std::endl;
	FileiTpum(qanak);
	std::string MutqayinTvyal;
	std::cout << "Mutqagrel anun kam amsetiv " << std::endl;
	getline(std::cin, MutqayinTvyal);

	std::string tox;

	std::string* AnunneriCucak = new std::string[qanak];
	std::string* AmsetveriCucak = new std::string[qanak];
	AnunneriAmsatveriCucak (AnunneriCucak, AmsetveriCucak);

	Stugum(MutqayinTvyal, AnunneriCucak, AmsetveriCucak, qanak);
	return 0;
}
