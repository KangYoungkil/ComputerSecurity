//  AESDecrypt.h
//  AES_Cipher
//  Created by Bross on 2014. 10. 7..
//  Copyright (c) 2014년 Bross. All rights reserved.
#pragma once
#include "common.h"
class AESDecrypt
{
private:
    int nr=0;
    int nk=0;
    string plainText;
	string encrypt;
    unsigned char in[16], out[16], state[4][4];
    unsigned char roundKey[240];
    unsigned char key[32];
	const int Nb = 4;
 
public:
    
    int getSBoxInvert(int num);
    int getSBoxValue(int num);
    void keyExpansion();
    void addRoundKey(int round);
    void invSubBytes();
    void invShiftRows();
    void invMixColumns();
    void invCipher();
	void decrypt();
	int getRcon(int num);

    void decryptStep(string subStr);
    AESDecrypt(string encrypt):encrypt(encrypt){}
};