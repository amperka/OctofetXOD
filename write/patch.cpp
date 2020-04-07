
struct State {};

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    if (!isInputDirty<input_UPD>(ctx)) return;

    uint8_t data = getValue<input_IN1>(ctx);
    data |= getValue<input_IN2>(ctx) << 1;
    data |= getValue<input_IN3>(ctx) << 2;
    data |= getValue<input_IN4>(ctx) << 3;
    data |= getValue<input_IN5>(ctx) << 4;
    data |= getValue<input_IN6>(ctx) << 5;
    data |= getValue<input_IN7>(ctx) << 6;
    data |= getValue<input_IN8>(ctx) << 7;

    auto dev = getValue<input_DEV>(ctx);

    digitalWrite(dev->pinCS, LOW);
    shiftOut(dev->pinMOSI, dev->pinSCK, MSBFIRST, data);
    digitalWrite(dev->pinCS, HIGH);

    emitValue<output_DONE>(ctx, 1);
}
