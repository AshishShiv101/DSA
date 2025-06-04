int *a = malloc(5 * sizeof(int)); // May contain garbage values
int *b = calloc(5, sizeof(int));  // All elements initialized to 0
