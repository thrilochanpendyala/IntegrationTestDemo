Integration Testing Demo with CI/CD

This project demonstrates software integration testing using GitHub Actions CI/CD workflow.

Contents:
- math_utils.c: Shared utility function
- main_v1.c: Version 1 of main application
- main_v2.c: Version 2 with intentional regression
- test_integration.c: Integration test with assertions
- .github/workflows/ci.yml: GitHub Actions workflow
- README.txt: Instructions

Steps to Use:
1. Create a GitHub repository and push these files.
2. GitHub Actions will automatically run the workflow on each push or pull request.
3. The workflow compiles and runs integration tests and main_v2.c.
4. It checks for expected output to simulate regression testing.

Expected Output:
- Integration tests must pass.
- main_v2.c must print "Result: -1" to pass output validation.

Modify test_integration.c or main_v2.c to simulate failures and observe CI behavior.
