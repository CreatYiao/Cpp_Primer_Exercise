#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>
#include <stdexcept>

using namespace std;


///* 练习5.23-5.25 两整数相除，除数不得为零！  2021.6.23 */
//int main() {
//    int a, b;
//    double c;
//    begin: //如果除数为零，用户自由选择执行重新输入的接口
//        try{
//            cout << "Please enter two digits:" << endl;
//            cin >> a >> b;
//            if(b == 0) //如果除数为零，抛出异常
//                throw out_of_range("The divisor cannot be zero!");
//        }
//        catch(out_of_range err) { //处理异常
//            cout << err.what() //输出异常提示
//                    << "\nTry it again? Enter y or n:" << endl; //询问是否进行下一步操作
//            char c;
//            cin >> c; //记录用户所输入
//            if( !c || c=='y' ) //用户重新输入
//                goto begin; //跳转到try之前，重新执行判断体
//            else{
//                cerr << "The divisor cannot be zero!" << endl; //用户终止输入，输出非法提示，返回-1
//                return -1;
//            }
//        }
//    c = 1.0*a / b; //乘1.0转化成double（好像是float）型
//    cout << "a/b=" << c << endl;
//    return 0;
//}



///* 练习5.21  2021.6.23 */
//int main() {
//    int cnt = 0;
//    string s, tmp;
//    while( cin >> s && !s.empty()){
//        if( !isupper(s[0]) ){//不是大写的字母，则重新输入
//            cout << "请输入首字母大写的单词！" << endl;
//            continue;
//        }
//        if( tmp == s){ // 判断是否以大写开头
//            cout << "输入连续且重复的单词，且以大写开头的是 " << tmp << endl;
//            cnt = 0;
//            break; //当出现连续出现的单词则输出该单词并终止循环
//        }
//        ++cnt;
//        tmp = s;
//    }
//    if( cnt ) //cnt不等于0（即无连续重复出现的单词时）
//        cout << "没有重复连续出现且开头为大写的单词" << endl;
//   return 0;
//}



///* 练习5.20  2021.6.23 */
//int main() {
//    int cnt = 0;
//    string s, tmp;
//    while( cin >> s ){
//        if(tmp == s){
//            cout << "输入连续且重复的单词是 " << tmp << endl;
//            cnt = 0;
//            break; //当出现连续出现的单词则输出该单词并终止循环
//        }
//        ++cnt;
//        tmp = s;
//    }
//    if( cnt ) //cnt不等于0（即无连续重复出现的单词时）
//        cout << "没有重复连续出现的单词" << endl;
//    return 0;
//}



///* 练习5.19  2021.6.23 */
//int main() {
//    string s1, s2, judge;
//    do{
//        cout << "请输入要比较长短的两个字符串：" << endl;
//        cin >> s1 >> s2;
//        if(s1.size() < s2.size())
//            cout << "较短的字符串是" << s1 << endl;
//        else
//            cout << "较短的字符串是" << s2 << endl;
//        cout << "还需要输入比较吗？yes or no：" << endl;
//        cin >> judge;
//    } while ( !judge.empty() && judge[0] != 'n') ; // do while后面记得加分号
//   return 0;
//}



