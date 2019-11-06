#plot [:][-1:1] "fout.txt" using 1:($2-cos(2*3.14159265359*32*$1)) w l
plot [:][-1:1] "fout.txt" using 1:2 w l
#plot "fout.txt" using 1:2 w l , "gout.txt" using 1:2 w l 
pause -1