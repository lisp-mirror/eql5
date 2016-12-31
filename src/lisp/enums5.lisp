;;; Complete list of all enumerations
;;;
;;;     run1:  ~/eql/helper/parse-enums.lisp
;;;     run2:  get-dynamic-enums.lisp
;;;     merge: merge-enums.lisp
;;;     split: split-enums
;;;
;;; (divided in more files to not exceed string size limit of Windows)

(in-package :eql)

(defmacro defenum (name value)
  `(progn
     (defconstant ,name ,value)
     (export ',name ,(find-package :eql))))

(defenum |Qt.Key_Away| 16777464)
(defenum |Qt.Key_A| 65)
(defenum |Qt.Key_BackForward| 16777414)
(defenum |Qt.Key_Backslash| 92)
(defenum |Qt.Key_Backspace| 16777219)
(defenum |Qt.Key_Backtab| 16777218)
(defenum |Qt.Key_Back| 16777313)
(defenum |Qt.Key_Bar| 124)
(defenum |Qt.Key_BassBoost| 16777331)
(defenum |Qt.Key_BassDown| 16777333)
(defenum |Qt.Key_BassUp| 16777332)
(defenum |Qt.Key_Battery| 16777470)
(defenum |Qt.Key_Bluetooth| 16777471)
(defenum |Qt.Key_Blue| 16777495)
(defenum |Qt.Key_Book| 16777417)
(defenum |Qt.Key_BraceLeft| 123)
(defenum |Qt.Key_BraceRight| 125)
(defenum |Qt.Key_BracketLeft| 91)
(defenum |Qt.Key_BracketRight| 93)
(defenum |Qt.Key_BrightnessAdjust| 16777410)
(defenum |Qt.Key_B| 66)
(defenum |Qt.Key_CD| 16777418)
(defenum |Qt.Key_Calculator| 16777419)
(defenum |Qt.Key_Calendar| 16777444)
(defenum |Qt.Key_Call| 17825796)
(defenum |Qt.Key_CameraFocus| 17825825)
(defenum |Qt.Key_Camera| 17825824)
(defenum |Qt.Key_Cancel| 16908289)
(defenum |Qt.Key_CapsLock| 16777252)
(defenum |Qt.Key_Ccedilla| 199)
(defenum |Qt.Key_ChannelDown| 16777497)
(defenum |Qt.Key_ChannelUp| 16777496)
(defenum |Qt.Key_ClearGrab| 16777421)
(defenum |Qt.Key_Clear| 16777227)
(defenum |Qt.Key_Close| 16777422)
(defenum |Qt.Key_Codeinput| 16781623)
(defenum |Qt.Key_Colon| 58)
(defenum |Qt.Key_Comma| 44)
(defenum |Qt.Key_Community| 16777412)
(defenum |Qt.Key_Context1| 17825792)
(defenum |Qt.Key_Context2| 17825793)
(defenum |Qt.Key_Context3| 17825794)
(defenum |Qt.Key_Context4| 17825795)
(defenum |Qt.Key_ContrastAdjust| 16777485)
(defenum |Qt.Key_Control| 16777249)
(defenum |Qt.Key_Copy| 16777423)
(defenum |Qt.Key_Cut| 16777424)
(defenum |Qt.Key_C| 67)
(defenum |Qt.Key_DOS| 16777426)
(defenum |Qt.Key_Dead_Abovedot| 16781910)
(defenum |Qt.Key_Dead_Abovering| 16781912)
(defenum |Qt.Key_Dead_Acute| 16781905)
(defenum |Qt.Key_Dead_Belowdot| 16781920)
(defenum |Qt.Key_Dead_Breve| 16781909)
(defenum |Qt.Key_Dead_Caron| 16781914)
(defenum |Qt.Key_Dead_Cedilla| 16781915)
(defenum |Qt.Key_Dead_Circumflex| 16781906)
(defenum |Qt.Key_Dead_Diaeresis| 16781911)
(defenum |Qt.Key_Dead_Doubleacute| 16781913)
(defenum |Qt.Key_Dead_Grave| 16781904)
(defenum |Qt.Key_Dead_Hook| 16781921)
(defenum |Qt.Key_Dead_Horn| 16781922)
(defenum |Qt.Key_Dead_Iota| 16781917)
(defenum |Qt.Key_Dead_Macron| 16781908)
(defenum |Qt.Key_Dead_Ogonek| 16781916)
(defenum |Qt.Key_Dead_Semivoiced_Sound| 16781919)
(defenum |Qt.Key_Dead_Tilde| 16781907)
(defenum |Qt.Key_Dead_Voiced_Sound| 16781918)
(defenum |Qt.Key_Delete| 16777223)
(defenum |Qt.Key_Direction_L| 16777305)
(defenum |Qt.Key_Direction_R| 16777312)
(defenum |Qt.Key_Display| 16777425)
(defenum |Qt.Key_Documents| 16777427)
(defenum |Qt.Key_Dollar| 36)
(defenum |Qt.Key_Down| 16777237)
(defenum |Qt.Key_D| 68)
(defenum |Qt.Key_ETH| 208)
(defenum |Qt.Key_Eacute| 201)
(defenum |Qt.Key_Ecircumflex| 202)
(defenum |Qt.Key_Ediaeresis| 203)
(defenum |Qt.Key_Egrave| 200)
(defenum |Qt.Key_Eisu_Shift| 16781615)
(defenum |Qt.Key_Eisu_toggle| 16781616)
(defenum |Qt.Key_Eject| 16777401)
(defenum |Qt.Key_End| 16777233)
(defenum |Qt.Key_Enter| 16777221)
(defenum |Qt.Key_Equal| 61)
(defenum |Qt.Key_Escape| 16777216)
(defenum |Qt.Key_Excel| 16777428)
(defenum |Qt.Key_Exclam| 33)
(defenum |Qt.Key_Execute| 16908291)
(defenum |Qt.Key_Exit| 16908298)
(defenum |Qt.Key_Explorer| 16777429)
(defenum |Qt.Key_E| 69)
(defenum |Qt.Key_F10| 16777273)
(defenum |Qt.Key_F11| 16777274)
(defenum |Qt.Key_F12| 16777275)
(defenum |Qt.Key_F13| 16777276)
(defenum |Qt.Key_F14| 16777277)
(defenum |Qt.Key_F15| 16777278)
(defenum |Qt.Key_F16| 16777279)
(defenum |Qt.Key_F17| 16777280)
(defenum |Qt.Key_F18| 16777281)
(defenum |Qt.Key_F19| 16777282)
(defenum |Qt.Key_F1| 16777264)
(defenum |Qt.Key_F20| 16777283)
(defenum |Qt.Key_F21| 16777284)
(defenum |Qt.Key_F22| 16777285)
(defenum |Qt.Key_F23| 16777286)
(defenum |Qt.Key_F24| 16777287)
(defenum |Qt.Key_F25| 16777288)
(defenum |Qt.Key_F26| 16777289)
(defenum |Qt.Key_F27| 16777290)
(defenum |Qt.Key_F28| 16777291)
(defenum |Qt.Key_F29| 16777292)
(defenum |Qt.Key_F2| 16777265)
(defenum |Qt.Key_F30| 16777293)
(defenum |Qt.Key_F31| 16777294)
(defenum |Qt.Key_F32| 16777295)
(defenum |Qt.Key_F33| 16777296)
(defenum |Qt.Key_F34| 16777297)
(defenum |Qt.Key_F35| 16777298)
(defenum |Qt.Key_F3| 16777266)
(defenum |Qt.Key_F4| 16777267)
(defenum |Qt.Key_F5| 16777268)
(defenum |Qt.Key_F6| 16777269)
(defenum |Qt.Key_F7| 16777270)
(defenum |Qt.Key_F8| 16777271)
(defenum |Qt.Key_F9| 16777272)
(defenum |Qt.Key_Favorites| 16777361)
(defenum |Qt.Key_Finance| 16777411)
(defenum |Qt.Key_Find| 16777506)
(defenum |Qt.Key_Flip| 17825798)
(defenum |Qt.Key_Forward| 16777314)
(defenum |Qt.Key_F| 70)
(defenum |Qt.Key_Game| 16777430)
(defenum |Qt.Key_Go| 16777431)
(defenum |Qt.Key_Greater| 62)
(defenum |Qt.Key_Green| 16777493)
(defenum |Qt.Key_Guide| 16777498)
(defenum |Qt.Key_G| 71)
(defenum |Qt.Key_Hangul_Banja| 16781625)
(defenum |Qt.Key_Hangul_End| 16781619)
(defenum |Qt.Key_Hangul_Hanja| 16781620)
(defenum |Qt.Key_Hangul_Jamo| 16781621)
(defenum |Qt.Key_Hangul_Jeonja| 16781624)
(defenum |Qt.Key_Hangul_PostHanja| 16781627)
(defenum |Qt.Key_Hangul_PreHanja| 16781626)
(defenum |Qt.Key_Hangul_Romaja| 16781622)
(defenum |Qt.Key_Hangul_Special| 16781631)
(defenum |Qt.Key_Hangul_Start| 16781618)
(defenum |Qt.Key_Hangul| 16781617)
(defenum |Qt.Key_Hangup| 17825797)
(defenum |Qt.Key_Hankaku| 16781609)
(defenum |Qt.Key_Help| 16777304)
(defenum |Qt.Key_Henkan| 16781603)
(defenum |Qt.Key_Hibernate| 16777480)
(defenum |Qt.Key_Hiragana_Katakana| 16781607)
(defenum |Qt.Key_Hiragana| 16781605)
(defenum |Qt.Key_History| 16777407)
(defenum |Qt.Key_HomePage| 16777360)
(defenum |Qt.Key_Home| 16777232)
(defenum |Qt.Key_HotLinks| 16777409)
(defenum |Qt.Key_Hyper_L| 16777302)
(defenum |Qt.Key_Hyper_R| 16777303)
(defenum |Qt.Key_H| 72)
(defenum |Qt.Key_Iacute| 205)
(defenum |Qt.Key_Icircumflex| 206)
(defenum |Qt.Key_Idiaeresis| 207)
(defenum |Qt.Key_Igrave| 204)
(defenum |Qt.Key_Info| 16777499)
(defenum |Qt.Key_Insert| 16777222)
(defenum |Qt.Key_I| 73)
(defenum |Qt.Key_J| 74)
(defenum |Qt.Key_Kana_Lock| 16781613)
(defenum |Qt.Key_Kana_Shift| 16781614)
(defenum |Qt.Key_Kanji| 16781601)
(defenum |Qt.Key_Katakana| 16781606)
(defenum |Qt.Key_KeyboardBrightnessDown| 16777398)
(defenum |Qt.Key_KeyboardBrightnessUp| 16777397)
(defenum |Qt.Key_KeyboardLightOnOff| 16777396)
(defenum |Qt.Key_K| 75)
(defenum |Qt.Key_LastNumberRedial| 17825801)
(defenum |Qt.Key_Launch0| 16777378)
(defenum |Qt.Key_Launch1| 16777379)
(defenum |Qt.Key_Launch2| 16777380)
(defenum |Qt.Key_Launch3| 16777381)
(defenum |Qt.Key_Launch4| 16777382)
(defenum |Qt.Key_Launch5| 16777383)
(defenum |Qt.Key_Launch6| 16777384)
(defenum |Qt.Key_Launch7| 16777385)
(defenum |Qt.Key_Launch8| 16777386)
(defenum |Qt.Key_Launch9| 16777387)
(defenum |Qt.Key_LaunchA| 16777388)
(defenum |Qt.Key_LaunchB| 16777389)
(defenum |Qt.Key_LaunchC| 16777390)
(defenum |Qt.Key_LaunchD| 16777391)
(defenum |Qt.Key_LaunchE| 16777392)
(defenum |Qt.Key_LaunchF| 16777393)
(defenum |Qt.Key_LaunchG| 16777486)
(defenum |Qt.Key_LaunchH| 16777487)
(defenum |Qt.Key_LaunchMail| 16777376)
(defenum |Qt.Key_LaunchMedia| 16777377)
(defenum |Qt.Key_Left| 16777234)
(defenum |Qt.Key_Less| 60)
(defenum |Qt.Key_LightBulb| 16777405)
(defenum |Qt.Key_LogOff| 16777433)
(defenum |Qt.Key_L| 76)
(defenum |Qt.Key_MailForward| 16777467)
(defenum |Qt.Key_Market| 16777434)
(defenum |Qt.Key_Massyo| 16781612)
(defenum |Qt.Key_MediaLast| 16842751)
(defenum |Qt.Key_MediaNext| 16777347)
(defenum |Qt.Key_MediaPause| 16777349)
(defenum |Qt.Key_MediaPlay| 16777344)
(defenum |Qt.Key_MediaPrevious| 16777346)
(defenum |Qt.Key_MediaRecord| 16777348)
(defenum |Qt.Key_MediaStop| 16777345)
(defenum |Qt.Key_MediaTogglePlayPause| 16777350)
(defenum |Qt.Key_Meeting| 16777435)
(defenum |Qt.Key_Memo| 16777404)
(defenum |Qt.Key_MenuKB| 16777436)
(defenum |Qt.Key_MenuPB| 16777437)
(defenum |Qt.Key_Menu| 16777301)
(defenum |Qt.Key_Messenger| 16777465)
(defenum |Qt.Key_Meta| 16777250)
(defenum |Qt.Key_MicMute| 16777491)
(defenum |Qt.Key_MicVolumeDown| 16777502)
(defenum |Qt.Key_MicVolumeUp| 16777501)
(defenum |Qt.Key_Minus| 45)
(defenum |Qt.Key_Mode_switch| 16781694)
(defenum |Qt.Key_MonBrightnessDown| 16777395)
(defenum |Qt.Key_MonBrightnessUp| 16777394)
(defenum |Qt.Key_Muhenkan| 16781602)
(defenum |Qt.Key_Multi_key| 16781600)
(defenum |Qt.Key_MultipleCandidate| 16781629)
(defenum |Qt.Key_Music| 16777469)
(defenum |Qt.Key_MySites| 16777438)
(defenum |Qt.Key_M| 77)
(defenum |Qt.Key_News| 16777439)
(defenum |Qt.Key_New| 16777504)
(defenum |Qt.Key_No| 16842754)
(defenum |Qt.Key_Ntilde| 209)
(defenum |Qt.Key_NumLock| 16777253)
(defenum |Qt.Key_NumberSign| 35)
(defenum |Qt.Key_N| 78)
(defenum |Qt.Key_Oacute| 211)
(defenum |Qt.Key_Ocircumflex| 212)
(defenum |Qt.Key_Odiaeresis| 214)
(defenum |Qt.Key_OfficeHome| 16777440)
(defenum |Qt.Key_Ograve| 210)
(defenum |Qt.Key_Ooblique| 216)
(defenum |Qt.Key_OpenUrl| 16777364)
(defenum |Qt.Key_Open| 16777505)
(defenum |Qt.Key_Option| 16777441)
(defenum |Qt.Key_Otilde| 213)
(defenum |Qt.Key_O| 79)
(defenum |Qt.Key_PageDown| 16777239)
(defenum |Qt.Key_PageUp| 16777238)
(defenum |Qt.Key_ParenLeft| 40)
(defenum |Qt.Key_ParenRight| 41)
(defenum |Qt.Key_Paste| 16777442)
(defenum |Qt.Key_Pause| 16777224)
(defenum |Qt.Key_Percent| 37)
(defenum |Qt.Key_Period| 46)
(defenum |Qt.Key_Phone| 16777443)
(defenum |Qt.Key_Pictures| 16777468)
(defenum |Qt.Key_Play| 16908293)
(defenum |Qt.Key_Plus| 43)
(defenum |Qt.Key_PowerDown| 16777483)
(defenum |Qt.Key_PowerOff| 16777399)
(defenum |Qt.Key_PreviousCandidate| 16781630)
(defenum |Qt.Key_Printer| 16908290)
(defenum |Qt.Key_Print| 16777225)
(defenum |Qt.Key_P| 80)
(defenum |Qt.Key_Question| 63)
(defenum |Qt.Key_QuoteDbl| 34)
(defenum |Qt.Key_QuoteLeft| 96)
(defenum |Qt.Key_Q| 81)
(defenum |Qt.Key_Redo| 16777508)
(defenum |Qt.Key_Red| 16777492)
(defenum |Qt.Key_Refresh| 16777316)
(defenum |Qt.Key_Reload| 16777446)
(defenum |Qt.Key_Reply| 16777445)
(defenum |Qt.Key_Return| 16777220)
(defenum |Qt.Key_Right| 16777236)
(defenum |Qt.Key_Romaji| 16781604)
(defenum |Qt.Key_RotateWindows| 16777447)
(defenum |Qt.Key_RotationKB| 16777449)
(defenum |Qt.Key_RotationPB| 16777448)
(defenum |Qt.Key_R| 82)
(defenum |Qt.Key_Save| 16777450)
(defenum |Qt.Key_ScreenSaver| 16777402)
(defenum |Qt.Key_ScrollLock| 16777254)
(defenum |Qt.Key_Search| 16777362)
(defenum |Qt.Key_Select| 16842752)
(defenum |Qt.Key_Semicolon| 59)
(defenum |Qt.Key_Send| 16777451)
(defenum |Qt.Key_Settings| 16777500)
(defenum |Qt.Key_Shift| 16777248)
(defenum |Qt.Key_Shop| 16777406)
(defenum |Qt.Key_SingleCandidate| 16781628)
(defenum |Qt.Key_Slash| 47)
(defenum |Qt.Key_Sleep| 16908292)
(defenum |Qt.Key_Space| 32)
(defenum |Qt.Key_Spell| 16777452)
(defenum |Qt.Key_SplitScreen| 16777453)
(defenum |Qt.Key_Standby| 16777363)
(defenum |Qt.Key_Stop| 16777315)
(defenum |Qt.Key_Subtitle| 16777477)
(defenum |Qt.Key_Super_L| 16777299)
(defenum |Qt.Key_Super_R| 16777300)
(defenum |Qt.Key_Support| 16777454)
(defenum |Qt.Key_Suspend| 16777484)
(defenum |Qt.Key_SysReq| 16777226)
(defenum |Qt.Key_S| 83)
(defenum |Qt.Key_THORN| 222)
(defenum |Qt.Key_Tab| 16777217)
(defenum |Qt.Key_TaskPane| 16777455)
(defenum |Qt.Key_Terminal| 16777456)
(defenum |Qt.Key_Time| 16777479)
(defenum |Qt.Key_ToDoList| 16777420)
(defenum |Qt.Key_ToggleCallHangup| 17825799)
(defenum |Qt.Key_Tools| 16777457)
(defenum |Qt.Key_TopMenu| 16777482)
(defenum |Qt.Key_TouchpadOff| 16777490)
(defenum |Qt.Key_TouchpadOn| 16777489)
(defenum |Qt.Key_TouchpadToggle| 16777488)
(defenum |Qt.Key_Touroku| 16781611)
(defenum |Qt.Key_Travel| 16777458)
(defenum |Qt.Key_TrebleDown| 16777335)
(defenum |Qt.Key_TrebleUp| 16777334)
(defenum |Qt.Key_T| 84)
(defenum |Qt.Key_UWB| 16777473)
(defenum |Qt.Key_Uacute| 218)
(defenum |Qt.Key_Ucircumflex| 219)
(defenum |Qt.Key_Udiaeresis| 220)
(defenum |Qt.Key_Ugrave| 217)
(defenum |Qt.Key_Underscore| 95)
(defenum |Qt.Key_Undo| 16777507)
(defenum |Qt.Key_Up| 16777235)
(defenum |Qt.Key_U| 85)
(defenum |Qt.Key_Video| 16777459)
(defenum |Qt.Key_View| 16777481)
(defenum |Qt.Key_VoiceDial| 17825800)
(defenum |Qt.Key_VolumeDown| 16777328)
(defenum |Qt.Key_VolumeMute| 16777329)
(defenum |Qt.Key_VolumeUp| 16777330)
(defenum |Qt.Key_V| 86)
(defenum |Qt.Key_WLAN| 16777472)
(defenum |Qt.Key_WWW| 16777403)
(defenum |Qt.Key_WakeUp| 16777400)
(defenum |Qt.Key_WebCam| 16777466)
(defenum |Qt.Key_Word| 16777460)
(defenum |Qt.Key_W| 87)
(defenum |Qt.Key_Xfer| 16777461)
(defenum |Qt.Key_X| 88)
(defenum |Qt.Key_Yacute| 221)
(defenum |Qt.Key_Yellow| 16777494)
(defenum |Qt.Key_Yes| 16842753)
(defenum |Qt.Key_Y| 89)
(defenum |Qt.Key_Zenkaku_Hankaku| 16781610)
(defenum |Qt.Key_Zenkaku| 16781608)
(defenum |Qt.Key_ZoomIn| 16777462)
(defenum |Qt.Key_ZoomOut| 16777463)
(defenum |Qt.Key_Zoom| 16908294)
(defenum |Qt.Key_Z| 90)
(defenum |Qt.Key_acute| 180)
(defenum |Qt.Key_brokenbar| 166)
(defenum |Qt.Key_cedilla| 184)
(defenum |Qt.Key_cent| 162)
(defenum |Qt.Key_copyright| 169)
(defenum |Qt.Key_currency| 164)
(defenum |Qt.Key_degree| 176)
(defenum |Qt.Key_diaeresis| 168)
(defenum |Qt.Key_division| 247)
(defenum |Qt.Key_exclamdown| 161)
(defenum |Qt.Key_guillemotleft| 171)
(defenum |Qt.Key_guillemotright| 187)
(defenum |Qt.Key_hyphen| 173)
(defenum |Qt.Key_iTouch| 16777432)
(defenum |Qt.Key_macron| 175)
(defenum |Qt.Key_masculine| 186)
(defenum |Qt.Key_multiply| 215)
(defenum |Qt.Key_mu| 181)
(defenum |Qt.Key_nobreakspace| 160)
(defenum |Qt.Key_notsign| 172)
(defenum |Qt.Key_onehalf| 189)
(defenum |Qt.Key_onequarter| 188)
(defenum |Qt.Key_onesuperior| 185)
(defenum |Qt.Key_ordfeminine| 170)
(defenum |Qt.Key_paragraph| 182)
(defenum |Qt.Key_periodcentered| 183)
(defenum |Qt.Key_plusminus| 177)
(defenum |Qt.Key_questiondown| 191)
(defenum |Qt.Key_registered| 174)
(defenum |Qt.Key_section| 167)
(defenum |Qt.Key_ssharp| 223)
(defenum |Qt.Key_sterling| 163)
(defenum |Qt.Key_threequarters| 190)
(defenum |Qt.Key_threesuperior| 179)
(defenum |Qt.Key_twosuperior| 178)
(defenum |Qt.Key_unknown| 33554431)
(defenum |Qt.Key_ydiaeresis| 255)
(defenum |Qt.Key_yen| 165)
(defenum |Qt.KeyboardModifierMask| -33554432)
(defenum |Qt.KeypadModifier| 536870912)
(defenum |Qt.LandscapeOrientation| 2)
(defenum |Qt.LastCursor| 21)
(defenum |Qt.LastGestureType| -1)
(defenum |Qt.LayoutDirectionAuto| 2)
(defenum |Qt.LeftArrow| 3)
(defenum |Qt.LeftButton| 1)
(defenum |Qt.LeftDockWidgetArea| 1)
(defenum |Qt.LeftEdge| 2)
(defenum |Qt.LeftToRight| 0)
(defenum |Qt.LeftToolBarArea| 1)
(defenum |Qt.LinearGradientPattern| 15)
(defenum |Qt.LinkAction| 4)
(defenum |Qt.LinksAccessibleByKeyboard| 8)
(defenum |Qt.LinksAccessibleByMouse| 4)
(defenum |Qt.LocalDate| 2)
(defenum |Qt.LocalTime| 0)
(defenum |Qt.LocaleDate| 3)
(defenum |Qt.LogicalMoveStyle| 0)
(defenum |Qt.MPenCapStyle| 48)
(defenum |Qt.MPenJoinStyle| 448)
(defenum |Qt.MSWindowsFixedSizeDialogHint| 256)
(defenum |Qt.MSWindowsOwnDC| 512)
(defenum |Qt.MacWindowToolBarButtonHint| 268435456)
(defenum |Qt.MaskInColor| 0)
(defenum |Qt.MaskOutColor| 1)
(defenum |Qt.MatchCaseSensitive| 16)
(defenum |Qt.MatchContains| 1)
(defenum |Qt.MatchEndsWith| 3)
(defenum |Qt.MatchExactly| 0)
(defenum |Qt.MatchFixedString| 8)
(defenum |Qt.MatchRecursive| 64)
(defenum |Qt.MatchRegExp| 4)
(defenum |Qt.MatchStartsWith| 2)
(defenum |Qt.MatchWildcard| 5)
(defenum |Qt.MatchWrap| 32)
(defenum |Qt.MaxMouseButton| 67108864)
(defenum |Qt.MaximizeUsingFullscreenGeometryHint| 4194304)
(defenum |Qt.MaximumSize| 2)
(defenum |Qt.MenuBarFocusReason| 6)
(defenum |Qt.MetaModifier| 268435456)
(defenum |Qt.MidButton| 4)
(defenum |Qt.MiddleButton| 4)
(defenum |Qt.MinimumDescent| 3)
(defenum |Qt.MinimumSize| 0)
(defenum |Qt.MiterJoin| 0)
(defenum |Qt.Monday| 1)
(defenum |Qt.MonoOnly| 2)
(defenum |Qt.MouseButtonMask| -1)
(defenum |Qt.MouseEventCreatedDoubleClick| 1)
(defenum |Qt.MouseEventFlagMask| 255)
(defenum |Qt.MouseEventNotSynthesized| 0)
(defenum |Qt.MouseEventSynthesizedByQt| 2)
(defenum |Qt.MouseEventSynthesizedBySystem| 1)
(defenum |Qt.MouseFocusReason| 0)
(defenum |Qt.MoveAction| 2)
(defenum |Qt.NSizeHints| 4)
(defenum |Qt.NoAlpha| 12)
(defenum |Qt.NoArrow| 0)
(defenum |Qt.NoBrush| 0)
(defenum |Qt.NoButton| 0)
(defenum |Qt.NoClip| 0)
(defenum |Qt.NoContextMenu| 0)
(defenum |Qt.NoDockWidgetArea| 0)
(defenum |Qt.NoDropShadowWindowHint| 1073741824)
(defenum |Qt.NoFocusReason| 8)
(defenum |Qt.NoFocus| 0)
(defenum |Qt.NoFormatConversion| 512)
(defenum |Qt.NoGesture| 0)
(defenum |Qt.NoItemFlags| 0)
(defenum |Qt.NoModifier| 0)
(defenum |Qt.NoOpaqueDetection| 256)
(defenum |Qt.NoPen| 0)
(defenum |Qt.NoTabFocus| 0)
(defenum |Qt.NoTextInteraction| 0)
(defenum |Qt.NoToolBarArea| 0)
(defenum |Qt.NonModal| 0)
(defenum |Qt.OddEvenFill| 0)
(defenum |Qt.OffsetFromUTC| 2)
(defenum |Qt.OpaqueMode| 1)
(defenum |Qt.OpenHandCursor| 17)
(defenum |Qt.OrderedAlphaDither| 4)
(defenum |Qt.OrderedDither| 16)
(defenum |Qt.OtherFocusReason| 7)
(defenum |Qt.PanGesture| 3)
(defenum |Qt.PanNativeGesture| 2)
(defenum |Qt.PartiallyChecked| 1)
(defenum |Qt.PinchGesture| 4)
(defenum |Qt.PlainText| 0)
(defenum |Qt.PointingHandCursor| 13)
(defenum |Qt.PopupFocusReason| 4)
(defenum |Qt.Popup| 9)
(defenum |Qt.PortraitOrientation| 1)
(defenum |Qt.PreciseTimer| 0)
(defenum |Qt.PreferDither| 64)
(defenum |Qt.PreferredSize| 1)
(defenum |Qt.PreventContextMenu| 4)
(defenum |Qt.PrimaryOrientation| 0)
(defenum |Qt.QueuedConnection| 2)
(defenum |Qt.RFC2822Date| 8)
(defenum |Qt.RadialGradientPattern| 16)
(defenum |Qt.RelativeSize| 1)
(defenum |Qt.ReplaceClip| 1)
(defenum |Qt.ReplaceSelection| 0)
(defenum |Qt.RichText| 1)
(defenum |Qt.RightArrow| 4)
(defenum |Qt.RightButton| 2)
(defenum |Qt.RightDockWidgetArea| 2)
(defenum |Qt.RightEdge| 4)
(defenum |Qt.RightToLeft| 1)
(defenum |Qt.RightToolBarArea| 2)
(defenum |Qt.RotateNativeGesture| 5)
(defenum |Qt.RoundCap| 32)
(defenum |Qt.RoundJoin| 128)
(defenum |Qt.Saturday| 6)
(defenum |Qt.ScrollBarAlwaysOff| 1)
(defenum |Qt.ScrollBarAlwaysOn| 2)
(defenum |Qt.ScrollBarAsNeeded| 0)
(defenum |Qt.ScrollBegin| 1)
(defenum |Qt.ScrollEnd| 3)
(defenum |Qt.ScrollUpdate| 2)
(defenum |Qt.Sheet| 5)
(defenum |Qt.ShiftModifier| 33554432)
(defenum |Qt.ShortcutFocusReason| 5)
(defenum |Qt.SizeAllCursor| 9)
(defenum |Qt.SizeBDiagCursor| 7)
(defenum |Qt.SizeFDiagCursor| 8)
(defenum |Qt.SizeHintRole| 13)
(defenum |Qt.SizeHorCursor| 6)
(defenum |Qt.SizeVerCursor| 5)
(defenum |Qt.SmartZoomNativeGesture| 4)
(defenum |Qt.SmoothTransformation| 1)
(defenum |Qt.SolidLine| 1)
(defenum |Qt.SolidPattern| 1)
(defenum |Qt.SplashScreen| 15)
(defenum |Qt.SplitHCursor| 12)
(defenum |Qt.SplitVCursor| 11)
(defenum |Qt.SquareCap| 16)
(defenum |Qt.StatusTipPropertyRole| 30)
(defenum |Qt.StatusTipRole| 4)
(defenum |Qt.StrongFocus| 11)
(defenum |Qt.SubWindow| 18)
(defenum |Qt.Sunday| 7)
(defenum |Qt.SvgMiterJoin| 256)
(defenum |Qt.SwipeGesture| 5)
(defenum |Qt.SwipeNativeGesture| 6)
(defenum |Qt.SystemLocaleDate| 2)
(defenum |Qt.SystemLocaleLongDate| 5)
(defenum |Qt.SystemLocaleShortDate| 4)
(defenum |Qt.TabFocusAllControls| 255)
(defenum |Qt.TabFocusListControls| 2)
(defenum |Qt.TabFocusReason| 1)
(defenum |Qt.TabFocusTextControls| 1)
(defenum |Qt.TabFocus| 1)
(defenum |Qt.TapAndHoldGesture| 2)
(defenum |Qt.TapGesture| 1)
(defenum |Qt.TargetMoveAction| 32770)
(defenum |Qt.TaskButton| 32)
(defenum |Qt.TextAlignmentRole| 7)
(defenum |Qt.TextBrowserInteraction| 13)
(defenum |Qt.TextColorRole| 9)
(defenum |Qt.TextDate| 0)
(defenum |Qt.TextEditable| 16)
(defenum |Qt.TextEditorInteraction| 19)
(defenum |Qt.TextSelectableByKeyboard| 2)
(defenum |Qt.TextSelectableByMouse| 1)
(defenum |Qt.TexturePattern| 24)
(defenum |Qt.ThresholdAlphaDither| 0)
(defenum |Qt.ThresholdDither| 32)
(defenum |Qt.Thursday| 4)
(defenum |Qt.TimeZone| 3)
(defenum |Qt.ToolBarArea_Mask| 15)
(defenum |Qt.ToolButtonFollowStyle| 4)
(defenum |Qt.ToolButtonIconOnly| 0)
(defenum |Qt.ToolButtonTextBesideIcon| 2)
(defenum |Qt.ToolButtonTextOnly| 1)
(defenum |Qt.ToolButtonTextUnderIcon| 3)
(defenum |Qt.ToolTipPropertyRole| 29)
(defenum |Qt.ToolTipRole| 3)
(defenum |Qt.ToolTip| 13)
(defenum |Qt.Tool| 11)
(defenum |Qt.TopDockWidgetArea| 4)
(defenum |Qt.TopEdge| 1)
(defenum |Qt.TopLeftCorner| 0)
(defenum |Qt.TopRightCorner| 1)
(defenum |Qt.TopToolBarArea| 4)
(defenum |Qt.TouchPointMoved| 2)
(defenum |Qt.TouchPointPressed| 1)
(defenum |Qt.TouchPointReleased| 8)
(defenum |Qt.TouchPointStationary| 4)
(defenum |Qt.TransparentMode| 0)
(defenum |Qt.Tuesday| 2)
(defenum |Qt.UTC| 1)
(defenum |Qt.Unchecked| 0)
(defenum |Qt.UniqueConnection| 128)
(defenum |Qt.UpArrowCursor| 1)
(defenum |Qt.UpArrow| 1)
(defenum |Qt.UserRole| 256)
(defenum |Qt.VerPattern| 10)
(defenum |Qt.Vertical| 2)
(defenum |Qt.VeryCoarseTimer| 2)
(defenum |Qt.VisualMoveStyle| 1)
(defenum |Qt.WA_AcceptDrops| 78)
(defenum |Qt.WA_AcceptTouchEvents| 121)
(defenum |Qt.WA_AlwaysShowToolTips| 84)
(defenum |Qt.WA_AlwaysStackOnTop| 128)
(defenum |Qt.WA_AttributeCount| 129)
(defenum |Qt.WA_CanHostQMdiSubWindowTitleBar| 95)
(defenum |Qt.WA_ContentsPropagated| 3)
(defenum |Qt.WA_CustomWhatsThis| 47)
(defenum |Qt.WA_DeleteOnClose| 55)
(defenum |Qt.WA_Disabled| 0)
(defenum |Qt.WA_DontCreateNativeAncestors| 101)
(defenum |Qt.WA_DontShowOnScreen| 103)
(defenum |Qt.WA_DropSiteRegistered| 79)
(defenum |Qt.WA_ForceAcceptDrops| 79)
(defenum |Qt.WA_ForceDisabled| 32)
(defenum |Qt.WA_ForceUpdatesDisabled| 59)
(defenum |Qt.WA_GrabbedShortcut| 50)
(defenum |Qt.WA_GroupLeader| 72)
(defenum |Qt.WA_Hover| 74)
(defenum |Qt.WA_InputMethodEnabled| 14)
(defenum |Qt.WA_InputMethodTransparent| 75)
(defenum |Qt.WA_InvalidSize| 45)
(defenum |Qt.WA_KeyCompression| 33)
(defenum |Qt.WA_KeyboardFocusChange| 77)
(defenum |Qt.WA_LaidOut| 7)
(defenum |Qt.WA_LayoutOnEntireRect| 48)
(defenum |Qt.WA_LayoutUsesWidgetRect| 92)
(defenum |Qt.WA_MSWindowsUseDirect3D| 94)
(defenum |Qt.WA_MacAlwaysShowToolWindow| 96)
(defenum |Qt.WA_MacBrushedMetal| 46)
(defenum |Qt.WA_MacFrameworkScaled| 117)
(defenum |Qt.WA_MacMetalStyle| 46)
(defenum |Qt.WA_MacMiniSize| 91)
(defenum |Qt.WA_MacNoClickThrough| 12)
(defenum |Qt.WA_MacNoShadow| 127)
(defenum |Qt.WA_MacNormalSize| 89)
(defenum |Qt.WA_MacOpaqueSizeGrip| 85)
(defenum |Qt.WA_MacShowFocusRect| 88)
(defenum |Qt.WA_MacSmallSize| 90)
(defenum |Qt.WA_MacVariableSize| 102)
(defenum |Qt.WA_Mapped| 11)
(defenum |Qt.WA_MouseNoMask| 71)
(defenum |Qt.WA_MouseTracking| 2)
(defenum |Qt.WA_Moved| 43)
(defenum |Qt.WA_NativeWindow| 100)
(defenum |Qt.WA_NoBackground| 4)
(defenum |Qt.WA_NoChildEventsForParent| 58)
(defenum |Qt.WA_NoChildEventsFromChildren| 39)
(defenum |Qt.WA_NoMousePropagation| 73)
(defenum |Qt.WA_NoMouseReplay| 54)
(defenum |Qt.WA_NoSystemBackground| 9)
(defenum |Qt.WA_NoX11EventCompression| 81)
(defenum |Qt.WA_OpaquePaintEvent| 4)
(defenum |Qt.WA_OutsideWSRange| 49)
(defenum |Qt.WA_PaintOnScreen| 8)
(defenum |Qt.WA_PaintUnclipped| 52)
(defenum |Qt.WA_PendingMoveEvent| 34)
(defenum |Qt.WA_PendingResizeEvent| 35)
(defenum |Qt.WA_PendingUpdate| 44)
(defenum |Qt.WA_QuitOnClose| 76)
(defenum |Qt.WA_Resized| 42)
(defenum |Qt.WA_RightToLeft| 56)
(defenum |Qt.WA_SetCursor| 38)
(defenum |Qt.WA_SetFont| 37)
(defenum |Qt.WA_SetLayoutDirection| 57)
(defenum |Qt.WA_SetLocale| 87)
(defenum |Qt.WA_SetPalette| 36)
(defenum |Qt.WA_SetStyle| 86)
(defenum |Qt.WA_SetWindowIcon| 53)
(defenum |Qt.WA_SetWindowModality| 118)
(defenum |Qt.WA_ShowModal| 70)
(defenum |Qt.WA_ShowWithoutActivating| 98)
(defenum |Qt.WA_StaticContents| 5)
(defenum |Qt.WA_StyleSheet| 97)
(defenum |Qt.WA_StyledBackground| 93)
(defenum |Qt.WA_TintedBackground| 82)
(defenum |Qt.WA_TouchPadAcceptSingleTouchEvents| 123)
(defenum |Qt.WA_TranslucentBackground| 120)
(defenum |Qt.WA_TransparentForMouseEvents| 51)
(defenum |Qt.WA_UnderMouse| 1)
(defenum |Qt.WA_UpdatesDisabled| 10)
(defenum |Qt.WA_WState_AcceptedTouchBeginEvent| 122)
(defenum |Qt.WA_WState_CompressKeys| 61)
(defenum |Qt.WA_WState_ConfigPending| 64)
(defenum |Qt.WA_WState_Created| 60)
(defenum |Qt.WA_WState_DND| 67)
(defenum |Qt.WA_WState_ExplicitShowHide| 69)
(defenum |Qt.WA_WState_Hidden| 16)
(defenum |Qt.WA_WState_InPaintEvent| 62)
(defenum |Qt.WA_WState_OwnSizePolicy| 68)
(defenum |Qt.WA_WState_Polished| 66)
(defenum |Qt.WA_WState_Reparented| 63)
(defenum |Qt.WA_WState_Visible| 15)
(defenum |Qt.WA_WState_WindowOpacitySet| 119)
(defenum |Qt.WA_WindowModified| 41)
(defenum |Qt.WA_WindowPropagation| 80)
(defenum |Qt.WA_X11BypassTransientForHint| 99)
(defenum |Qt.WA_X11DoNotAcceptFocus| 126)
(defenum |Qt.WA_X11NetWmWindowTypeCombo| 115)
(defenum |Qt.WA_X11NetWmWindowTypeDND| 116)
(defenum |Qt.WA_X11NetWmWindowTypeDesktop| 104)
(defenum |Qt.WA_X11NetWmWindowTypeDialog| 110)
(defenum |Qt.WA_X11NetWmWindowTypeDock| 105)
(defenum |Qt.WA_X11NetWmWindowTypeDropDownMenu| 111)
(defenum |Qt.WA_X11NetWmWindowTypeMenu| 107)
(defenum |Qt.WA_X11NetWmWindowTypeNotification| 114)
(defenum |Qt.WA_X11NetWmWindowTypePopupMenu| 112)
(defenum |Qt.WA_X11NetWmWindowTypeSplash| 109)
(defenum |Qt.WA_X11NetWmWindowTypeToolBar| 106)
(defenum |Qt.WA_X11NetWmWindowTypeToolTip| 113)
(defenum |Qt.WA_X11NetWmWindowTypeUtility| 108)
(defenum |Qt.WA_X11OpenGLOverlay| 83)
(defenum |Qt.WaitCursor| 3)
(defenum |Qt.Wednesday| 3)
(defenum |Qt.WhatsThisCursor| 15)
(defenum |Qt.WhatsThisPropertyRole| 31)
(defenum |Qt.WhatsThisRole| 5)
(defenum |Qt.WheelFocus| 15)
(defenum |Qt.WidgetShortcut| 0)
(defenum |Qt.WidgetWithChildrenShortcut| 3)
(defenum |Qt.Widget| 0)
(defenum |Qt.WindingFill| 1)
(defenum |Qt.WindowActive| 8)
(defenum |Qt.WindowCancelButtonHint| 1048576)
(defenum |Qt.WindowCloseButtonHint| 134217728)
(defenum |Qt.WindowContextHelpButtonHint| 65536)
(defenum |Qt.WindowDoesNotAcceptFocus| 2097152)
(defenum |Qt.WindowFullScreen| 4)
(defenum |Qt.WindowFullscreenButtonHint| -2147483648)
(defenum |Qt.WindowMaximizeButtonHint| 32768)
(defenum |Qt.WindowMaximized| 2)
(defenum |Qt.WindowMinMaxButtonsHint| 49152)
(defenum |Qt.WindowMinimizeButtonHint| 16384)
(defenum |Qt.WindowMinimized| 1)
(defenum |Qt.WindowModal| 1)
(defenum |Qt.WindowNoState| 0)
(defenum |Qt.WindowOkButtonHint| 524288)
(defenum |Qt.WindowOverridesSystemGestures| 1048576)
(defenum |Qt.WindowShadeButtonHint| 131072)
(defenum |Qt.WindowShortcut| 1)
(defenum |Qt.WindowStaysOnBottomHint| 67108864)
(defenum |Qt.WindowStaysOnTopHint| 262144)
(defenum |Qt.WindowSystemMenuHint| 8192)
(defenum |Qt.WindowTitleHint| 4096)
(defenum |Qt.WindowTransparentForInput| 524288)
(defenum |Qt.WindowType_Mask| 255)
(defenum |Qt.Window| 1)
(defenum |Qt.X11BypassWindowManagerHint| 1024)
(defenum |Qt.XAxis| 0)
(defenum |Qt.XButton1| 8)
(defenum |Qt.XButton2| 16)
(defenum |Qt.YAxis| 1)
(defenum |Qt.ZAxis| 2)
(defenum |Qt.ZoomNativeGesture| 3)
(defenum |Qt.black| 2)
(defenum |Qt.blue| 9)
(defenum |Qt.color0| 0)
(defenum |Qt.color1| 1)
(defenum |Qt.cyan| 10)
(defenum |Qt.darkBlue| 15)
(defenum |Qt.darkCyan| 16)
(defenum |Qt.darkGray| 4)
(defenum |Qt.darkGreen| 14)
(defenum |Qt.darkMagenta| 17)
(defenum |Qt.darkRed| 13)
(defenum |Qt.darkYellow| 18)
(defenum |Qt.gray| 5)
(defenum |Qt.green| 8)
(defenum |Qt.lightGray| 6)
(defenum |Qt.magenta| 11)
(defenum |Qt.red| 7)
(defenum |Qt.transparent| 19)
(defenum |Qt.white| 3)
(defenum |Qt.yellow| 12)