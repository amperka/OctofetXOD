struct State {};

{{ GENERATED_CODE }}

void evaluate(Context ctx) {
    auto dev = getValue<input_DEV>(ctx);

    if (isSettingUp()) {
        // Short-circuit DEV and DEV'
        emitValue<output_DEVU0027>(ctx, dev);
    }

    if (!isInputDirty<input_UPD>(ctx))
        return;

    const bool val = getValue<input_SIG>(ctx);

    ::digitalWrite(dev->pinCS, val);

    emitValue<output_DONE>(ctx, 1);
}
