#ifndef __HTTP_DOWNLOAD_DOMAIN  
#define __HTTP_DOWNLOAD_DOMAIN  
  
#ifndef _SH_DENYNO
#define _SH_DENYNO 0x40
#endif

#ifdef __cplusplus  
extern "C" {
#endif  
#include "libcurl\include\curl\curl.h"
#ifdef __cplusplus  
}
#endif  

#include <string>  
  
class HttpDownloadDomain  
{  
public:  
    HttpDownloadDomain(bool* cancel);  
    ~HttpDownloadDomain();  
    bool DownloadFile(std::string url,std::wstring path);  
    bool *cancel_;  
  
private:  
      
    static size_t DownloadCallback(void* pBuffer, size_t nSize, size_t nMemByte, void* pParam);  
    static int ProgressCallback(void *clientp, double dltotal, double dlnow, double ultotal, double ulnow);  
      
};  
  
#endif  
