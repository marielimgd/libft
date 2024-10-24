#ifndef MINUNIT_H
# define MINUNIT_H

# define MU_ASSERT(message, test) do { if (!(test)) return message; } while (0)
# define MU_RUN_TEST(test) do { char *message = test(); g_tests_run++; \
                                if (message) return message; } while (0)
                                
extern  int g_tests_run;

#endif
