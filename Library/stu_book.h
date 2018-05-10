#ifndef STU_BOOK_H
#define STU_BOOK_H
#include <string>
using namespace std;
//学生
typedef struct
{
	int id;//学生学号
	char* name = (char*) new char[30];//学生姓名
	int borrowsum;//已借阅的书本数
	int unreturn;//未归还书本数
	int b[5];//已借书的编号
	char* borrowdays = (char*) new char[30];//上次借阅的时间
}Student;
//图书
typedef struct
{
	int id = 0;//图书检索号，初始化为0，新增一种图书加一
	int borrowCount = 0;//图书借阅量，初始值为0
	char* name = (char*) new char[20];//书名
	char* author = (char*) new char[20];//作者
	char* kind = (char*) new char[20];//种类
	double price;//价格
	int sum = 0;//图书馆此书总库存
	int noenum = 0;//图书馆此书现有库存
	int appointment= 0;//预约量。初始值为0
	bool right;//是否可借，初始值为TRUE
	char* borrowdate = (char*) new char[30];//最近一次被借出的时间
	char* returndate = (char*) new char[30];//图书最近一次被归还的时间
	char* room = (char*) new char[30];//图书所在区域
}Book;
#endif // !STU_BOOK_H