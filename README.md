# yt-download-controller
A program to manage and automate using the yt-dlp program.

Rationale: Originally, I had been using a separate GUI program for yt-dlp on Windows, but after switching to a Linux distro, I couldn't get it to function properly. Therefore, I decided to just use the standard CLI version. However, with the infreqeuency of which I use the program, I continuously forgot the necessary switches and options to get the results I desired, so I decided to write my own tool for managing it. Furthermore, I decided to upload and casually maintain the tool here to get some more experience with development and provide it to anyone looking for a crude way of interacting with yt-dlp for some basic things. There are likely tools that do extremely similar things to this, but I still wanted to make it for the experience and bespokeness.

***Do note that this is originally intended for personal use, so some things may be hacked together, "unsafe," or lacking features!***

***Currently, only Linux is supported***

## Requirements
- Python must be installed
- [yt-dlp](https://github.com/yt-dlp/yt-dlp) must be downloaded and located in the same directory as this tool
- A [custom build of ffmpeg](https://github.com/yt-dlp/FFmpeg-Builds) must be installed (As per yt-dlp)
- A list.txt must be created and located in the same directory as this tool (You will be prompted to automatically create one if not)

## How to Use
1. Check the [Requirements](#requirements) section and ensure everything is installed in the correct places
2. Compile the program using the Makefile
3. Copy+paste a list of URLs for yt-dlp to download into list.txt and save the file
4. Execute the program and use a number key + enter to select your desired option

## To-Do List (Ordered in terms of priority)
- Implement more options for downloading (Big rewrite)
- Improve Makefile
- Setup a build workflow for testing and making releases
- Implement an option to allow users to pass custom switches
- Windows support?
- Make a UI for it?
