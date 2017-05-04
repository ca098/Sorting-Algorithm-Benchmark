set ylabel "Time Taken in microseconds"
set xlabel "Size of list Array"
set style line 1 lc rgb '#0060ad' lt 1 lw 2 pt 7 ps 1.5  # --- blue
plot 'Bubble.out' with linespoints ls 1
