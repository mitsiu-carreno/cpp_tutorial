# Determine the platform
PLAT_NAME := $(shell uname -s)

#Compiler
ifeq ($(PLAT_NAME), Darwin)
	CC=clang++ -arch x86_64
else
	CC=g++
endif

# Project structure
SRC_DIR 	:= src
BUILD_DIR := build
EXEC_DIR	:= bin

# Executable details
EXEC_NAME := blackjack
EXEC_PATH := $(EXEC_DIR)/$(EXEC_NAME)

# Code properties
SRC_EXT		:= cpp
SRC_LIST	:= $(shell find $(SRC_DIR) -type f -name *.$(SRC_EXT))
BUILD_LIST:= $(patsubst $(SRC_DIR)/%,$(BUILD_DIR)/%,$(SRC_LIST:.$(SRC_EXT)=.o))

# Headers path
HEAD_LIST	:= $(shell find headers/**/* \( -name '*.hpp' -o -name '*.h' \) -exec dirname {} \; | sort | uniq)
INCLUDE_LIST 	:= $(patsubst headers/%,-I headers/%,$(HEAD_LIST))
########## CHECK THIS LINE! (BUILD_LIST)
BUILD_TEST 		:= $(shell pwd $(BUILD_LIST))

INCLUDE := -I headers $(INCLUDE_LIST)

CFLAGS=-c -std=c++1z -Wall -Werror -g

$(EXEC_DIR): $(BUILD_LIST)
	@mkdir -p $(EXEC_DIR)
	@echo "Linking..."
	@echo "		$(CC) $^ -o $(EXEC_PATH)"; $(CC) $^ -o $(EXEC_PATH);
	@echo "Build complete, executing..."
	@echo ""
	./$(EXEC_PATH)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.$(SRC_EXT)
	@mkdir -p $(BUILD_TEST)
	@echo "Compiling $<..."
	@echo "$(CC) $(CFLAGS) $(INCLUDE) $< -o $@"; $(CC) $(CFLAGS) $(INCLUDE) $< -o $@

run:
	./$(EXEC_PATH)

clean:
	@echo "Cleaning $(EXEC_PATH) ..."; $(RM) -r $(EXEC_PATH)

hardclean:
	@echo "Cleaning $(EXEC_PATH) and $(BUILD_DIR)/* ..."; $(RM) -r $(BUILD_DIR)/* $(EXEC_PATH)

.PHONY: clean	
