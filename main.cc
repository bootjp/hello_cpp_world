//
// Created by bootjp on 2020/10/08.
//

//#include "main.h"
#include "iostream"
#include "random"
//#include "int"


int main() {


//   printf("Hello, World!");
//    std::cout << "Hello, World!" << std::endl;
    int* p = nullptr;
    std::cout << p << std::endl;
//    printf("%d", p);


//    std::rand()
//    int main() {
    int n = 3;
//    n += 1;1
    std::random_device rand;
    std::mt19937 mt(rand());
    std::uniform_int_distribution<> rand1(1, 4);
    switch (rand1(mt)) {
        case 1:
        case 2: //caseの間に1つも文がなければフォールスルーは警告されない
            std::cout << "case 2\n";
            [[fallthrough]];
        case 3: //[[fallthrough]]属性の記述によりフォールスルー警告は無効化される
            std::cout << "case 3\n";
        case 4: //コンパイラがフォールスルーを警告する
            std::cout << "case 4\n";
            //[[fallthrough]]; //最後のcaseには記述できない、コンパイルエラーになる
    }

//    len


    std::string s = "🍣";


    std::cout << s[0]a[1] << std::endl;   // 'H'
    std::cout << s << std::endl;  // 'e'
//    s[2];   // 'l'
//    s[3];   // 'l'
//    s[4];   // 'o'
    return 0;
}
