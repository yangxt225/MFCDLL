// mfcdll.h : mfcdll DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CmfcdllApp
// �йش���ʵ�ֵ���Ϣ������� mfcdll.cpp
//

class CmfcdllApp : public CWinApp
{
public:
	CmfcdllApp();

	int sum(int a, int b);
	int sub(int a, int b);

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
