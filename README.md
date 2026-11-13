# C-Learning
大一 C语言学习记录

## 01  mypow(幂运算 a^b)
- 功能：多组输入 a b,输出 a^b;b=-1 结束
- 核心：result 初值=1（连乘单位元）；循环 b 次乘 a
- 多组输入：while(scanf("%d%d",&a,&b)==2&&b!=-1)
- 踩坑：曾误 return 0 (全输出0）；%lld 格式符警告（.cpp/.c 差异）
- 代码：`5.3.cpp`
