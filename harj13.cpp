/*************************************************************************************************************************************************************
*Teht�v�: Harjoitus13a
*Tekij�: Noora Kuikka
*PVM: 23.10.2013
*Kuvaus:
*Tee ohjelma, joka kysyy etunimesi ja sukunimesi. Ohjelma
*yhdist�� nimet yhdeksi merkkijonoksi ja tulostaa ne
*lopuksi nayt�lle.
*
*a) Kayta cstring-kirjastoa (C:n merkkitaulukot)
*tehd�ksesi merkkijonojen yhdist�misen
*b) Kayta string-kirjastoa (C++:n merkkijonot)
*tehd�ksesi merkkijonojen yhdist�misen  TEE, JOS ON AIKAA
*
*Esimerkki
*Anna etunimi: Aku
*Anna sukunimi: Ankka
*Nimesi oli: Aku Ankka
*Versio 1.0 H4719 23.10.2013
**************************************************************************************************************************************************************/

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char first[20];
	char second[20];
	char fullname[40];

    cout << "What is your first name?";
	cin >> first;
	cout << "What is your surname?";
	cin >> second;

	fullname[0] = '\0';
	strcat(fullname, first);
	strcat(fullname, " ");
	strcat(fullname, second);

	cout << "Your name is: " << fullname << "\n";
    
	return 0;
}

