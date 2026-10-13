
class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def create(self):
        choice = 1
        temp = None

        while choice:
            data = int(input("Enter data: "))
            newNode = Node(data)

            if self.head is None:
                self.head = newNode
                temp = newNode
            else:
                temp.next = newNode
                temp = newNode

            choice = int(input("Do you want to continue? (1/0): "))

    def display(self):
        temp = self.head

        while temp is not None:
            print(temp.data, end=" -> ")
            temp = temp.next

        print("None")


ll = LinkedList()
ll.create()
ll.display()
