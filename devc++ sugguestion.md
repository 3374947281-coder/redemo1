c++类中声明：
用this->指向的是成员函数，后面需要带括号
declared：声明
tips1：
在写运算符重载时尤其是流插入和流提取时，要注意流插入的重载`friend istream& operator>>(const istream& in,Martix &m)`,流提取的重载`friend ostream& operator<<(ostream& out,const Martix &m)`,而且最后都要有返回值，return in，或return out.
tips1.2
运算符的重载时一般将单目运算符重载为成员函数如：
重载平方运算
`Number_Number operator~(){`
`   long long new_number=this->num*this->num`
`   return Number_Number(new_number)`

`}`
tip2：
在写继承语句时要注意，在继承时无论是私有继承还是公有继承，继承的时候父类的私有成员最好不用private，用protected，而且protected可以多重继承下去持续访问，private不具备此特性