## Sublime Build File

```json
{
    "cmd" : ["cc $file_name -o ../build/${file_base_name} && ../build/${file_base_name}"],
    "selector" : "source.c",
    "shell":true,
    "working_dir" : "$file_path"
}
```
