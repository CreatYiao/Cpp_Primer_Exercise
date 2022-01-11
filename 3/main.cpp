#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>
#include <cstring>

using namespace std;

/* 练习3.43-练习3.45 2021.6.21 */
//int main(){
//    constexpr size_t rowCnt = 3, colCnt = 4;
//    int ia[rowCnt][colCnt];
//    for( size_t i=0; i != rowCnt; ++i )//按照位次为数组赋值
//        for( size_t j=0; j != colCnt; ++j )
//            ia[i][j] = colCnt * i + j;
//
//    //第一种输出方式（范围for）
//    for( int (&p)[colCnt] : ia ){
//        for( int &q : p )
//            cout << q << " ";
//        cout << endl;
//    }

    //第二种输出方式（下标）
//    for(size_t i=0; i != rowCnt; ++i){
//        for(size_t j=0; j != colCnt; ++j)
//            cout << ia[i][j] << " ";
//        cout << endl;
//    }

    //第三种输出方式（指针）
//    for( int (*p) [4] = ia; p != ia+rowCnt; ++p ){ //定义*p指向外层数组，设置终止条件
//        for( int *q = *p; q != *p+colCnt; ++q ) //定义*q指向内层数组，设置终止条件
//            cout << *q << " ";
//        cout << endl;
//    }

    //类型别名替换输出名字
//    using int_array = int [colCnt]; //using版本
//    typedef int int_array[4]; // typedef版本
//    for(int_array *p = ia; p!=ia+rowCnt; ++p){ //指针操作
//        for(int *q = *p; q != *p+colCnt; ++q)
//            cout << *q << " ";
//        cout << endl;
//    }

    //使用auto关键字
//    for(auto &row : ia){ //范围for + auto
//        for(auto col: row)
//            cout << col << " ";
//        cout << endl;
//    }
//    for(auto *p= begin(ia); p != end(ia); ++p){ //指针+auto
//        for(auto *q = begin(*p); q != end(*p); ++q)
//            cout << *q << " ";
//        cout << endl;
//    }
//
//    return 0;
//}



/* 范围for对多维数组的指针操作 */
//int main(){
//    int ia[3][4]={{1},{2},{3}};
//    for(auto p = begin(ia); p!= end(ia); ++p)//指向第一维度的指针p，指向了一个含4个整数的数组
//        for(auto q = begin(*p); q != end(*p); ++q)//指向第二维度的指针q，指向了含4个整数数组的首位（需要对p指针进行解引用：*p）
//            cout << *q << endl;
//    return 0;
//}



/* 范围for语句处理多维数组 2021.6.21 */
//int main(){
//    constexpr size_t rowCnt = 3, colCnt = 4;
//    int ia[rowCnt][colCnt];
//    for (size_t i = 0; i!=rowCnt; ++i)//赋值
//        for(size_t j = 0; j!=colCnt; ++j)
//            ia[i][j] = i * colCnt + j;
//    for ( auto &row : ia ){//外层必须是引用，否则auto会自动转换为指针，不合法
//        for ( auto &col : row )
//            cout << col << " " ;
//        cout << endl;
//    }
//    return 0;
//}



/* 练习3.42  2021.6.21 */
//int main(){
//    int i = 0;
//    vector<int> ivec(10,20);
//    int a[10];
//    for( auto c : ivec ){
//        a[i] = c;
//        ++i;
//    }
//    for( auto c: a )
//        cout << c << " " ;
//    return 0;
//}



/* 练习3.41  2021.6.21 */
//int main(){
//    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    vector<int> ivec(begin(a), end(a));
//    for( auto c : ivec )
//        cout << c << " ";
//    return 0;
//}



/* 练习3.40  2021.6.21 */
//int main(){
//    char a1[] = "Hello";
//    char a2[] = "World!";
//    char a3[12];//下标大了会有异常输出
//    strcpy(a3, a1);
//    strcat(a3, " ");//用空格区分前后字符串，并将它们连接起来
//    strcat(a3, a2);
//    for( auto c: a3 )//输出新字符串
//        cout << c;
//
//    return 0;
//}


/* 练习3.37  2021.6.21 */
//int main(){
//    const char ca[] = {'h','e','l','l','o'};
//    const char *cp = ca;
//    while (*cp){
//        cout << *cp << endl;
//        ++cp;
//    }
//    return 0;
//}



