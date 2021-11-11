This program has 2 parts, Shell script and *.C file.
We have a file named " related_data.zip " which is contain 48 text file of data and a file for the name of our samples that are countries and is named "list_arrange".
by this project we want to write a shell script which creates 48 directories and put each text file in the directory that is named same a th file. For example we have a text file named " 1.txt " so that we make a directory named " 1 ", so we put that file in it.
during executing shell script , our .c file will read the txt file from each directory and calculate Variance , Standard deviation and Mean.
.c file will save each quantity for each text file in a file named " info.txt " the corresponding directory. Also saves all calculated quantities in other file in the parent directory in name of " Variance" , " STD " and " Mean".
this is because we can plot the result by visualization tools like matplotlib in python and start to analizing them.
