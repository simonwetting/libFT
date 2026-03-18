*This project has been created as part of the 42 curriculum by*

Description:

The Libft library, you already know what it is. And otherwise look at all the functions XD

It contains functions for copying, concatenating and comparing strings and memory. To check what kind of character a char is or to make them uppercase or lowercase. To create linked lists (creating structs, linking them together, and freeing them and there content). And to print strings, chars an numbers. Some more functions don't fall into these categories completely, suchs ft_split, ft_strtrim, ft_strjoin, ft_strlen, ft_substr, ft_strmapi

Instruction:

Compile using the makefile. Next compile it using your own main.c and run it like this:
	cc main.c libft.a; ./a.out

Which can also be done using make frun

Or when the library should be recompiled and the main need to be run "make frun" or "make frune" can be used

Resources:
	When I got stuck my peers helped me. Sometimes smaller questions could be asked to the AI, for example when pushing to git didn't work. And of course the LibFTTester from trippouile. I did write my own tests for all the functions. Though there were many cases that I forgot to check. But there were also cases that the LibFTtester didn't check for exampke the ft_strtrim.