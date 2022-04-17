bvalue=$(xrandr --verbose | grep Brightness)
val=$(echo $bvalue | awk '{split($0, a, " "); print a[2]}')
dec=$(echo $val - 0.10 | bc)

xrandr --output eDP-1 --brightness $dec
