TEST_FUNC(return_focus_after_close,
{
    uint64_t freq = 1000;

    bool t1 = window_manager_should_return_focus(2, 1, 0, 500, freq);
    TEST_CHECK(t1, true);

    bool t2 = window_manager_should_return_focus(2, 2, 0, 500, freq);
    TEST_CHECK(t2, false);

    bool t3 = window_manager_should_return_focus(2, 1, 0, 1500, freq);
    TEST_CHECK(t3, false);

    bool t4 = window_manager_should_return_focus(0, 1, 0, 500, freq);
    TEST_CHECK(t4, false);

    bool t5 = window_manager_should_return_focus(2, 0, 0, 500, freq);
    TEST_CHECK(t5, false);
})
