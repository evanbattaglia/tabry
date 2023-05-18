This Dockerfile can be used for testing tabry in a fish shell environment.

To build the image, run:

```
docker build -t tabry-fish -f ./docker/fish/Dockerfile .
```

Run it with:

```
docker run -it --rm -v $PWD:/app tabry-fish
> cd /app
> bundle install
```

Once inside, you can test your changes with commands like:

```
examples/all_in_one/hello
examples/all_in_one/hello completion fish
```

To source completions, use:

```
examples/all_in_one/hello completion fish | source
```
