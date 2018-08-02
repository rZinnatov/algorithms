# Root dirs
PROJECT_ROOT_DIR = $(shell pwd)
# Source dirs
SRC_DIR = "$(PROJECT_ROOT_DIR)/src"
3PARTY_DIR = "$(PROJECT_ROOT_DIR)/3-party"
TEST_SRC_DIR = "$(PROJECT_ROOT_DIR)/test"
# Bin dirs
OUTPUT_SUB_DIR = "$(PROJECT_ROOT_DIR)/bin"
OUTPUT_DIR = "$(OUTPUT_SUB_DIR)/$(TARGET_ARCH)"
# Build dirs
BUILD_SUB_DIR = "$(PROJECT_ROOT_DIR)/build"
BUILD_DIR = "$(BUILD_SUB_DIR)/$(TARGET_ARCH)"

# Build cmake command
CMAKE = cmake $(SRC_DIR) \
	-DOUTPUT_DIR=$(OUTPUT_DIR) \
	-D3PARTY_DIR=$(3PARTY_DIR)

# Define targets
.PHONY: build

build:
	@echo "Build started"
	@echo "cmake: $(CMAKE)"
	@mkdir -p $(BUILD_DIR) && \
		cd $(BUILD_DIR) && \
		$(CMAKE) && \
		make && \
		mkdir -p $(OUTPUT_DIR)

test:
	@echo "Not implemented"

clean:
	@rm -rf $(BUILD_SUB_DIR)
	@rm -rf $(OUTPUT_SUB_DIR)

help:
	@echo
	@echo "  make [target]"
	@echo
	@echo " Targets:"
	@echo "    source		Builds source (default)"
	@echo "    test			Builds the project for x86_64"