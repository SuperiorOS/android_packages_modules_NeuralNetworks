// clang-format off
// Generated file (from: local_response_normalization_v1_2.mod.py). Do not edit
// Create the model
Model createTestModel_axis_dim4_axis0() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis0_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 252, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis1() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis1_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 253, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 2, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis2_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 3, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis3_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis3_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis0() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis0_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 253, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis1() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis1_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 2, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis2_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim2_axis0() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim2_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim2_axis0_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim2_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim2_axis1() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim2_axis1_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim2_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim1_axis0() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim1_axis0_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim1_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis0() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis0_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 252, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis1() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis1_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 253, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 2, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis2_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 3, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis3_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis3_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis0() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis0_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 253, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis1() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis1_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 2, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis2_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis2_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim2_axis0() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim2_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim2_axis0_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim2_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim2_axis1() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim2_axis1_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim2_axis1_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim1_axis0() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim1_axis0_neg() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 63, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim1_axis0_neg(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis0_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis0_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 252, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis1_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis1_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 253, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis2_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 2, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis2_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis2_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis2_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis3_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 3, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis3_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis3_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis3_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis0_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis0_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 253, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis1_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis1_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis2_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 2, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis2_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis2_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis2_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim2_axis0_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim2_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim2_axis0_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim2_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim2_axis1_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim2_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim2_axis1_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim2_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim1_axis0_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim1_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim1_axis0_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim1_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis0_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis0_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 252, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis1_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis1_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 253, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis2_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 2, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis2_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis2_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis2_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis3_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 3, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis3_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis3_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis3_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis0_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis0_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 253, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis1_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis1_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis2_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 2, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis2_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis2_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis2_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim2_axis0_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim2_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim2_axis0_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim2_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim2_axis1_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim2_axis1_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim2_axis1_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim2_axis1_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim1_axis0_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim1_axis0_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim1_axis0_neg_2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      20, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim1_axis0_neg_2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis0_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis0_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis0_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 252, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis0_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis1_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis1_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis1_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 253, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis1_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis2_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 2, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis2_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis2_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis2_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis3_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 3, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis3_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim4_axis3_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim4_axis3_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis0_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis0_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis0_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 253, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis0_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis1_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis1_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis1_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis1_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis2_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 2, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis2_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim3_axis2_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim3_axis2_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim2_axis0_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim2_axis0_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim2_axis0_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim2_axis0_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim2_axis1_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim2_axis1_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim2_axis1_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim2_axis1_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim1_axis0_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim1_axis0_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_dim1_axis0_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_axis_dim1_axis0_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis0_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis0_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis0_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 252, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis0_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis1_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis1_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis1_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 253, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis1_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis2_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 2, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis2_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis2_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis2_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis3_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 3, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis3_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim4_axis3_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim4_axis3_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis0_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis0_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis0_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 253, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis0_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis1_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis1_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis1_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis1_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis2_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 2, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis2_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim3_axis2_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim3_axis2_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim2_axis0_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim2_axis0_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim2_axis0_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6, 2},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 254, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim2_axis0_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim2_axis1_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 1, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim2_axis1_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim2_axis1_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim2_axis1_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim1_axis0_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 0, 0, 0, 0
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim1_axis0_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_axis_relaxed_dim1_axis0_neg_3() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 3,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 16, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4, 5},
            .outputs = {6},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {6};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63, 255, 255, 255, 255
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_axis_relaxed_dim1_axis0_neg_3(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_dim1_axis0() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4},
            .outputs = {5},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {5};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_dim2_axis1() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4},
            .outputs = {5},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {5};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_dim3_axis2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4},
            .outputs = {5},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {5};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
    };
}

inline bool is_ignored_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_relaxed_dim1_axis0() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4},
            .outputs = {5},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {5};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_relaxed_dim1_axis0(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_relaxed_dim2_axis1() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4},
            .outputs = {5},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {5};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_relaxed_dim2_axis1(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}

// Create the model
Model createTestModel_relaxed_dim3_axis2() {
    const std::vector<Operand> operands = {
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 4,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_INPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        },
        {
            .type = OperandType::INT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 0, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 4, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 8, .length = 4},
        },
        {
            .type = OperandType::FLOAT32,
            .dimensions = {},
            .numberOfConsumers = 1,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::CONSTANT_COPY,
            .location = {.poolIndex = 0, .offset = 12, .length = 4},
        },
        {
            .type = OperandType::TENSOR_FLOAT32,
            .dimensions = {2, 2, 6},
            .numberOfConsumers = 0,
            .scale = 0.0f,
            .zeroPoint = 0,
            .lifetime = OperandLifeTime::MODEL_OUTPUT,
            .location = {.poolIndex = 0, .offset = 0, .length = 0},
        }
    };

    const std::vector<Operation> operations = {
        {
            .type = OperationType::LOCAL_RESPONSE_NORMALIZATION,
            .inputs = {0, 1, 2, 3, 4},
            .outputs = {5},
        }
    };

    const std::vector<uint32_t> inputIndexes = {0};
    const std::vector<uint32_t> outputIndexes = {5};
    std::vector<uint8_t> operandValues = {
      2, 0, 0, 0, 0, 0, 16, 65, 0, 0, 128, 64, 0, 0, 0, 63
    };
    const std::vector<hidl_memory> pools = {};

    return {
        .operands = operands,
        .operations = operations,
        .inputIndexes = inputIndexes,
        .outputIndexes = outputIndexes,
        .operandValues = operandValues,
        .pools = pools,
        .relaxComputationFloat32toFloat16 = true,
    };
}

inline bool is_ignored_relaxed_dim3_axis2(int i) {
  static std::set<int> ignore = {};
  return ignore.find(i) != ignore.end();
}
