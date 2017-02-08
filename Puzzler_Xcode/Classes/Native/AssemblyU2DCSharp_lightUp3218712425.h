#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t193706927;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// lightUp
struct  lightUp_t3218712425  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Material lightUp::lightUpMaterial
	Material_t193706927 * ___lightUpMaterial_2;
	// UnityEngine.GameObject lightUp::gameLogic
	GameObject_t1756533147 * ___gameLogic_3;
	// UnityEngine.Material lightUp::defaultMaterial
	Material_t193706927 * ___defaultMaterial_4;
	// UnityEngine.GameObject lightUp::Sphere
	GameObject_t1756533147 * ___Sphere_5;

public:
	inline static int32_t get_offset_of_lightUpMaterial_2() { return static_cast<int32_t>(offsetof(lightUp_t3218712425, ___lightUpMaterial_2)); }
	inline Material_t193706927 * get_lightUpMaterial_2() const { return ___lightUpMaterial_2; }
	inline Material_t193706927 ** get_address_of_lightUpMaterial_2() { return &___lightUpMaterial_2; }
	inline void set_lightUpMaterial_2(Material_t193706927 * value)
	{
		___lightUpMaterial_2 = value;
		Il2CppCodeGenWriteBarrier(&___lightUpMaterial_2, value);
	}

	inline static int32_t get_offset_of_gameLogic_3() { return static_cast<int32_t>(offsetof(lightUp_t3218712425, ___gameLogic_3)); }
	inline GameObject_t1756533147 * get_gameLogic_3() const { return ___gameLogic_3; }
	inline GameObject_t1756533147 ** get_address_of_gameLogic_3() { return &___gameLogic_3; }
	inline void set_gameLogic_3(GameObject_t1756533147 * value)
	{
		___gameLogic_3 = value;
		Il2CppCodeGenWriteBarrier(&___gameLogic_3, value);
	}

	inline static int32_t get_offset_of_defaultMaterial_4() { return static_cast<int32_t>(offsetof(lightUp_t3218712425, ___defaultMaterial_4)); }
	inline Material_t193706927 * get_defaultMaterial_4() const { return ___defaultMaterial_4; }
	inline Material_t193706927 ** get_address_of_defaultMaterial_4() { return &___defaultMaterial_4; }
	inline void set_defaultMaterial_4(Material_t193706927 * value)
	{
		___defaultMaterial_4 = value;
		Il2CppCodeGenWriteBarrier(&___defaultMaterial_4, value);
	}

	inline static int32_t get_offset_of_Sphere_5() { return static_cast<int32_t>(offsetof(lightUp_t3218712425, ___Sphere_5)); }
	inline GameObject_t1756533147 * get_Sphere_5() const { return ___Sphere_5; }
	inline GameObject_t1756533147 ** get_address_of_Sphere_5() { return &___Sphere_5; }
	inline void set_Sphere_5(GameObject_t1756533147 * value)
	{
		___Sphere_5 = value;
		Il2CppCodeGenWriteBarrier(&___Sphere_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
