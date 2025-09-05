Step-by-Step Guide for Integration Testing with CI/CD using GitHub

1. Create a GitHub repository (e.g., integration-testing-demo).
2. Clone the repository to your local machine.
3. Add the following files to the repo:
   - math_utils.c
   - main_v1.c
   - main_v2.c
   - test_integration.c
   - .github/workflows/ci.yml (create folders as needed)
   - README.txt

4. Commit and push the files to GitHub.

5. GitHub Actions will automatically run the CI workflow:
   - It compiles and runs test_integration.c
   - If any assertion fails, the workflow will fail

6. To simulate regression:
   - Push main_v1.c first and verify tests pass
   - Replace with main_v2.c and push again
   - Observe test results in GitHub Actions

This setup helps validate integration and detect regressions automatically.
