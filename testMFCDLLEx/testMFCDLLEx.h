// testMFCDLLEx.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CtestMFCDLLExApp:
// �йش����ʵ�֣������ testMFCDLLEx.cpp
//

class CtestMFCDLLExApp : public CWinApp
{
public:
	CtestMFCDLLExApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CtestMFCDLLExApp theApp;