
//// StrategyPatternDlg.cpp : 实现文件
////

//#include "StrategyPattern.h"
//#include "StrategyPatternDlg.h"

//// CStrategyPatternDlg 对话框

//CStrategyPatternDlg::CStrategyPatternDlg(CWnd* pParent /*=NULL*/)
//    : CDialog(CStrategyPatternDlg::IDD, pParent)
//{
//    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
//    m_strGoodsList = _T("");
//    m_dfPrice = 0.00;
//    m_dfSumPrice = 0.00;
//    m_iGoodsNum = 0;
//    m_dfDiscountRate = 0.00;
//}

//void CStrategyPatternDlg::OnDestroy()
//{
//    m_strGoodsList = _T("");
//    m_dfPrice = 0.00;
//    m_dfSumPrice = 0.00;
//    m_iGoodsNum = 0;
//    m_dfDiscountRate = 0.00;
//}

//void CStrategyPatternDlg::DoDataExchange(CDataExchange* pDX)
//{
//    CDialog::DoDataExchange(pDX);
//}

//BEGIN_MESSAGE_MAP(CStrategyPatternDlg, CDialog)
//    ON_WM_PAINT()
//    ON_WM_QUERYDRAGICON()
//    //}}AFX_MSG_MAP
//    ON_BN_CLICKED(IDOK, &CStrategyPatternDlg::OnBnClickedOk)
//    ON_BN_CLICKED(IDC_BTN_RESET, &CStrategyPatternDlg::OnBnClickedBtnReset)
//END_MESSAGE_MAP()

//double CStrategyPatternDlg::CalcPrice(double &dfPrice, int &iGoodsNum)
//{
//    return dfPrice*iGoodsNum;
//}

//// CStrategyPatternDlg 消息处理程序

//BOOL CStrategyPatternDlg::OnInitDialog()
//{
//    CDialog::OnInitDialog();

//    // 设置此对话框的图标。当应用程序主窗口不是对话框时，框架将自动
//    //  执行此操作
//    SetIcon(m_hIcon, TRUE); // 设置大图标
//    SetIcon(m_hIcon, FALSE); // 设置小图标

//    // TODO: 在此添加额外的初始化代码

//    return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
//}

//// 如果向对话框添加最小化按钮，则需要下面的代码
////  来绘制该图标。对于使用文档/视图模型的 MFC 应用程序，
////  这将由框架自动完成。

//void CStrategyPatternDlg::OnPaint()
//{
//    if (IsIconic())
//    {
//        CPaintDC dc(this); // 用于绘制的设备上下文

//        SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

//        // 使图标在工作区矩形中居中
//        int cxIcon = GetSystemMetrics(SM_CXICON);
//        int cyIcon = GetSystemMetrics(SM_CYICON);
//        CRect rect;
//        GetClientRect(&rect);
//        int x = (rect.Width() - cxIcon + 1) / 2;
//        int y = (rect.Height() - cyIcon + 1) / 2;

//        // 绘制图标
//        dc.DrawIcon(x, y, m_hIcon);
//    }
//    else
//    {
//        CDialog::OnPaint();
//    }
//}

////当用户拖动最小化窗口时系统调用此函数取得光标
////显示。
//HCURSOR CStrategyPatternDlg::OnQueryDragIcon()
//{
//    return static_cast<HCURSOR>(m_hIcon);
//}

//void CStrategyPatternDlg::OnBnClickedOk()
//{
//    // TODO: 在此添加控件通知处理程序代码
//    CString strPrice(_T(""));
//    CString strNum(_T(""));
//    CString strRate(_T(""));
//    GetDlgItemText(IDC_EDIT_PRICE, strPrice);
//    if (_T("") == strPrice)
//    {
//        m_dfPrice = 0.00;
//    }
//    else
//    {
//        char * chPrice =  (char*)strPrice.GetBuffer(0);
//        m_dfPrice = atof(chPrice);
//    }
//    GetDlgItemText(IDC_EDIT_SUM, strNum);
//    if (_T("") == strNum)
//    {
//        m_iGoodsNum = 0;
//    }
//    else
//    {
//        char * chNum = (char*)strNum.GetBuffer(0);
//        m_iGoodsNum = atoi(chNum);
//    }

//    GetDlgItemText(IDC_COMBO_DISCOUNTRATE, strRate);
//    if (_T("") == strRate)
//    {
//        m_dfDiscountRate = 0;
//    }
//    else
//    {
//        char * chRate = (char *)strRate.GetBuffer(0);
//        m_dfDiscountRate = atof(chRate);
//        m_dfDiscountRate *= 0.1;
//    }
//    double dCurSum = 0.00;
//    if (0.00 == m_dfDiscountRate)
//    {
//        dCurSum = m_dfPrice * m_iGoodsNum;
//    }
//    else
//    {
//        dCurSum = m_dfPrice * m_iGoodsNum * m_dfDiscountRate;
//    }
//    GetDlgItemText(IDC_EDIT_GOODSLIST, m_strGoodsList);
//    CString strTemp = _T("");
//    strTemp.Format(_T("您所购买的商品单价为%.2f, 您所选购的数量为%d, 当前折扣为%.2f, 当前商品合计为%.2f;\r\n"), m_dfPrice, m_iGoodsNum, m_dfDiscountRate, dCurSum);
//    m_strGoodsList += strTemp;
//    SetDlgItemText(IDC_EDIT_GOODSLIST, m_strGoodsList);
//    m_dfSumPrice += dCurSum;
//    strTemp = _T("");
//    strTemp.Format(_T("%.2f"), m_dfSumPrice);
//    SetDlgItemText(IDC_EDIT_SUMPRICE, strTemp);
//    strTemp = _T("");
//    m_dfPrice = 0.00;
//    m_iGoodsNum = 0;
//    m_dfDiscountRate = 0.00;
//}

//void CStrategyPatternDlg::OnBnClickedBtnReset()
//{
//    // TODO: 在此添加控件通知处理程序代码
//    m_dfSumPrice = 0.00;
//    m_strGoodsList = _T("");
//    m_dfPrice = 0.00;
//    m_iGoodsNum = 0;
//    m_dfDiscountRate = 0.00;
//    SetDlgItemText(IDC_EDIT_PRICE, _T(""));
//    SetDlgItemText(IDC_EDIT_SUM, _T(""));
//    SetDlgItemText(IDC_EDIT_GOODSLIST, _T(""));
//    SetDlgItemText(IDC_EDIT_SUMPRICE, _T(""));
//    SetDlgItemText(IDC_COMBO_DISCOUNTRATE, _T(""));
//}
