#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// GameLogic
struct GameLogic_t2306947540;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"

// System.Void GameLogic::.ctor()
extern "C"  void GameLogic__ctor_m2898980063 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::Start()
extern "C"  void GameLogic_Start_m1915835419 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::Update()
extern "C"  void GameLogic_Update_m2155239570 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::playerSelection(UnityEngine.GameObject)
extern "C"  void GameLogic_playerSelection_m1354897264 (GameLogic_t2306947540 * __this, GameObject_t1756533147 * ___sphere0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::solutionCheck(System.Int32)
extern "C"  void GameLogic_solutionCheck_m3345143433 (GameLogic_t2306947540 * __this, int32_t ___playerSelectionIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::startPuzzle()
extern "C"  void GameLogic_startPuzzle_m621416327 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::displayPattern()
extern "C"  void GameLogic_displayPattern_m2249631221 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::generatePuzzleSequence()
extern "C"  void GameLogic_generatePuzzleSequence_m1689419579 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::resetPuzzle()
extern "C"  void GameLogic_resetPuzzle_m1287217112 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::resetGame()
extern "C"  void GameLogic_resetGame_m1683184522 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::puzzleFailure()
extern "C"  void GameLogic_puzzleFailure_m2304442427 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::puzzleSuccess()
extern "C"  void GameLogic_puzzleSuccess_m2187933176 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameLogic::finishingFlourish()
extern "C"  void GameLogic_finishingFlourish_m1486606810 (GameLogic_t2306947540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
