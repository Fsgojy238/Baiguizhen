#include "ActionGameplayTags.h"

namespace ActionGameplayTags
{
	//在这里解释所有的GameplayTag标签
	BAIGUIZHEN_API UE_DEFINE_GAMEPLAY_TAG(Move,"NativeInput.Move");
	BAIGUIZHEN_API UE_DEFINE_GAMEPLAY_TAG(Look,"NativeInput.Look");

	//Skill标签
	BAIGUIZHEN_API UE_DEFINE_GAMEPLAY_TAG(RelaxAttack,"SkillTag.RelaxAttack")
	BAIGUIZHEN_API UE_DEFINE_GAMEPLAY_TAG(HeavyAttack,"SkillTag.HeavyAttack")
	BAIGUIZHEN_API UE_DEFINE_GAMEPLAY_TAG(Dash,"SkillTag.Dash");
	BAIGUIZHEN_API UE_DEFINE_GAMEPLAY_TAG(Defense,"SkillTag.Defense");
	BAIGUIZHEN_API UE_DEFINE_GAMEPLAY_TAG(PowerTag,"SkillTag.PowerAttack");

	//完美闪避完美弹反
	BAIGUIZHEN_API UE_DEFINE_GAMEPLAY_TAG(PerfectSkill,"SkillTag.PerfectSkill")
	//武器
	BAIGUIZHEN_API UE_DEFINE_GAMEPLAY_TAG(Sword,"WeaponTag.Sword")
	BAIGUIZHEN_API UE_DEFINE_GAMEPLAY_TAG(Gun,"WeaponTag.Gun")
}
