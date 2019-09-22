# cat test.txt | tr ' ' '\n' | tr -d '[:punct:]' | grep -v '[^a-z]' | sort | uniq -c | sort -k1,1nr | awk '{printf $2 " " $1 "\n"}'
