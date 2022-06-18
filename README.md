osmo-iuh - Osmocom Iuh implementation
================================================

This repository contains a C-language implementation of the 3GPP Iuh
interface.  You can use it to interface Iuh-speaking femtocells/small cells to
Iu-speaking MSCs and SGSNs.

It is part of the [Osmocom](https://osmocom.org/) Open Source Mobile
Communications project.

Homepage
--------

The official homepage of the project is
https://osmocom.org/projects/osmohnbgw/wiki

GIT Repository
--------------

You can clone from the official libosmocore.git repository using

	git clone https://gitea.osmocom.org/cellular-infrastructure/osmo-iuh

There is a web interface at <https://gitea.osmocom.org/cellular-infrastructure/osmo-iuh>

Documentation
-------------

There is currently no documentation beyond the wiki available on the
homepage.  We would love to see somebody contributing a manual that can
be part of the osmo-gsm-manuals suite.

Mailing List
------------

Discussions related to osmo-iuh are happening on the
openbsc@lists.osmocom.org mailing list, please see
https://lists.osmocom.org/mailman/listinfo/openbsc for subscription
options and the list archive.

Please observe the [Osmocom Mailing List
Rules](https://osmocom.org/projects/cellular-infrastructure/wiki/Mailing_List_Rules)
when posting.

Contributing
------------

Our coding standards are described at
https://osmocom.org/projects/cellular-infrastructure/wiki/Coding_standards

We us a gerrit based patch submission/review process for managing
contributions.  Please see
https://osmocom.org/projects/cellular-infrastructure/wiki/Gerrit for
more details

The current patch queue for osmo-iuh can be seen at
https://gerrit.osmocom.org/#/q/project:osmo-iuh+status:open


Building
--------

It is generally best to check the wiki for the most up-to-date build
instructions.

As external library dependencies, you will need
* libosmocore from https://gitea.osmocom.org/osmocom/libosmocore
* libasn1c from https://gitea.osmocom.org/cellular-infrastructure/libasn1c
* libsctp-dev (this is the package name in Debian)
* libosmo-netif from https://gitea.osmocom.org/osmocom/libosmo-netif
* libosmo-sccp from https://gitea.osmocom.org/osmocom/libosmo-sccp

To bootstrap the build, in the root directory, run:

    autoreconf --install

After that, run the usual

    ./configure [options]
    make
    [sudo] make install

Using
-----

Note: osmo-iuh just left very active development (December 2015, January
2016), so your mileage may vary.

Regenerating C code from ASN.1 source
-------------------------------------

In order to re-generate the C source code from the ASN.1 source,
you will need a modified asn1c which has the following features:
* APER support (the patch from Eurecom, or its forward-ported version
  from the aper branch of https://gitea.osmocom.org/osmocom/asn1c)
* Support for prefixing the generated types (aper-prefix branch of
  https://gitea.osmocom.org/osmocom/asn1c)
* Then in osmo-iuh.git: make -C src/ regen
