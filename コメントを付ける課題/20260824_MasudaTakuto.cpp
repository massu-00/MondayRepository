#include <iostream>
using namespace std;

int main(void)
{
    //変数宣言
    int a = 0;
    int* p = &a;//ポインター

    cout << "aの初期値: " << a << endl;

    //ポインターを使った代入
    //aのアドレスをpで取得しpに10を代入する(aが10になる)
    *p = 10;

    //aの描画
    cout << "aの変更後の値: " << a << endl;

    return 0;
}