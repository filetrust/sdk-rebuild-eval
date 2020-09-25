# Glasswall Rebuild - Configuration Files

Sample config files can be found in this directory. Description of each component in the config files as well as how to create them can be found below.

## Command Line Tool Configuration Settings

All configuration value default to either ‘0’ or an empty string, where appropriate.

| Identifier               | Value                                          | Notes                                                                                                                                                           |
|--------------------------|------------------------------------------------|-----------------------------------------------------------------------------------------------------------------------------------------------------------------|
| fileType                 | [pdf\|jpg\|png\|gif\|doc                       | Type of documents for processing. Specifying the wildcard option ‘*’ will   enable automatic file type detection.                                               |
|                          | \|ppt\|xls\|docx\|pptx\|xlsx\|e   mf\|wmf\|*]  | Process mode 5 does not support the wildcard option.                                                                                                            |
| inputLocation            | [valid path]                                   | Location of documents for processing                                                                                                                            |
| useSubfolders            | [0\|1]                                         | 0 = Process documents only in inputLocation 1 = Process documents in   inputLocation and any subfolders                                                         |
| processMode              | [0\|1\|2\|3\|4\|5]                             | 0  = Analysis                                                                                                                                                   |
|                          |                                                | GWFileAnalysisAudit                                                                                                                                             |
|                          |                                                | GWFileAnalysisAuditAndReport                                                                                                                                    |
|                          |                                                | GWFileToFileAnalysisAudit                                                                                                                                       |
|                          |                                                | GWFileToFileAnalysisAuditAndReport                                                                                                                              |
|                          |                                                | 1  = Manage & Protect                                                                                                                                           |
|                          |                                                | GWFileProtect                                                                                                                                                   |
|                          |                                                | GWFileProtectAndReport                                                                                                                                          |
|                          |                                                | GWFileToFileProtect                                                                                                                                             |
|                          |                                                | GWFileToFileProtectAndReport                                                                                                                                    |
|                          |                                                |                                                                                                                                                                 |
|                          |                                                | 2  = Manage & Protect Lite                                                                                                                                      |
|                          |                                                | GWFileProtectLite                                                                                                                                               |
|                          |                                                | GWFileProtectLiteAndReport GWFileToFileProtectLite                                                                                                              |
|                          |                                                | GWFileToFileProtectLiteAndReport                                                                                                                                |
|                          |                                                | 3  = Manage & Protect & Report                                                                                                                                  |
|                          |                                                | GWFileAnalyseProtectReport                                                                                                                                      |
|                          |                                                | GWFileToFileAnalyseProtectReport                                                                                                                                |
|                          |                                                | 4  = Export Mode                                                                                                                                                |
|                          |                                                | Export images and text to an Interchange Package in the form of a ZIP   archive. reportMode must be set to 0.                                                   |
|                          |                                                |                                                                                                                                                                 |
|                          |                                                | 5  = Import Mode                                                                                                                                                |
|                          |                                                | Import images from an Interchange Package. The expected format is a ZIP   archive. reportMode must be set to 0.                                                 |
|                          |                                                |                                                                                                                                                                 |
|                          |                                                | Note: The Short form of Report produced has no content items listed; only   Sanitisations/Issue and Remedies                                                    |
|                          |                                                |                                                                                                                                                                 |
| reportMode               | [0\|1]                                         | 1 = Invokes the APIs that also produce a report.  For example, GWFileAnalysisAuditAndReport.   If writeOutput is set to zero, no reports will be produced.      |
|                          |                                                |                                                                                                                                                                 |
| writeOutput              | [0\|1]                                         | 0 = No managed document or analysis report is produced 1 = Managed   document and/or analysis reports are produced where appropriate and if   reportMode is 1.  |
| quarantineNonconforming  | [0\|1]                                         | 1 = copy non-conforming document to quarantine folder.                                                                                                          |
|                          |                                                |                                                                                                                                                                 |
| outputLocation           | [valid path]                                   | Root folder for all processing output.                                                                                                                          |
| createOutputFolders      | [0\|1]                                         | Creates output folders if they don’t exist                                                                                                                      |
| nonconformingDirName     | [valid folder name]                            | Name of subfolder within outputLocation that is the destination for all   output from the processing of nonconforming files.                                    |
| managedDirName           | [valid folder name]                            | Name of subfolder within outputLocation that is the destination for all   output from the processing of managed files.                                          |
| fileStorageMode          | [0\|1\|2]                                      | 0  = File to File                                                                                                                                               |
|                          |                                                | 1  = File to Memory                                                                                                                                             |
|                          |                                                | 2  = Memory to Memory                                                                                                                                           |
| logFileSize              | [0\|1]                                         | 1 = Includes the file size in the process log                                                                                                                   |
| logFileProcessTime       | [0\|1]                                         | 1 = Includes the file processing time in the process log                                                                                                        |
| logProcessStatus         | [0\|1]                                         | 1 = Includes the process status information (from                                                                                                               |
|                          |                                                | GWFileProcessMsg and GWFileProcessStatus) in the process log. This is an   optional flag that defaults to 0 to denote    no process status logging.             |

