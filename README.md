# Mini-Language-Interpreter
A homework project requested by the class of Interpreter construction practice

Our project was written by visual studio in C++ programming language

目前亟待解决的问题：

1. 图形界面显示的问题

2. 布尔运算的问题， 主要是解决expression之间，还有expression和identifier之间的比较

3. 解决多个关键字声明的问题(int,float, string)

4. 全局变量和局部变量问题，这里考虑使用下推链


# TODO

- 整数支持十六进制数字 eg. 0xF4A1 (直接显示对应十进制数字62625) 
- 实数支持科学计数法表示 eg. 3.14e5 
- 支持布尔运算 eg. true & false 
- 支持数组 eg. test[10]
- 支持声明与赋值同时完成 
- 支持更复杂的输出语句 eg. print(x + y) 
- 支持格式化输出语句 eg. printf("hello %s", your_name)
- 支持输入语句 eg. int x = scanf()
- 支持for循环语句 
- 支持+=、-=、/=、*= 
- 修改表达式部分的定义，加入括号，并且使之可以提现运算符优先级的区别，可以参考上学期ppt

****

0. test&debug ——(✔️)
1. 能够在全局区执行一些语句
2. 让for语句可以执行初始化
3. 引入多行注释的语法
4. 引入显示类型转换的概念,在函数参数传递的过程中允许隐式类型转换
5. **重构精简代码**
6. ** 引入类的概念
7. ** 用C++复刻项目，比较Java与C++版本性能上的区别
8. 支持在函数参数中传递数组类型的变量
9. 支持逗号运算符的操作 (int a=1, b=2;)
10. 支持++,-- 两种运算符，考虑同时支持前置后置形式
11. 实现必要的库函数，例如提供函数输出方式的print()方法
12. ** 实现类的概念后可以定义一些标准库数据结构，比如scanf，比如max，min等数学函数库
13. 测试，争取没有逻辑错误以及运行时崩溃的情况
14. 用Acraga编写一些简单的小程序， 检查解释器在更真实的场景下的正确性，同时检查设计的语法是否符合交互性
15. 编写全面的文档，讲解解释器的整体构架以及具体细节并介绍如何编写合法的Acraga程序
16. 支持增强的for循环
17. 检测函数签名，如果相同，报错
18. 支持代码块
19. ** 支持函数指针以及lambda表达式
20. 考虑如何定义参数可变的函数，这点和传递数组类型的变量共同是实现类似printf函数的基础
21. 在detectExpression中做更加细致的判断，判断哪种和哪种token是不可能连在一起的，以此抛出潜在的缺乏分号的错误。
22. 加入break, continue语法
23. 加入switch case语法
