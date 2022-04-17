data=$(acpi | awk '{split($0, a, " "); print a[4]};' | sed 's/,//')
echo $data
