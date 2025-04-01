// Code to implement the gcf function goes here
int gcf(int num1, int num2) {
    int remainder;
    if (num1 < num2) {
        remainder = num1 % num2;
    }
    else {
        remainder = num2 % num1;
    }
    while (remainder != 0) {
        if (num1 > num2) {
            remainder = num1%num2;
            num1 = num2;
            num2 = remainder;
        }
        else {
            remainder = num2%num1;
            num2 = num1;
            num1 = remainder;
        }
    }
    if (num1 != 0) {
        return num1;
    }
    else if (num2 != 0) {
        return num2;
    }
    else {
        return 0;
    }
}