/*=============================================================================
/*-----------------------------------------------------------------------------
/*	[JSONHelper.h] RapidJSON�w���p�[�N���X
/*	Author�FKousuke,Ohno.
/*-----------------------------------------------------------------------------
/*	�����FJSON����w���p�[�N���X
=============================================================================*/
#ifndef JSON_HELPER_H_
#define	JSON_HELPER_H_

/*--- �C���N���[�h�t�@�C�� ---*/

/*--- �\���̒�` ---*/

/*--- �N���X�̑O���錾 ---*/


/*-------------------------------------
/* RapidJSON�w���p�[�N���X
-------------------------------------*/
class JSONHelper
{
private:
	JSONHelper(void);

public:
	~JSONHelper(void);

	//�T���v���֐�
	static void RapidJSONSampler(void);

	//�ǂݏ����֐�
	static void LoadJSON(void);
	static void SaveJSON(void);


private:

};

#endif //JSON_HELPER_H_
/*=============================================================================
/*		End of File
=============================================================================*/