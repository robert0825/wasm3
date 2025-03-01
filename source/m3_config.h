//
//  m3_config.h
//
//  Created by Steven Massey on 5/4/19.
//  Copyright © 2019 Steven Massey. All rights reserved.
//

#ifndef m3_config_h
#define m3_config_h

#include "m3_config_platforms.h"

# ifndef d_m3MaxNumFunctionArgs
#   define d_m3MaxNumFunctionArgs               31
# endif

# ifndef d_m3CodePageAlignSize
#   define d_m3CodePageAlignSize                4096
# endif

# ifndef d_m3MaxFunctionStackHeight
#   define d_m3MaxFunctionStackHeight           2000
# endif

#define d_m3MaxFunctionSlots                    4000                // twice d_m3MaxFunctionStackHeight
#define d_m3MaxConstantTableSize                120

# ifndef d_m3LogOutput
#   define d_m3LogOutput                        1
# endif

# ifndef d_m3VerboseLogs
#   define d_m3VerboseLogs                      1
# endif

# ifndef d_m3FixedHeap
#   define d_m3FixedHeap                        false
//# define d_m3FixedHeap                        (32*1024)
# endif

# ifndef d_m3FixedHeapAlign
#   define d_m3FixedHeapAlign                   16
# endif

# ifndef d_m3Use32BitSlots
#   define d_m3Use32BitSlots                    1
# endif

//# ifndef d_m3EnableOptimizations
//#   define d_m3EnableOptimizations              0
//# endif

// logging --------------------------------------------------------------------

# define d_m3EnableOpProfiling      0
# define d_m3RuntimeStackDumps      0

# define d_m3TraceExec              (1 && d_m3RuntimeStackDumps && DEBUG)


// m3log (...) ----------------------------------------------------------------

# define d_m3LogParse           0   // .wasm binary decoding info
# define d_m3LogModule          0   // Wasm module info
# define d_m3LogCompile         0   // wasm -> metacode generation phase
# define d_m3LogWasmStack       0   // dump the wasm stack when pushed or popped
# define d_m3LogEmit            0   // metacode generation info
# define d_m3LogCodePages       0   // dump metacode pages when released
# define d_m3LogExec            0   // low-level interpreter specific logs
# define d_m3LogRuntime         0   // higher-level runtime information
# define d_m3LogStackTrace      0   // dump the call stack when traps occur
# define d_m3LogNativeStack     0   // track the memory usage of the C-stack

// other ----------------------------------------------------------------------

//#define d_m3SkipStackCheck
//#define d_m3SkipMemoryBoundsCheck

#endif // m3_config_h
