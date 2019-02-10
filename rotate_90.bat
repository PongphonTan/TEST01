cd /d D:\Study\vdo
ffmpeg -i %1 -map 0:0 -map 0:2 -acodec copy -vcodec copy rotated_%1