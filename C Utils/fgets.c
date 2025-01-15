 if (fgets(name, MAX_STR_LENGTH, stdin) != NULL) {
        size_t len = strlen(name);
        if (len > 0 && name[len - 1] == '\n') {
            name[len - 1] = '\0';
        }
    } else {
        printf("Error reading input.\n");
    }