[TOC]
# Description
<font face="微软雅黑" color=red>个人关于C++每日练习代码和语法的仓库</font>

# Reference  

- [markdown格式](https://blog.csdn.net/weixin_45494811/article/details/104307670)  

- [C++ 那些事](https://github.com/Light-City/CPlusPlusThings#%E6%96%B9%E5%BC%8F1-vscode--bazel)  

- [Effective C++](https://github.com/huihut/interview#effective)  

- [Vscode的快捷键](https://zhuanlan.zhihu.com/p/44044896)

***

# github每日提交流程
<details>
  <summary>click</summary>  

    git config --global user.name "zhangweiweicpp"  

    git config --global user.email "243xxxxx933@qq.com"  
    ---可选--添加公钥到github
    ssh-keygen -t rsa -C ‘上面的邮箱’  
    vim ~/.ssh
    ssh -T git@github.com  
    git remote set-url origin git@github.com:zhangweiweicpp/remote_image_process_script.git
    ---

    git init  

    第一次，后面再次提交时该步骤非必要  

    git clone <GitHub仓库的URL>  

    cd <本地仓库目录>  

    git checkout -b <分支名>  

    git pull origin <目标分支名>  

    #添加修改的文件到暂存区  

    git add .  

    git commit -m "Merge"  

    解决冲突  

    git commit -m "Commit message"  

    **将会推送本地主分支的更新到远程主分支。确保你当前位于正确的分支上，推送你的更改到远程仓库的 main 分支  

    git push origin <本地分支名>:<远程分支名> 
</details>
 
