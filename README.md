# C
个人关于C++每日练习代码和语法的仓库

# github每日提交流程
git config --global user.name "zhangweiweicpp"
git config --global user.email "243xxxxx933@qq.com"
git init
git clone <GitHub仓库的URL>
cd <本地仓库目录>
git checkout -b <分支名>
cp -a <本地代码目录>/ <本地仓库目录>/
git add .
git commit -m "Commit message"
解决冲突
git commit -m "Merge"
**将会推送本地主分支的更新到远程主分支。确保你当前位于正确的分支上，推送你的更改到远程仓库的 main 分支
git pull origin <目标分支名>
git push origin <本地分支名>:<远程分支名>
