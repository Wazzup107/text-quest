#pragma once
#define makeScene1(sceneName, text, var1, fun1)       \
    bool sceneName() {                                \
        cout << text << endl << "1." << var1 << endl; \
        int varik;                                    \
        cin >> varik;                                 \
        bool result;                                  \
        switch (varik) {                              \
        case 1:                                       \
            result = fun1();                          \
            break;                                    \
        }                                             \
        if (!result) {                                \
            sceneName();                              \
        }                                             \
        return false;                                 \
    }

#define makeScene2(sceneName, text, var1, fun1, var2, fun2)                   \
    bool sceneName() {                                                        \
        cout << text << endl << "1." << var1 << endl << "2." << var2 << endl; \
        int varik;                                                            \
        cin >> varik;                                                         \
        bool result;                                                          \
        switch (varik) {                                                      \
        case 1:                                                               \
            result = fun1();                                                  \
            break;                                                            \
        case 2:                                                               \
            result = fun2();                                                  \
            break;                                                            \
        }                                                                     \
        if (!result) {                                                        \
            sceneName();                                                      \
        }                                                                     \
        return false;                                                         \
    }

#define makeScene3(sceneName, text, var1, fun1, var2, fun2, var3, fun3)                               \
    bool sceneName() {                                                                                \
        cout << text << endl << "1." << var1 << endl << "2." << var2 << endl << "3." << var3 << endl; \
        int varik;                                                                                    \
        cin >> varik;                                                                                 \
        switch (varik) {                                                                              \
        case 1:                                                                                       \
            result = fun1();                                                                          \
            break;                                                                                    \
        case 2:                                                                                       \
            result = fun2();                                                                          \
            break;                                                                                    \
        case 3:                                                                                       \
            result = fun3();                                                                          \
            break;                                                                                    \
        }                                                                                             \
        if (!result) {                                                                                \
            sceneName();                                                                              \
        }                                                                                             \
        return false;                                                                                 \
    }

#define makeScene4(sceneName, text, var1, fun1, var2, fun2, var3, fun3, var4, fun4) \
    bool sceneName() {                                                              \
        cout << text << endl                                                        \
             << "1." << var1 << endl                                                \
             << "2." << var2 << endl                                                \
             << "3." << var3 << endl                                                \
             << "4." << var4 << endl;                                               \
        int varik;                                                                  \
        cin >> varik;                                                               \
        switch (varik) {                                                            \
        case 1:                                                                     \
            result = fun1();                                                        \
            break;                                                                  \
        case 2:                                                                     \
            result = fun2();                                                        \
            break;                                                                  \
        case 3:                                                                     \
            result = fun3();                                                        \
            break;                                                                  \
        case 4:                                                                     \
            result = fun4();                                                        \
            break;                                                                  \
        }                                                                           \
        if (!result) {                                                              \
            sceneName();                                                            \
        }                                                                           \
        return false;                                                               \
    }

#define makeScene1Back(sceneName, text, var1, fun1)                                                           \
    bool sceneName() {                                                                                        \
        cout << text << endl << "1." << var1 << endl << "¬ведите любой другой символ, чтобы перейти назад\n"; \
        int varik;                                                                                            \
        cin >> varik;                                                                                         \
        bool result;                                                                                          \
        switch (varik) {                                                                                      \
        case 1:                                                                                               \
            result = fun1();                                                                                  \
            break;                                                                                            \
        default:                                                                                              \
            return false;                                                                                     \
        }                                                                                                     \
        if (!result) {                                                                                        \
            sceneName();                                                                                      \
        }                                                                                                     \
        return false;                                                                                         \
    }

#define makeScene2Back(sceneName, text, var1, fun1, var2, fun2)       \
    bool sceneName() {                                                \
        cout << text << endl                                          \
             << "1." << var1 << endl                                  \
             << "2." << var2 << endl                                  \
             << "¬ведите любой другой символ, чтобы перейти назад\n"; \
        int varik;                                                    \
        cin >> varik;                                                 \
        bool result;                                                  \
        switch (varik) {                                              \
        case 1:                                                       \
            result = fun1();                                          \
            break;                                                    \
        case 2:                                                       \
            result = fun2();                                          \
            break;                                                    \
        default:                                                      \
            return false;                                             \
        }                                                             \
        if (!result) {                                                \
            sceneName();                                              \
        }                                                             \
        return false;                                                 \
    }

#define makeScene3Back(sceneName, text, var1, fun1, var2, fun2, var3, fun3) \
    bool sceneName() {                                                      \
        cout << text << endl                                                \
             << "1." << var1 << endl                                        \
             << "2." << var2 << endl                                        \
             << "3." << var3 << endl                                        \
             << "¬ведите любой другой символ, чтобы перейти назад\n";       \
        int varik;                                                          \
        cin >> varik;                                                       \
        switch (varik) {                                                    \
        case 1:                                                             \
            result = fun1();                                                \
            break;                                                          \
        case 2:                                                             \
            result = fun2();                                                \
            break;                                                          \
        case 3:                                                             \
            result = fun3();                                                \
            break;                                                          \
        default:                                                            \
            return false;                                                   \
        }                                                                   \
        if (!result) {                                                      \
            sceneName();                                                    \
        }                                                                   \
        return false;                                                       \
    }

#define makeScene4Back(sceneName, text, var1, fun1, var2, fun2, var3, fun3, var4, fun4) \
    bool sceneName() {                                                                  \
        cout << text << endl                                                            \
             << "1." << var1 << endl                                                    \
             << "2." << var2 << endl                                                    \
             << "3." << var3 << endl                                                    \
             << "4." << var4 << endl                                                    \
             << "¬ведите любой другой символ, чтобы перейти назад\n";                   \
        int varik;                                                                      \
        cin >> varik;                                                                   \
        switch (varik) {                                                                \
        case 1:                                                                         \
            result = fun1();                                                            \
            break;                                                                      \
        case 2:                                                                         \
            result = fun2();                                                            \
            break;                                                                      \
        case 3:                                                                         \
            result = fun3();                                                            \
            break;                                                                      \
        case 4:                                                                         \
            result = fun4();                                                            \
            break;                                                                      \
        default:                                                                        \
            return false;                                                               \
        }                                                                               \
        if (!result) {                                                                  \
            sceneName();                                                                \
        }                                                                               \
        return false;                                                                   \
    }
