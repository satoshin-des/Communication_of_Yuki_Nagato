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

int main() {
    std::string kyon;

    YukiNagatoPrintFirst("みえてる？\n");

    printf("KYON> ");
    std::cin >> kyon; puts("");

    if (kyon == "いや" || kyon == "見えない" || kyon == "いや。" || kyon == "見えない。" || kyon == "みえない" || kyon == "みえない。" || kyon == "みえてない" || kyon == "みえてない。" || kyon == "見えてない" || kyon == "見えてない。") {
        YukiNagatoPrintFirst("今はつまらない冗談をいっている場合ではない。\n");
    }

    YukiNagatoPrintEndFirst("そっちの時空間とはまだ完全に連結を絶たれていない。");
    YukiNagatoPrintEnd("でも時間の問題。");
    YukiNagatoPrint("そうなれば最後。\n");

    printf("KYON> ");
    std::cin >> kyon; puts("");

    YukiNagatoPrintEndFirst("どうにもならない。");
    YukiNagatoPrintEnd("情報統合思念体は失望している。");
    YukiNagatoPrint("これで進化の可能性は失われた。\n");

    YukiNagatoPrintEndFirst("涼宮ハルヒは何もない所から情報を生み出す力を持っていたそれは情報統合思念体にもない力。");
    YukiNagatoPrint("この情報創造能力を解析すれば自律進化の糸口がつかめるかもしれないと考えた\n");

    YukiNagatoPrintFirst("あなたに賭ける\n");

    printf("KYON> ");
    std::cin >> kyon; puts("");

    if (kyon == "いや" || kyon == "やだ" || kyon == "いや。" || kyon == "やだ。") {
        YukiNagatoPrintFirst("あなたに拒否権はない。\n");
    }

    YukiNagatoPrintEndFirst("もう一度こちらへ回帰することを我々は望んでる。");
    YukiNagatoPrintEnd("涼宮ハルヒは重要な監視対象。");
    YukiNagatoPrint("わたしという固体もあなたには戻ってきて欲しいと感じている\n");

    YukiNagatoPrintFirst("また図書館に\n");

    YukiNagatoPrintFirst("sleeping deauty");

    Sleep(1000);

    return 0;
}