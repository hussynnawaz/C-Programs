What is Round Robin?
The Round-robin (RR) scheduling algorithm is designed especially for timesharing systems.

It is similar to FCFS scheduling except that is a purely preemptive algorithm.

A small unit of time, called a time quantum or time slice, is defined. A time quantum is generally from 10 to 100 milliseconds

The ready queue is treated as a circular queue. The ready queue is treated like a FIFO queue of processes. New processes are added to the tail of the ready queue. The CPU picks the first process from the ready queue, sets a timer to interrupt after 1-time quantum, and dispatches the process.

Round Robin Algorithm:
The CPU scheduler travels the ready queue, allocates the CPU to each process for a time interval of up to 1-time quantum, the process is preempted and the next process in the queue is allocated the CPU.

If the process has a CPU burst of less than 1-time quantum then the process releases the CPU and the scheduler selects the next process in the ready queue.

If the CPU burst of the currently running process is longer than 1-time quantum, the timer will go off and will cause an interrupt to the operating system. A context switch will be executed, and the process will be put at the tail of the ready queue. The CPU scheduler will then select the next process in the ready queue.

Advantages:

Algorithm logic is simple.

System supports multiprogramming effectively.

Gives a better response than SJF.

Disadvantages:

The average waiting time under RR is often long.

If the duration of time quantum is very large, the system acts as FIFO.

Average turnaround time is higher than SJF.

If the duration of time quantum is very small, then Every time a dispatcher is called. More context switching and a large amount of time is wasted in transferring PCB contents to internal registers to PCB.

For Example:

consider the following set of processes and their burst time. Let the time is 20 units.

Process	Burst Time
P1	53
P2	17
P3	68
P4	24
Working of Round Robin:
The Process P1 will be allocated for 20-time units and then pre-empted, process P2 is allocated time units.

The Process continues till all processes terminates.

The Gantt chart Shows the details:

round robin program in c
To calculate waiting time of the processes

Waiting time for a process = (Start time – arrival time) + (New start time – Old finish time)

1. Waiting time for P1 = (0-0)+(77-20)+(121-97) = 81.

2. Waiting time for P2 = (20-0) = 20.

3. Waiting time for P3 = (37-0)+(97-57)+(134-117) = 94.

4. Waiting time for P4 = (57-0)+(1177-77) = 57+40 = 97.

5. Average Waiting time = (292)/4 = 73.

Waiting Time: Waiting time is the sum of periods spent waiting in ready queue as the CPU scheduling algorithm does not affect the amount of time that a process spends waiting in the ready queue.

Turn-Around Time: One major factor from the process’s point of view is how long it takes to execute that process. Turnaround time is the interval from the time of submission of a process to the time of completion. i.e

Turn around time=(time spent in waiting to get into memory)+(time spent waiting in ready queue)+(time spent executing in CPU)+(time spent in doing I/O).