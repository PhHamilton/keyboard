CXX = g++
CFLAGS = -Wall -Iheader -I. -I./inc -g -std=c++17
CXXFLAGS = $(CFLAGS)

SRC_FOLDER=src
OBJ_FOLDER=obj
TEST_FOLDER=tests

# Set the target and dependencies
SRCS = $(wildcard ${SRC_FOLDER}/*.cpp)

TARGET = out
ifeq ($(MAKECMDGOALS),test)
	SRCS := $(filter-out ${SRC_FOLDER}/main.cpp, ${SRCS})
	SRCS += $(wildcard ${TEST_FOLDER}/*.cpp)
	CXXFLAGS += -DTEST_NO_MAIN
endif

#$(info $$SRCS is [${SRCS}])

OBJS = $(addprefix ${OBJ_FOLDER}/,$(notdir $(SRCS:.cpp=.o)))
DEPS = $(addprefix ${OBJ_FOLDER}/,$(notdir $(SRCS:.cpp=.d)))
# Set the rules for building the target
all: $(TARGET)

test: $(OBJS)
	$(CXX) $(LDFLAGS) $(TARGET_ARCH) $^ $(LDLIBS) -o $@

$(TARGET): $(OBJS)
	$(CXX) $(LDFLAGS) $(TARGET_ARCH) $^ $(LDLIBS) -o $@

# Set the rule for building the object files
${OBJ_FOLDER}/%.o: ${SRC_FOLDER}/%.cpp
	$(CXX) $(CXXFLAGS) $(TARGET_ARCH) -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d) $(@:%.o=%.o)" -c -o $@ $<

${OBJ_FOLDER}/%.o: ${TEST_FOLDER}/%.cpp
	$(CXX) $(CXXFLAGS) $(TARGET_ARCH) -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d) $(@:%.o=%.o)" -c -o $@ $<

# Set the rule for building the dependency files
${OBJ_FOLDER}/%.d: ${SRC_FOLDER}/%.cpp
	@$(CXX) $(CXXFLAGS) $(TARGET_ARCH) -MMD -MP -MF"$(@:%.d=%.d)" -MT"$(@:%.d=%.d) $(@:%.d=%.o)" -c -o /dev/null $<

${OBJ_FOLDER}/%.d: ${TEST_FOLDER}/%.cpp
	@$(CXX) $(CXXFLAGS) $(TARGET_ARCH) -MMD -MP -MF"$(@:%.d=%.d)" -MT"$(@:%.d=%.d) $(@:%.d=%.o)" -c -o /dev/null $<

# Set the clean rule
.PHONY: clean
clean:
	rm -f $(TARGET) $(OBJS) $(DEPS) test ${OBJ_FOLDER}/test_main.*
