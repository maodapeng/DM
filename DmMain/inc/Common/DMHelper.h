//-------------------------------------------------------
// Copyright (c) DuiMagic
// All rights reserved.
// 
// File Name: DMHelper.h 
// File Des: ͨ�ø��������ӿ���
// File Summary: 
// Cur Version: 1.0
// Author:
// Create Data:
// History:
// 		<Author>	<Time>		<Version>	  <Des>
//      guoyou		2015-1-14	1.0			
//-------------------------------------------------------
#pragma once

namespace DM
{
	//---------------------------------------------------
	// Function Des: ��ȡEXE����ȫ·�����ж��ļ��Ƿ���ڡ�����ļ��Ĵ�С������
	// Input Parameter:
	// Output Parameter:
	// return:
	//---------------------------------------------------
	bool DM_EXPORT GetRootPathW(wchar_t *pszPath, DWORD dwSize);
	bool DM_EXPORT GetRootDirW(wchar_t *pszPath, DWORD dwSize);
	bool DM_EXPORT GetRootFullPath(wchar_t *pszSrcPath, wchar_t *pszDestPath, DWORD dwSize);
	bool DM_EXPORT CheckFileExistW(wchar_t *pszFilePath);
	DWORD DM_EXPORT GetFileSizeW(wchar_t *pszFilePath);
	bool DM_EXPORT GetFileBufW(wchar_t *pszFilePath, void **ppBuf, DWORD dwSize, DWORD &dwReadSize);

	//---------------------------------------------------
	// Function Des: ����ת������,dwLenΪ�ַ��������ֽ���
	// Input Parameter:
	// Output Parameter:
	// return:
	//---------------------------------------------------
	bool DM_EXPORT UnicodeToAscii(CONST PWCHAR pwszSrc, PCHAR pszDst, DWORD dwLen);
	bool DM_EXPORT UnicodeToUtf8(CONST PWCHAR pwszSrc, PCHAR pszDst, DWORD dwLen);

	//---------------------------------------------------
	// Function Des: ת��
	// Input Parameter:
	// Output Parameter:
	// return:
	//---------------------------------------------------
	bool DM_EXPORT MeetRect(LPRECT lpRect, SIZE szPic);
	void DM_EXPORT DMHiMetricToPixel(const SIZEL * lpSizeInHiMetric, LPSIZEL lpSizeInPix,HWND hWnd);
	void DM_EXPORT DMPixelToHiMetric(const SIZEL * lpSizeInPix, LPSIZEL lpSizeInHiMetric,HWND hWnd);
	HCURSOR DM_EXPORT CreateCursorFromBitmap(HBITMAP hSourceBitmap,bool bSimple=true, COLORREF clrTransparent=0, DWORD xHotspot=0,DWORD yHotspot=0);//http://blog.csdn.net/hgy413/article/details/6563815

}//namespace DM