
struct State {};

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    if (!isInputDirty<input_DO>(ctx)) return;

    uint8_t data = getValue<input_CH0>(ctx);
    data |= getValue<input_CH1>(ctx) << 1;
    data |= getValue<input_CH2>(ctx) << 2;
    data |= getValue<input_CH3>(ctx) << 3;
    data |= getValue<input_CH4>(ctx) << 4;
    data |= getValue<input_CH5>(ctx) << 5;
    data |= getValue<input_CH6>(ctx) << 6;
    data |= getValue<input_CH7>(ctx) << 7;

    auto dev = getValue<input_DEV>(ctx);

    digitalWrite(dev->pinCS, LOW);
    shiftOut(dev->pinMOSI, dev->pinSCK, MSBFIRST, data);
    digitalWrite(dev->pinCS, HIGH);

    emitValue<output_DONE>(ctx, 1);
}
