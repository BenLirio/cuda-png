# Viz

Viz is a command line tool that converts a stream of numbers into either an image or animation.

## Installation

```bash
sudo ./install.sh
```

## Usage
```bash
usage: Viz [-h] --input-format {csv} --output-format {png,gif} --width WIDTH --height HEIGHT [--encoding {scalar,rgb,rgba}] [--frame-rate FRAME_RATE]

Visualize data

optional arguments:
  -h, --help            show this help message and exit
  --input-format {csv}  Input Format (not implemented)
  --output-format {png,gif}
                        Output type (not implemented)
  --width WIDTH         Width (not implemented)
  --height HEIGHT       Height (not implemented)
  --encoding {scalar,rgb,rgba}
                        Color (not implemented)
  --frame-rate FRAME_RATE
                        Frame rate (not implemented)
```

## Examples

PNG
```bash
$ echo "1,2,3,4" | viz --input-format csv --output-format png --width 2 --height 2 --encoding scalar
```

Red PNG
```bash
$ echo "255,0,0,255,0,0,255,0,0,255,0,0" | viz --input-format csv --output-format png --width 2 --height 2 --encoding rgb
```

GIF
```bash
$ echo "1,2,3,4,4,3,2,1" | viz --input-format csv --output-format gif --width 2 --height 2 --frame-rate 30 --encoding scalar
```