# Glasswall Rebuild SDK - Changelog
All notable changes to this project will be documented in this file.

## Known Issues
-	In Export Mode, The UTF-8 encoding has not been applied to all extracted text, which means that some exported text is not UTF-8 compliant.
-	A small number of known end of stream issues.
-	Updates to validation rules may be required due to the release of the latest revision of the MS Office specifications.


## 2020-08-11

### Rebuild v1.99

#### General Remarks

This release contains a number of bug fixes across several supported file types.
	
The Glasswall SDK Documentation is moving online. You can find it at https://docs.glasswallsolutions.com/sdk/rebuild/Content/Home.htm. 
This is a work in progress and feedback is welcome. The online documentation will become the master set so you may spot some discrepancies 
between documents during the transition period.

#### New Features

- Support for Alpine Linux - The Linux versions of the library now runs on Alpine Linux. The main change to support this was to use a new utf-8 library. If customers do experience encoding issues because of this change please repot via support.

#### Other Improvements

- Update to MS-Office Extensions version support to include recent additions. Now support extensions up to those shown in the below table: 

|     Doc Type    |     Date         |     Protocol Revision    |     Revision Class    |     Downloads      |
|-----------------|------------------|--------------------------|-----------------------|--------------------|
|     MS-PPTX     |     26/2/2020    |     16.0                 |     Major             |     PDF \| DOCX    |
|     MS-XLSX     |     19/2/2020    |     19.0                 |     Major             |     PDF \| DOCX    |
|     MS-DOCX     |     19/2/2020    |     13.0                 |     Major             |     PDF \| DOCX    |

    Features impacted by these spec updates include:

    - PPTX: 
        - Latest versions of Author and Comments. 
        - Media (tracks and track information) support on slides. 
        - Slide transitions such as preset transitions and transition effects.
    - DOCX:
        - Latest versions of comments (review comments). 
    - XLSX: 
        - Workbook calculation engine feature updates. 
        - Excel collections of key value pairs identification and fallback.
        - Filter criterion associated with key value pairs. 
        - Two-dimension arrays. 

-	Update to Office 365 support - Update to processing of Open Office xml documents (PPTX, XLSX, DOCX, etc) to deal with change in internal structures within Office 365. **Note: These changes have been made from observed changes within the file structures and do not match current published specifications. Failures observed by both Glasswall and our customers persuaded us of the need to make this change without a published specification update.**

#### Bug Fixes

|     ID        |     Description                                                                                 |
|---------------|-------------------------------------------------------------------------------------------------|
|     105844    |     PDF's fail import with "FilterFailed" error (Ref:57832/3490)                                |
|     106564    |     Update all rootlevels structure rules                                                       |
|     106607    |     Extend the CT_Settings structure to accomodate CT_Extension                                 |
|     106804    |     DOCX  fixed repair message  after regenerating.                                             |
|     106820    |     PPT: Inconsistent results across windows/Linux analysis/protect                             |
|     106821    |     Subset of XLS files not recognised                                                          |
|     106825    |     OOXML - files with Comments, Numbered Styles need to be repaired after being regeneration   |
|     106872    |     Subset of PPTX files are not being regenerated                                              |

## 2020-07-01

### Rebuild v1.82

#### Bug Fixes
- 105844 - PDF fials import with "FilterFailed" error
- 4685 - Fix for PPT utf-16 export failure

#### Documentation
No Change.

#### Other Improvements
- Updates to PPTX support based on Microsoft specification changes.
- Support for Alipine Linux OS
