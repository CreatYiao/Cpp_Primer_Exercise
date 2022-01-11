#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>
#include <cstring>

using namespace std;

/* 练习4.33  2021.6.22 */
//int main() {
//    int x = 0, y = 10;
//    int someValue = 1;
//    //someValue为假，则执行--x， --y（输出0 -1 9）
//    //someValue为真，则执行++x，++y --y？（输出1 1 10）
//    // ！新注释！：--x作为三元运算符的第三项，因为被，隔开，所以--y不参与运算
//    someValue ? ++x, ++y : --x, --y;
//    cout << someValue << " " << x <<" " << y << endl;
//    return 0;
//}



/* 练习4.31  2021.6.22 */  /* ！！有点懵！！ */
//int main() {
//    vector<int> ivec{2,2,4,4};
//    vector<int>::size_type cnt = ivec.size();
//    for(vector<int>::size_type ix = 0; ix != ivec.size(); ix++, cnt--)
//        ivec[ix] = cnt;
//    for(auto c: ivec)
//        cout << c << " ";
//    return 0;
//}



/* 练习4.28  2021.6.22 */
//int main(){
//    short sh = 0;
//    int in = 0;
//    long lo = 0;
//    long long ll = 0;
//    float fl = 0.0;
//    double db = 0.0;
//    long double ld= 0.0;
//    char ch = '0';
//    bool a = true;
//    cout << "The size of short is " << sizeof(sh) << endl;
//    cout << "The size of int is " << sizeof(in) << endl;
//    cout << "The size of long is " << sizeof(lo) << endl;
//    cout << "The size of long long is " << sizeof(ll) << endl;
//    cout << "The size of float is " << sizeof(fl) << endl;
//    cout << "The size of double is " << sizeof(db) << endl;
//    cout << "The size of long double is " << sizeof(ld) << endl;
//    cout << "The size of char is " << sizeof(ch) << endl;
//    cout << "The size of bool is " << sizeof(a) << endl;
//    return 0;
//}



/* 练习4.22 2021.6.22 */
//int main(){
//    unsigned grade = 0;
//    cin >> grade;
//    string finalgrade;
    //嵌套条件运算符
//    finalgrade = (grade>90) ? "high pass"//高于90
//                                    : ((grade<=75) && (grade>=60)) ? "low pass"//60到75之间
//                                                                    : (grade<60) ? "fail" : "pass";//不及格

//    //if语句
//    if(grade>90)
//        finalgrade = "high pass";
//    else if((grade >= 60) && (grade <= 75))
//        finalgrade = "low pass";
//    else if(grade<60)
//        finalgrade = "fail";
//    else
//        finalgrade = "pass";
//
//    cout << finalgrade;//输出成绩
//    return 0;
//}



/* 练习4.21 2021.6.22 */
//int main(){
//    vector<int> v;
//    v = {0,1,2,3,4,5,6,7,8,9};
//    for ( auto &c : v ){
//        (c%2==0) ? c=c : c=c*2;
//        cout << c << " ";
//    }
//    return 0;
//}



/* 练习4.10 2021.6.21 */
//int main(){
//    int x=0;
//    vector<int> v;
//    while(x!=42){
//        cin >> x;
//        v.push_back(x);
//    }
//    for(auto c : v)
//        cout << c << " ";
//    return 0;
//}