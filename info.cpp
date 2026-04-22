/*
git config --global user.name "Your Name"
git config --global user.email "ur email address"
this will set the global configuration for git, you can also set it for a 
specific repository by omitting the --global flag and 
running the command inside the repository.

ls 
it will list the files in the current directory,
 you can use it to check if the files you want to add are present.

ls  -a    
this will show all hidden files 
to track the changes in our directory git has it's own file named 
.git 

>>>>>>>>>>>>>>>>>>>>>>>git status<<<<<<<<<<<<<<<<<<<<<<<<
git status
1)it will show the current status of the repository,
 2) in red it will show the untracked files and in green it will
  show the changes that are staged for commit.
  3) modified file will be showm as M in files sections and git status 
  will also point it out ! 

  .......................types of files in git status............................

  1) Untracked : 
  Untracked files:
  (use "git add <file>..." to include in what will be committed)
        index.html
        info.cpp

        here index.html and info.cpp are untracked files, 
        they are not being tracked by git yet, to track them we 
        need to add them to the staging area using git add command.
        this are files that are not yet added to repository,
         they are new files that git is not aware of and are only present on our local device

  2) modified :
   modified:   README.md
   here we made readme.md at the begining but made variuos changes to it and now it is 
   showing as modified, it means that the file is being tracked by git but has changes
    that have not yet been staged for commit.
    3) unmodified :
     nothing to commit, working tree clean
     here it means that there are no changes in the files that are being tracked by git, 
     all the files are in their original state and there are no modifications that need
      to be committed.
  

   4) staged :
    Changes to be committed:    
        (use "git restore --staged <file>..." to unstage)
            modified:   README.md
            here it means that the changes in readme.md have been staged for commit, 
            it is ready to be committed to the repository.

            when made any changes that are either modiied existing file or 
            added new file (untracked files) 
            we need to add it as mentioned above then after adding its on 
            staged state .

...............................................................................................

 git add :
git add <file>
1) it is used to add changes in the working directory to the staging area 

add is middle state between changes that are made and about to be committed ! 
everytinme instead of adding specific file we can also add all the files using
git add . (space is important after add )
after adding all the files and checking status 

On branch main
Your branch is up to date with 'origin/main'.

Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
        modified:   README.md
        new file:   index.html
        new file:   info.cpp

Changes not staged for commit:
  (use "git add <file>..." to update what will be committed)
  (use "git restore <file>..." to discard changes in working directory)
        modified:   info.cpp


 after commit 
        PS C:\Users\yashb\Downloads\gitdemo\gitdemo> git commit -m " i am doing good till now"
[main a3eb264]  i am doing good till now
 3 files changed, 98 insertions(+), 1 deletion(-)
 create mode 100644 index.html
 create mode 100644 info.cpp

 now just commiting does not update the remote repository, we need to push the changes
  to the remote repository using git push command.
 git push origin main



 .................................push and pull............................................
git push origin main
1) it is used to push the changes from local repository to remote repository, 
   it will update the remote repository with the changes that have been committed 
   in the local repository. 


   origin is the default name for the remote repository and main is the branch name,
   you can also specify other branch names if you are working on a different branch.

   now 
   cd ..
   this is used to move up one directory level, it will take you to the parent 
   directory of the current directory.  
   or simply you will get out of that foldr 

   mkdir gitdemo2
    this is used to create a new directory named gitdemo2, it will create a new folder 
    in the current directory with the name gitdemo2. 





*/