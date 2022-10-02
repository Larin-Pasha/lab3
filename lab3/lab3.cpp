
/*
Çàâäàííÿ:
Ðåàë³çóâàòè êëàñ Fazzynumber äëÿ ðîáîòè ç íå÷³òêèìè ÷èñëàìè, ÿê³
ïðåäñòàâëÿþòüñÿ òð³éêàìè ÷èñåë (õ – e1, õ, õ + e2). Äëÿ ÷èñåë À = (À - ài, À, À + àr) ³ Â = (Â - bi, Â, Â + br)
àðèôìåòè÷í³ îïåðàö³¿ âèêîíóþòüñÿ ïî íàñòóïíèõ ôîðìóëàõ:
• äîäàâàííÿ À + Â = (À + Â - ài - br, À + Â, À + Â + ar + br);
• âèðàõóâàííÿ À - Â = (À - Â - ài - br, À - Â, À - Â + ai + br);
• ìíîæåííÿ À * Â = (A * B – B * ai – À * bi + ai * bi, À * Â, A * B + B * ai + À * bi + ai * bi);
• îáåðíåíå ÷èñëî À = (1 / (À + ar), 1/ À, 1 / (À – ài)), À > 0;
• ä³ëåííÿ À / Â = ((A - ai) / (Â + bi), À / Â, (À + àr) / (Â - bi)), Â > 0;
*/


#include"Fazzynumber.h"
#include<iostream>
#include<string>
using namespace std;

int main()
{
	Fazzynumber();
	Fazzynumber one(13, 4, 5);
	Fazzynumber two;
	Fazzynumber three;
	//one = one.Init(12, 2, 4);
	//two = two.Init(15, 3, 6);
	//one = one.Read();
	//two = two.Read();
	three = one;
	one.toString();
	two.toString();
	one.result(one.sum(two));
	one.Display();
	one = three;
	one.result(one.subtract(two));
	one.Display();
	one = three;
	one.result(one.multiplication(two));
	one.Display();
	one = three;
	one.result(one.inverse(one));
	one.Display_error1(three);
	one = three;
	one.result(one.division(two));
	one.Display_error2(two);
	system("pause");
	return 0;

}
