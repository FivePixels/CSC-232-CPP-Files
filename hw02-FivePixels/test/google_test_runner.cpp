#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-err58-cpp"
/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2020
 *
 * @file      google_test_runner.cpp
 * @authors   Jim Daehn <jdaehn@missouristate.edu>
 * @brief     Google Test implementation template.
 */

#include "csc232.h"
#include "gtest/gtest.h"

/**
 * @brief Namespace to encapsulate course specific macros, declarations and definitions.
 */
namespace csc232
{
    static int possiblePoints{ 0 };
    static int earnedPoints{ 0 };
    static const int MAX_CORRECTNESS_PTS{ 2 };

    /**
     * @brief Base test fixture that sets up grading for this assignment.
     */
    class CSC232BaseTestFixture : public ::testing::Test
    {
    protected:
        void SetUp() override
        {
            ::testing::FLAGS_gtest_death_test_style = "threadsafe";
            AdditionalSetup();
            possiblePoints += 1;
        }

        void TearDown() override
        {
            if (!HasFailure())
            {
                earnedPoints += 1;
            }
        }

        virtual void AdditionalSetup()
        {
            /* template method for any customized additional setup */
        }

        // Reusable objects for each unit test in this test fixture and any of its children
    };

    // Run me to test your PrintTable function
    class PrintTestFixture : public CSC232BaseTestFixture
    {
    private:
        void AdditionalSetup() override
        {
            ::testing::internal::CaptureStdout();
        }
    protected:
        // Reusable objects for each unit test in this test fixture
        std::string test{ "This is a test" };
    };

    TEST_F( PrintTestFixture, DISABLED_PrintTest )
    {
        // Given some function that prints to stdout
        std::cout << test;
        // Expect the following to be captured
        std::string expected{ test };
        std::string actual{ testing::internal::GetCapturedStdout() };
        EXPECT_EQ( expected, actual );
    }

    // Extend the base test fixture as needed for various components under test...
    class CSC232ChildClassTestFixture : public CSC232BaseTestFixture
    {
    protected:
        // Reusable objects for each unit test in this test fixture
    };

    TEST_F( CSC232ChildClassTestFixture, DISABLED_ValidateFailedAssertionTest )
    {
        EXPECT_DEATH( {
            assert( false ); // some line(s) of code that will cause a failed assertion
        }, ".*failed.*" );
    }

    class Power1Test : public CSC232BaseTestFixture
    {
    private:
        void AdditionalSetup() override
        {
            // Template method to facilitate base class Setup method.
        }
    protected:
        Power1Test() = default;
        ~Power1Test() override = default;

        /**
        * Code here will be called immediately after the constructor
        * right before each test...
        */
        void SetUp() override
        {
            // intentionally empty in this test
        }

        /**
         * Code here will be called immediately after each test
         * right before the destructor...
         */
        void TearDown() override
        {
            // intentionally empty in this test
        }

        // Objects declared here can be used by all tests in this test suite
    };

