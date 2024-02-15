#include <iostream>
#include<string>
#include <windows.h>
#include <conio.h>

void YukiNagatoPrintEndFirst(const std::string str) {
    Sleep(1000);
    const int n = str.size();
    printf("YUKI.N> ");
    for (int i = 0; i < n; ++i) {
        printf("%c", str.at(i));
        Sleep(50);
    }
}

void YukiNagatoPrintEnd(const std::string str) {
    Sleep(1000);
    const int n = str.size();
    for (int i = 0; i < n; ++i) {
        printf("%c", str.at(i));
        Sleep(50);
    }
}

void YukiNagatoPrintFirst(const std::string str) {
    Sleep(1000);
    printf("YUKI.N> ");
    const int n = str.size();
    for (int i = 0; i < n; ++i) {
        printf("%c", str.at(i));
        Sleep(50);
    }
    puts("");
}

void YukiNagatoPrint(const std::string str) {
    Sleep(1000);
    const int n = str.size();
    for (int i = 0; i < n; ++i) {
        printf("%c", str.at(i));
        Sleep(50);
    }
    puts("");
}

int main(){
    int c;
    
    YukiNagatoPrintFirst("これをあなたが読んでいる時、わたしはわたしでないだろう。\n");
    
    YukiNagatoPrintFirst("このメッセージが表示されたということは、そこにはあなた、わたし、涼宮ハルヒ、朝比奈みくる、古泉一樹が存在しているはずである。\n");
    
    YukiNagatoPrintEndFirst("それが鍵。");
    YukiNagatoPrint("あなたは解答を見つけ出した。\n");
    
    YukiNagatoPrintEndFirst("これは緊急脱出プログラムである。");
    YukiNagatoPrintEnd("起動させる場合はエンターキーを、そうでない場合はそれ以外のキーを選択せよ。");
    YukiNagatoPrintEnd("起動させた場合、あなたは時空修正の機会を得る。");
    YukiNagatoPrintEnd("ただし成功は保証できない。");
    YukiNagatoPrint("また帰還の保証もできない。\n");
    
    YukiNagatoPrintEndFirst("このプログラムが起動するのは一度きりである。");
    YukiNagatoPrintEnd("実行ののち、消去される。");
    YukiNagatoPrintEnd("非実行が選択された場合は起動せずに消去される。\n");
    YukiNagatoPrint("Ready?");
    
    while ((c = _getch()) == '\r') return 0;
    YukiNagatoPrintFirst("その選択をしたのがあなた自身であるならば、異論はない。\n");
    
    YukiNagatoPrintFirst("ありがとう。\n");

    YukiNagatoPrintFirst("また、どこかで。\n");

    Sleep(1000);
    return 0;
}
