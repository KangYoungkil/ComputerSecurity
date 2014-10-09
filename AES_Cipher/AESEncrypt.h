//  AES.h
//  AES_Cipher
//  Created by Bross on 2014. 10. 6..
//  Copyright (c) 2014년 Bross. All rights reserved.
#pragma once
#include "common.h"
class AESEncrypt
{
private:
    int nr=0;
    int nk=0;
    string result;
    string plainText;
    unsigned char in[16], out[16], state[4][4];
    unsigned char roundKey[240];
    unsigned char key[32];
	const int Nb = 4;
public:
    int getSBoxValue(int num);
    void keyExpansion();
    void addRoundKey(int round);
    void subBytes();
    void shiftRows();
    void mixColumns();
    void cipher();
    void encrypt();
	int getRcon(int num);
	void char2Hex(unsigned char ch, char* szHex);
	string getEncrypt();
	void encryptStep(string subStr);
    AESEncrypt(string plainText):plainText(plainText){}
};