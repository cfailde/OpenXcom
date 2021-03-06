// Don't worry about Intellisense errors here, as this file is only used in conjunction with Options.h/Options.cpp
// To add a new option, add a new variable entry and a corresponding OptionInfo in Options.cpp

// General options
OPT int displayWidth, displayHeight, maxFrameSkip, baseXResolution, baseYResolution, autosave, soundVolume, musicVolume,
	audioSampleRate, audioBitDepth, pauseMode, windowedModePositionX, windowedModePositionY, FPS, changeValueByMouseWheel;
OPT bool fullscreen, asyncBlit, playIntro, useScaleFilter, useHQXFilter, useOpenGL, checkOpenGLErrors, vSyncForOpenGL, useOpenGLSmoothing,
	allowResize, borderless, debug, debugUi, fpsCounter, newSeedOnLoad, keepAspectRatio,
	cursorInBlackBandsInFullscreen, cursorInBlackBandsInWindow, cursorInBlackBandsInBorderlessWindow;
OPT std::string language, useOpenGLShader;
OPT KeyboardType keyboardMode;
OPT SaveSort saveOrder;
OPT SDL_GrabMode captureMouse;
OPT SDLKey keyOk, keyCancel, keyScreenshot, keyFps, keyQuickLoad, keyQuickSave;

// Geoscape options
OPT int geoClockSpeed, dogfightSpeed, globeScrollSpeed, globeScrollDragButton;
OPT bool anytimePsiTraining, weaponSelfDestruction, spendResearchedItems, craftLaunchAlways, globeSeasons, globeDetail, globeRadarLines, globeFlightPaths, globeAllRadarsOnBaseBuild,
	alienContainmentLimitEnforced, canSellLiveAliens, canTransferCraftsWhileAirborne, canManufactureMoreItemsPerHour, customInitialBase, aggressiveRetaliation,
	allowBuildingQueue, allowAutoSellProduction, showFundsOnGeoscape, psiStrengthEval;
OPT SDLKey keyGeoLeft, keyGeoRight, keyGeoUp, keyGeoDown, keyGeoZoomIn, keyGeoZoomOut, keyGeoSpeed1, keyGeoSpeed2, keyGeoSpeed3, keyGeoSpeed4, keyGeoSpeed5, keyGeoSpeed6,
	keyGeoIntercept, keyGeoBases, keyGeoGraphs, keyGeoUfopedia, keyGeoOptions, keyGeoFunding, keyGeoToggleDetail, keyGeoToggleRadar,
	keyBaseSelect1, keyBaseSelect2, keyBaseSelect3, keyBaseSelect4, keyBaseSelect5, keyBaseSelect6, keyBaseSelect7, keyBaseSelect8;

// Battlescape options
OPT ScrollType battleEdgeScroll;
OPT PathPreview battleNewPreviewPath;
OPT int battleScrollSpeed, battleScrollDragButton, battleScrollDragTimeTolerance, battleScrollDragPixelTolerance,
	battleFireSpeed, battleXcomSpeed, battleAlienSpeed, battleExplosionHeight;
OPT bool traceAI, sneakyAI, battleScrollDragInvert, battleInstantGrenade, battleNotifyDeath, battleTooltips, battleHairBleach, battleAutoEnd,
	strafe, showMoreStatsInInventoryView, allowPsionicCapture, skipNextTurnScreen, disableAutoEquip,
	battleUFOExtenderAccuracy, battleConfirmFireMode, battleSmoothCamera, TFTDDamage;
OPT SDLKey keyBattleLeft, keyBattleRight, keyBattleUp, keyBattleDown, keyBattleLevelUp, keyBattleLevelDown, keyBattleCenterUnit, keyBattlePrevUnit, keyBattleNextUnit, keyBattleDeselectUnit,
	keyBattleUseLeftHand, keyBattleUseRightHand, keyBattleInventory, keyBattleMap, keyBattleOptions, keyBattleEndTurn, keyBattleAbort, keyBattleStats, keyBattleKneel,
	keyBattleReserveKneel, keyBattleReload, keyBattlePersonalLighting, keyBattleReserveNone, keyBattleReserveSnap, keyBattleReserveAimed, keyBattleReserveAuto,
	keyBattleCenterEnemy1, keyBattleCenterEnemy2, keyBattleCenterEnemy3, keyBattleCenterEnemy4, keyBattleCenterEnemy5, keyBattleCenterEnemy6, keyBattleCenterEnemy7, keyBattleCenterEnemy8,
	keyBattleCenterEnemy9, keyBattleCenterEnemy10, keyBattleVoxelView, keyBattleZeroTUs;

// Flags and other stuff that don't need OptionInfo's.
OPT bool mute, reload, newOpenGL, newScaleFilter, newHQXFilter;
OPT int newDisplayWidth, newDisplayHeight;
OPT std::string newOpenGLShader;
OPT std::vector<std::string> rulesets;
OPT std::vector<std::string> purchaseExclusions;