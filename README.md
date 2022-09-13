# competitive-coding
This is to save all the solution for some competitive coding problems that I encountered and solved in time 


I am currently using the g++ (x86_64-posix-sjlj-rev0, Built by MinGW-W64 project) 12.2.0 version for the enviorment set up 
used text editor : Sublime text 
input and output file name  : inputf.in , outputf.in (created on the same directory)


After that created a custom build system  by going to (tools > build system > new build system )
and writen the below code 

 {
"cmd": ["g++.exe","--std=c++20", "${file}", "-o", "${file_base_name}.exe", "&&" , "${file_base_name}.exe<inputf.in>outputf.in"],
"selector":"source.cpp",
"shell":true,
"working_dir":"$file_path"
}



currently using the --std=c++20 standard .
save the file by this way ( name_of_your_file.sublime-build )
and then set the the build system to the newly created one by going to the build system > and then select your file


you are almost ready to go but you will face some large compilation time if you are using <bits/stdc++.h> header file 
so I suggest you to precompile this header file and use that to compile your code ..  

go to your   <where you installed your mingw>\MinGW\lib\gcc\mingw32\12.2.0\include\c++\mingw32\bits
and then you can see there you have the bits/stdc++.h file so precompile it you have to open a cmd or  power-shell whichever you prefer most 
now  there write  (g++ --std=c++20 stdc++.h) just notice here which-ever c++ standards you are using just write that standard number I am currently using the 20
standard so I used 20
and then hit enter it's done.

now just use  
include "bits/stdc++20"
instade of 
include <bits.stdc++20>

and you are good to go 

