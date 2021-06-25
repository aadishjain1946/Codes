import numpy as np
import itertools


def genAtrix(str1, str2, mtcScore=3, gapCst=2):
    HVal = np.zeros((len(str1) + 1, len(str2) + 1), np.int)

    for i, j in itertools.product(range(1, HVal.shape[0]), range(1, HVal.shape[1])):
        mtch = HVal[i - 1, j - 1] + \
            (mtcScore if str1[i - 1] == str2[j - 1] else - mtcScore)
        delt = HVal[i - 1, j] - gapCst
        inst = HVal[i, j - 1] - gapCst
        HVal[i, j] = max(mtch, delt, inst, 0)
    return HVal


def performBacktracking(HVal, str2, bNew='', iOld=0):
    hFl = np.flip(np.flip(HVal, 0), 1)
    iNew, jNew = np.unravel_index(hFl.argmax(), hFl.shape)
    i, j = np.subtract(HVal.shape, (iNew + 1, jNew + 1))
    if HVal[i, j] == 0:
        return bNew, j
    bNew = str2[j - 1] + '-' + bNew if iOld - i > 1 else str2[j - 1] + bNew
    return performBacktracking(HVal[0:i, 0:j], str2, bNew, i)


def smithWatermanAlgo(str1, str2, mtcScore=3, gapCst=2):
    str1, str2 = str1.upper(), str2.upper()
    HVal = genAtrix(str1, str2, mtcScore, gapCst)
    bNew, pos = performBacktracking(HVal, str2)
    return pos, pos + len(bNew)


str1, str2 = 'abcderfg', 'eraatertre'
HVal = genAtrix(str1, str2)

str1, str2 = 'abcderfg', 'eraatertre'
st, ed = smithWatermanAlgo(str1, str2)
print(str1[st:ed])
