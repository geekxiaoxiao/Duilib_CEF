
#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             //  �� Windows ͷ�ļ����ų�����ʹ�õ���Ϣ
#define _CRT_SECURE_NO_DEPRECATE


#include <cef_client.h>
#include <cef_app.h>
#include <capi/cef_app_capi.h>

#include <sstream>
#include <string>


#include <base/cef_bind.h>
#include <wrapper/cef_closure_task.h>
#include <cef_app.h>
#include <cef_base.h>
#include <base/cef_lock.h>
#include <wrapper/cef_helpers.h>


// Windows ͷ�ļ�:
#include <windows.h>
#include <objbase.h>
#include <ShlObj.h>
#include <strsafe.h>
// C ����ʱͷ�ļ�
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>