///* 练习5.17  2021.6.23 */
//int main() {
//    vector<int> ivec1, ivec2;
//    ivec1 = {0, 1, 1, 2};
//    ivec2 = {0, 1, 1, 2, 3, 5, 8};
//    auto sz1 = ivec1.size(), sz2 = ivec2.size();
//    if(sz1 < sz2) { //当ivec1元素少时
//        for (int i = 0; i != sz1; ++i)
//            if (ivec1[i] != ivec2[i]) { //遇到不相同的直接输出，终止程序
//                cerr << "ivec1 较小，且 ivec1 不是 ivec2 的前缀部分" << endl;
//                return -1;
//            }
//        cout << "ivec1 较小，且ivec1 是 ivec2 的前缀部分" << endl; //都相等则输出结果
//    }
//    else if(sz2 < sz1){ //当ivec2元素少时
//        for (int i = 0; i != sz2; ++i)
//            if (ivec1[i] != ivec2[i]) { //遇到不相同的直接输出，终止程序
//                cerr << "ivec2 较小，且ivec2 不是 ivec1 的前缀部分" << endl;
//                return -1;
//            }
//        cout << "ivec2 较小，且ivec2 是 ivec1 的前缀部分" << endl; //都相等则输出结果
//    }
//    else{ //当二者大小相等时
//        for (int i = 0; i != sz2; ++i)
//            if (ivec1[i] != ivec2[i]) { //遇到不相同的直接输出，终止程序
//                cerr << "ivec1 与 ivec2 一样大，但ivec1 不是 ivec2 的前缀部分" << endl;
//                return -1;
//            }
//        cout << "ivec1 与 ivec2 一样大，且二者所含元素相等" << endl;
//    }
//    return 0;
//}



///* 练习5.14  2021.6.23 */
//int main() {
//    unsigned max = 1, tmp = 1;
//    vector<string> svec;
//    string s;
//    while( cin >> s ) //输入并保存字符串
//        svec.push_back(s);
//    auto beg = svec.begin(), pvec = svec.begin();
//    while(beg != svec.end()){
//        if( ( (beg+1) != svec.end() ) && *beg == *(beg+1)) //当前单词与下一个单词作比较，相同则max+1
//            ++max;
//        else {
//            if(tmp < max) { //当已记录的最大出现次数比当前max记录的小，则tmp记录当前最大值，指针指向当前值
//                tmp = max;
//                pvec = beg;
//            }
//            max = 1; //初始化max计数器
//        }
//        ++beg;
//    }
//    if(tmp > 1)
//        cout << "连续出现次数最多的单词是" << *pvec << "，它连续出现了" << tmp << "次" << endl;
//    else
//        cout << "每一个单词都没有连续出现过" << endl;
//    return 0;
//}



///* 练习 5.10-5.12 输入元音字母、制表空格回车、ff/fl/fi序列 数目统计 2021.6.23 */
//int main() {
//    char ch;
//    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0, //记录元音字母和其他字母
//                        t_Cnt = 0, n_Cnt = 0, s_Cnt = 0, //记录制表、空格、回车符
//                                fCnt = 0, ffCnt = 0, flCnt = 0, fiCnt = 0,  //记录f字母、ff、fl、fi序列
//                                        f_tmp = 0, t = 0; //记录上一个字母如果是f
//    while( cin.get(ch) ) //cin不读入空格与回车，改用cin.get()
//        switch(ch) { //每一行的++t用于记录总共输入了多少字符
//            case 'a' : case 'A':
//                ++t;    ++aCnt;   break; //元音a字母数字统计
//            case 'e' : case'E':
//                ++t;    ++eCnt;   break; //元音e字母数字统计
//            case 'i' : case'I':          //元音i字母数字统计
//                ++t;    ++iCnt;
//                if(t == f_tmp+1){   //判断如果上一个字母是f，则构成fi序列，fiCnt+1
//                    ++fiCnt;
//                    fCnt = 0;       //及时清零fCnt，否则对后面ff的判定有影响
//                }
//                break;
//            case 'o' : case'O':
//                ++t;    ++oCnt;   break; //元音o字母数字统计
//            case 'u' : case'U':
//                ++t;    ++uCnt;   break; //元音u字母数字统计
//
//            case '\t':
//                ++t;    ++t_Cnt;  break; //制表符统计
//            case '\n':
//                ++t;    ++n_Cnt;  break; //转行符统计
//            case ' ' :
//                ++t;    ++s_Cnt;  break; //空格符统计
//
//            case 'f' :
//                ++t;    ++fCnt;
//                if(fCnt%2==0 && t == f_tmp+1){  //判断如果上一个字母是f，则构成ff序列，ffCnt+1
//                    ++ffCnt;
//                    fCnt = 0;
//                }
//                f_tmp = t;  break; //f_temp记录下当前f输入为第几次，方便判断序列
//            case 'l':
//                ++t;
//                if(t == f_tmp+1){ //判断如果上一个字母是f，则构成fi序列，fiCnt+1
//                    ++flCnt;
//                    fCnt = 0; //及时清零fCnt，否则对后面ff的判定有影响
//                }
//                break;
//
//            default  :
//                ++otherCnt;  break; //非元音字母数字统计
//        }
//
//    cout << "Number of vowel a: " << aCnt << '\n' //输出统计结果
//         << "Number of vowel e: " << eCnt << '\n'
//         << "Number of vowel i: " << iCnt << '\n'
//         << "Number of vowel o: " << oCnt << '\n'
//         << "Number of vowel u: " << uCnt << '\n'
//         << "Number of others : " << otherCnt << '\n'
//         << "Number of 'tab'  : " << t_Cnt << '\n'
//         << "Number of 'enter': " << n_Cnt << '\n'
//         << "Number of 'space': " << s_Cnt << '\n'
//         << "Number of   ff   : " << ffCnt << '\n'
//         << "Number of   fi   : " << fiCnt << '\n'
//         << "Number of   fl   : " << flCnt << '\n';
//
//    return 0;
//}


