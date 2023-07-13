# ExLib ArduHal

ExLib ArduHal是基于ExLib构建的硬件抽象层，旨在允许您使用Arduino的语法甚至Arduino的软件包来快速构建项目。

## 原理

ExLib ArduHal借助ExLib实现了Arduino的众多接口，并尽可能保证这些接口的行为和Arduino一致。这使得Arduino中依赖这些接口的库/包能够正常地通过ArduHal在您的芯片上运行。
