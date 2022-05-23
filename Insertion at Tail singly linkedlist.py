class NewNode:
    def __init__(self, value_of_Data_part):
        self.data_part =value_of_Data_part
        self.next_part = None

class linked_list:
    def __init__(self):
        self.head_point = None

    def  create_node_at_End(self, value_of_Data_part):
        CreateNewNode = NewNode(value_of_Data_part)
        if self.head_point==None:
            CreateNewNode.next_part=None
            self.head_point=CreateNewNode
        else:
            temp=self.head_point
            while temp.next_part != None:
                temp = temp.next_part
            temp.next_part = CreateNewNode
            CreateNewNode.next_part=None

    def display(self):
        if self.head_point==None:
            print("empty")
        else:
            ptr= self.head_point
            while (ptr):
                print(str(ptr.data_part) + " ", end="")
                ptr = ptr.next_part
            print(" ")

ob = linked_list()
print("Inserted Element At End: ")
ob.create_node_at_End(21)
ob.display()
ob.create_node_at_End(7)
ob.display()
ob.create_node_at_End(8)
ob.display()
ob.create_node_at_End(50)
ob.display()
print(" ")
