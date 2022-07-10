#pragma once

class COperator
{
public:
    int GetLeftNum() {return _m_iLeftNum;}
    void SetLeftNum(int iValue) {_m_iLeftNum = iValue;}
    int GetRightNum() {return _m_iRightNum;}
    void SetRightNum(int iValue) {_m_iRightNum = iValue;}

    virtual int CalcTwoData(int iLeftNum, int iRightNum)
    {
        int iResult = 0;
        iResult = iLeftNum + iRightNum;
        return iResult;
    }

public:
    int _m_iLeftNum;
    int _m_iRightNum;
};

class COpAdd: public COperator
{
    int CalcTwoData(int iLeftNum, int iRightNum) override
    {
        return iLeftNum + iRightNum;
    }
};

class COpSub: public COperator
{
    int CalcTwoData(int iLeftNum, int iRightNum) override
    {
        return iLeftNum - iRightNum;
    }
};

class COpMutli: public COperator
{
    int CalcTwoData(int iLeftNum, int iRightNum) override
    {
        return iLeftNum * iRightNum;
    }
};

class COpDiv: public COperator
{
    int CalcTwoData(int iLeftNum, int iRightNum) override
    {
        return iLeftNum / iRightNum;
    }
};

class COpMod: public COperator
{
    int CalcTwoData(int iLeftNum, int iRightNum) override
    {
        return iLeftNum % iRightNum;
    }
};