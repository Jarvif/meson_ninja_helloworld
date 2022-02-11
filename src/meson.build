#add_project_arguments('-Wno-error', language: 'cpp')
inc = include_directories('.', 'spi','i2c')

src = files(['main.c'])

subdir('spi')
subdir('i2c')

args = []
link_args = ['-gz'] #compress debug section
options = []

debug = run_command('sh', '-c', 'echo $MAKEDEBUG')
if debug.stdout().strip() == 'yes'
args += [
  '-DCONFIG_NFV_DEBUG',
]
options += ['b_sanitize=address']
endif

executable('meson_ninja_helloworld', src,
    include_directories: inc,
    override_options: options,
    c_args: args,
    cpp_args: args,
    link_args: link_args,
    install: true)
