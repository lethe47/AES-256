#include"AES.h"
#include <iostream>

int main()
{
    while (1)
    {
        //Key=BF3D6A0B97E473BE03153689E24A075B，可以在加密函数中修改
        string cin_str;
        cout << "请输入一串字符：" << endl;
        cin >> cin_str;
        string miwen = encrypt(cin_str);
        cout << "密文：" << miwen << endl;
        string mingwen = decrypt(miwen);
        cout << "明文：" << mingwen << endl;
    }
}

