#include <stdio.h>

#if (0)
a = "#include <stdio.h>{0:c}{0:c}#if (0){0:c}a = {1:c}{2:s}{1:c}{0:c}{0:c}b = '''{3:s}'''{0:c}print(a.format(10, 34, a, b)){0:c}#endif"

b = '''a'
#endif

int main() {
    const char *a = "#include <stdio.h>%1$c%1$c#if (0)%1$ca = %2$c#include <stdio.h>{0:c}{0:c}#if (0){0:c}a = {1:c}{2:s}{1:c}{0:c}{0:c}b = '%4$c'{3:s}'%4$c'{0:c}print(a.format(10, 34, a, b)){0:c}#endif%2$c%1$c%1$cb = '%4$c'a'%1$c#endif%1$c%1$cint main() {%1$c    const char *a = %2$c%3$s%2$c;%1$c    printf(a, 10, 34, a, 39);%1$c    return 0;%1$c}%1$c%1$c#if (0)%1$c'a'%4$c'%1$cprint(a.format(10, 34, a, b))%1$c#endif%1$c";
    printf(a, 10, 34, a, 39);
    return 0;
}

#if (0)
'a'''
print(a.format(10, 34, a, b))
#endif
