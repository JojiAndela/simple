# Functions.
Functions are parts of the  building blocks for simple-lang. They are set on instructions enclosed in a block that can be called anywhere in it's parent program / file.

```

block sayHello()
    display "Hello !"
end

```
---

Functions are defined with a prefix `block` followed by the function name with a bracket which  can either have parameters or not. The above function can be called to render its value by calling it elsewhere. E.g:

```

sayHello() # displays "Hello !"

```

## Functions with parameters.

Parameters in function blocks, are passed through when the function is called. Let's define a function that takes in a name as an argument and displays it:

``` Name.sim -  Display name.

# Main block 

block main()
    Greet("Abdul")
end

# Define block Greet which takes name as an argument when the function is defined.

block Greet(name)
    display "Greetings " +name+crlf
end

```
 Running the above examples gives out "Greetings Abdul". 

 ## The `main()` block.
 In the previous example above, we defined a block `main()`. The block `main()`, is a block that should be defined when building certain programs. The `main()` block is responsible for rendering programs that consists mainly of functions with parameters / arguments. Let's look at an example where   `main()` is used:

``` We'll be building a simple GUI app to show the function of main().

call "fulltick/widget/FBox.sim"
call "fulltick/widget/FWindow.sim" ? fulltick.widget
call "fulltick/core/FApp.sim" ? fulltick.core
call "fulltick/raw/FBoxType.sim"

block main()

	box = new FBox()
	box.setLabel("PANEL 1").setSize(250, 250).setPosition(0, 0)
	box.setType(FBOX_DOWN_BOX)
	box.setBackground(FColor.CYAN())
	box.setLabelColor(FColor.WHITE())
	
	box2 = new FPanel()
	box2.setLabel("PANEL 2").setSize(250, 250).setPosition(250, 0)
	box2.setBackground(FColor.BLUE())
	
	box3 = new FBox()
	box3.setLabel("PANEL 3").setSize(250, 250).setPosition(0, 250)
	box3.setType(FBOX_NONE)
	box3.setBackground(FColor.BLUE())
	
	box4 = new FBox()
	box4.setLabel("PANEL 4").setSize(250, 250).setPosition(250, 250)
	box4.setType(box.getBoxType())
	box4.setBackground(box.getBackgroundColor())
	
	window = new FWindow()
	window.setTitle("FBOX/FPANEL DEMO").setSize(500, 500)
	window.setBackground(FColor.MAGENTA())
	window.addWidget([box, box2, box3, box4])
	# window.resizable(true)
	
	display window.getHash()+crlf
	display box.getHash()+crlf
	
	window.show() FApp.run() 

```

The `main()` block above is responsible for rendering the above codes as all functions used there are inherited from the modules as situated above.

---

Functions are useful and can be implemented as methods in `class`. They can also be used for callback purposes. We'll be discussing advance topics soon enough in the coming chapters.