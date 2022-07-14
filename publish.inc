# -*- mode: org; -*-
#+PROPERTY: :var format = "html"

#+NAME: publish_force
#+begin_src elisp :exports none :results silent
(org-publish-project "tec-data" t)
format
#+end_src

#+NAME: publish
#+begin_src elisp :exports none :results silent
(org-publish-project "tec-data")
format
#+end_src


#+NAME: setup_publish_html
#+begin_src elisp :exports none :results silent
(setq org-export-with-toc t)
(setq org-publish-project-alist
      '(("tec-data"
        :base-directory "."
        :base-extension "org"
        :publishing-directory "."
        :publishing-function org-html-publish-to-html
        :recursive t
        ;;:makeindex t
      )))
(setq format ".html")
#+end_src

#+NAME: setup_publish_md
#+begin_src elisp :exports none :results silent
(setq org-export-with-toc nil)
(setq org-publish-project-alist
      '(("tec-data"
        :base-directory "."
        :base-extension "org"
        :publishing-directory "."
        :publishing-function org-gfm-publish-to-gfm
        :recursive t
        ;;:makeindex t
      )))
(setq format ".md")
#+end_src
