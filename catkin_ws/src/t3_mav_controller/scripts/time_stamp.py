#!/usr/bin/python3

import matplotlib.pyplot as plt
import numpy as np
import rosbag
import sys
import os

# args = sys.argv
# print(len(args))
# assert len(args)>=2, "you must specify the argument"

# filename=os.path.normpath(os.path.join(os.getcwd(),args[1]))
# print(filename)

# bag=rosbag.Bag(filename)
bag=rosbag.Bag("../bag/_2021-12-16-11-57-51.bag")
np_times=None

for topic,msg,t in bag.read_messages():
    if topic=="/PWMs":
        np_time=np.array([[0.0, 0.0]])
        np_time[0,0]=t.secs
        np_time[0,1]=t.nsecs
        if np_times is None:
            np_times=np_time
        else:
            np_times=np.append(np_times,np_time,axis=0)

start_sec=np_times[0,0]
start_nsec=np_times[0,1]
t=np.zeros(np_times.shape[0])
for i in range(np_times.shape[0]):
    t[i]=(np_times[i,0]-start_sec)+(np_times[i,1]-start_nsec)/1000000000.0

time_diff=np.zeros(len(t)-1)
for i in range(len(t)):
    if i+1 == len(t):
        break
    time_diff[i]=t[i+1]-t[i]
x=np.arange(0,len(time_diff),1)
print(t)
print(time_diff)
ax1=plt.subplot(1,1,1)
plt.plot(x,time_diff,".-",linewidth=0.5)
# plt.ylim([0,0.01])
plt.ylabel('time_diff')
plt.xticks(visible=False)
plt.title("times")
plt.grid(True)

plt.tight_layout()
# plt.savefig('{0}-{1}.png'.format(filename,'time'),dpi=200)
plt.show()


bag.close()