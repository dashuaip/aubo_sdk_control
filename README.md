# aubo_sdk_control

安装前提：需要安装了ros，cmake版本需要大于3.0.2

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

1.启动ros master  
```roscore```
