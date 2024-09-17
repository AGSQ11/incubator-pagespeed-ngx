![ngx_pagespeed](https://user-images.githubusercontent.com/6751650/73116078-338a9180-3f0f-11ea-8fdf-8c99cb4bec7f.png)

--

Updated on 17 Sep. 2024:

Update ngx_pagespeed.cc
Updated ps_get_cache_control: 
This change assumes that cache_control is now a single ngx_table_elt_t* pointer, rather than an array.

Updated ps_set_cache_control: 
Null check: Instead of checking elts, we check if r->headers_out.cache_control is nullptr.
Memory allocation: We use ngx_pcalloc to allocate memory for the ngx_table_elt_t structure (the cache control header).
Set header values: We manually set the key and value fields for the Cache-Control header.

+ Added the compatible PSOL achive directly into the project files.

--

ngx_pagespeed speeds up your site and reduces page load time by automatically
applying web performance best practices to pages and associated assets (CSS,
JavaScript, images) without requiring you to modify your existing content or
workflow. Features include:

- Image optimization: stripping meta-data, dynamic resizing, recompression
- CSS & JavaScript minification, concatenation, inlining, and outlining
- Small resource inlining
- Deferring image and JavaScript loading
- HTML rewriting
- Cache lifetime extension
- and
  [more](https://developers.google.com/speed/docs/mod_pagespeed/config_filters)

To see ngx_pagespeed in action, with example pages for each of the
optimizations, see our <a href="http://ngxpagespeed.com">demonstration site</a>.

## How to build

Follow the steps on <a
href="https://developers.google.com/speed/pagespeed/module/build_ngx_pagespeed_from_source">build
ngx_pagespeed from source</a>.

## How to use

Follow the steps on <a
href="https://developers.google.com/speed/pagespeed/module/configuration">PageSpeed
configuration</a>.

For feedback, questions, and to follow
the progress of the project:

- [ngx-pagespeed-discuss mailing
  list](https://groups.google.com/forum/#!forum/ngx-pagespeed-discuss)
- [ngx-pagespeed-announce mailing
  list](https://groups.google.com/forum/#!forum/ngx-pagespeed-announce)
