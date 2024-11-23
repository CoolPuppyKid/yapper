# Yapper (Yet Another Problem Problem Error Reporter)

### Yapper is a very simple logging header only library heres how it works:

**Yapper by itself only has 3 functions**

```C
// log info
yapInfo("Yap");
// log warning
yapWarning("Yap");
// log error
yapError("Yap");
```

**This makes Yapper a very smol boi**

**And there are Defines but only 2:**
```C
// options before include
#define SHORT
#define BOLD
#include "include/yapper.h"
```
**Add them before including yapper**

**Example of what Short Define outputs:**
```
[INFO]: Yap
[WARN]: Yap
[ERR]: Yap
```
**Example of what No Short Define outputs:**
```
[INFO]: Yap
[WARNING]: Yap
[ERROR]: Yap
```
