import sys

def enqueueElement(queue):
    element = input('Enter the element to be enqueued: ')
    queue.append(element) 

def dequeueElement(queue): 
    if len(queue) == 0:
        print('Queue is empty')
        return
    print(f'Dequeued element is {queue[0]}')
    del queue[0]  

def listQueue(queue):  # Accessor
    if len(queue) == 0:
        print('Queue is empty')
        return
    print(f'The Queue is {queue}')

def front(queue): 
    if len(queue) == 0:
        print('Queue is empty')
        return
    print('The front element is', queue[0])

def exit_program(queue):
    sys.exit('End of Program')

def invalid_choice(queue):
    print('Invalid choice entered')

def get_menu(choice, queue):
    menu = {
        1 : enqueueElement,
        2 : dequeueElement,
        3 : listQueue,
        4 : front,
        5 : exit_program
    }
    menu.get(choice, invalid_choice)(queue)

def start_app(queue):
    choice = 0
    while True:
        print('1:Enqueue 2:Dequeue 3:ListQueue 4:Front 5:Exit')
        choice = int(input('Enter your choice: '))
        get_menu(choice, queue)

queue = []  # This list will work as the Queue
start_app(queue)
