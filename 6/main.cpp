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

///* ��ϰ6.55-6.56  2021.6.25 */ /* ָ������ָ�� */
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
//int (*ap)(int , int ); //ȫ��������ָ��ָ�������β�������һ�����᲻��ָ��ͬһ�������أ���
//int (*sp)(int , int );
//int (*mp)(int , int );
//int (*dp)(int , int );
//
//int main(){
//    ap = &add;//ָ��ָ����
//    sp = &subtraction;
//    mp = &multiply;
//    dp = &division;
//  //    printf("%p %p %p %p",ap,sp,mp,dp); //C�����䣬ֱ�����ָ���ַ
//  //    int a = ap(1, 2);   cout << a << " "; //����Ƿ���óɹ�
//  //    int s = sp(1, 2);   cout << s << " ";
//  //    int m = mp(1, 2);   cout << m << " ";
//  //    int d = dp(1, 2);   cout << d << endl;
//    vector<decltype(ap)> p {ap, sp, mp, dp};
//    for(auto &c: p) //����Ľ������1����Ϊʲô����ָ��ָ����ͬһ���ص���int�ͺ������óɹ���������󷵻�1
//        cout << &c << " "; //Ϊ�˵õ����ָ���ַ�Ľ�������룡����ȡ��ַ��������ȫ��1
//    return 0;
//}



///* ��ϰ6.54  2021.6.25 */
//int a(int, int);
//using ap = int(*)(int, int); //ap��һ��ָ��a��ָ��
//int main(){
//    vector<ap> p;
//    return 0;
//}



///* ��ϰ6.53  2021.6.25 */
//int calc(int&);
//int calc(const int&);
//int calc(char*);
//int calc(const char*);
//  //int calc(char* const); //��char*�ظ�



///* ��ϰ6.51  2021.6.25 */
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



///* ��ϰ6.47  2021.6.25 */
//int printvec(vector<int>::iterator beg, vector<int>::iterator end){ //����vector���׵�������ָ��β��Ԫ�صĵ�����
//  //    assert(beg == end); //�ݹ�ֱ�ӱ���
//    if (beg != end){ //û�е�β��ʱ���������
//        cout << "��ǰvector��С��" << end-beg << "\t" << "��ǰvectorԪ�أ�" << *beg << endl;
//        return printvec(++beg, end);
//    }
//    return 0; //��β���򷵻�
//}
//int main(){
//    vector<int> ivec = {0,1,2,3,4,5,6,7,8,9};
//    printvec( ivec.begin(), ivec.end() );
//    return 0;
//}



///* ��ϰ6.46  2021.6.25 */
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



///* ��ϰ6.44  2021.6.25 */
//inline bool isShorter(const string &s1, const string &s2){
//    return s1.size() < s2.size();
//}
//int main(){
//    string s1 = "success", s2 = "win";
//    cout << "Is s1: " << s1 << ", shorter than s2: " << s2 << " ? Y(1)/N(0) " << endl <<isShorter(s1, s2) <<endl;
//    return 0;
//}



///* ��ϰ6.42   2021.6.25 */
//string make_plural(size_t ctr, const string &word, const string &endiing = "s"){ //ending������Ĭ���βΡ�s��
//    return (ctr > 1) ? word + endiing : word;
//}
//int main(){
//    string s1 = "success", s2 = "failure";
//    s1 = make_plural(1, s1); //���success������ʽ
//    s2 = make_plural(2, s2); //���failure������ʽ
//    cout << s1 << " " << s2 << endl;
//    return 0;
//}



///* ��ϰ6.38   2021.6.25 */
//int odd[] = {1,3,5,7,9};
//int even[] = {0,2,4,6,8};
///*undefined reference to `WinMain' ��*/
//decltype(odd) &arrPtr(int i){ //δ��������ã�
//    return (i % 2) ?  odd : even;
//}
//int (&arrPtr2 (int i) ) [5]; //����һ������ֵΪ��������õĺ���arrPtr2



///* ��ϰ6.36-37   2021.6.25 */ /* as3��β�÷������� */
//string (&as1(/* ����Ŷ��� */))[10]; //һ��Ҫ�ǵ�������������ú�ָ���ʱ��ά���ŵ��βκ��棬��������������
//
//typedef string arrT[10]; //���ͱ���������ʮ��Ԫ�ص�string���飬����ָ��
//arrT* as2(/* ����Ŷ��� */); //���Ի���Ҫ����*
//
//auto as3(/* ����Ŷ��� */) -> string(*) [10]; //β�÷�����������string������ϣ�*��˵����string[10]�����ָ��
//
//string s[10];
//decltype(s) *as4(/* ����Ŷ��� */); //decltype����s��������ͣ�����ָ�뻹���*



///* ��ϰ6.33   2021.6.25 */
//int printvec(vector<int>::iterator beg, vector<int>::iterator end){ //����vector���׵�������ָ��β��Ԫ�صĵ�����
//    if (beg != end){ //û�е�β��ʱ���������
//        cout << *beg << " ";
//        return printvec(++beg, end);
//    }
//    return 0; //��β���򷵻�
//}
//int main(){
//    vector<int> ivec = {0,1,2,3,4,5,6,7,8,9};
//    printvec( ivec.begin(), ivec.end() );
//    return 0;
//}



///* ��ϰ6.32   2021.6.25 */
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



