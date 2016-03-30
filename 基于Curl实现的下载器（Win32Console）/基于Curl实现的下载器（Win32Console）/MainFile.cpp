#include "http_download_domain.h"  
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
	bool i = 0;
	HttpDownloadDomain hdd(&i);
	//hdd.DownloadFile("http://www.paehl.com/open_source/downloads/curl_X64_ssl.7z", L"反对拉开房价.7z");
	hdd.DownloadFile("https://curl.haxx.se/download/curl-7.46.0.zip",L"curl-7.46.0.zip");
	//hdd.DownloadFile("http://www.oxcoder.com/sys/img/oxcoderIntroduction.pdf", L"dfadf.pdf");
	system("pause");
	return 0;
}
