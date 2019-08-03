主要分为两人大模块：
	
	客户端
		1、进入时的功能开户、销户、登录、解锁
			开户：输入姓名、身份证号、设置密码，如果开户成功，则服务器上保存一个账号信号（一个账号存一个文件，文件名建议是账号）。
			销户：输入帐号、密码，服务器询问是否确认销户，如果确认则服务器删除帐号文件，并记录帐号。（我没实现）
			登录：输入账号、密码，三次错误账号锁定。
			解锁：输入账号、身份证号解锁。
		2、登录成功：存钱、取钱、转账、查询、修改密码
			存钱：输入存钱金额
			取钱：输入取钱金额
			转账：目标帐号和要转的金额
			查询：不需要输入数据
			修改密码：原密码和新密码
	服务器
		如果识别功能：根据消息的类型识别客户端请求的功能。
		开启服务各项功能的子进程
			各进程按照消息类型接收消息
		
	头文件
	
	帐号结构体
	{
		帐号
		身份证号
		密码
		金额
	}

	消息结构体
	{
		消息类型
		帐号结构体
	}
	
