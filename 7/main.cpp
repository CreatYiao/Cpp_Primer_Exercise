#include <iostream>
#include <cctype>
#include <string>
#include <vector>
#include <cstddef>
#include <iterator>
#include <stdexcept>
#include <cassert>

using namespace std;






///* 练习7.11  2021.6.26 */








///* 练习7.9  2021.6.26 */
//struct Person{
//    string Name; //存放姓名的string
//    string Homedress; //存放地址的string
//    string get_name() const { return Name; } //返回Name，为了让this也能绑定到const对象上，采用const限定
//    string get_home() const { return Homedress; } //返回Homedress
//};
//istream &read(istream &in, Person &data){ //Person类相关的非成员函数 输入对象
//    in >> data.Name >> data.Homedress; //输入Name和Homedress信息
//    return in; //返回输入流对象
//}
//ostream &print(ostream &out, Person &data){ //Person类相关的非成员函数 输出对象
//    out << data.Name << " " << data.Homedress; //输出Name和Homedress信息
//    return out; //返回输出流对象
//}



///* 练习7.6-7.7  2021.6.26 */ [7.7还没做]
//struct Sales_data{
//    string bookNo;
//    unsigned units_sold;
//    double revenue;
//    double avg_price;
//    Sales_data combine(const Sales_data &rhs);
//};
//Sales_data Sales_data::combine(const Sales_data &rhs){ //Sales_data的成员函数combine，返回值类型为Sales_data
//    units_sold += rhs.units_sold; //总售本数加上本次调用对象的数量
//    revenue += rhs.revenue;  //总售价加上本次调用对象的售价
//    return *this; //返回调用该函数的对象
//}
//istream &read(istream &in, Sales_data &data){ //输入流函数read，用于记录输入的书号和售本数及售卖单价
//    double price = 0;
//    in >> data.bookNo >> data.units_sold >> price;
//    data.revenue = price * data.units_sold; //讲总售卖价格记录进revenue里
//    return in; //返回输入流对象in
//}
//ostream &print(ostream &out, Sales_data &data){ //输出流对象print，用于输出书号、收买总数、售卖总价以及平均出售价格
//    out << data.bookNo << " " << data.units_sold << " " << data.revenue << " " << data.avg_price;
//    return out; //返回输出流对象out
//}
//Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
//    Sales_data sum = lhs;
//    sum.combine(rhs); //将rhs的售本数和售价与lhs的相加
//    return sum; //返回相加结果（Sales_data类 类型）
//}
//int main(){
//
//    return 0;
//}



///* 练习7.4-7.5  2021.6.26 */ /* 定义一个Person类 */
//struct Person{
//    string Name; //存放姓名的string
//    string Homedress; //存放地址的string
//    string get_name() const { return Name; } //返回Name，为了让this也能绑定到const对象上，采用const限定
//    string get_home() const { return Homedress; } //返回Homedress
//};



///* 练习7.3  2021.6.26 */




///* 练习7.2  2021.6.26 */




///* 练习7.1  2021.6.26 */
//struct Sales_data{
//    string bookNo;
//    unsigned units_sold = 0;
//    double revenue = 0.0;
//};
//int main(){
//    Sales_data item;
//
//    return 0;
//}