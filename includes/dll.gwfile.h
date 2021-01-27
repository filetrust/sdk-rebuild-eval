/**
* @file
**/
#ifndef DLL_GWFILE_H
#define DLL_GWFILE_H

#ifdef GLASSWALL_DLL
    #ifdef __GNUC__
        #define GLASSWALL_DLL_API __attribute__ ((visibility("default")))
    #elif _WIN32
        #define GLASSWALL_DLL_API __declspec(dllexport)
    #else
        #define GLASSWALL_DLL_API 
    #endif
#else
    #if _WIN32
        #define GLASSWALL_DLL_API __declspec(dllimport)
    #else
        #define GLASSWALL_DLL_API 
    #endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

    /* Glasswall file DLL API */
    GLASSWALL_DLL_API int GWFileConfigXML(wchar_t * xmlstring);
    GLASSWALL_DLL_API int GWFileConfigGet(wchar_t **configurationBuffer, size_t *outputLength);
    GLASSWALL_DLL_API int GWFileConfigRevertToDefaults(void);
    GLASSWALL_DLL_API int GWGetIdInfo(uint32_t issueId, size_t *bufferLength, void **outputBuffer);
    GLASSWALL_DLL_API int GWGetAllIdInfo(size_t *bufferLength, void **outputBuffer);

	GLASSWALL_DLL_API int GWMemoryToMemoryProtect(void *inputBuffer, size_t inputBufferLength, const wchar_t* wcType, void **outputFileBuffer, size_t *outputLength);
	GLASSWALL_DLL_API int GWMemoryToMemoryAnalysisAudit(void *inputBuffer, size_t inputBufferLength, wchar_t* wcType, void **analysisFileBuffer, size_t *analysisFileBufferLength);

    GLASSWALL_DLL_API int GWFileProtectLite(wchar_t * inputFilePathName, wchar_t* wcType, void **outputFileBuffer, size_t *outputLength);
    GLASSWALL_DLL_API int GWFileProtect(const wchar_t * inputFilePathName, const wchar_t* wcType, void **outputFileBuffer, size_t *outputLength);
    GLASSWALL_DLL_API int GWFileAnalysisAudit(wchar_t * inputFilePathName, wchar_t* wcType, void **analysisFileBuffer, size_t *analysisFileBufferLength);

    GLASSWALL_DLL_API int GWFileToFileProtectLite(wchar_t * inputFilePathName, wchar_t* wcType, wchar_t * outputFilePathName);
    GLASSWALL_DLL_API int GWFileToFileProtect(wchar_t * inputFilePathName, wchar_t* wcType, wchar_t * outputFilePathName);
    GLASSWALL_DLL_API int GWFileToFileAnalysisAudit(wchar_t * inputFilePathName, wchar_t* wcType, wchar_t * analysisFilePathName);

    GLASSWALL_DLL_API int GWFileToFileAnalysisProtectAndExport(const wchar_t *inputFilePathName, const wchar_t *exportFilePathName);
    GLASSWALL_DLL_API int GWFileToFileProtectAndImport(const wchar_t * inputFilePathName, const wchar_t * outputFilePathName);
    GLASSWALL_DLL_API int GWFileToMemoryProtectAndImport(const wchar_t * inputFilePathName, void **outputFileBuffer, size_t *outputLength);
    GLASSWALL_DLL_API int GWFileToMemoryAnalysisProtectAndExport(const wchar_t * inputFilePathName, void **outputFileBuffer, size_t *outputLength);
    GLASSWALL_DLL_API int GWMemoryToMemoryAnalysisProtectAndExport(void *inputBuffer, size_t inputBufferLength, void **outputFileBuffer, size_t *outputLength);
    GLASSWALL_DLL_API int GWMemoryToMemoryProtectAndImport(void *inputBuffer, size_t inputBufferLength, void **outputFileBuffer, size_t *outputLength);

    GLASSWALL_DLL_API int GWFileProtectLiteAndReport(wchar_t * inputFilePathName, wchar_t* wcType, void **outputFileBuffer, size_t *outputLength, void **reportFileBuffer, size_t *reportFileBufferLength);
    GLASSWALL_DLL_API int GWFileProtectAndReport(wchar_t * inputFilePathName, wchar_t* wcType, void **outputFileBuffer, size_t *outputLength, void **reportFileBuffer, size_t *reportFileBufferLength);

    GLASSWALL_DLL_API int GWFileToFileProtectLiteAndReport(wchar_t * inputFilePathName, wchar_t* wcType, wchar_t * outputFilePathName, wchar_t * reportFilePathName);
    GLASSWALL_DLL_API int GWFileToFileProtectAndReport(wchar_t * inputFilePathName, wchar_t* wcType, wchar_t * outputFilePathName, wchar_t * reportFilePathName);

    GLASSWALL_DLL_API int GWFileAnalysisAuditAndReport(wchar_t * inputFilePathName, wchar_t* wcType, void **analysisFileBuffer, size_t *analysisFileBufferLength, void **reportFileBuffer, size_t *reportFileBufferLength);
    GLASSWALL_DLL_API int GWFileToFileAnalysisAuditAndReport(wchar_t * inputFilePathName, wchar_t* wcType, wchar_t * analysisFilePathName, wchar_t * reportFilePathName);

    GLASSWALL_DLL_API int GWFileAnalysisAndProtectAndReport(wchar_t * inputFilePathName, wchar_t* wcType, void **outputFileBuffer, size_t *outputLength, void **analysisFileBuffer, size_t *analysisFileBufferLength, void **reportFileBuffer, size_t *reportFileBufferLength);
    GLASSWALL_DLL_API int GWFileToFileAnalysisProtectAndReport(wchar_t * inputFilePathName, wchar_t* wcType, wchar_t * outputFilePathName, wchar_t * reportFilePathName, wchar_t * analysisFilePathName);

    GLASSWALL_DLL_API int GWFileAnalysisAndProtect(wchar_t * inputFilePathName, wchar_t* wcType, void **outputFileBuffer, size_t *outputLength, void **analysisFileBuffer, size_t *analysisFileBufferLength);
    GLASSWALL_DLL_API int GWFileToFileAnalysisAndProtect(wchar_t * inputFilePathName, wchar_t* wcType, wchar_t * outputFilePathName, wchar_t * analysisFilePathName);

    GLASSWALL_DLL_API int GWFileProcessStatus(unsigned int *glasswallProcessStatus);
	
	GLASSWALL_DLL_API int GWDetermineFileTypeFromFile(const wchar_t* inputFilePathName);
    GLASSWALL_DLL_API int GWDetermineFileTypeFromFileAndReport(const wchar_t* inputFilePathName, void **analysisFileBuffer, size_t *analysisFileBufferLength);
	
	GLASSWALL_DLL_API int GWDetermineFileTypeFromFileInMem(void* inputBuffer, size_t inputBufferSize);
	GLASSWALL_DLL_API int GWDetermineFileTypeFromFileInMemAndReport(void* inputBuffer, size_t inputBufferSize, void **analysisFileBuffer, size_t *analysisFileBufferLength);

    GLASSWALL_DLL_API int GWFileDone(void);
    GLASSWALL_DLL_API int GWFileHibernate(void);

	GLASSWALL_DLL_API wchar_t *GWFileVersion(void);
	GLASSWALL_DLL_API wchar_t *GWFileProcessMsg(void);
	GLASSWALL_DLL_API wchar_t *GWFileErrorMsg(void);


#ifdef __cplusplus
}
#endif

#endif  /* DLL_GWFILE_H */
