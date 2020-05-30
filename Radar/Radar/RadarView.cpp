
// RadarView.cpp : CRadarView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
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
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CRadarView ����/����

CRadarView::CRadarView()
{
	// TODO: �ڴ˴���ӹ������

}

CRadarView::~CRadarView()
{
}

BOOL CRadarView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

	return CView::PreCreateWindow(cs);
}

// CRadarView ����

void CRadarView::OnDraw(CDC* /*pDC*/)
{
	CRadarDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ���
}


// CRadarView ��ӡ

BOOL CRadarView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CRadarView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CRadarView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CRadarView ���

#ifdef _DEBUG
void CRadarView::AssertValid() const
{
	CView::AssertValid();
}

void CRadarView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CRadarDoc* CRadarView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CRadarDoc)));
	return (CRadarDoc*)m_pDocument;
}
#endif //_DEBUG


// CRadarView ��Ϣ�������
