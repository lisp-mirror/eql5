(in-package :eql)

(defun |accept| (object &rest arguments)
  (%qinvoke-method object nil "accept" arguments))

(defun |action| (object &rest arguments)
  (%qinvoke-method object nil "action" arguments))

(defun |audioMutedChanged| (object &rest arguments)
  (%qinvoke-method object nil "audioMutedChanged" arguments))

(defun |authenticationRequired| (object &rest arguments)
  (%qinvoke-method object nil "authenticationRequired" arguments))

(defun |backgroundColor| (object &rest arguments)
  (%qinvoke-method object nil "backgroundColor" arguments))

(defun |back| (object &rest arguments)
  (%qinvoke-method object nil "back" arguments))

(defun |cachePath| (object &rest arguments)
  (%qinvoke-method object nil "cachePath" arguments))

(defun |cancel| (object &rest arguments)
  (%qinvoke-method object nil "cancel" arguments))

(defun |clearAllVisitedLinks| (object &rest arguments)
  (%qinvoke-method object nil "clearAllVisitedLinks" arguments))

(defun |clearHttpCache| (object &rest arguments)
  (%qinvoke-method object nil "clearHttpCache" arguments))

(defun |clearVisitedLinks| (object &rest arguments)
  (%qinvoke-method object nil "clearVisitedLinks" arguments))

(defun |contentsSizeChanged| (object &rest arguments)
  (%qinvoke-method object nil "contentsSizeChanged" arguments))

(defun |contentsSize| (object &rest arguments)
  (%qinvoke-method object nil "contentsSize" arguments))

(defun |contextMenuData| (object &rest arguments)
  (%qinvoke-method object nil "contextMenuData" arguments))

(defun |cookieAdded| (object &rest arguments)
  (%qinvoke-method object nil "cookieAdded" arguments))

(defun |cookieRemoved| (object &rest arguments)
  (%qinvoke-method object nil "cookieRemoved" arguments))

(defun |cookieStore| (object &rest arguments)
  (%qinvoke-method object nil "cookieStore" arguments))

(defun |createStandardContextMenu| (object &rest arguments)
  (%qinvoke-method object nil "createStandardContextMenu" arguments))

(defun |defaultProfile.QWebEngineProfile| (&rest arguments)
  (%qinvoke-method "QWebEngineProfile" nil "defaultProfile" arguments))

(defun |deleteAllCookies| (object &rest arguments)
  (%qinvoke-method object nil "deleteAllCookies" arguments))

(defun |deleteCookie| (object &rest arguments)
  (%qinvoke-method object nil "deleteCookie" arguments))

(defun |deleteSessionCookies| (object &rest arguments)
  (%qinvoke-method object nil "deleteSessionCookies" arguments))

(defun |destroyedUrlSchemeHandler| (object &rest arguments)
  (%qinvoke-method object nil "destroyedUrlSchemeHandler" arguments))

(defun |downloadProgress| (object &rest arguments)
  (%qinvoke-method object nil "downloadProgress" arguments))

(defun |downloadRequested| (object &rest arguments)
  (%qinvoke-method object nil "downloadRequested" arguments))

(defun |errorDescription| (object &rest arguments)
  (%qinvoke-method object nil "errorDescription" arguments))

(defun |error| (object &rest arguments)
  (%qinvoke-method object nil "error" arguments))

(defun |event| (object &rest arguments)
  (%qinvoke-method object nil "event" arguments))

(defun |fail| (object &rest arguments)
  (%qinvoke-method object nil "fail" arguments))

(defun |featurePermissionRequestCanceled| (object &rest arguments)
  (%qinvoke-method object nil "featurePermissionRequestCanceled" arguments))

(defun |featurePermissionRequested| (object &rest arguments)
  (%qinvoke-method object nil "featurePermissionRequested" arguments))

(defun |findText| (object &rest arguments)
  (%qinvoke-method object nil "findText" arguments))

(defun |finished| (object &rest arguments)
  (%qinvoke-method object nil "finished" arguments))

(defun |forward| (object &rest arguments)
  (%qinvoke-method object nil "forward" arguments))

(defun |fullScreenRequested| (object &rest arguments)
  (%qinvoke-method object nil "fullScreenRequested" arguments))

(defun |geometryChangeRequested| (object &rest arguments)
  (%qinvoke-method object nil "geometryChangeRequested" arguments))

(defun |hasSelection| (object &rest arguments)
  (%qinvoke-method object nil "hasSelection" arguments))

(defun |httpAcceptLanguage| (object &rest arguments)
  (%qinvoke-method object nil "httpAcceptLanguage" arguments))

(defun |httpCacheMaximumSize| (object &rest arguments)
  (%qinvoke-method object nil "httpCacheMaximumSize" arguments))

(defun |httpCacheType| (object &rest arguments)
  (%qinvoke-method object nil "httpCacheType" arguments))

(defun |httpUserAgent| (object &rest arguments)
  (%qinvoke-method object nil "httpUserAgent" arguments))

(defun |iconChanged| (object &rest arguments)
  (%qinvoke-method object nil "iconChanged" arguments))

(defun |iconUrlChanged| (object &rest arguments)
  (%qinvoke-method object nil "iconUrlChanged" arguments))

(defun |iconUrl| (object &rest arguments)
  (%qinvoke-method object nil "iconUrl" arguments))

(defun |icon| (object &rest arguments)
  (%qinvoke-method object nil "icon" arguments))

(defun |id| (object &rest arguments)
  (%qinvoke-method object nil "id" arguments))

(defun |injectionPoint| (object &rest arguments)
  (%qinvoke-method object nil "injectionPoint" arguments))

(defun |interceptRequest| (object &rest arguments)
  (%qinvoke-method object nil "interceptRequest" arguments))

(defun |isAudioMuted| (object &rest arguments)
  (%qinvoke-method object nil "isAudioMuted" arguments))

(defun |isFinished| (object &rest arguments)
  (%qinvoke-method object nil "isFinished" arguments))

(defun |isNull| (object &rest arguments)
  (%qinvoke-method object nil "isNull" arguments))

(defun |isOffTheRecord| (object &rest arguments)
  (%qinvoke-method object nil "isOffTheRecord" arguments))

(defun |isOverridable| (object &rest arguments)
  (%qinvoke-method object nil "isOverridable" arguments))

(defun |isSpellCheckEnabled| (object &rest arguments)
  (%qinvoke-method object nil "isSpellCheckEnabled" arguments))

(defun |linkHovered| (object &rest arguments)
  (%qinvoke-method object nil "linkHovered" arguments))

(defun |loadAllCookies| (object &rest arguments)
  (%qinvoke-method object nil "loadAllCookies" arguments))

(defun |loadFinished| (object &rest arguments)
  (%qinvoke-method object nil "loadFinished" arguments))

(defun |loadProgress| (object &rest arguments)
  (%qinvoke-method object nil "loadProgress" arguments))

(defun |loadStarted| (object &rest arguments)
  (%qinvoke-method object nil "loadStarted" arguments))

(defun |load| (object &rest arguments)
  (%qinvoke-method object nil "load" arguments))

(defun |mimeType| (object &rest arguments)
  (%qinvoke-method object nil "mimeType" arguments))

(defun |name| (object &rest arguments)
  (%qinvoke-method object nil "name" arguments))

(defun |origin| (object &rest arguments)
  (%qinvoke-method object nil "origin" arguments))

(defun |pageAction| (object &rest arguments)
  (%qinvoke-method object nil "pageAction" arguments))

(defun |page| (object &rest arguments)
  (%qinvoke-method object nil "page" arguments))

(defun |path| (object &rest arguments)
  (%qinvoke-method object nil "path" arguments))

(defun |persistentCookiesPolicy| (object &rest arguments)
  (%qinvoke-method object nil "persistentCookiesPolicy" arguments))

(defun |persistentStoragePath| (object &rest arguments)
  (%qinvoke-method object nil "persistentStoragePath" arguments))

(defun |printToPdf| (object &rest arguments)
  (%qinvoke-method object nil "printToPdf" arguments))

(defun |profile| (object &rest arguments)
  (%qinvoke-method object nil "profile" arguments))

(defun |proxyAuthenticationRequired| (object &rest arguments)
  (%qinvoke-method object nil "proxyAuthenticationRequired" arguments))

(defun |receivedBytes| (object &rest arguments)
  (%qinvoke-method object nil "receivedBytes" arguments))

(defun |recentlyAudibleChanged| (object &rest arguments)
  (%qinvoke-method object nil "recentlyAudibleChanged" arguments))

(defun |recentlyAudible| (object &rest arguments)
  (%qinvoke-method object nil "recentlyAudible" arguments))

(defun |redirect| (object &rest arguments)
  (%qinvoke-method object nil "redirect" arguments))

(defun |reject| (object &rest arguments)
  (%qinvoke-method object nil "reject" arguments))

(defun |reload| (object &rest arguments)
  (%qinvoke-method object nil "reload" arguments))

(defun |removeUrlScheme| (object &rest arguments)
  (%qinvoke-method object nil "removeUrlScheme" arguments))

(defun |renderProcessTerminated| (object &rest arguments)
  (%qinvoke-method object nil "renderProcessTerminated" arguments))

(defun |replaceMisspelledWord| (object &rest arguments)
  (%qinvoke-method object nil "replaceMisspelledWord" arguments))

(defun |requestMethod| (object &rest arguments)
  (%qinvoke-method object nil "requestMethod" arguments))

(defun |requestStarted| (object &rest arguments)
  (%qinvoke-method object nil "requestStarted" arguments))

(defun |requestUrl| (object &rest arguments)
  (%qinvoke-method object nil "requestUrl" arguments))

(defun |requestedUrl| (object &rest arguments)
  (%qinvoke-method object nil "requestedUrl" arguments))

(defun |runJavaScript| (object &rest arguments)
  (%qinvoke-method object nil "runJavaScript" arguments))

(defun |runsOnSubFrames| (object &rest arguments)
  (%qinvoke-method object nil "runsOnSubFrames" arguments))

(defun |savePageFormat| (object &rest arguments)
  (%qinvoke-method object nil "savePageFormat" arguments))

(defun |save| (object &rest arguments)
  (%qinvoke-method object nil "save" arguments))

(defun |scripts| (object &rest arguments)
  (%qinvoke-method object nil "scripts" arguments))

(defun |scrollPositionChanged| (object &rest arguments)
  (%qinvoke-method object nil "scrollPositionChanged" arguments))

(defun |scrollPosition| (object &rest arguments)
  (%qinvoke-method object nil "scrollPosition" arguments))

(defun |selectedText| (object &rest arguments)
  (%qinvoke-method object nil "selectedText" arguments))

(defun |selectionChanged| (object &rest arguments)
  (%qinvoke-method object nil "selectionChanged" arguments))

(defun |setAudioMuted| (object &rest arguments)
  (%qinvoke-method object nil "setAudioMuted" arguments))

(defun |setBackgroundColor| (object &rest arguments)
  (%qinvoke-method object nil "setBackgroundColor" arguments))

(defun |setCachePath| (object &rest arguments)
  (%qinvoke-method object nil "setCachePath" arguments))

(defun |setContent| (object &rest arguments)
  (%qinvoke-method object nil "setContent" arguments))

(defun |setCookie| (object &rest arguments)
  (%qinvoke-method object nil "setCookie" arguments))

(defun |setFeaturePermission| (object &rest arguments)
  (%qinvoke-method object nil "setFeaturePermission" arguments))

(defun |setHtml| (object &rest arguments)
  (%qinvoke-method object nil "setHtml" arguments))

(defun |setHttpAcceptLanguage| (object &rest arguments)
  (%qinvoke-method object nil "setHttpAcceptLanguage" arguments))

(defun |setHttpCacheMaximumSize| (object &rest arguments)
  (%qinvoke-method object nil "setHttpCacheMaximumSize" arguments))

(defun |setHttpCacheType| (object &rest arguments)
  (%qinvoke-method object nil "setHttpCacheType" arguments))

(defun |setHttpUserAgent| (object &rest arguments)
  (%qinvoke-method object nil "setHttpUserAgent" arguments))

(defun |setInjectionPoint| (object &rest arguments)
  (%qinvoke-method object nil "setInjectionPoint" arguments))

(defun |setName| (object &rest arguments)
  (%qinvoke-method object nil "setName" arguments))

(defun |setPage| (object &rest arguments)
  (%qinvoke-method object nil "setPage" arguments))

(defun |setPath| (object &rest arguments)
  (%qinvoke-method object nil "setPath" arguments))

