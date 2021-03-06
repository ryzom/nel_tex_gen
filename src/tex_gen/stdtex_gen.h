
#include "nel/misc/types_nl.h"

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

#include <string>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <algorithm>
#include <sstream>
#include <exception>
#include <utility>
#include <deque>

#include "nel/misc/common.h"
#include "nel/misc/debug.h"

#include "nel/misc/stream.h"
#include "nel/misc/time_nl.h"
#include "nel/misc/vector.h"
#include "nel/misc/matrix.h"
#include "nel/misc/bitmap.h"
#include "nel/misc/rgba.h"

#include "3d/transform.h"
#include "3d/mot.h"
#include "3d/quad_grid.h"

#ifdef NL_OS_WINDOWS
#include <windows.h>
#undef min
#undef max
#endif // NL_OS_WINDOWS
