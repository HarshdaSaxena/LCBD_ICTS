import matplotlib.pyplot as plt
import numpy as np


plt.rc('axes', titlesize=16)     # fontsize of the axes title
plt.rc('axes', labelsize=16)    # fontsize of the x and y labels
plt.rc('xtick', labelsize=14)    # fontsize of the tick labels
plt.rc('ytick', labelsize=14)    # fontsize of the tick labels
plt.rc('legend', fontsize=14)    # legend fontsize
plt.rc('figure', titlesize=16)  # fontsize of the figure title


spectra = np.loadtxt('Power_Spectrum_eBOSS_SGC_Om031_OL084.txt')

plt.figure()
plt.plot(spectra[:,0],spectra[:,3]*spectra[:,0]) #Plot k.P versus k so that the oscillations are visible
plt.xlabel('wavenumber $k$ $[h\mathrm{Mpc}^{-1}]$')
plt.ylabel('$P$')
plt.grid()
plt.tight_layout()
plt.show()

