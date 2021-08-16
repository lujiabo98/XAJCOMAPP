// XAJCOMAPP.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#import "XAJ.dll"	 raw_interfaces_only raw_native_types no_namespace named_guids

int main(int argc, char* argv[])
{
	//初始化 COM 库，用来告诉 Windows 以单线程的方式创建 COM 对象
	::CoInitialize(0);

	//指向ITEMP类的智能指针
	IModelPtr pModel = nullptr;
	//创建 COM 组件对象，有两种方式
	HRESULT hr = pModel.CreateInstance(CLSID_Model);     //使用CLSID创建
	//HRESULT hr = pModel.CreateInstance("XAJ.Model");       //使用ProgID创建

	//调用新安江模型
	pModel->Run(argv);

	return 0;
}
