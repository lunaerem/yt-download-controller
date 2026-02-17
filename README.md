# yt-download-controller
A lightweight project to manage and automate using the yt-dlp program.

<ins>Rationale:</ins> Originally, I had been using a separate GUI program for yt-dlp on Windows, but after switching to a Linux distro, I couldn't get it to function properly. Therefore, I decided to just use the standard CLI version. However, with the infreqeuency of which I use the program, I continuously forgot the necessary switches and options to get the results I desired, so I decided to write my own tool for managing it. Furthermore, I decided to upload and casually maintain the tool here to get some more experience with development and provide it to anyone looking for a crude way of interacting with yt-dlp for some basic things. There are likely tools that do extremely similar things to this, but I still wanted to make it for the experience and bespokeness.

> [!Warning]
> ***Do note that this is originally intended for personal use, so some things may be hacked together, "unsafe," or lacking features!***

> [!Important]
> Currently, only Linux is supported

## Requirements
- Python
- [yt-dlp](https://github.com/yt-dlp/yt-dlp) must be downloaded and located in the same directory as this tool
- A [custom build of ffmpeg](https://github.com/yt-dlp/FFmpeg-Builds) must be installed (As per yt-dlp)

## How to Use
1. Check the [Requirements](#requirements) section and ensure everything is installed in the correct places
2. Compile the program using the Makefile (Precompiled binaries coming in the future)
3. Copy+paste a list of URLs for yt-dlp to download into list.txt and save the file
4. Execute the program and use a number key + enter to select your desired option

## To-Do List
- [ ] Implement more options for downloading (Big rewrite to decouple from the current crude user interface)
- [ ] Implement configuration options (I.E. allowing the user to set a custom location for where their yt-dlp is located)
- [ ] Improve Makefile
- [ ] Setup a build workflow for testing and making releases
- [ ] Replace the current terminal-based interface with a proper, optional GUI (Cross platform)

## Disclaimer
> [!Important]
> The usage of this software to assist with theft or piracy is ***NOT*** condoned! The program is provided as is and is to be used exclusively for personal operation as a more user-friendly way to interact with yt-dlp.
