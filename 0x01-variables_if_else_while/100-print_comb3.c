int main() {
    for(int i = 0; i < 10; i++) {
        for(int j = i+1; j < 10; j++) {
            putchar(i+'0');
            putchar(j+'0');
            if(i < 8) {
                putchar(',');
                putchar(' ');
            }
        }
    }
    return 0;
}

