# aubo_sdk_control（可以集成 ros 中除了控制机械臂的其他功能）

安装前提：ubuntu 安装了 ros，cmake 版本需要大于 3.0.2

---
一、aubo package 安装

1.创建文件夹  
```mkdir -p ~/aubo_ws/src```

2.进入src目录   
```cd ~/aubo_ws/src/```

3.下载 ros package  
```git clone https://github.com/dashuaip/aubo_sdk_control.git```

或  

```git clone https://gitee.com/dashuaip/aubo_sdk_control.git```

4.回到工作空间目录  
```cd ~/aubo_ws```

5.编译  
```catkin_make```

或  

```catkin build```

6.注意***处修改成自己的用户名   
```echo "source /home/***/aubo_ws/devel/setup.bash" >> ~/.bashrc```

---
二、aubo sdk 控制  

1.启动 ros master  
```roscore```  

2.控制机械臂  
```rosrun aubo_sdk_control aubo_sdk_control_main _robot_ip:=***.***.***.***```
