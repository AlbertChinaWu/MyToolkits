//// SimpleFactory.cpp : 定义控制台应用程序的入口点。
////

//#include <iostream>
//#include <stdio.h>
//#include <afx.h>
//using namespace std;

//#include "COperator.h"
//#include "CSimpleFactory.h"

//int TestSimpleFactory()
//{
//    cout<<("请输入第一个计算数据：")<<endl;
//    int iLeftNum = 0;
//    int iRightNum = 0;
//    CString strSign = _T("");
//    char chSign[2];
//    memset(chSign, 0, sizeof(char)*2);

//    cin>>iLeftNum;
//    cout<<("请输入运算符号：")<<endl;
//    cin>>chSign;
//    strSign = chSign;
//    cout<<("请输入第二个计算数据：")<<endl;
//    cin>>iRightNum;
//    cout<<"运算结果：";
//    COperator * oper = CSimpleFactory::CreateOperator(strSign);
//    cout << oper->CalcTwoData(iLeftNum, iRightNum) <<endl;
//    /*if (_T("+") == strSign)
//    {
//        cout<<iLeftNum+iRightNum<<endl;
//    }
//    else if (_T("-") == strSign)
//    {
//        cout<<iLeftNum-iRightNum<<endl;
//    }
//    else if (_T("*") == strSign)
//    {
//        cout<<iLeftNum*iRightNum<<endl;
//    }
//    else if (_T("/") == strSign)
//    {
//        cout<<iLeftNum/iRightNum<<endl;
//    }
//    else if (_T("%") == strSign)
//    {
//        cout<<iLeftNum%iRightNum<<endl;
//    }*/

//    system("pause");
//    return 0;
//}
