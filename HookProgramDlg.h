#pragma once

/*!
*\brief			HookProgram Dialog 설정 class
*/
class HookProgramDlg
{
	/*!
		*\brief 	싱글톤 생성자
	*/
	HookProgramDlg() {}
	HookProgramDlg(const HookProgramDlg& ref) {}
	HookProgramDlg& operator=(const HookProgramDlg& ref) {}
	~HookProgramDlg() {}

public:

	static HookProgramDlg& getIncetance() {
		static HookProgramDlg inst;
		return inst;
	}

	/*!
		*\brief			HookProgram 화면 설정
		*\param[in]		hInstance		프로그램의 인스턴스 핸들( 윈도우 프로그램들은 각각 고유의 ID를 가지며 핸들 인스턴스, hInstance 라고 부름 )
		*\param[in]		hPrevInstance	현재 프로그램의 인스턴스 핸들, Win32에서는 항상 NULL값이며 현재는 사용 안함
		*\param[in]		lpCmdLine		명령행으로 입력된 프로그램 인수
		*\param[in]		nCmdShow		프로그램이 실행될 형태
		*\return 		HookProgram		화면으로 실행될 다이얼로그 핸들
	*/
	int HookProgramDlg(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow);
};

