//定数宣言


//関数宣言
BOOL CALLBACK MainDlgProc( HWND hDlg, UINT uMsg, WPARAM wParam, LPARAM lParam );	//メインダイアログプロシージャ
BOOL WinInitialize( HINSTANCE hInst, HWND hPaWnd, HMENU chID, char *cWinName, HWND PaintArea, WNDPROC WndProc ,HWND *hDC);//子ウィンドウを生成
UINT WINAPI TFunc( LPVOID thParam );												//データ読み込み用スレッド
HRESULT CALLBACK WndProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam);		//子ウィンドウプロシージャ
BOOL PLOT(HWND hWnd, int sec, int data,int bsec,int bdata);							//波形描画
BOOL REPaint(HWND hWnd);															//背景と軸の再描画
										//変数宣言
static COLORREF	color, colorPen,bkcolor;	//色
