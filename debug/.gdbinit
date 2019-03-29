# adapt path below
add-auto-load-safe-path /home/username/eql5/debug/.gdbinit

#
# Recommended settings for debugging either ecl_min or ecl.
#
delete break
break cl_cos
break cl_error
break cl_cerror
break CEerror
break FEerror
break FEunbound_variable
break FEundefined_function
break FEwrong_type_argument
break FEinvalid_function
set confirm off
handle SIGBUS nostop
handle SIGPWR nostop pass noprint
handle SIGXCPU nostop pass noprint
handle EXC_BAD_ACCESS nostop pass noprint
