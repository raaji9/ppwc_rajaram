//a
if (item != 0) {
    product *= item;
}
printf("%d\n", product);
//b
y = (x > y) ? (x - y) : (y - x);
//c
if (x == 0) {
    zero_count++;
} else if (x < 0) {
    minus_sum += x;
} else {
    plus_sum += x;
}
