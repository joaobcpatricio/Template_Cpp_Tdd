
#include "../src/example_class.h"
#include "gtest/gtest.h"
// #include "example_class.h"


#undef FAIL
#define FAIL_TEST() GTEST_FAIL()


// Define name of this fixture / test group ----------------------------------------------------------------------------
#define FIXTURE_NAME ExampleClassTest


class FIXTURE_NAME : public ::testing::Test {
 protected:
    ExampleClass exampleClass;

    void FixtureSetUp() {
        exampleClass.Reset();
    }

    void FixtureTearDown() {
        // The teardown code
    }

    // Wrap the methods to the class-methods
    void SetUp() override {
        FixtureSetUp();
    }

    void TearDown() override {
        FixtureTearDown();
    }
};


/// Here go the tests --------------------------------------------------------------------------------------------------

TEST_F(FIXTURE_NAME, CounterStartsAtZero) {
    uint8_t value = exampleClass.GetCounter();
    ASSERT_EQ(0, value);
}

TEST_F(FIXTURE_NAME, CanAddToCounter) {
    exampleClass.CounterAddOne();
    uint8_t value = exampleClass.GetCounter();
    EXPECT_EQ(1, value);
    SUCCEED();
}

TEST_F(FIXTURE_NAME, AddingIncreasesCounter) {
    exampleClass.CounterAddOne();
    uint8_t value = exampleClass.GetCounter();
    ASSERT_EQ(1, value);
}

