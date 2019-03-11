from pyqtgraph.Qt import QtGui, QtCore
from pyqtgraph.ptime import time
import pyqtgraph as pg
import numpy as np
import serial
import sys
import time

com_port = 'COM39'     #Set for the required COM port
samples_to_show = 512  #Max samples to show on the plot (multiple of 4)
sample_count = 0
start_time_ms = 0

app = QtGui.QApplication([])

def update():
    global sample_plot, samples, sample_count, start_time_ms
   
    line = raw.readline().strip()
    if (chr(line[0]) == "#"):
        print(line)
        return
    line_list = line.decode('ascii').split(' ')
    samples.extend(list(map(int, line_list)))
    sample_count = sample_count + len(line_list)
    
    if (len(samples) > samples_to_show):
        del samples[0:4]
        
    if (sample_count % (samples_to_show / 2) == 0):
        delta_time_s = (time.time() - start_time_s)
        print("Sample rate = " + str(sample_count/delta_time_s))
        
    np_samples = np.array(samples, dtype='uint32')
    sample_plot.setData(np_samples)
    app.processEvents()

if __name__ == '__main__':
    plt = pg.plot()
    plt.setWindowTitle("ADPD4000Z-PPG Eval Board Data Plot")
    sample_plot = plt.plot(pen='r')
    samples = []
    raw = serial.Serial(com_port, 115200)
    
    timer = QtCore.QTimer()
    timer.timeout.connect(update)
    timer.start(0)
    
    start_time_s = time.time()
    
    if (sys.flags.interactive != 1) or not hasattr(QtCore, 'PYQT_VERSION'):
        QtGui.QApplication.instance().exec_()