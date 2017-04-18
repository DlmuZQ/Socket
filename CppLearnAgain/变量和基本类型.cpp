/*
关于初始化问题：
    定义在函数体外的变量未被初始化时，则初始化为0；
    在函数体内的则不指定具体的值。
*/
int global_int;//0
int main(){
    int local_int;//不确定的值
}

/*
void* 是一种特殊的指针类型，可用于存放任意对象的地址；对其操作有限，只能和别的指针做比较、
作为函数的输入，输出，或者赋值给另外的一个void*指针。
*/

/*
与const相关
*/
const int i = get_size();//在运行时初始化
const int j = 42;//在编译时初始化

double dval = 3.14;
//中间隐式的类型转换，const int temp = dval
//const int &v = temp;
const int &v = dval;