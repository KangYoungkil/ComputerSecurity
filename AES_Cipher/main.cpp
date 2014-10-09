#include "AESDecrypt.h"
#include "AESEncrypt.h"
int main()
{
 
    
    string s;
    cout << "input : ";
	getline(cin,s);
    AESEncrypt encrypt(s);
	encrypt.encrypt();

	AESDecrypt decrypt(encrypt.getEncrypt());
    decrypt.decrypt();
    
}