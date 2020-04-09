
struct State {};

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    if (!isInputDirty<input_DO>(ctx)) return;
    uint8_t data = getValue<input_DATA>(ctx);
    auto dev = getValue<input_DEV>(ctx);
    digitalWrite(dev->pinCS, LOW);
    shiftOut(dev->pinMOSI, dev->pinSCK, MSBFIRST, data);
    digitalWrite(dev->pinCS, HIGH);
    emitValue<output_DONE>(ctx, 1);
}