/* 练习3.36(2)  2021.6.21 */
//int main(){
//    int cnt = 0;
//    int min;
//    vector<int> a(5,10);
//    vector<int> b(5,10);
//    if ( a.end()-a.begin() < b.end()-b.begin() )//判断长度范围
//        cout << "a<b" << endl;
//    else if ( a.end()-a.begin() > b.end()-b.begin() )
//        cout << "b<a" << endl;
//    else
//        min = a.end()-a.begin();//相等则随便取
//
//    for(int i=0; i!=min; ++i)
//        if(a[i]==b[i])//相等则cnt计数器++
//            ++cnt;
//        else if(a[i]<b[i]){//不相等直接输出结果
//            cout << "a<b" << endl;
//            break;
//        }
//        else if(a[i]>b[i]){
//            cout << "b<a" << endl;
//            break;
//        }
//
//    if( cnt == min )//相等之后还需要看看vector长度等不等长
//        cout << "a=b" << endl;
//    return 0;
//}



/* 练习3.36(1)  2021.6.21 */
//int main(){
//    int a[10], b[10];
//    int min = 0;
//    int cnt = 0;
//    cout << "请输入a数组的10个数字：" << endl;
//    for(auto &c: a)//输入a数组
//        cin >> c;
//    cout << "请输入b数组的10个数字：" << endl;
//    for(auto &c: b)//输入b数组
//        cin >> c;
//    if ( end(b)-begin(b) < end(a)- begin(a) )//判断下标范围
//        min = end(b)-begin(b);
//    else
//        min = end(a)- begin(a);
//    for(int i=0; i!=min; ++i){
//        if(a[i]==b[i])//相等则cnt计数器++
//            ++cnt;
//        else if(a[i]<b[i]){//不相等直接输出结果
//            cout << "a<b" << endl;
//            break;
//        }
//        else if(a[i]>b[i]){
//            cout << "b<a" << endl;
//            break;
//        }
//    }
//    if( (end(b)-begin(b) == end(a)- begin(a)) && (cnt == min) )//相等之后还需要看看数组长度等不等长
//        cout << "a=b" << endl;
//
//    return 0;
//}



/* 练习3.35  2021.6.21 */
//int main () {
//    int a[5] = {1,1,1,1,1};
//    int *p = a;
//    for ( ; p != end(a); ++p )
//        *p = 0;
//    for( auto c: a )
//        cout << c << " ";
//    return 0;
//}



/* 练习3.32  2021.6.21 */
//int main(){
//    int n = 0, j = 0;
//    int a[10], b[10];
//    for ( auto &c : a ){
//        c = n;
//        ++n;
//    }
//    for(int i=0; i!=10; ++i)
//        b[i] = a[i];
//    cout <<"array b is: ";
//    for (auto c : b)
//        cout << c << " " ;
//    vector<int> v(10);
//    for(auto &c : v){
//        c = j;
//        ++j;
//    }
//    cout <<endl << "vector v is: ";
//    for( auto c: v )
//        cout << c << " ";
//
//    return 0;
//}



/* 练习3.31  2021.6.21 */
//int main(){
//    int n = 0;
//    int a[10];
//    for ( auto &c : a ){
//        c = n;
//        ++n;
//    }
//    for( auto c : a )
//        cout << c << " ";
//    return 0;
//}


/* 练习3.25  2021.6.21 */
//int main(){
//    unsigned j;
//    vector<unsigned> score(11,0);
//    unsigned grade;
//
//    while(cin >> grade){
//        j = grade/10;
//        ++ *(score.begin()+j);
//    }
//
//    for(auto c : score)
//        cout << c << " ";
//
//    return 0;
//}



/* 练习3.24 2021.6.21 */
//int main(){
//    int x;
//    vector<int> v(10);
//    for(auto a=v.begin(); a !=v.end(); ++a){
//        cin >> x;
//        *a = x;
//    }
//    for(auto i = v.begin(), j = v.end(); (i != j) && (i != j-1); ++i, --j){
//        int n = *i + *(j-1);
//        cout << n << " " ;
//    }
//
//    return 0;
//}



/* 练习3.8  2021.6.20 */
//int main(){
//    vector<int> v1(10,42) ;
//    vector<int> v2 ;
//    for(decltype( v2.size()) i=0; i!=10; ++i )
//        v2.push_back(42);
//    vector<int> v3{42,42,42,42,42,42,42,42,42,42};
//    for( auto a : v3)
//        cout << a << " " ;
//    return 0 ;
//}
