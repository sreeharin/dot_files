data=$(uptime | awk '{split($0, a, " "); print a[3]}' | sed 's/,//')
echo $data
