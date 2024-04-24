find . -type f -name "*.sh" -exec sh -c 'for file; do echo "$(basename "${file}" .sh)"; done' _ {} +

