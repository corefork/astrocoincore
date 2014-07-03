include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = astrocoin-qt
noinst_LIBRARIES = libastrocoinqt.a
SUBDIRS = $(BUILD_TEST_QT)
DIST_SUBDIRS = test

# astrocoin qt core #
QT_TS = \
  locale/astrocoin_ach.ts \
  locale/astrocoin_af_ZA.ts \
  locale/astrocoin_ar.ts \
  locale/astrocoin_be_BY.ts \
  locale/astrocoin_bg.ts \
  locale/astrocoin_bs.ts \
  locale/astrocoin_ca_ES.ts \
  locale/astrocoin_ca.ts \
  locale/astrocoin_ca@valencia.ts \
  locale/astrocoin_cmn.ts \
  locale/astrocoin_cs.ts \
  locale/astrocoin_cy.ts \
  locale/astrocoin_da.ts \
  locale/astrocoin_de_AT.ts \
  locale/astrocoin_de.ts \
  locale/astrocoin_el_GR.ts \
  locale/astrocoin_en.ts \
  locale/astrocoin_eo.ts \
  locale/astrocoin_es_CL.ts \
  locale/astrocoin_es_DO.ts \
  locale/astrocoin_es_MX.ts \
  locale/astrocoin_es.ts \
  locale/astrocoin_es_UY.ts \
  locale/astrocoin_et.ts \
  locale/astrocoin_eu_ES.ts \
  locale/astrocoin_fa_IR.ts \
  locale/astrocoin_fa.ts \
  locale/astrocoin_fi.ts \
  locale/astrocoin_fr_CA.ts \
  locale/astrocoin_fr.ts \
  locale/astrocoin_gl.ts \
  locale/astrocoin_gu_IN.ts \
  locale/astrocoin_he.ts \
  locale/astrocoin_hi_IN.ts \
  locale/astrocoin_hr.ts \
  locale/astrocoin_hu.ts \
  locale/astrocoin_id_ID.ts \
  locale/astrocoin_it.ts \
  locale/astrocoin_ja.ts \
  locale/astrocoin_ka.ts \
  locale/astrocoin_kk_KZ.ts \
  locale/astrocoin_ko_KR.ts \
  locale/astrocoin_ky.ts \
  locale/astrocoin_la.ts \
  locale/astrocoin_lt.ts \
  locale/astrocoin_lv_LV.ts \
  locale/astrocoin_ms_MY.ts \
  locale/astrocoin_nb.ts \
  locale/astrocoin_nl.ts \
  locale/astrocoin_pam.ts \
  locale/astrocoin_pl.ts \
  locale/astrocoin_pt_BR.ts \
  locale/astrocoin_pt_PT.ts \
  locale/astrocoin_ro_RO.ts \
  locale/astrocoin_ru.ts \
  locale/astrocoin_sah.ts \
  locale/astrocoin_sk.ts \
  locale/astrocoin_sl_SI.ts \
  locale/astrocoin_sq.ts \
  locale/astrocoin_sr.ts \
  locale/astrocoin_sv.ts \
  locale/astrocoin_th_TH.ts \
  locale/astrocoin_tr.ts \
  locale/astrocoin_uk.ts \
  locale/astrocoin_ur_PK.ts \
  locale/astrocoin_uz@Cyrl.ts \
  locale/astrocoin_vi.ts \
  locale/astrocoin_vi_VN.ts \
  locale/astrocoin_zh_CN.ts \
  locale/astrocoin_zh_HK.ts \
  locale/astrocoin_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_astrocoinaddressvalidator.cpp \
  moc_astrocoinamountfield.cpp \
  moc_astrocoingui.cpp \
  moc_astrocoinunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

ASTROCOIN_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  astrocoin.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_astrocoin.cpp
QT_QRC = astrocoin.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

ASTROCOIN_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  astrocoinaddressvalidator.h \
  astrocoinamountfield.h \
  astrocoingui.h \
  astrocoinunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/astrocoin.ico \
  res/icons/astrocoin.png \
  res/icons/astrocoin_testnet.ico \
  res/icons/astrocoin_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

ASTROCOIN_QT_CPP = \
  astrocoin.cpp \
  astrocoinaddressvalidator.cpp \
  astrocoinamountfield.cpp \
  astrocoingui.cpp \
  astrocoinunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  signverifymessagedialog.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp

if ENABLE_WALLET
ASTROCOIN_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

ASTROCOIN_RC = res/astrocoin-qt-res.rc

libastrocoinqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libastrocoinqt_a_SOURCES = $(ASTROCOIN_QT_CPP) $(ASTROCOIN_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libastrocoinqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libastrocoinqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# astrocoin-qt binary #
astrocoin_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
astrocoin_qt_SOURCES = astrocoin.cpp
if TARGET_DARWIN
  astrocoin_qt_SOURCES += $(ASTROCOIN_MM)
endif
if TARGET_WINDOWS
  astrocoin_qt_SOURCES += $(ASTROCOIN_RC)
endif
astrocoin_qt_LDADD = libastrocoinqt.a $(LIBASTROCOIN_SERVER)
if ENABLE_WALLET
astrocoin_qt_LDADD += $(LIBASTROCOIN_WALLET)
endif
astrocoin_qt_LDADD += $(LIBASTROCOIN_CLI) $(LIBASTROCOIN_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
astrocoin_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

astrocoinstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/astrocoinstrings.cpp

translate: astrocoinstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(ASTROCOIN_QT_CPP) $(ASTROCOIN_QT_H) $(ASTROCOIN_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/astrocoin_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name astrocoin -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -i.bak -e '/^\*\*.*Created:/d' $@ && rm $@.bak
	$(SED) -i.bak -e '/^\*\*.*by:/d' $@ && rm $@.bak

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
