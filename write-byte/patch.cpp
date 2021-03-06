struct State {};

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    auto dev = getValue<input_DEV>(ctx);

    if (isSettingUp()) {
        // Short-circuit DEV and DEV'
        emitValue<output_DEVU0027>(ctx, dev);
    }

    if (!isInputDirty<input_DO>(ctx))
        return;

    uint8_t data = getValue<input_DATA>(ctx);
    shiftOut(dev->pinMOSI, dev->pinSCK, MSBFIRST, data);

    emitValue<output_DONE>(ctx, 1);
}
