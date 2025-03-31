NVCC = nvcc
NVCC_FLAGS = -O3 -arch=sm_70
TARGET = mycudaprogram
SRCS = main.cu kernel.cu
OBJS = $(SRCS:.cu=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
    $(NVCC) $(NVCC_FLAGS) -o $@ $^

%.o: %.cu
    $(NVCC) $(NVCC_FLAGS) -c $< -o $@

clean:
    rm -f $(OBJS) $(TARGET)
		