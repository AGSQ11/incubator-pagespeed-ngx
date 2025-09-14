# C++20 Compatibility Fixes

## Issue

When building with C++20, the compiler produces errors like:
```
template-id not allowed for constructor in C++20 [-Werror=template-id-cdtor]
```

## Files Affected

1. `psol/include/pagespeed/kernel/base/ref_counted_ptr.h`
2. `psol/include/third_party/chromium/src/base/stl_util.h`

## Fixes Applied

### ref_counted_ptr.h

Changed line 64 from:
```cpp
DISALLOW_COPY_AND_ASSIGN(RefCounted<T>);
```

To:
```cpp
DISALLOW_COPY_AND_ASSIGN(RefCounted);
```

### stl_util.h

Changed template constructors and destructors from:
```cpp
STLElementDeleter<T>(T* container)
~STLElementDeleter<T>()
STLValueDeleter<T>(T* container)
~STLValueDeleter<T>()
```

To:
```cpp
STLElementDeleter(T* container)
~STLElementDeleter()
STLValueDeleter(T* container)
~STLValueDeleter()
```

## Reason

In C++20, template constructors and destructors with explicit template arguments are no longer allowed. The template arguments are inferred from the class template parameters, so explicitly specifying them in the constructor/destructor is redundant and now an error.
