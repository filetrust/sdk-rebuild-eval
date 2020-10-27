# Getting Started - Docker

## Docker on Windows

If you haven’t used docker before you will need to install it now. You will need to share the drive you want to input and output data from with your instance of docker. 
To do this right click docker in the system tray. Click 'settings'. Click 'Shared Drives' and share the appropriate drive. Click 'Apply'.

To build the image open a PowerShell window in the dockerfile directory. Run the following command:
docker build -t *imageName*:0.1 .     (include the white space and trailing period)
This will produce a docker image with the configured *imageName*.

Before we run a container of the image lets create an input directory and an output directory, for instance:

•	C:\data\input – Place files to be processed here.

•	C:\data\output – Note that your output directory must be empty or Glasswall will fail to produce an output and will destroy any data present in there.

Now let’s mount the input and output directories and run a container of our image, using the following command:
docker run -it -v C:\data\input:/input -v C:\data\output:/output *imageName*:0.1

This command will build the container and mount "C:\data\input" to "/input" on the container and "C:\data\output" to "/output" and then immediately process the contents of "/input" and place the regenerated files and analysis reports in "/output".

A prebuilt Docker image is availible from: https://hub.docker.com/repository/docker/glasswallsolutions/evaluationsdk

## Tags
- :1 is Glasswall Rebuild SDK
- :2 is Glasswall Editor SDK (See [here](https://github.com/filetrust/sdk-editor-eval))
