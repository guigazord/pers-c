# pers-c
Repository for all of my codes in C language learning project and my git journey so far...  
  
First steps into git:  
  
1# downloaded git bash  
2# initialized git repository in desired folder with command 'git init'  
3# made first commit with of branch master with <add> command for file messing.c  
4# was working on clean tree branch but there was no conection with remote repository  
5# learned more advanced stuff on 'git --log' 'git status'  
6# by the time my current account wasn't sync with repository on my pc, I was using an old different account without knowing it, and without knowing that this would give me a lot of trouble hahaha :')  
7# first try to link to remote repository 'https://github.com/guigazord/pers-c'... error! I has had already created my git repository both on GitHub and PC not linking each other, so every attempt to 'git push origin master' was prompting unrelated stories  
8# in order to push I first had to log out of my wrong account, it was 'guigazord18' the one that I was using in the moment while the desired account was only 'guigazord'. Not knowing any command to log off from an account on gitbash i simply removed my old account so the next time I tryed to make some command on GitBash it would probably prompt me with login or something like that.  
9# it worked, i tried to push and it was still raising an error, but at least now the old acc was gone and i managed to login with the new one through the login prompt from the gitbash  
10# then i moved to my other problem, the lost link between my remote repository on GitHub and my local repository on my PC.  
11# after some research due to some errors i found some guide to veryfing my ssh keys and linking it to an ssh agent and manually adding it to my GitHub account  
12# ok, ssh was done, and after it was done i had to set yet my remote git repository, i managed to set it, but in the first push it raised me another error due to unrelated histories.  
13# the main thing was, i started two repositories, one in my PC and one in GitHub, the main problem i see here is that in each one of them there was already at least one archive, on GitHub the 'README.md' and on my local repo on my PC a simple *.c file with little printf()'s and scanf()'s.  
14# after a little bit of more research on internet i found a command '--allow-unrelated-histories' that was intended to this scenario when two repositories were kind of not synchronized with each other due to their different time-stamps of creation and existing files  
15# easily enough, the command git push origin master in adition with '--allow-unrelate-histories' made it work!  
16# and that was the story so far, now I'm working on my local repository PC, learning and revising basic C, and between every change commiting and pushing for my remote pers-c repo in here.  
