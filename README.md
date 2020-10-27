# Glasswall Rebuild SDK (Evaluation Version)

Evaluation versions of the Glasswall Rebuild SDK which expires after 30 days.

## Version

Table below contains the version numbers for the libraries and tools in this repository.

| Name                                                 | Current Version |
|------------------------------------------------------|-----------------|
| Glasswall  Rebuild (libglasswall.classic.so)         | 1.118           |
| Archive Manager (libglasswall.archive.manager.so)    | 0.8             |
| Glasswall Command Line Tool (glasswallCLI)           | 0.5             |

### Change Log

For changes applicable to each version [Click Here](https://github.com/filetrust/sdk-rebuild/blob/master/Changelog.md)

## Glasswall Rebuild SDK Documentation

- For Glasswall  Rebuild SDK documentation [Click Here](https://docs.glasswallsolutions.com/sdk/rebuild).
- For Glasswall Command Line Tool documentation [Click Here](https://github.com/filetrust/sdk-rebuild/blob/master/tools/command.line.tool/README.md)
- For Glasswall Rebuild Archive Manager documentation [Click Here](https://github.com/filetrust/sdk-rebuild-eval/tree/master/libs/extensions/archive.manager)
- For instructions on how to run Glasswall Rebuild in docker [Click Here](https://github.com/filetrust/sdk-rebuild-eval/tree/master/libs/extensions/wrappers/docker)
- README files within sub directories of the repository provide more information and guides for specific components.

## Contents of the repository

- **/libs/rebuild** contains the  Rebuild library files (.so)
- **/libs/extensions** contains libraries (.so) and wrappers that extend the Glasswall  Rebuild capability. This includes:
    - Archive Manager - Provides support for archive file formats.
    - Wrappers - expose Glasswall  Rebuild SDK functionality through Python, C#, JavaScript and Java
    - Docker - See docker instructions [here](https://github.com/filetrust/sdk-rebuild-eval/tree/master/libs/extensions/wrappers/docker)
- **/tools/command.line.tool** contains the Glasswall Rebuild Command Line Tool
- **xsd/** contains XSD schema definitions for the following:
    - Glasswall  Rebuild output XML report
    - Glasswall  Rebuild XML content management configuration file
    - Archive Manager output XML report
    - Archive Manager XML configuration file
- **test.data/** contains sample test data

