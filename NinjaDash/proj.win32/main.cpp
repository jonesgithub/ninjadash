#include "main.h"
#include "AppDelegate.h"
#include "CCEGLView.h"
#include "resource.h"
#include "UTL_pub.h"

USING_NS_CC;

// uncomment below line, open debug console
// #define USE_WIN32_CONSOLE

int APIENTRY _tWinMain(HINSTANCE hInstance,
                       HINSTANCE hPrevInstance,
                       LPTSTR    lpCmdLine,
                       int       nCmdShow)
{
    UNREFERENCED_PARAMETER(hPrevInstance);
    UNREFERENCED_PARAMETER(lpCmdLine);


	long long int t;
	int k = sizeof(t);

#ifdef USE_WIN32_CONSOLE
    AllocConsole();
    freopen("CONIN$", "r", stdin);
    freopen("CONOUT$", "w", stdout);
    freopen("CONOUT$", "w", stderr);
#endif

    // create the application instance
    AppDelegate app;
    CCEGLView* eglView = CCEGLView::sharedOpenGLView();
    eglView->setFrameSize(SCREEN_WIDTH, SCREEN_HEIGHT);

    int ret = CCApplication::sharedApplication()->run();

#ifdef USE_WIN32_CONSOLE
    FreeConsole();
#endif

    return ret;
}
