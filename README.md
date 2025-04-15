# CanteenLine

# Description

This C++ program simulates how students form a queue in a college canteen where:

Students can join the line from the front or the back.

Class representatives or in-charges (like "Riya") are allowed to join from the front.

Students are served from the front of the queue.

Uses std::deque from the C++ Standard Template Library (STL).

# Features

 Starts with 5 initial students in the queue.

 Allows adding new students at both ends.

 Removes the student at the front (served first).

 Displays the line before and after serving.

# Technologies Used

Language: C++

STL Container: std::deque

Concepts: Queue, Deque, Simulation

# How It Works

Initializes a deque with 5 students.

"Amit" joins the back of the queue.

"Riya" (class rep) joins the front.

One student is served (removed from the front).

Displays the queue before and after serving.
