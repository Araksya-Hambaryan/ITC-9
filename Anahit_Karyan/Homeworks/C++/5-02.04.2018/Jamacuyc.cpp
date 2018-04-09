#include <iostream>
#include <string>



int main()
{
	char skizb[4];
	char verj[4];
	int zngaluQanak = 0;
	std::cout << "mutqagreq skzbi jam:rope - verji Jam:rope" << std::endl;
	std::cin >> skizb;
	std::cin >> verj;

	int skzbiJam = ((int)skizb[0] - (int)'0') * 10 + (int)skizb[1]-(int)'0';
	int verjiJam = ((int)verj[0] - (int)'0') * 10 + (int)verj[1]-(int)'0';
	int skzbiRope = ((int)skizb[3] - (int)'0') * 10 + (int)skizb[4]-(int)'0';
	int verjiRope = ((int)verj[3] - (int)'0') * 10 + (int)verj[4]-(int)'0';
	if(skzbiJam > verjiJam || ( skzbiJam == verjiJam && skzbiRope >= verjiRope )) {
		std::cout << "jamayin intervaln sxal e";
	} else {
		if (12 < skzbiJam < 0  || 12 < verjiJam < 0 || 60 < skzbiRope < 0 || 60 < verjiRope < 0){
			std::cout << "sxal jam e mutqagrac";
		} else if (6 >= skzbiRope) {
			zngaluQanak++;
		} else if(6 > verjiRope) {
			zngaluQanak--;
		}

		zngaluQanak = zngaluQanak + (verjiJam - skzbiJam )*2;
		std::cout << "Zangeri qanakn klini =" << zngaluQanak;
	}
	return 0;
}

