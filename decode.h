// decode.h : main header file for the DECODE application
//

#if !defined(AFX_DECODE_H__7E5D6B22_8339_473C_A181_E260C893D265__INCLUDED_)
#define AFX_DECODE_H__7E5D6B22_8339_473C_A181_E260C893D265__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CDecodeApp:
// See decode.cpp for the implementation of this class
//

class CDecodeApp : public CWinApp
{
public:
	CDecodeApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDecodeApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CDecodeApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DECODE_H__7E5D6B22_8339_473C_A181_E260C893D265__INCLUDED_)
