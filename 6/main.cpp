#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>
#include <stdexcept>
#include <cassert>
#include <stdio.h>

using namespace std;

///* 练习6.55-6.56  2021.6.25 */ /* 指向函数的指针 */
//int add(int a, int b){
//    return a + b;
//}
//int subtraction(int a, int b){
//    return a - b;
//}
//int multiply(int a, int b){
//    return a * b;
//}
//int division(int a, int b){
//    return  a / b;
//}
//int (*ap)(int , int ); //全局声明：指针指向函数【形参声明都一样，会不会指向同一个函数呢？】
//int (*sp)(int , int );
//int (*mp)(int , int );
//int (*dp)(int , int );
//
//int main(){
//    ap = &add;//指针指向函数
//    sp = &subtraction;
//    mp = &multiply;
//    dp = &division;
//  //    printf("%p %p %p %p",ap,sp,mp,dp); //C风格语句，直接输出指针地址
//  //    int a = ap(1, 2);   cout << a << " "; //检查是否调用成功
//  //    int s = sp(1, 2);   cout << s << " ";
//  //    int m = mp(1, 2);   cout << m << " ";
//  //    int d = dp(1, 2);   cout << d << endl;
//    vector<decltype(ap)> p {ap, sp, mp, dp};
//    for(auto &c: p) //输出的结果都是1，【为什么？】指针指向了同一个地点吗？int型函数调用成功运行无误后返回1
//        cout << &c << " "; //为了得到输出指针地址的结果，必须！加上取地址符，否则全是1
//    return 0;
//}



///* 练习6.54  2021.6.25 */
//int a(int, int);
//using ap = int(*)(int, int); //ap是一个指向a的指针
//int main(){
//    vector<ap> p;
//    return 0;
//}



///* 练习6.53  2021.6.25 */
//int calc(int&);
//int calc(const int&);
//int calc(char*);
//int calc(const char*);
//  //int calc(char* const); //与char*重复



///* 练习6.51  2021.6.25 */
//void f(){
//    cout << "This is f()" << endl;
//}
//void f(int){
//    cout << "This is f(int)" << endl;
//}
//void f(int, int){
//    cout << "This is f(int, int)" << endl;
//}
//void f(double, double){
//    cout << "This is f(double, double)" << endl;
//}
//int main(){
//  //    f(2.56,42); //call of overloaded 'f(double, int)' is ambiguous
//    f(42);
//    f(42,0);
//    f(2.56,3.14);
//    return 0;
//}



///* 练习6.47  2021.6.25 */
//int printvec(vector<int>::iterator beg, vector<int>::iterator end){ //传入vector的首迭代器和指向尾后元素的迭代器
//  //    assert(beg == end); //递归直接报错
//    if (beg != end){ //没有到尾后时，遍历输出
//        cout << "当前vector大小：" << end-beg << "\t" << "当前vector元素：" << *beg << endl;
//        return printvec(++beg, end);
//    }
//    return 0; //到尾后则返回
//}
//int main(){
//    vector<int> ivec = {0,1,2,3,4,5,6,7,8,9};
//    printvec( ivec.begin(), ivec.end() );
//    return 0;
//}



///* 练习6.46  2021.6.25 */
//constexpr bool isShorter(const string &s1, const string &s2){
//    //error: body of constexpr function 'constexpr bool isShorter(const string&, const string&)' not a return-statement
//    constexpr bool r = s1.size() < s2.size();
//    return r;
//}
//int main(){
//    string s1 = "success", s2 = "win";
//    cout << "Is s1: " << s1 << ", shorter than s2: " << s2 << " ? Y(1)/N(0) " << endl << isShorter(s1, s2) <<endl;
//    return 0;
//}



///* 练习6.44  2021.6.25 */
//inline bool isShorter(const string &s1, const string &s2){
//    return s1.size() < s2.size();
//}
//int main(){
//    string s1 = "success", s2 = "win";
//    cout << "Is s1: " << s1 << ", shorter than s2: " << s2 << " ? Y(1)/N(0) " << endl <<isShorter(s1, s2) <<endl;
//    return 0;
//}



///* 练习6.42   2021.6.25 */
//string make_plural(size_t ctr, const string &word, const string &endiing = "s"){ //ending被赋予默认形参“s”
//    return (ctr > 1) ? word + endiing : word;
//}
//int main(){
//    string s1 = "success", s2 = "failure";
//    s1 = make_plural(1, s1); //输出success单数形式
//    s2 = make_plural(2, s2); //输出failure复数形式
//    cout << s1 << " " << s2 << endl;
//    return 0;
//}



