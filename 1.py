import threadpool
import threading
import time,random
def hello(str):
    time.sleep(2)
    return str
def printf(request,result):
    print request.requestID
    print result
data = [random.randint(1,10) for i in range(20)]
pool=threadpool.ThreadPool(2)
requests=threadpool.makeRequests(hello,data,printf)
print requests
[pool.putRequest(req) for req in requests]
pool.wait()