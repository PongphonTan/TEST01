cd 
ffmpeg -i %1.mp4 -map 0:0 -map 0:2 -acodec copy -vcodec copy %1_rotated.mp4