If an XML configuration file is not specified on the command line, then GWFileConfigXml is not called before the specified document processing function is called. 


## Rebuild XML Configuration File Description

### Configuration Format
The format configuration within this file is described formally in the XSD located in the glasswall sdk documentation. 
This configuration is passed unchanged to the GWFileConfigXML function. An example of a full configuration file is shown below 

```
<?xml version="1.0" encoding="UTF-8"?> 
<config> 
  <pdfConfig>     
    <watermark>Glasswall Protected</watermark> 
    <acroform>sanitise</acroform> 
    <metadata>sanitise</metadata> 
    <javascript>sanitise</javascript> 
    <actions_all>sanitise</actions_all> 
    <embedded_files>sanitise</embedded_files> 
    <embedded_images>sanitise</embedded_images> 
    <internal_hyperlinks>sanitise</internal_hyperlinks> 
    <external_hyperlinks>sanitise</external_hyperlinks> 
  </pdfConfig> 
  <wordConfig> 
    <macros>sanitise</macros> 
    <metadata>sanitise</metadata> 
    <embedded_files>sanitise</embedded_files> 
    <embedded_images>sanitise</embedded_images> 
    <review_comments>sanitise</review_comments> 
    <internal_hyperlinks>sanitise</internal_hyperlinks> 
    <external_hyperlinks>sanitise</external_hyperlinks> 
    <dynamic_data_exchange>sanitise</dynamic_data_exchange> 
  </wordConfig> 
  <pptConfig> 
    <macros>sanitise</macros> 
    <metadata>sanitise</metadata> 
    <embedded_files>sanitise</embedded_files> 
    <embedded_images>sanitise</embedded_images> 
    <review_comments>sanitise</review_comments> 
    <internal_hyperlinks>sanitise</internal_hyperlinks> 
    <external_hyperlinks>sanitise</external_hyperlinks> 
  </pptConfig> 
  <xlsConfig> 
    <macros>sanitise</macros> 
    <metadata>sanitise</metadata> 
    <embedded_files>sanitise</embedded_files> 
    <embedded_images>sanitise</embedded_images> 
    <review_comments>sanitise</review_comments> 
    <internal_hyperlinks>sanitise</internal_hyperlinks> 
    <external_hyperlinks>sanitise</external_hyperlinks> 
    <dynamic_data_exchange>sanitise</dynamic_data_exchange>   </xlsConfig> 
</config> 

```

**Note:** The xlsConfig, pptConfig, and wordConfig cover both office XML and office binary file types. 

### Configuration Settings

| Type                   | Value                              | Notes                                                                                                                                                                                                                               |
|------------------------|------------------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| contentManagementFlag  | sanitise                           | Configures Glasswall to remove or clean document element types associated   with this content management switch type from any document being processed.   This removal will be logged in analysis reports as a ‘sanitisation item’  |
|                        | allow                              | Configures Glasswall to   leave document element types associated with this content management switch   type in any document being processed.                                                                                       |
|                        | disallow                           | Configures Glasswall to   raise an issue if document element types associated with this content   management flag are found within any document being processed.                                                                    |
| watermark              | Freeform text, up to 20 Characters | Specifying a null element .i.e., <watermark />, results 20   characters                                                                                                                                                             |

```
