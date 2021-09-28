#include "header.h"

wchar_t mx_rand_char(char alfbet) {
	if (alfbet == '0') {
		wchar_t *alphabet = L"01";
		return alphabet[rand() % 2];
	}
	else if (alfbet == 'p') {
		wchar_t *alphabet = L"PENIS";
		return alphabet[rand() % 5];
	}
	else if (alfbet == 'n') {
		return rand() % 93 + 33;
	}
	else if (alfbet == 'j') {
		
		wchar_t alphabet[] = {L"゠ァアィイゥウェエォオカガキギクグケゲコゴサザシジスズセゼソゾタダチヂッツヅテデトドナニヌネノハバパヒビピフブプヘベペホボポマミムメモャヤュユョヨラリルレロヮワヰヱヲンヴヵヶヷヸヹヺーヽヾヿ"};
		return alphabet[rand() % 95];
	}
	else {
		return 'E';
	}
}
