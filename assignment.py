import socket

mysocket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

mysocket.connect(('www.pythonlearn.com', 80))

mysocket.send('GET http://www.pythonlearn.com/code/intro-short.txt HTTP/1.0\n\n'.encode())

data = mysocket.recv(512)

while len(data) > 1:

    print(data.decode(),end='')
    data = mysocket.recv(512)



mysocket.close()