///* ��ϰ6.30   2021.6.25 */
//bool str_subrange(const string &str1, const string &str2){
//    if(str1.size() == str2.size())
//        return str1 == str2;
//    auto size = (str1.size() < str2.size())
//                ? str1.size() : str2.size();
//    for(decltype(size) i = 0; i != size; ++i){
//        if (str1[i] != str2[i])
//            return ; //return-statement with no value, in function returning 'bool' [-fpermissive]
//    }
//    //�˴�û��return��������û�м�����
//}



///* ��ϰ6.27   2021.6.25 */
//int add(initializer_list<int> digit){
//    int sum = 0;
//    for ( auto c : digit ) //�Դ�������Ͳ����������
//        sum +=c;
//    return sum;
//}
//int main(){
//    int s;
//    s = add({1,2,3,4,5,6,7,8,9,10}); //��ʼ��initializer_list<T>���û�����
//    cout << "The sum is " << s << endl;
//    return 0;
//}



///* ��ϰ6.26   2021.6.25 */
//int main(int argc, char *argv[]){ //���ղ��������
//    cout << "argc=" << argc << endl;
//    for(size_t i = 0; i != argc; ++i ){ //argv�����ݴ�[1]��ʼ����Ϊ[0]�ǿ�ִ���ļ���
//        cout << argv[i] << endl;
//    }
//    return 0;
//}



///* ��ϰ6.25   2021.6.25 */
//int main(int argc, char *argv[]){ //�������벢����һ�� ���
//    string s;
//    cout << "argc=" << argc << endl;
//    for(size_t i = 0; i != argc; ++i ){
//        s = s + " " + argv[i];
//    }
//    cout << "string is " << s << endl;
//    return 0;
//}



///* ��ϰ6.24   2021.6.24 */
//void print(const int ia[], size_t a){ //�޸ģ��������鳤�Ȳ�������
//    for(size_t i=0; i != a; ++i) //�������ں�����ʹ��sizeof(ia)/sizeof(*ia)��ȡ���鳤��
//        cout << ia[i] << endl;
//}
//int main(){
//    int i[10] = {0,1,2,3,4,5,6,7};
//    size_t a = sizeof(i)/sizeof(*i);
//    print(i, a);
//    return 0;
//}



///* ��ϰ6.23   2021.6.24 */
//void print(const int a){
//    cout << a << endl;
//}
//void print(const int *beg, const int *end){ //����ͷָ���ָ��βԪ����һλ��ָ��
//    while( beg != end )
//        cout << *beg++ << " ";
//}
//int main(){
//    int i = 0, j[2] = {0, 1};
//    print(i);
//    print(begin(j), end(j));
//    return 0;
//}



///* ��ϰ6.22   2021.6.24 */
//void chg(int *a, int *b){ //��������ָ�루���޺���������Ч��
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



///* ��ϰ6.21   2021.6.24 */
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



///* ��ϰ6.18   2021.6.24 */
//struct matrix{  };
//
//bool compare(matrix &a, matrix &b);
//
//vector<int>::iterator change_val(int i, vector<int>::iterator ivec);



///* ��ϰ6.17   2021.6.24 */
//bool Isupper(const string &s){ //bool���ͺ����ж��ַ������Ƿ��д�д��ĸ
//    for( auto c : s )
//        if(isupper(c)) //����д�д��ĸ��ֱ��������Ϊ��
//            return true;
//        return false; //��������Ȼû�з��ִ�д��ĸ�����Ϊ��
//}
//void Tolower(string &s){
//    for( auto &c : s ) //�ı�s�д�д��ĸΪСд��һ��Ҫ�ǵ����ã�������Ȼ���ܸġ�
//        if( !islower(c) )
//            c = tolower(c);
//}
//int main(){
//    string str = "Hello World";
//    cout << "ԭʼ�ַ���Ϊ��" << str << endl;
//    if( Isupper(str) ){
//        cout << "���ַ������д�д��ĸ��" << endl;
//        cout << "���ڽ�������ĸȫ�ĳ�Сд��" << endl;
//        Tolower(str);
//        cout << str << endl;
//    }
//    else
//        cout << "���ַ������޴�д��ĸ" << endl;
//    return 0;
//}



///* ��ϰ6.11-6.12   2021.6.24 */
//void reset_change2(int &a, int &b){ //���ô������βν�����������
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



///* ��ϰ6.10   2021.6.24 */
//void change(int *a, int *b){ //����ָ���βν�����������
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



///* ��ϰ6.6-6.7   2021.6.24 */
//int cnt( ){ //����һ��cnt����������ֵ+1
//    static int c = -1; //��һ�η�������0
//    return ++c;
//}
//int main() {
//    int size = 5;
//    for(int i = 0; i != size; ++i)
//        cout << cnt() << endl;
//    return 0;
//}



///* ��ϰ6.5   2021.6.24 */
//int abs1(int val){ //abs������ʵ��val�ľ���ֵ
//    if(val >= 0)
//        return val;
//    else
//        return -val;
//}
//int main() {
//    int a;
//    cout << "������һ�������õ����ľ���ֵ��" << endl;
//    cin >> a;
//    cout << "|" << a << "| = " << abs1(a) << endl;
//    return 0;
//}



///* ��ϰ6.3-6.4   2021.6.24 */
//int fact(int val){ //fact�������β�val�Ľ׳�
//    int i = 1;
//    while(val>1)
//        i *= val--;
//    return i;
//}
//int main() {
//    int a;
//    cout << "������һ�������������Ľ׳ˣ�" << endl;
//    cin >> a;
//    cout << a << "! = " << fact(a) << endl;
//    return 0;
//}