
// RadarView.cpp : CRadarView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "Radar.h"
#endif

#include "RadarDoc.h"
#include "RadarView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CRadarView

IMPLEMENT_DYNCREATE(CRadarView, CView)

BEGIN_MESSAGE_MAP(CRadarView, CView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CRadarView 构造/析构

CRadarView::CRadarView()
{
	// TODO: 在此处添加构造代码

}

CRadarView::~CRadarView()
{
}

BOOL CRadarView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CView::PreCreateWindow(cs);
}

// CRadarView 绘制

void CRadarView::OnDraw(CDC* /*pDC*/)
{
	CRadarDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码
}


// CRadarView 打印

BOOL CRadarView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CRadarView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CRadarView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CRadarView 诊断

#ifdef _DEBUG
void CRadarView::AssertValid() const
{
	CView::AssertValid();
}

void CRadarView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRadarDoc* CRadarView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRadarDoc)));
	return (CRadarDoc*)m_pDocument;
}
#endif //_DEBUG


// CRadarView 消息处理程序
