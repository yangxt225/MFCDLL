// mfcdll.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "mfcdll.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE ����ӵ�
//		�ú�������ǰ�档
//
//		����:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ������ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//


// CmfcdllApp

BEGIN_MESSAGE_MAP(CmfcdllApp, CWinApp)
END_MESSAGE_MAP()


// CmfcdllApp ����

CmfcdllApp::CmfcdllApp()
{
	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CmfcdllApp ����

CmfcdllApp theApp;


// CmfcdllApp ��ʼ��

BOOL CmfcdllApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}

int CmfcdllApp::sum(int a, int b)
{	
	int value = a + b;
	return value;
}

int CmfcdllApp::sub(int a, int b)
{	
	int value;
	if (a > b)
	{
		value = a - b;
	} 
	else
	{
		value = b - a;
	}
	return value;
}