    TEST_F( Power1Test, TestNegativeExponent )
    {
        possiblePoints += 1;
        ::testing::FLAGS_gtest_death_test_style = "threadsafe";
        EXPECT_DEATH( {
            csc232::Power1( 2, -1 );
        }, ".*failed.*" );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestZeroExponent )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 1 };
        csc232::real_t actual{ csc232::Power1( 2, 0 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestPositiveOddExponentEvenBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 2 };
        csc232::real_t actual{ csc232::Power1( 2, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestPositiveEvenExponentEvenBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 4 };
        csc232::real_t actual{ csc232::Power1( 2, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestPositiveOddExponentOddBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 3 };
        csc232::real_t actual{ csc232::Power1( 3, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestPositiveEvenExponentOddBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 9 };
        csc232::real_t actual{ csc232::Power1( 3, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestPositiveOddExponentNegativeEvenBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ -2 };
        csc232::real_t actual{ csc232::Power1( -2, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestPositiveEvenExponentNegativeEvenBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 4 };
        csc232::real_t actual{ csc232::Power1( -2, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestPositiveOddExponentNegativeOddBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ -3 };
        csc232::real_t actual{ csc232::Power1( -3, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestPositiveEvenExponentNegativeOddBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 9 };
        csc232::real_t actual{ csc232::Power1( -3, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestPositiveOddExponentNegativeEvenBaseLessThanOne )
    {
        possiblePoints += 1;
        csc232::real_t expected{ -1.0 / 2.0 };
        csc232::real_t actual{ csc232::Power1( -1.0 / 2.0, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestPositiveEvenExponentNegativeEvenBaseLessThanOne )
    {
        possiblePoints += 1;
        csc232::real_t expected{ (-1.0 / 2.0) * (-1.0 / 2.0) };
        csc232::real_t actual{ csc232::Power1( -1.0 / 2.0, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestPositiveOddExponentNegativeOddBaseLessThanOne )
    {
        possiblePoints += 1;
        csc232::real_t expected{ -1.0 / 5.0 };
        csc232::real_t actual{ csc232::Power1( -1.0 / 5.0, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestPositiveEvenExponentNegativeOddBaseLessThanOne )
    {
        possiblePoints += 1;
        csc232::real_t expected{ (-1.0 / 5.0) * (-1.0 / 5.0) };
        csc232::real_t actual{ csc232::Power1( -1.0 / 5.0, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestPrettyBigExponent )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 1162261467 };
        csc232::real_t actual{ csc232::Power1( 3, 19 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power1Test, TestRealBigExponent )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 1853020188851841 };
        csc232::real_t actual{ csc232::Power1( 3, 32 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    class Power2Test : public CSC232BaseTestFixture
    {
    private:
        void AdditionalSetup() override
        {
            // Template method to facilitate base class Setup method.
        }
    protected:
        Power2Test() = default;
        ~Power2Test() override = default;

        /**
        * Code here will be called immediately after the constructor
        * right before each test...
        */
        void SetUp() override
        {
            // intentionally empty in this test
        }

        /**
         * Code here will be called immediately after each test
         * right before the destructor...
         */
        void TearDown() override
        {
            // intentionally empty in this test
        }

        // Objects declared here can be used by all tests in this test suite
    };

    TEST_F( Power2Test, TestNegativeExponent )
    {
        possiblePoints += 1;
        ::testing::FLAGS_gtest_death_test_style = "threadsafe";
        EXPECT_DEATH( {
            csc232::Power2( 2, -1 );
        }, ".*failed.*" );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestZeroExponent )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 1 };
        csc232::real_t actual{ csc232::Power2( 2, 0 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestPositiveOddExponentEvenBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 2 };
        csc232::real_t actual{ csc232::Power2( 2, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestPositiveEvenExponentEvenBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 4 };
        csc232::real_t actual{ csc232::Power2( 2, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestPositiveOddExponentOddBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 3 };
        csc232::real_t actual{ csc232::Power2( 3, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestPositiveEvenExponentOddBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 9 };
        csc232::real_t actual{ csc232::Power2( 3, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestPositiveOddExponentNegativeEvenBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ -2 };
        csc232::real_t actual{ csc232::Power2( -2, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestPositiveEvenExponentNegativeEvenBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 4 };
        csc232::real_t actual{ csc232::Power2( -2, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestPositiveOddExponentNegativeOddBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ -3 };
        csc232::real_t actual{ csc232::Power2( -3, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestPositiveEvenExponentNegativeOddBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 9 };
        csc232::real_t actual{ csc232::Power2( -3, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestPositiveOddExponentNegativeEvenBaseLessThanOne )
    {
        possiblePoints += 1;
        csc232::real_t expected{ -1.0 / 2.0 };
        csc232::real_t actual{ csc232::Power2( -1.0 / 2.0, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestPositiveEvenExponentNegativeEvenBaseLessThanOne )
    {
        possiblePoints += 1;
        csc232::real_t expected{ (-1.0 / 2.0) * (-1.0 / 2.0) };
        csc232::real_t actual{ csc232::Power2( -1.0 / 2.0, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestPositiveOddExponentNegativeOddBaseLessThanOne )
    {
        possiblePoints += 1;
        csc232::real_t expected{ -1.0 / 5.0 };
        csc232::real_t actual{ csc232::Power2( -1.0 / 5.0, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestPositiveEvenExponentNegativeOddBaseLessThanOne )
    {
        possiblePoints += 1;
        csc232::real_t expected{ (-1.0 / 5.0) * (-1.0 / 5.0) };
        csc232::real_t actual{ csc232::Power2( -1.0 / 5.0, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestPrettyBigExponent )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 1162261467 };
        csc232::real_t actual{ csc232::Power2( 3, 19 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power2Test, TestRealBigExponent )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 1853020188851841 };
        csc232::real_t actual{ csc232::Power2( 3, 32 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    class Power3Test : public CSC232BaseTestFixture
    {
    private:
        void AdditionalSetup() override
        {
            // Template method to facilitate base class Setup method.
        }
    protected:
        Power3Test() = default;
        ~Power3Test() override = default;

        /**
        * Code here will be called immediately after the constructor
        * right before each test...
        */
        void SetUp() override
        {
            // intentionally empty in this test
        }

        /**
         * Code here will be called immediately after each test
         * right before the destructor...
         */
        void TearDown() override
        {
            // intentionally empty in this test
        }

        // Objects declared here can be used by all tests in this test suite
    };

    TEST_F( Power3Test, TestNegativeExponent )
    {
        possiblePoints += 1;
        ::testing::FLAGS_gtest_death_test_style = "threadsafe";
        EXPECT_DEATH( {
            csc232::Power3( 2, -1 );
        }, ".*failed.*" );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestZeroExponent )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 1 };
        csc232::real_t actual{ csc232::Power3( 2, 0 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestPositiveOddExponentEvenBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 2 };
        csc232::real_t actual{ csc232::Power3( 2, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestPositiveEvenExponentEvenBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 4 };
        csc232::real_t actual{ csc232::Power3( 2, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestPositiveOddExponentOddBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 3 };
        csc232::real_t actual{ csc232::Power3( 3, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestPositiveEvenExponentOddBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 9 };
        csc232::real_t actual{ csc232::Power3( 3, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestPositiveOddExponentNegativeEvenBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ -2 };
        csc232::real_t actual{ csc232::Power3( -2, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestPositiveEvenExponentNegativeEvenBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 4 };
        csc232::real_t actual{ csc232::Power3( -2, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestPositiveOddExponentNegativeOddBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ -3 };
        csc232::real_t actual{ csc232::Power3( -3, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestPositiveEvenExponentNegativeOddBase )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 9 };
        csc232::real_t actual{ csc232::Power3( -3, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestPositiveOddExponentNegativeEvenBaseLessThanOne )
    {
        possiblePoints += 1;
        csc232::real_t expected{ -1.0 / 2.0 };
        csc232::real_t actual{ csc232::Power3( -1.0 / 2.0, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestPositiveEvenExponentNegativeEvenBaseLessThanOne )
    {
        possiblePoints += 1;
        csc232::real_t expected{ (-1.0 / 2.0) * (-1.0 / 2.0) };
        csc232::real_t actual{ csc232::Power3( -1.0 / 2.0, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestPositiveOddExponentNegativeOddBaseLessThanOne )
    {
        possiblePoints += 1;
        csc232::real_t expected{ -1.0 / 5.0 };
        csc232::real_t actual{ csc232::Power3( -1.0 / 5.0, 1 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestPositiveEvenExponentNegativeOddBaseLessThanOne )
    {
        possiblePoints += 1;
        csc232::real_t expected{ (-1.0 / 5.0) * (-1.0 / 5.0) };
        csc232::real_t actual{ csc232::Power3( -1.0 / 5.0, 2 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestPrettyBigExponent )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 1162261467 };
        csc232::real_t actual{ csc232::Power3( 3, 19 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( Power3Test, TestRealBigExponent )
    {
        possiblePoints += 1;
        csc232::real_t expected{ 1853020188851841 };
        csc232::real_t actual{ csc232::Power3( 3, 32 ) };
        EXPECT_DOUBLE_EQ( expected, actual );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    class QuestionsTest : public ::testing::Test
    {
    protected:
        QuestionsTest()
        {
#if USE_TEST_INPUT_FILE
            testData.open("testData.txt");
#endif
            q19dResponseData.open( "19d.txt" );
            csc232::integer_t data;
            q19dResponseData >> data;
            responseMap.emplace( "q19d_a_power1_32", data );
            q19dResponseData >> data;
            responseMap.emplace( "q19d_a_power1_19", data );
            q19dResponseData >> data;
            responseMap.emplace( "q19d_a_power2_32", data );
            q19dResponseData >> data;
            responseMap.emplace( "q19d_a_power2_19", data );
            q19dResponseData >> data;
            responseMap.emplace( "q19d_a_power3_32", data );
            q19dResponseData >> data;
            responseMap.emplace( "q19d_a_power3_19", data );

            q19eResponseData.open( "19e.txt" );
            q19eResponseData >> data;
            responseMap.emplace( "q19e_a_power2_32", data );
            q19eResponseData >> data;
            responseMap.emplace( "q19e_a_power2_19", data );
            q19eResponseData >> data;
            responseMap.emplace( "q19e_a_power3_32", data );
            q19eResponseData >> data;
            responseMap.emplace( "q19e_a_power3_19", data );

            responseMap.emplace( "q19d_e_power1_32", 32 );
            responseMap.emplace( "q19d_e_power1_19", 19 );
            responseMap.emplace( "q19d_e_power2_32", 32 );
            responseMap.emplace( "q19d_e_power2_19", 19 );
            responseMap.emplace( "q19d_e_power3_32", 7 );
            responseMap.emplace( "q19d_e_power3_19", 8 );
            responseMap.emplace( "q19e_e_power2_32", 32 );
            responseMap.emplace( "q19e_e_power2_19", 19 );
            responseMap.emplace( "q19e_e_power3_32", 6 );
            responseMap.emplace( "q19e_e_power3_19", 5 );
        }

        ~QuestionsTest() override
        {
#if USE_TEST_INPUT_FILE
            closeFile(testData);
#endif
            closeFile( q19dResponseData );
            closeFile( q19eResponseData );
        }

        /**
         * Code here will be called immediately after the constructor
         * right before each test...
         */
        void SetUp() override
        {
            // intentionally empty in this test
        }

        /**
         * Code here will be called immediately after each test
         * right before the destructor...
         */
        void TearDown() override
        {
            // intentionally empty in this test
        }

        static void closeFile(std::ifstream& dataFile)
        {
            if (dataFile.is_open())
            {
                dataFile.close();
            }
        }

        // Objects declared here can be used by all tests in this test suite
#if USE_TEST_INPUT_FILE
        std::ifstream testData;
#endif
        std::ifstream q19dResponseData;
        std::ifstream q19eResponseData;
        std::map<std::string, int> responseMap;
    };

    TEST_F( QuestionsTest, TestQuestion19dPower1_32 )
    {
        possiblePoints += 1;
        EXPECT_EQ( responseMap[ "q19d_e_power1_32" ], responseMap[ "q19d_a_power1_32" ] );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( QuestionsTest, TestQuestion19dPower1_19 )
    {
        possiblePoints += 1;
        EXPECT_EQ( responseMap[ "q19d_e_power1_19" ], responseMap[ "q19d_a_power1_19" ] );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( QuestionsTest, TestQuestion19dPower2_32 )
    {
        possiblePoints += 1;
        EXPECT_EQ( responseMap[ "q19d_e_power2_32" ], responseMap[ "q19d_a_power2_32" ] );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( QuestionsTest, TestQuestion19dPower2_19 )
    {
        possiblePoints += 1;
        EXPECT_EQ( responseMap[ "q19d_e_power2_19" ], responseMap[ "q19d_a_power2_19" ] );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( QuestionsTest, TestQuestion19dPower3_32 )
    {
        possiblePoints += 1;
        EXPECT_EQ( responseMap[ "q19d_e_power3_32" ], responseMap[ "q19d_a_power3_32" ] );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( QuestionsTest, TestQuestion19dPower3_19 )
    {
        possiblePoints += 1;
        EXPECT_EQ( responseMap[ "q19d_e_power3_19" ], responseMap[ "q19d_a_power3_19" ] );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( QuestionsTest, TestQuestion19ePower2_32 )
    {
        possiblePoints += 1;
        EXPECT_EQ( responseMap[ "q19e_e_power2_32" ], responseMap[ "q19e_a_power2_32" ] );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( QuestionsTest, TestQuestion19ePower2_19 )
    {
        possiblePoints += 1;
        EXPECT_EQ( responseMap[ "q19e_e_power2_19" ], responseMap[ "q19e_a_power2_19" ] );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( QuestionsTest, TestQuestion19ePower3_32 )
    {
        possiblePoints += 1;
        EXPECT_EQ( responseMap[ "q19e_e_power3_32" ], responseMap[ "q19e_a_power3_32" ] );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }

    TEST_F( QuestionsTest, TestQuestion19ePower3_19 )
    {
        possiblePoints += 1;
        EXPECT_EQ( responseMap[ "q19e_e_power3_19" ], responseMap[ "q19e_a_power3_19" ] );
        if (!HasFailure())
        {
            earnedPoints += 1;
        }
    }
} // end namespace

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest( &argc, argv );
    int result{ RUN_ALL_TESTS() };
    std::cout << std::fixed << std::setprecision( 2 );
    std::cout << "\n\n";
    std::cout << std::left << std::setw( 21 ) << "Earned Points:"
              << std::right << std::setw( 5 ) << static_cast<double>(csc232::earnedPoints) << std::endl;
    std::cout << std::left << std::setw( 21 ) << "Possible Points:"
              << std::right << std::setw( 5 ) << static_cast<double>(csc232::possiblePoints) << std::endl;
    double percentCorrect{ static_cast<double>(csc232::earnedPoints) / csc232::possiblePoints };
    double correctnessPoints{ csc232::possiblePoints != 0 ? percentCorrect * csc232::MAX_CORRECTNESS_PTS
                                                          : 0 };
    std::cout << std::left << std::setw( 21 ) << "Correctness Points:"
              << std::right << std::setw( 5 ) << correctnessPoints << std::endl;
    return result;
}

#pragma clang diagnostic pop