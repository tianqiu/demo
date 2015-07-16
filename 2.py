from multiprocessing.dummy import Pool
import time
def do_add(n1):
    try:
        time.sleep(3)
        print n1
    except:
        return n1
pool = Pool(6)
pool.map(do_add, [1,2,3,4,5,6])
pool.close()
print 'a'
pool.join()
