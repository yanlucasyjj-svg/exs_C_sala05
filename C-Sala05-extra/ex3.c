#if defined(__has_include)
#  if __has_include(<stdio.h>)
#    include <stdio.h>
#  else
int printf(const char *, ...);
#  endif
#else
#  include <stdio.h>
#endif

int main(void) {

    int i;

    for (i = 1; i <= 10; i++) {
        printf("9 x %d = %d\n", i, 9 * i);
    }

 

    return 0;
}