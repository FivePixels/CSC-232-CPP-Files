/**
 * CSC232 - Data Structures
 * Missouri State University, Fall 2020
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
    static const int MAX_CORRECTNESS_PTS{ 3 };

    template <typename ItemType>
    void visit(ItemType& node)
    {
        std::cout << node;
    }

    /**
     * @brief Base test fixture that sets up grading for this assignment.
     */
    class CSC232BaseTestFixture : public ::testing::Test
    {
    protected:
        void SetUp( ) override
        {
            ::testing::FLAGS_gtest_death_test_style = "threadsafe";
            AdditionalSetup( );
            possiblePoints += 1;
        }

        void TearDown( ) override
        {
            AdditionalTearDown( );
            if (!HasFailure( ))
            {
                earnedPoints += 1;
            }
        }

        virtual void AdditionalSetup( )
        {
            /* template method for any customized additional setup */
        }

        virtual void AdditionalTearDown( )
        {
            /* template method for any customized additional setup */
        }

        // Reusable objects for each unit test in this test fixture and any of its children
    };

    class BinaryTreeTestFixture : public CSC232BaseTestFixture
    {
    private:
        void AdditionalSetup( ) override
        {
            binaryTree = new BinaryTree<std::string>{ };
            // Save cout's buffer...
            sbuf = std::cout.rdbuf();
            // Redirect cout to our stringstream buffer or any other ostream
            std::cout.rdbuf(buffer.rdbuf());
        }

        void AdditionalTearDown( ) override
        {
            binaryTree = nullptr;
            // When done redirect cout to its old self
            std::cout.rdbuf(sbuf);
            sbuf = nullptr;
        }
    protected:
        // Reusable objects for each unit test in this test fixture
        BinaryTreeInterface<std::string>* binaryTree;
        std::stringstream buffer{};
        std::streambuf *sbuf;
    };

    TEST_F( BinaryTreeTestFixture, NewTreeIsEmpty )
    {
        EXPECT_TRUE( binaryTree->isEmpty( ));
    }

    TEST_F( BinaryTreeTestFixture, NewTreeHasZeroHeight )
    {
        EXPECT_EQ( binaryTree->getHeight( ), 0 );
    }

    TEST_F( BinaryTreeTestFixture, NewTreeHasNoNodes )
    {
        EXPECT_EQ( binaryTree->getNumberOfNodes( ), 0 );
    }

    TEST_F( BinaryTreeTestFixture, AccessingRootDataEmptyTreeThrowsException )
    {
        ASSERT_THROW( binaryTree->getRootData( ), NotFoundException );
    }

    TEST_F( BinaryTreeTestFixture, AddingOneItemCreatesNonEmptyTree )
    {
        std::string data{ "Data Structures" };
        binaryTree->add( data );
        EXPECT_FALSE( binaryTree->isEmpty( ));
    }

    TEST_F( BinaryTreeTestFixture, AddingOneItemCreatesTreeHeightOne )
    {
        std::string data{ "Data Structures" };
        binaryTree->add( data );
        EXPECT_EQ( binaryTree->getHeight( ), 1 );
    }

    TEST_F( BinaryTreeTestFixture, AddingOneItemCreatesOneNode )
    {
        std::string data{ "Data Structures" };
        binaryTree->add( data );
        EXPECT_EQ( binaryTree->getNumberOfNodes( ), 1 );
    }

    TEST_F( BinaryTreeTestFixture, GettingRootDataWorks )
    {
        std::string data{ "Data Structures" };
        binaryTree->add( data );
        ASSERT_EQ( data, binaryTree->getRootData( ));
    }

    TEST_F( BinaryTreeTestFixture, ChangingRootDataWorks )
    {
        std::string data{ "Data Structures" };
        std::string changedData{ "CSC232" };
        binaryTree->add( data );
        binaryTree->setRootData( changedData );
        ASSERT_EQ( changedData, binaryTree->getRootData( ));
    }

    TEST_F( BinaryTreeTestFixture, AddingTwoNodesCreatesNonEmptyTree )
    {
        std::string root{ "CSC232" };
        std::string child{ "CSC131" };
        binaryTree->add( root );
        binaryTree->add( child );
        ASSERT_FALSE( binaryTree->isEmpty( ));
    }

    TEST_F( BinaryTreeTestFixture, AddingTwoNodesCreatesTreeHeightTwo )
    {
        std::string root{ "CSC232" };
        std::string child{ "CSC131" };
        binaryTree->add( root );
        binaryTree->add( child );
        ASSERT_EQ( binaryTree->getHeight( ), 2 );
    }

    TEST_F( BinaryTreeTestFixture, AddingTwoNodesCreatesTreeWithTwoNodes )
    {
        std::string root{ "CSC232" };
        std::string child{ "CSC131" };
        binaryTree->add( root );
        binaryTree->add( child );
        ASSERT_EQ( binaryTree->getNumberOfNodes( ), 2 );
    }

    TEST_F( BinaryTreeTestFixture, AddingTwoNodesCreatesTreeWithCorrectRoot )
    {
        std::string root{ "CSC232" };
        std::string child{ "CSC131" };
        binaryTree->add( root );
        binaryTree->add( child );
        ASSERT_EQ( root, binaryTree->getRootData( ));
    }

    TEST_F( BinaryTreeTestFixture, AddingTwoNodesContainsGivenData )
    {
        std::string root{ "CSC232" };
        std::string child{ "CSC131" };
        std::string orphan{ "Annie" };
        binaryTree->add( root );
        binaryTree->add( child );
        ASSERT_TRUE( binaryTree->contains( root ));
        ASSERT_TRUE( binaryTree->contains( child ));
        ASSERT_FALSE( binaryTree->contains( orphan ));
    }

    TEST_F( BinaryTreeTestFixture, ClearCreatesEmptyTree )
    {
        std::string root{ "CSC232" };
        std::string child{ "CSC131" };
        binaryTree->add( root );
        binaryTree->add( child );
        binaryTree->clear();
        ASSERT_TRUE( binaryTree->isEmpty( ));
    }

    TEST_F( BinaryTreeTestFixture, ClearCreatesTreeHeightZero )
    {
        std::string root{ "CSC232" };
        std::string child{ "CSC131" };
        binaryTree->add( root );
        binaryTree->add( child );
        binaryTree->clear();
        ASSERT_EQ( binaryTree->getHeight(), 0);
    }

    TEST_F( BinaryTreeTestFixture, ClearCreatesTreeWithNoNodes )
    {
        std::string root{ "CSC232" };
        std::string child{ "CSC131" };
        binaryTree->add( root );
        binaryTree->add( child );
        binaryTree->clear();
        ASSERT_EQ( binaryTree->getNumberOfNodes(), 0);
    }

    TEST_F( BinaryTreeTestFixture, PreorderTraverseIsCorrect )
    {
        binaryTree->add("A");
        binaryTree->add("B");
        binaryTree->add("C");
        binaryTree->add("D");

        binaryTree->preorderTraverse(&visit);
        std::string expected{ "ABDC" };
        std::string actual{buffer.str()};
        EXPECT_EQ(expected, actual);
    }

    TEST_F( BinaryTreeTestFixture, InorderTraverseIsCorrect )
    {
        binaryTree->add("A");
        binaryTree->add("B");
        binaryTree->add("C");
        binaryTree->add("D");

        binaryTree->preorderTraverse(&visit);
        std::string expected{ "DBAC" };
        std::string actual{buffer.str()};
        EXPECT_EQ(expected, actual);
    }

    TEST_F( BinaryTreeTestFixture, PostorderTraverseIsCorrect )
    {
        binaryTree->add("A");
        binaryTree->add("B");
        binaryTree->add("C");
        binaryTree->add("D");

        binaryTree->preorderTraverse(&visit);
        std::string expected{ "DBCA" };
        std::string actual{buffer.str()};
        EXPECT_EQ(expected, actual);
    }

} // end namespace

int main( int argc, char** argv )
{
    ::testing::InitGoogleTest( &argc, argv );
    int result{ RUN_ALL_TESTS( ) };
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
