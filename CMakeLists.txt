# CMakeLists.txt

cmake_minimum_required(VERSION 3.10)

project(OpenSSH VERSION 8.9)

set(CMAKE_C_STANDARD 99)

include_directories(include)

file(GLOB SOURCES
    src/auth/auth.c
    src/auth/keys.c
    src/crypto/cipher.c
    src/crypto/hash.c
    src/ssh/session.c
    src/ssh/protocol.c
    src/main.c
)

add_executable(openssh ${SOURCES})

enable_testing()

file(GLOB TEST_SOURCES
    tests/auth_tests.c
    tests/crypto_tests.c
    tests/ssh_tests.c
)

add_executable(openssh_tests ${TEST_SOURCES})
target_link_libraries(openssh_tests openssh)

add_test(NAME AuthTests COMMAND openssh_tests)
add_test(NAME CryptoTests COMMAND openssh_tests)
add_test(NAME SshTests COMMAND openssh_tests)