(defun |setPersistentCookiesPolicy| (object &rest arguments)
  (%qinvoke-method object nil "setPersistentCookiesPolicy" arguments))

(defun |setPersistentStoragePath| (object &rest arguments)
  (%qinvoke-method object nil "setPersistentStoragePath" arguments))

(defun |setRequestInterceptor| (object &rest arguments)
  (%qinvoke-method object nil "setRequestInterceptor" arguments))

(defun |setRunsOnSubFrames| (object &rest arguments)
  (%qinvoke-method object nil "setRunsOnSubFrames" arguments))

(defun |setSavePageFormat| (object &rest arguments)
  (%qinvoke-method object nil "setSavePageFormat" arguments))

(defun |setSourceCode| (object &rest arguments)
  (%qinvoke-method object nil "setSourceCode" arguments))

(defun |setSpellCheckEnabled| (object &rest arguments)
  (%qinvoke-method object nil "setSpellCheckEnabled" arguments))

(defun |setSpellCheckLanguages| (object &rest arguments)
  (%qinvoke-method object nil "setSpellCheckLanguages" arguments))

(defun |setUrl| (object &rest arguments)
  (%qinvoke-method object nil "setUrl" arguments))

(defun |setView| (object &rest arguments)
  (%qinvoke-method object nil "setView" arguments))

(defun |setWebChannel| (object &rest arguments)
  (%qinvoke-method object nil "setWebChannel" arguments))

(defun |setWorldId| (object &rest arguments)
  (%qinvoke-method object nil "setWorldId" arguments))

(defun |setZoomFactor| (object &rest arguments)
  (%qinvoke-method object nil "setZoomFactor" arguments))

(defun |settings| (object &rest arguments)
  (%qinvoke-method object nil "settings" arguments))

(defun |sizeHint| (object &rest arguments)
  (%qinvoke-method object nil "sizeHint" arguments))

(defun |sourceCode| (object &rest arguments)
  (%qinvoke-method object nil "sourceCode" arguments))

(defun |spellCheckLanguages| (object &rest arguments)
  (%qinvoke-method object nil "spellCheckLanguages" arguments))

(defun |stateChanged| (object &rest arguments)
  (%qinvoke-method object nil "stateChanged" arguments))

(defun |state| (object &rest arguments)
  (%qinvoke-method object nil "state" arguments))

(defun |stop| (object &rest arguments)
  (%qinvoke-method object nil "stop" arguments))

(defun |storageName| (object &rest arguments)
  (%qinvoke-method object nil "storageName" arguments))

(defun |swap| (object &rest arguments)
  (%qinvoke-method object nil "swap" arguments))

(defun |titleChanged| (object &rest arguments)
  (%qinvoke-method object nil "titleChanged" arguments))

(defun |title| (object &rest arguments)
  (%qinvoke-method object nil "title" arguments))

(defun |toggleOn| (object &rest arguments)
  (%qinvoke-method object nil "toggleOn" arguments))

(defun |totalBytes| (object &rest arguments)
  (%qinvoke-method object nil "totalBytes" arguments))

(defun |triggerAction| (object &rest arguments)
  (%qinvoke-method object nil "triggerAction" arguments))

(defun |triggerPageAction| (object &rest arguments)
  (%qinvoke-method object nil "triggerPageAction" arguments))

(defun |type| (object &rest arguments)
  (%qinvoke-method object nil "type" arguments))

(defun |urlChanged| (object &rest arguments)
  (%qinvoke-method object nil "urlChanged" arguments))

(defun |url| (object &rest arguments)
  (%qinvoke-method object nil "url" arguments))

(defun |view| (object &rest arguments)
  (%qinvoke-method object nil "view" arguments))

(defun |visitedLinksContainsUrl| (object &rest arguments)
  (%qinvoke-method object nil "visitedLinksContainsUrl" arguments))

(defun |webChannel| (object &rest arguments)
  (%qinvoke-method object nil "webChannel" arguments))

(defun |windowCloseRequested| (object &rest arguments)
  (%qinvoke-method object nil "windowCloseRequested" arguments))

(defun |worldId| (object &rest arguments)
  (%qinvoke-method object nil "worldId" arguments))

(defun |zoomFactor| (object &rest arguments)
  (%qinvoke-method object nil "zoomFactor" arguments))
