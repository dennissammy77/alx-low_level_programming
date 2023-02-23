/****Makefiles*****/

What are make, Makefiles
	are sets of rules to determine which part of a program need to be recompiled.
When, why and how to use Makefiles
	When:-Makefiles are used to decide which parts of a large program need to be recompiled.
	Why:- Makefiles help build and manage projects automatically.
	How:- Create a Makefile listing the rules for building the executable the file should be named 'Makefile' or 'makefile'.
What are rules and how to set and use them
	A rule says when and how to remake certain files-known as targets
What are explicit and implicit rules
	- Explicit Rules specify the instructions that make must follow when it builds secific targets.
	- Implicit rules tell make how to use customary techniques so that you do not have to specify them in detail when you want to use them.

What are the most common / useful rules
	GNU  make
What are variables and how to set and use them

A makefile consists of a set of rules.
eg:
	targets: prerequisites
		command
		command
		command
makefiles are used to help decide which part of a large program need to be recompiled.

Prerequisites help keep track of changes after the target file has been modified.
The essence of make is decide if the prerequisites of target file have changed since the target file eas last compiled

Make clean
Clean is often used as a target that removes the output of other targets.

Variables 
can only be strings, use := but =  can also work.

The all target
all target runs multiple targets

/**Fancy Rules**/
- Implicit rules
- Explicit rules

:Ref

- https://makefiletutorial.com/#:~:text=A%20Makefile%20consists%20of%20a,make%20the%20target(s).
- https://www.gnu.org/software/make/manual/html_node/