///* 练习5.9  2021.6.23 */
//int main() {
//    unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0, otherCnt = 0; //记录元音字母和其他字母
//    char ch;
//    while( cin >> ch ){
//        if(ch == 'a') ++aCnt;
//        else if (ch == 'e') ++eCnt;
//        else if (ch == 'i') ++iCnt;
//        else if (ch == 'o') ++oCnt;
//        else if (ch == 'u') ++uCnt;
//        else  ++otherCnt;
//    }
//    cout << "Number of vowel a: " << aCnt << '\n' //输出统计结果
//         << "Number of vowel e: " << eCnt << '\n'
//         << "Number of vowel i: " << iCnt << '\n'
//         << "Number of vowel o: " << oCnt << '\n'
//         << "Number of vowel u: " << uCnt << '\n'
//         << "Number of others : " << otherCnt << '\n';
//    return 0;
//}



///* 练习5.6  2021.6.23 */
//int main() {
//    int grade = 0;
//    string finalGrade;
//    cin >> grade;
//    const vector<string> v = {"D", "C", "B", "A", "A+"}; //五个分数段【注意要用双引号】
//    ((grade>=60) && (grade<100)) ? finalGrade = v[grade/10 - 5] : //60-100内赋予C,B,A,A+
//                                 ((grade<0) || (grade>100)) ? finalGrade = "Grades Error, Check the Enter!" : //输入成绩范围错误
//                                                          (grade == 100) ? finalGrade = v[4] + '+' : //100记为A++
//                                                                         (grade>0) ? finalGrade = v[0] : finalGrade = "E";//不及格为D，0分为E
//    cout << "Your Grade is : " << finalGrade << endl;
//    return 0;
//}



///* 练习5.5  2021.6.23 */
//int main() {
//    int grade = 0;
//    string finalGrade;
//    const vector<string> v = {"D", "C", "B", "A", "A+"};//五个分数段【注意要用双引号】
//    cin >> grade;
//    if( (grade<0) || (grade>100) ){//成绩范围无效
//        cerr << "Your grades are not in the right range, Check the enter!";
//        return -1;
//    }
//    else if((grade > 0) && (grade < 60)) //不及格为D
//        finalGrade = v[0];
//    else if(grade == 100) //满分为A++
//        finalGrade = v[4] + '+';
//    else if(grade == 0) //0分为E
//        finalGrade = "E";
//    else
//        finalGrade = v[grade/10 - 5];//60-70为C，70-80为B，80-90为A，90-100为A+
//    cout << "Your Grade is Level " << finalGrade << endl;
//    return 0;
//}



///* 练习5.3  2021.6.23 */
//int main() {
//    int sum = 0, val = 1;
//    while(val <= 10)
//        sum += val, ++val;//使用逗号运算符将两个语句合二为一
//    cout << sum << " " << val << endl;
//    return 0;
//}