///* 练习6.38   2021.6.25 */
//int odd[] = {1,3,5,7,9};
//int even[] = {0,2,4,6,8};
///*undefined reference to `WinMain' ：*/
//decltype(odd) &arrPtr(int i){ //未定义的引用？
//    return (i % 2) ?  odd : even;
//}
//int (&arrPtr2 (int i) ) [5]; //声明一个返回值为数组的引用的函数arrPtr2



///* 练习6.36-37   2021.6.25 */ /* as3是尾置返回类型 */
//string (&as1(/* 里面放东西 */))[10]; //一定要记得声明数组的引用和指针的时候，维数放到形参后面，且用括号括起来
//
//typedef string arrT[10]; //类型别名声明了十个元素的string数组，并非指针
//arrT* as2(/* 里面放东西 */); //所以还需要加上*
//
//auto as3(/* 里面放东西 */) -> string(*) [10]; //尾置返回类型需在string后面加上（*）说明是string[10]数组的指针
//
//string s[10];
//decltype(s) *as4(/* 里面放东西 */); //decltype返回s数组的类型，声明指针还需加*



///* 练习6.33   2021.6.25 */
//int printvec(vector<int>::iterator beg, vector<int>::iterator end){ //传入vector的首迭代器和指向尾后元素的迭代器
//    if (beg != end){ //没有到尾后时，遍历输出
//        cout << *beg << " ";
//        return printvec(++beg, end);
//    }
//    return 0; //到尾后则返回
//}
//int main(){
//    vector<int> ivec = {0,1,2,3,4,5,6,7,8,9};
//    printvec( ivec.begin(), ivec.end() );
//    return 0;
//}



///* 练习6.32   2021.6.25 */
//int &get(int *array, int index){
//    return array[index];
//}
//int main(){
//    int ia[10];
//    for (int i = 0; i != 10; ++i)
//        get(ia, i) = i;
//    for ( auto c : ia )
//        cout << c << " ";
//}



///* 练习6.30   2021.6.25 */
//bool str_subrange(const string &str1, const string &str2){
//    if(str1.size() == str2.size())
//        return str1 == str2;
//    auto size = (str1.size() < str2.size())
//                ? str1.size() : str2.size();
//    for(decltype(size) i = 0; i != size; ++i){
//        if (str1[i] != str2[i])
//            return ; //return-statement with no value, in function returning 'bool' [-fpermissive]
//    }
//    //此处没有return，编译器没有检查出来
//}



///* 练习6.27   2021.6.25 */
//int add(initializer_list<int> digit){
//    int sum = 0;
//    for ( auto c : digit ) //对传入的整型参数进行求和
//        sum +=c;
//    return sum;
//}
//int main(){
//    int s;
//    s = add({1,2,3,4,5,6,7,8,9,10}); //初始化initializer_list<T>需用花括号
//    cout << "The sum is " << s << endl;
//    return 0;
//}



///* 练习6.26   2021.6.25 */
//int main(int argc, char *argv[]){ //接收并分行输出
//    cout << "argc=" << argc << endl;
//    for(size_t i = 0; i != argc; ++i ){ //argv的数据从[1]开始，因为[0]是可执行文件名
//        cout << argv[i] << endl;
//    }
//    return 0;
//}



///* 练习6.25   2021.6.25 */
//int main(int argc, char *argv[]){ //接收输入并串在一起 输出
//    string s;
//    cout << "argc=" << argc << endl;
//    for(size_t i = 0; i != argc; ++i ){
//        s = s + " " + argv[i];
//    }
//    cout << "string is " << s << endl;
//    return 0;
//}



///* 练习6.24   2021.6.24 */
//void print(const int ia[], size_t a){ //修改：传入数组长度参量即可
//    for(size_t i=0; i != a; ++i) //不可以在函数内使用sizeof(ia)/sizeof(*ia)获取数组长度
//        cout << ia[i] << endl;
//}
//int main(){
//    int i[10] = {0,1,2,3,4,5,6,7};
//    size_t a = sizeof(i)/sizeof(*i);
//    print(i, a);
//    return 0;
//}



