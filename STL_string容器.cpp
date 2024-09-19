#include<string>
#include<iostream>
using namespace std;

void test01()
{
	string s1;
	cout << "str1=" << s1 << endl;

	const char* str = "hello world";
	string s2(str);
	cout << "str2=" << s2 << endl;

	string s3(s2);
	cout << "str3=" << s3 << endl;

	string s4(10, 'a');
	cout << "str4=" << s4 << endl;
}

void test02()
{
	string str1;
	str1 = "hello world";
	cout << "str1=" << str1 << endl;

	string str2;
	str2 = str1;
	cout << "str2=" << str2 << endl;

	string str3;
	str3 = 'a';
	cout << "str3=" << str3 << endl;

	string str4;
	str4.assign("hello c++");
	cout << "str4=" << str4 << endl;

	string str5;
	str5.assign("hello C++", 5);
	cout << "str5=" << str5 << endl;

	string str6;
	str6.assign(str5);
	cout << "str6=" << str6 << endl;

	string str7;
	str7.assign(5, 'c');
	cout << "str7=" << str7 << endl;

	/*给string字符串进行赋值的几种方式
	string& operator=(const char* s); char*类型字符串赋值给当前的字符串
	string& operator=(const string &s);把字符串s赋给当前的字符串
	string& operator=(char c); 字符赋值给当前的字符串
	string& assign(const char *s);把字符串s赋给当前的字符串
	string& assign(const char *s, int n);把字符串s的前n个字符赋给当前的字符串
	string& assign(const string &s);把字符串s赋给当前字符串
	string& assign(int n, char c);用n个字符c赋给当前字符串
	*/
}

void test03()
{
	string str1 = "私は";
	str1 += " yang";
	cout << "str1=" << str1 << endl;

	string str2 = " lanyu";
	str1 += str2;
	cout << "str2" << str2 << endl;

	string str3 = "I am";
	str3.append(" yang");
	str3.append("lanyu abced",6);
	cout << "(1)str3=" << str3 << endl;

	string strA = "abc happy";
	str3.append(strA, 4, 5);
	cout << "(2)str3=" << str3 << endl;
}

void test04()
{
	string str1 = "abcdefg";

	int pos = str1.find("de");//左から探す

	if (pos == -1)
	{
		cout << "Not fund";
	}
	else
	{
		cout << "pos=" << pos << endl;
	}

	pos = str1.rfind("de");//右から探す
	cout << "pos=" << pos << endl;
}

void test05()
{
	string str1 = "abcdefgde";
	str1.replace(1, 3, "!!!!");// 从索引 1 开始，替换 3 个字符为 "!!!!"
	cout << "str1=" << str1 << endl;
}

void test06()
{
	//文字列の比較
	string s1 = "hello";
	string s2 = "aello";

	int ret = s1.compare(s2);

	if (ret == 0)
	{
		cout << "s1 = s2" << endl;
	}
	else if (ret < 0)
	{
		cout << "s1 < s2" << endl;
	}
	else
	{
		cout << "s1 > s2" << endl;
	}
	//字符比较时，使用的是 ASCII 码。
	// 例如，字符 'h' 的 ASCII 值为 104，
	// 而字符 'a' 的 ASCII 值为 97，因此 'h' 大于 'a'。
}

void test07()
{
	/*
	下标操作符 []：
	可以直接使用 [] 访问字符串的字符，效率高，但不进行边界检查。
	如果你访问越界的索引，程序不会抛出异常，可能导致未定义行为。

	at() 方法：
	提供与 [] 类似的功能，但是会进行边界检查。如果索引超出范围，
	它会抛出 std::out_of_range 异常。
	使用 at() 更加安全，尤其是当你不确定索引是否有效时。
	*/

	string str = "hello world";
	for (int i = 0; i < str.size(); i++)
	{
		cout << str[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < str.size(); i++)
	{
		cout << str.at(i) << " ";
	}
	cout << endl;
	
	//文字を変更する
	str[0] = 'x';
	str.at(1) = 'x';
	cout << str << endl;
	
}

void test08()
{
	string str = "Ylanyu1997";
	str.insert(1, "ang");//1から“ang”を挿入
	cout << str << endl;

	str.erase(9, 4);//９から四つの文字を削除
	cout << str << endl;
}

void test09()
{
	string str = "abcdefg";
	string subStr = str.substr(1, 3);//从索引 1 开始，提取长度为 3 的子字符串
	cout << "subStr = " << subStr << endl;

	string email = "hello@sina.com";
	int pos = email.find("@");	//5
	string username = email.substr(0, pos);
	cout << "username:" << username << endl;

}
int main()
{
	test09();

	system("pause");

	return 0;
}
