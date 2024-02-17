#include <iostream>
#include<string>
#include <windows.h>
#include <conio.h>

void YukiNagatoPrint(const std::string str) {
    //Sleep(1000);
    const int n = str.size();
    printf("YUKI.N> ");
    for (int i = 0; i < n; ++i) {
        printf("%c", str.at(i));
        if (i > 2) {
            if (str.substr(i - 2, std::string("。").length()) == "。") { Sleep(1000); }
            else if (str.substr(i - 2, std::string("、").length()) == "、") Sleep(500);
        }
        Sleep(50);
    }
}

int main(){
    int c;
    Sleep(1000);
    
    YukiNagatoPrint("これをあなたが読んでいる時、わたしはわたしでないだろう。\n\n");
    
    YukiNagatoPrint("このメッセージが表示されたということは、そこにはあなた、わたし、涼宮ハルヒ、朝比奈みくる、古泉一樹が存在しているはずである。\n\n");
    
    YukiNagatoPrint("それが鍵。あなたは解答を見つけ出した。\n\n");
    
    YukiNagatoPrint("これは緊急脱出プログラムである。起動させる場合はエンターキーを、そうでない場合はそれ以外のキーを選択せよ。起動させた場合、あなたは時空修正の機会を得る。ただし成功は保証できない。また帰還の保証もできない。\n\n");
    
    YukiNagatoPrint("このプログラムが起動するのは一度きりである。実行ののち、消去される。非実行が選択された場合は起動せずに消去される。 Ready?");

    while ((c = _getch()) == '\r') { 
        return 0; 
    }
    puts("\n");

    YukiNagatoPrint("その選択をしたのがあなた自身であるならば、異論はない。\n\n");
    
    YukiNagatoPrint("ありがとう。\n\n");

    YukiNagatoPrint("また、どこかで。\n\n");

    YukiNagatoPrint("God bless...");

    Sleep(1000);
    return 0;
}
