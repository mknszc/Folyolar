if (JS_DefineProperty(cx, o, "data",
    STRING_TO_JSVAL(JS_NewStringCopyN(cx, data, res)),
    NULL, NULL, JSPROP_ENUMERATE) != 0) {
	QUEUE_EXCEPTION("Internal error!");
        goto err;
}
