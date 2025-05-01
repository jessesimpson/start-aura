# 版本: UE 5.3

# Github
```
Aurora Slim 开启Tun代理模式，才能上传
$ git push origin main
```

# Discard 讨论组
```
https://discord.gg/qVqSSmp3ZD
用户名：yxares@gmail.com
社区密码：fb9hZWgs-AWVXcr
```

# 首次创建项目移除不必要的代码与资源目录
```
Enigne
Rules
Pragrams
Visualizers
```

# 偏好设置
```
Edit -> Editor Perferences -> General -> Source Code -> Source Code Editor: Vistual Studio 2022
Edit -> Editor Perferences -> General -> Live Coding -> Enable live Coding: false
Edit -> Editor Perferences -> General -> Miscellaneous -> Hot Reload -> Automatically Compile Newly Added C++ Classes: false
Edit -> Project Settings -> Legal Copyright Notice: 设置版权描述
```

# 下载调试符号
```
在UE5 Launcher -> 启动 -> 点击右三角 -> 选项 -> 勾选下载调试符号(79G)
```

# 如果要选择GameDebug模式调试,需要先打包项目游戏
```
Platforms -> Windows -> Package Project
```

# 在 Unreal Engine 5 开发中，确实可以避免每次调试都重新打开一个 Editor 实例，而是使用已经运行的 UE Editor 实例进行调试。以下是几种实现方法：
```
使用 Attach to Process（附加到进程）
最适合： 当Editor已经打开，只需附加调试器
保持 UE Editor 运行（不要关闭）
在 Visual Studio 中：
点击顶部菜单 Debug → Attach to Process... (Ctrl+Alt+P)
在进程列表中找到 UnrealEditor.exe（注意选择正确的进程）
点击 Attach 按钮

开始调试：
现在可以在 VS 中设置断点
在 Editor 中执行操作会触发断点

或者如果有Reattach UnrealEditor选项，直接点击即可
```
# 04. Player and Enemy Characters
```
UCLASS(Abstract)
Abstract:           1. 不能被直接实例化的基类,通常用于定义接口或部分实现 2.不会出现在可创建类列表中
DefaultToInstanced：1. 默认实例化。
NotBlueprintable：  1. 禁止蓝图继承
```

# 05. Character Blueprint Setup
```
UPROPERTY() 是 UE5 的 反射系统宏，用于标记一个 C++ 变量，使其：
1. 在蓝图中可访问(可选)
2. 在UE编辑器中显示并可编辑(根据参数配置)
3. 支持序列化(保存到磁盘)
https://dev.epicgames.com/documentation/zh-cn/unreal-engine/unreal-engine-uproperties?application_version=5.5
```

# 06. Animation Blueprints
实现：添加动画蓝图
```
蓝图类需要编译并保存:BP_AuraCharacter与BP_Gobin_Spear蓝图需要编译并保存，否则可能在Event Grpah中拖拽节点，并搜索Cast To BPxxx中找不到
奇怪的是：退出后有找不到了，需要重新编译，但是在重新编译后，拖拽使用并且连上线了Try Get Pawn Owner -> Cast To BP_AuraCharacter_，那么再退出Editor后不会小时
```