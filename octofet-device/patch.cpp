
struct State {
    uint8_t pinCS;
    uint8_t pinMOSI;
    uint8_t pinSCK;
};

using Type = State*;

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    auto dev = getState(ctx);
    dev->pinCS = getValue<input_CS>(ctx);
    dev->pinMOSI = getValue<input_MOSI>(ctx);
    dev->pinSCK = getValue<input_SCK>(ctx);
    pinMode(dev->pinCS, OUTPUT);
    pinMode(dev->pinMOSI, OUTPUT);
    pinMode(dev->pinSCK, OUTPUT);
    emitValue<output_DEV>(ctx, dev);
}
