### ASSIGNMENT ##
## BIS, CS
1. What command would you use to read about the terminal driver, tty (not the tty command)? How would you read a local tty man page that was kept in /usr/local/share/man?
2. Does a system-wide config file control the behavior of the man command at your site? What lines would you add to this file if you wanted to store local material in /doc/man? What directory structure would you have to use in /doc/man to make it a full citizen of the man page hierarchy?
3. What is the current status of Linux kernel development? What are the hot issues? Who are the key players? How is the project managed?
4. Research several UNIX and Linux systems and recommend an operating system for each of the following applications. Explain your choices.
  a. A single user working in a home office
  b. A university computer science lab
  c. A corporate web server
d. A server cluster that runs the database for a shipping company
5. Suppose you discover that a certain feature of Apache httpd does not appear to work as documented on Ubuntu.
6. What should you do before reporting the bug?
7. If you decide that the bug is real, whom should you notify and how?
8. What information must be included to make the bug report useful?
9. Linux has made dramatic inroads into production environments. Is UNIX doomed? Why or why not?
10. Write a simple bash script (or pair of scripts) to back up and restore your system.
## IS, SE
1. How is a user’s default group determined? How would you change it?
2. Explain the differences among the following umask values: 077, 027, 022, and 755. How would you set one of these values as a site-wide default for new users? Can you impose a umask standard on your users?
3. What is the purpose of the shadow password file?
4. List the steps needed to add a user to a system without using useradd. What extra steps are needed for your local environment?
5. Is it really that bad to turn off a UNIX or Linux system with the power button on the computer case? What about unplugging the computer from the wall? Explain your answer.
6. Use the GRUB command line to boot a kernel that isn’t in grub.conf.
7. Explain the concept of run levels. List the run levels defined on one of your local systems, and briefly describe each. Why is Ubuntu’s run-level concept different from that of other Linux distributions?
8. Write a startup script to start the “foo” daemon (/usr/local/sbin/foo), a network service. Show how you would glue it into the system to start automatically at boot time.
9. If a system is at run level 3 and you run the command telinit 1, what steps will be taken by init (for system that use init)? What will be the final result of the command?
10. Draw a dependency graph that shows which daemons must be started before other daemons on your system.

## HIS, CARRYOVER
1. Use the find command with the -perm option to locate five setuid files on your system. For each file, explain why the setuid mechanism is necessary for the command to function properly.
2. Create two entries for the sudoers configuration file:
3. One entry that allows users matt and lisa to service the printer, unjam it, and restart printer daemons on the machine printserver
4. One entry that allows drew, smithgr, and jimlane to kill jobs and reboot the machines in a student lab
5. Create three “shocking nonsense” passphrases but keep them to yourself. Run your three passphrases through md5sum and report these results. Based on the current state of cryptographic technology, is it safe to share the MD5 results? Why or why not?
6. Enumerate a sequence of commands that modify someone’s password entry, and show how you could cover your tracks. Assume you had only sudo power (all commands allowed, but no shells or su).
7. Write a script that displays a one-screen summary of status data related to one of the following categories: CPU, memory, disk, or network. The script should leverage OS commands and files to build an easy-to understand dashboard that includes as much information as possible.
8. A local user has been abusing his crontab privileges by running expensive tasks at frequent intervals. After asking him to stop several times, you are forced to revoke his privileges. List the steps needed to delete his current crontab and make sure he can’t add a new one.
9. Write a script that enumerates the system’s users and groups from /etc/passwd and /etc/group (or their network database equivalents). For each user, print the user’s UID and the groups of which the user is a member.
10. List the steps used to create a working multiboot system that runs both Linux and Windows.
## CSDFE
1. Explain the relationship between a file’s UID and a running process’s real UID and effective UID. Besides file access control, what is the purpose of a process’s effective UID?
2. Suppose that a user at your site has started a long-running process that is consuming a significant fraction of a machine’s resources.
  a. How would you recognize a process that is hogging resources?
  b. Assume that the misbehaving process might be legitimate and doesn’t deserve to die. Show the commands you would use to suspend the process temporarily while you investigate.
  c. Later, you discover that the process belongs to your boss and must continue running. Show the commands you’d use to resume the task.
  d. Alternatively, assume that the process needs to be killed. What signal would you send, and why? What if you needed to guarantee that the process died?
3. Find a process with a memory leak (write your own program if you don’t have one handy). Use ps or top to monitor the program’s memory use as it runs.
4. Write a simple script that processes the output of ps to determine the total VSZ and RSS of the processes running on the system. How do these numbers relate to the system’s actual amount of physical memory and swap space?
5. What is the difference between hard links and symbolic (soft) links? When is it appropriate to use one or the other?
## CNISE
1. What is a umask? Create a umask that would give no permissions to the group or the world.
2. When installing a new system, it’s important to set up the system volumes such that each filesystem (/var, /usr, etc.) has adequate space for both current and future needs. The Foobar Linux distribution uses the following defaults:
/ 2GB
/var 100MB
/boot 100MB
<swap> 2GB
/usr remaining space
What are some potential problems with this arrangement on a busy server box?
3. Why is it a good idea to put some partitions (such as /var, /home, and swap) on a separate drive from other data files and programs? What about /tmp? Give specific reasons for each of the filesystems listed.
4. Write a script that finds all the hard links on a filesystem.
5. Give commands to accomplish the following tasks.
a. Set the permissions on the file README to read/write for the owner and read for everyone else.
b. Turn on a file’s setuid bit without changing (or knowing) the current permissions.
c. List the contents of the current directory, sorting by modification time and listing the most recently modified file last.
d. Change the group of a file called shared from “user” to “friends”.
6. By convention, the /tmp directory is available to all users who care to create files there. What prevents one user from reading or deleting another’s temporary files? What’s to prevent a disgruntled user from filling up /tmp
