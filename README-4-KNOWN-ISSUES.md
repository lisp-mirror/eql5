
*Linux*

After using `QFileDialog`, you may experience an infinite error message loop
when quitting EQL5.  
The `SIGSEGV` happens in `QIcon::~QIcon()`, and is therefore neither the fault
of ECL nor EQL5.  
(It seems to be related to Gtk/Themes.)

A drastic measure against this annoying behaviour is calling `abort()` instead
of `exit()` by using:

```
  (eql:qquit -1) ; negative exit status
```

which would be `:abort` or `:qa` directly on the top-level.
