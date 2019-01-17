# AbstractFactory

### 主要设计思想

在client(main函数) 中不能有具体工厂(ConcreateFactory) 和具体产品(ConcreateProduct) 出现, 所有的工厂生成 和 产品生成 都是通过AbstractFactory实现.