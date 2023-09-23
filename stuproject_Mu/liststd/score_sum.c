#include <stdio.h>
#include <string.h>
#include "../header/headerlist.h"

int calculateTotal(Type* stu_score)
{
    return stu_score ->chinese_score + stu_score->math_score + stu_score->english_score;
}

/*int calculateTotal(Student* student) {
    return student->chinese + student->math + student->english;
}*/