#ifndef DUILIB_LINK_H_
#define DUILIB_LINK_H_

#ifdef _DEBUG
#ifdef _UNICODE
#pragma comment(lib, "DuiLib_d.lib")
#else
#pragma comment(lib, "DuiLibA_d.lib")
#endif
#else
#ifdef _UNICODE
#pragma comment(lib, "DuiLib.lib")
#else
#pragma comment(lib, "DuiLibA.lib")
#endif
#endif

#endif // DUILIB_LINK_H_