#pragma once

/*!
*\brief			HookProgram Dialog ���� class
*/
class HookProgramDlg
{
	/*!
		*\brief 	�̱��� ������
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
		*\brief			HookProgram ȭ�� ����
		*\param[in]		hInstance		���α׷��� �ν��Ͻ� �ڵ�( ������ ���α׷����� ���� ������ ID�� ������ �ڵ� �ν��Ͻ�, hInstance ��� �θ� )
		*\param[in]		hPrevInstance	���� ���α׷��� �ν��Ͻ� �ڵ�, Win32������ �׻� NULL���̸� ����� ��� ����
		*\param[in]		lpCmdLine		��������� �Էµ� ���α׷� �μ�
		*\param[in]		nCmdShow		���α׷��� ����� ����
		*\return 		HookProgram		ȭ������ ����� ���̾�α� �ڵ�
	*/
	int HookProgramDlg(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nCmdShow);
};

