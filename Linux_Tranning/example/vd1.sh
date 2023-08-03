n=
read n

# read the inputs
arr=
read arr

awk '{for(i=1;i<=NF;i++){ print $i }}' <(echo "${arr[@]}") | sort | uniq -u
