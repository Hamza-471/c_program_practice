
import streamlit as st

st.title("🤖 My Smart Chatbot")
st.write("Welcome! I am your Computer Science Assistant.")
st.write("Ask me questions about computers, programming and technology.")

question = st.text_input("Enter your question:")

if st.button("Ask"):

    if question.lower() == "hello":
        st.write("Hello! Welcome to My Smart Chatbot. I am happy to help you. What would you like to learn today?")

    elif question.lower() == "what is c":
        st.write("C is a powerful, general-purpose programming language developed by Dennis Ritchie. It is used to develop operating systems, system software and applications. It is also useful for learning programming fundamentals.")

    elif question.lower() == "what is python":
        st.write("Python is a high-level, general-purpose programming language. It has simple and readable syntax, which makes it easy for beginners to learn. It is used in Artificial Intelligence, web development, automation and data science.")

    elif question.lower() == "what is java":
        st.write("Java is a high-level, object-oriented programming language. It is widely used to develop desktop applications, web applications and Android software. It is known for its platform independence.")

    elif question.lower() == "what is c++":
        st.write("C++ is a general-purpose programming language developed as an extension of C. It supports object-oriented programming and is used in games, operating systems and high-performance software.")

    elif question.lower() == "what is a computer":
        st.write("A computer is an electronic device that accepts data as input, processes it according to instructions, stores information and produces useful results as output.")

    elif question.lower() == "what is cpu":
        st.write("CPU stands for Central Processing Unit. It is called the brain of the computer because it processes instructions, performs calculations and controls many computer operations.")

    elif question.lower() == "what is ram":
        st.write("RAM stands for Random Access Memory. It temporarily stores data and instructions that the computer is currently using. Its contents are usually lost when the computer is turned off.")

    elif question.lower() == "what is rom":
        st.write("ROM stands for Read Only Memory. It stores instructions and data that are retained even when the computer is turned off.")

    elif question.lower() == "what is ai":
        st.write("AI stands for Artificial Intelligence. It is a technology that allows computers and machines to perform tasks that normally require human intelligence, such as learning, problem-solving and understanding language.")

    elif question.lower() == "what is programming":
        st.write("Programming is the process of writing instructions that tell a computer how to perform specific tasks. Programmers use languages such as C, C++ and Python to create software.")

    elif question.lower() == "what is a loop":
        st.write("A loop is a programming structure that repeats a block of code multiple times. Python has two main types of loops: for loop and while loop. Loops help reduce repeated code.")

    elif question.lower() == "what is a variable":
        st.write("A variable is a named storage location used to hold data in a program. For example, age = 20 stores the value 20 in a variable called age.")

    elif question.lower() == "what is a function":
        st.write("A function is a reusable block of code designed to perform a specific task. Functions make programs organized, easier to understand and easier to maintain.")

    elif question.lower() == "what is hardware":
        st.write("Hardware refers to the physical parts of a computer that we can see and touch. Examples include the keyboard, mouse, monitor, motherboard and CPU.")

    elif question.lower() == "what is software":
        st.write("Software is a collection of programs and instructions that tell a computer what to do. Examples include Windows, Microsoft Word, Google Chrome and games.")

    elif question.lower() == "what is a database":
        st.write("A database is an organized collection of information that can be stored, managed and accessed easily. It is used in banks, schools, hospitals and businesses.")

    elif question.lower() == "what is an algorithm":
        st.write("An algorithm is a step-by-step set of instructions used to solve a problem or complete a task. It helps programmers plan their solutions before writing code.")

    elif question.lower() == "what is the internet":
        st.write("The Internet is a worldwide network that connects millions of computers and devices. It allows people to communicate, share information, study and access online services.")

    elif question.lower() == "what is an operating system":
        st.write("An operating system is system software that manages computer hardware and software resources. It provides an interface between users and computers. Examples include Windows, Linux and macOS.")

    elif question.lower() == "what is the difference between c and python":
        st.write("C and Python are both popular programming languages. C is generally faster and gives programmers more direct control over memory. Python has simpler syntax and is easier to learn. C is commonly used in system programming, while Python is widely used in AI, automation and web development.")

    elif question.lower() == "what is the difference between hardware and software":
        st.write("Hardware refers to the physical parts of a computer that we can touch, such as a keyboard and monitor. Software refers to programs and instructions that run on the computer, such as Windows and MS Word.")

    elif question.lower() == "what is the difference between ram and rom":
        st.write("RAM is temporary memory used while programs are running. Its data is usually lost when power is turned off. ROM stores instructions that remain available without power.")

    elif question.lower() == "what is the difference between compiler and interpreter":
        st.write("A compiler translates source code into machine code or another target form before execution. An interpreter executes program instructions through an execution environment. Both help computers run programs.")

    elif question.lower() == "how are you":
        st.write("I am doing great! Thank you for asking. I am always ready to answer your computer science questions.")

    elif question.lower() == "who created you":
        st.write("I was created as a beginner Python project using Streamlit. My purpose is to help users learn basic computer science concepts.")

    elif question.lower() == "what is your purpose":
        st.write("My purpose is to provide simple and useful information about computers, programming languages and technology. I am designed to help students understand basic computer science topics.")

    elif question.lower() == "bye":
        st.write("Goodbye! Thank you for using My Smart Chatbot. Keep learning and keep programming. Have a wonderful day!")

    else:
        st.write("Sorry! I don't have an answer to this question yet. Please try another computer science question.")
