#ifndef DLL_GWFILESTATUS_H
#define DLL_GWFILESTATUS_H

/**
*
*   @addtogroup gwFileProcessingResults
*   @{
*   @defgroup gwFileReturnStatusDefinitions Glasswall Return Status Definitions
*   @{
*
*   The document processing functions use the enumerations defined on these pages to describe the processing results. \n
*   \n
*   For the @ref gwFileProcessingFileToMemory functions only ::eGwFileStatus_Success,  ::eGwFileStatus_Error and ::eGwFileStatus_InternalError are used.
*   For the @ref gwFileProcessingFileToFile functions the negative values are utilised to report issues with file output (possibly in addition to file processing issues)
*   @attention Some of the @ref gwFileProcessingFileToFile functions' negative return values indicate documents have been successfully managed. It may be additional outputs that have
*   caused the error condition to be reported. Care should be taken to make the managed document available if possible.
*
**/

/** Enumerations report the following conditions */
typedef enum
{
    /** This value indicates the operation completed successfully. Any required Analysis or Protection was carried out and completed. */
    /** Any required output files were written. */
    eGwFileStatus_Success = 1,

    /** This value indicates that the document was non-conformant in some way, but any requested output files were written. */
    eGwFileStatus_Error = 0,

    /** This value indicates that the document was managed successfully, but a failure occured when writing the managed version of the document to file. */
    eGwFileStatus_SuccessDocumentWriteFailure = -1,

    /** This value indicates that the document was analysed successfully, but a failure occured when writing the analysis of the document to file. */
    eGwFileStatus_SuccessAnalysisWriteFailure = -2,

    /** This value indicates that the document was non-conformant in some way, and a failure occured when writing the analysis of the document to file. */
    eGwFileStatus_ErrorAnalysisWriteFailure = -3,

    /** This value indicates that the document was processed successfully, but that a failure occured when writing the processing report to file. */
    eGwFileStatus_SuccessReportWriteFailure = -4,

    /** This value indicates that the document was managed successfully, but a failure occured when writing both the managed version of the document  */
    /**     and the processing report to file.  */
    eGwFileStatus_SuccessDocumentReportWriteFailure = -5,

    /** This value indicates that the document was non-conformant in some way,  and that a failure occured when writing the processing report to file. */
    eGwFileStatus_ErrorReportWriteFailure = -6,

    /** This value indicates that the document was analysed successfully, but a failure occured when writing both the analysis of the document  */
    /**     and the processing report to file.  */
    eGwFileStatus_SuccessAnalysisReportWriteFailure = -7,

    /** This value indicates that the document was non-conformant in some way, but a failure occured when writing both the analysis of the document  */
    /**     and the processing report to file.  */
    eGwFileStatus_ErrorAnalysisReportWriteFailure = -8,

    /** This value indicates an uncategorised error */
    eGwFileStatus_InternalError = -9,

    /* This value indicates that the document was analysed successfully, but failures occured when writing the document, the analysis of the document  */
    /*  and the processing report to file (AMP mode).  */
    eGwFileStatus_SuccessDocumentAnalysisReportWriteFailure = -10,

    /* This value indicates that the document was analysed successfully, but failures occured when writing the document and the analysis of the document  */
    /*  to file (AMP mode).  */
    eGwFileStatus_SuccessDocumentAnalysisWriteFailure = -11,

} eGwFileStatus;

/** @} */
/** @} */

#endif
