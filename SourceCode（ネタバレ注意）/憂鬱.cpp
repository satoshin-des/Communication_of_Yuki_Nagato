#include <iostream>
#include<string>
#include <windows.h>

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

int main() {
    std::string kyon;

    YukiNagatoPrint("みえてる？\n\n");

    printf("KYON> ");
    std::cin >> kyon; puts("");

    if (kyon == "いや" || kyon == "見えない" || kyon == "いや。" || kyon == "見えない。" || kyon == "みえない" || kyon == "みえない。" || kyon == "みえてない" || kyon == "みえてない。" || kyon == "見えてない" || kyon == "見えてない。") {
        YukiNagatoPrint("今はつまらない冗談をいっている場合ではない。\n\n");
    }

    YukiNagatoPrint("そっちの時空間とはまだ完全に連結を絶たれていない。でも時間の問題。そうなれば最後。\n\n");

    printf("KYON> ");
    std::cin >> kyon; puts("");

    YukiNagatoPrint("どうにもならない。情報統合思念体は失望している。これで進化の可能性は失われた。\n\n");

    YukiNagatoPrint("涼宮ハルヒは何もない所から情報を生み出す力を持っていた。\n");
    YukiNagatoPrint("それは情報統合思念体にもない力。この情報創造能力を解析すれば自律進化の糸口がつかめるかもしれないと考えた。\n");
    YukiNagatoPrint("あなたに賭ける。\n\n");

    printf("KYON> ");
    std::cin >> kyon; puts("");

    if (kyon == "いや" || kyon == "やだ" || kyon == "いや。" || kyon == "やだ。") {
        YukiNagatoPrint("あなたに拒否権はない。\n\n");
    }

    YukiNagatoPrint("もう一度こちらへ回帰することを我々は望んでる。涼宮ハルヒは重要な監視対象。わたしという固体もあなたには戻ってきて欲しいと感じている。\n\n");

    YukiNagatoPrint("また図書館に\n\n");

    YukiNagatoPrint("sleeping deauty\n\n");

    Sleep(1000);

    return 0;
}