///* 练习6.23   2021.6.24 */
//void print(const int a){
//    cout << a << endl;
//}
//void print(const int *beg, const int *end){ //传递头指针和指向尾元素下一位的指针
//    while( beg != end )
//        cout << *beg++ << " ";
//}
//int main(){
//    int i = 0, j[2] = {0, 1};
//    print(i);
//    print(begin(j), end(j));
//    return 0;
//}



///* 练习6.22   2021.6.24 */
//void chg(int *a, int *b){ //交换两个指针（仅限函数体内有效）
//    int *i = b;
//    b = a;
//    a = i;
//    cout << "After change, *a is " << *a << " *b is " << *b << endl;
//}
//int main(){
//    int m = 3, n = 30;
//    int *a = &m, *b = &n;
//    cout << "Before change, *a is " << *a << " *b is " << *b << endl;
//    chg(a, b);
//    return 0;
//}



///* 练习6.21   2021.6.24 */
//int maxcmp(int a, int *b){
//    if(a < *b)
//        return *b;
//    else
//        return a;
//}
//int main(){
//    int m, n;
//    cin >> m >> n;
//    int *i = &n;
//    cout << "The max number is " << maxcmp(m, i) << endl;
//    return 0;
//}



///* 练习6.18   2021.6.24 */
//struct matrix{  };
//
//bool compare(matrix &a, matrix &b);
//
//vector<int>::iterator change_val(int i, vector<int>::iterator ivec);



///* 练习6.17   2021.6.24 */
//bool Isupper(const string &s){ //bool类型函数判断字符串中是否含有大写字母
//    for( auto c : s )
//        if(isupper(c)) //如果有大写字母则直接输出结果为真
//            return true;
//        return false; //遍历后依然没有发现大写字母则输出为假
//}
//void Tolower(string &s){
//    for( auto &c : s ) //改变s中大写字母为小写【一定要记得引用！！！不然不能改】
//        if( !islower(c) )
//            c = tolower(c);
//}
//int main(){
//    string str = "Hello World";
//    cout << "原始字符串为：" << str << endl;
//    if( Isupper(str) ){
//        cout << "该字符串中有大写字母。" << endl;
//        cout << "现在将它的字母全改成小写：" << endl;
//        Tolower(str);
//        cout << str << endl;
//    }
//    else
//        cout << "该字符串中无大写字母" << endl;
//    return 0;
//}



///* 练习6.11-6.12   2021.6.24 */
//void reset_change2(int &a, int &b){ //利用传引用形参交换两个整数
//    int tmp;
//    tmp = a;
//    a = b;
//    b = tmp;
//}
//int main(){
//    int m = 2, n = 7;
//    cout << "Before change, m=" << m << ", n=" << n << endl;
//    reset_change2(n,m);
//    cout << "After change, m=" << m << ", n=" << n << endl;
//    return 0;
//}



///* 练习6.10   2021.6.24 */
//void change(int *a, int *b){ //利用指针形参交换两个整数
//    int tmp;
//    tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//int main(){
//    int m = 2, n = 7;
//    cout << "Before change, m=" << m << ", n=" << n << endl;
//    change(&n,&m);
//    cout << "After change, m=" << m << ", n=" << n << endl;
//    return 0;
//}



///* 练习6.6-6.7   2021.6.24 */
//int cnt( ){ //调用一次cnt函数，返回值+1
//    static int c = -1; //第一次返回能是0
//    return ++c;
//}
//int main() {
//    int size = 5;
//    for(int i = 0; i != size; ++i)
//        cout << cnt() << endl;
//    return 0;
//}



///* 练习6.5   2021.6.24 */
//int abs1(int val){ //abs函数求实参val的绝对值
//    if(val >= 0)
//        return val;
//    else
//        return -val;
//}
//int main() {
//    int a;
//    cout << "请输入一个数，得到他的绝对值：" << endl;
//    cin >> a;
//    cout << "|" << a << "| = " << abs1(a) << endl;
//    return 0;
//}



///* 练习6.3-6.4   2021.6.24 */
//int fact(int val){ //fact函数求形参val的阶乘
//    int i = 1;
//    while(val>1)
//        i *= val--;
//    return i;
//}
//int main() {
//    int a;
//    cout << "请输入一个数，计算它的阶乘：" << endl;
//    cin >> a;
//    cout << a << "! = " << fact(a) << endl;
//    return 0;
//}