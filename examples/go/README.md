# Go demo

## Prerequisites

The decoder library should be compiled statically when using it with Go.

From the decoder root folder

```sh
mkdir -p build
cd build
cmake -DBUILD_SHARED_LIBS=OFF -DBUILD_TESTING=OFF ..
make
```

# Running
The example can now be ran

```sh
go run decode.go
```
