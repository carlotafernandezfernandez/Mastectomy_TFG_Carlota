#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
struct IEnumerator_1_t266549170A950B8D20A23E76D3B037DA0C424E45;
struct IList_1_t6FCBF894D7E49C8479135ED3B9FB86D7311E22FC;
struct IList_1_tFFC33E12DD64329607D75CE292E627E8EE4B5870;
struct List_1_t3A076A19AF26E22A128C32B5C19804DDD2877607;
struct List_1_t47D92D044BD6BE23DD66F86497A9FB0EB0BB3A71;
struct List_1_t961B63350603C7ECDDDCD6793D2157F9BE734EEA;
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
struct BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784;
struct BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44;
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
struct TextProcessingElementU5BU5D_tC3E97D1672C8DB6E1F91DB2C0987D0ED9A2E7113;
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
struct AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914;
struct AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
struct InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7;
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MirrorStepTrigger_tA7722F683C13C69CDFF87C60F7D8D61B9F6741BE;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A;
struct OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct OpenCloseDoor_t31BE5A69CD7EB259A742F5E26F516D18AE629EB5;
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct SelectionMenuUI_tAB25C668FCEBC7436438289E5A864F3484167FA6;
struct ShirtHandTrigger_t114FEC2736D12E014E9A1FC3A8314CCD0491186B;
struct ShirtInteraction_t255774F036FFDA0397EE343495F748415B2169D4;
struct SoapTrigger_tB717EEE25B954F7D1101D854CA2BE71074727144;
struct String_t;
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct TowelTrigger_tD9E160B19D3C972269883B81C5BCD29F487237A2;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E;
struct VRExperienceStarter_tE8ED61EA206751127AEA7C6EA71A236AEAEB1127;
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
struct WaterTrigger_t2C5CEE5FB3AB474809A94E1321296770F620AB66;
struct U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E;
struct U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736;
struct U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741;
struct U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546;
struct U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06;
struct U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7;
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
struct IOVRSkeletonDataProvider_t3C0B47D347E1D2C6FC2A1AB062490F8792E4F460;
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
struct MissingCharacterEventCallback_t955241181324E0FEF9A9BDBA400E8780F8979DE6;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t9AED68FB46C5658809C1425AE68F2069A1EF7127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t266549170A950B8D20A23E76D3B037DA0C424E45_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____71D9761C005D98F11F876AF70D5BA64B86610C3FA564B26A8146BC7411A00F08_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E59C58BEE3958E3D927ACD40C7163337B7521448115A2AC7027DF8137222AAAC_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral02B8B77F254D382671D0C1364D8A0D55314079A2;
IL2CPP_EXTERN_C String_t* _stringLiteral05430B2CC6B88A5A759884D7E9A75367169C51DC;
IL2CPP_EXTERN_C String_t* _stringLiteral099F785FF132E64411F248E9DC67DC7FABC5D8D0;
IL2CPP_EXTERN_C String_t* _stringLiteral0D54CF025485D368BD653670F343F961E8A683C3;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8A145EBB1D9A4F1574A31248BE2C4A296BA056;
IL2CPP_EXTERN_C String_t* _stringLiteral1BE5F8C7B2E79710B77C2AE27585948DBC237DA1;
IL2CPP_EXTERN_C String_t* _stringLiteral20B21483D0B393C182DA9408AD2AF8ECA63065FD;
IL2CPP_EXTERN_C String_t* _stringLiteral2244D688A193583F02C90B0847B2DDF4672F313C;
IL2CPP_EXTERN_C String_t* _stringLiteral22B36BC0BC1BCEB92E0D7E715F14D7B71D55F222;
IL2CPP_EXTERN_C String_t* _stringLiteral22D4F9A7F9A23A957817638442A8FFADE06DCFBB;
IL2CPP_EXTERN_C String_t* _stringLiteral230C6A2940DEC5C3C0A96E5579DB67EB28CCCFE2;
IL2CPP_EXTERN_C String_t* _stringLiteral2CFA60697305C386CD067B1206AD14E65F1ABC9E;
IL2CPP_EXTERN_C String_t* _stringLiteral346062C5CC6591F9ACB650FCDDE8BBCC995029BC;
IL2CPP_EXTERN_C String_t* _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439;
IL2CPP_EXTERN_C String_t* _stringLiteral3B4358FFFC66B3D87992695D9C56058E0A40B633;
IL2CPP_EXTERN_C String_t* _stringLiteral3B618D0EC3E0214F051BD1C13A750AEE623D89D8;
IL2CPP_EXTERN_C String_t* _stringLiteral41F1C6728B9F429C650C43A50567B91FBCD91455;
IL2CPP_EXTERN_C String_t* _stringLiteral45347342097076C7CC7F693D42A0DB3BD082457D;
IL2CPP_EXTERN_C String_t* _stringLiteral4554A90AB594B90441778CE0DCB4B78F2CAD6FFB;
IL2CPP_EXTERN_C String_t* _stringLiteral45FA688F31F228DBEB941721369DDA28A4926D24;
IL2CPP_EXTERN_C String_t* _stringLiteral4AD7E11F4475E335CEE09709C3B020C8590B9842;
IL2CPP_EXTERN_C String_t* _stringLiteral4C736B6A45D5F0FFF583A92A488E8D0A803FE6D2;
IL2CPP_EXTERN_C String_t* _stringLiteral5535DC7B50302EA3E85F9EBD591909F5E0145098;
IL2CPP_EXTERN_C String_t* _stringLiteral585709405E0A171459CA1F450D6BD002BE808958;
IL2CPP_EXTERN_C String_t* _stringLiteral5D5174454E3D3F9E783E0B8B821F8B1A68A0547F;
IL2CPP_EXTERN_C String_t* _stringLiteral5E59A9F9DA37A05B58E7A1FCC2DE7D33725F73CA;
IL2CPP_EXTERN_C String_t* _stringLiteral6100DDC8926DC5F526340385666DB54E35DE2105;
IL2CPP_EXTERN_C String_t* _stringLiteral61C7F81BBD493D7330B375404C1898A05F9A12AB;
IL2CPP_EXTERN_C String_t* _stringLiteral635E0A1FEA07E1510478CBDFE8ED575B666D2372;
IL2CPP_EXTERN_C String_t* _stringLiteral68628E7B83A35C500F7AAE5B8AA07858B1219829;
IL2CPP_EXTERN_C String_t* _stringLiteral704A8F9FB29A4B0EBFAC5BDDEE5262AC15EBC842;
IL2CPP_EXTERN_C String_t* _stringLiteral74BB8787B2E1662F65B0B3A69E1EC2868D622389;
IL2CPP_EXTERN_C String_t* _stringLiteral78761936F57E8D82ECB18CC29EB39E450324A11B;
IL2CPP_EXTERN_C String_t* _stringLiteral7E9D401FA40916AADDCEA7C1B60C5BDF08D9ECAD;
IL2CPP_EXTERN_C String_t* _stringLiteral86B92D82D7A4165CD9A52C68B4373EAEE63C9888;
IL2CPP_EXTERN_C String_t* _stringLiteral92F954E356681799E49616D75089E0E3D8EBD29B;
IL2CPP_EXTERN_C String_t* _stringLiteral9BFB3B2662D4F5D8EC1EE09E26D789CA17182134;
IL2CPP_EXTERN_C String_t* _stringLiteral9E75D9CD803DAAF209A9AB6606988C43044D5620;
IL2CPP_EXTERN_C String_t* _stringLiteralAB872F153175EBBA2D8F07F70A4B8163D4BD6988;
IL2CPP_EXTERN_C String_t* _stringLiteralAD6071C2F8BA11FE1E131CE39607A2D5F096FD96;
IL2CPP_EXTERN_C String_t* _stringLiteralB81D6CD3D2F28EDA8DE882BA8167F06898D4A589;
IL2CPP_EXTERN_C String_t* _stringLiteralB87D04A60C97465126C2C5974EB7144AEA63997C;
IL2CPP_EXTERN_C String_t* _stringLiteralBA327DAA699E047009056FEB675F7EE5CFEFC70D;
IL2CPP_EXTERN_C String_t* _stringLiteralBBA2BD52A6524606BC79260CE7ABE567D8307495;
IL2CPP_EXTERN_C String_t* _stringLiteralBDCE9E20342293DA1BF928E7A473B1CF5E03F8D6;
IL2CPP_EXTERN_C String_t* _stringLiteralC1875FA62A14187DE325B5AA71772B18F450D503;
IL2CPP_EXTERN_C String_t* _stringLiteralC7AA770297A7E9F8775DFAC450F3081F20D11B5F;
IL2CPP_EXTERN_C String_t* _stringLiteralC9C2C3853A89F093F65843F82AFDE780EDCC05B6;
IL2CPP_EXTERN_C String_t* _stringLiteralCD13E78417E56B4F8D4D0B9EAA6ED11117563137;
IL2CPP_EXTERN_C String_t* _stringLiteralCD9FBF451F0FD58FCA7BE6D8275F9AB84E96138D;
IL2CPP_EXTERN_C String_t* _stringLiteralD03E57602722FAB8BA0DB62EA70CA7C2126E0311;
IL2CPP_EXTERN_C String_t* _stringLiteralD096B1321B858086729B5A44824E697540D4F26D;
IL2CPP_EXTERN_C String_t* _stringLiteralDD14634CC35A49A9778FE1CB8C2AF7335B31920D;
IL2CPP_EXTERN_C String_t* _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6;
IL2CPP_EXTERN_C String_t* _stringLiteralE3541B6A3CB458DA20F4EFA06302C0A0B5021D75;
IL2CPP_EXTERN_C String_t* _stringLiteralE992956634FD0D298478A3F5D67A24E9417D96F8;
IL2CPP_EXTERN_C String_t* _stringLiteralF2B83F5B7265F3ED8CBA012378355423C2B97806;
IL2CPP_EXTERN_C String_t* _stringLiteralFD2661614671ED2D7EEBC84AA3071FA4C5DE5AE7;
IL2CPP_EXTERN_C String_t* _stringLiteralFF91CCC42729FED4D77421D6F8E1B13F461E983A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEndExperienceRoutineU3Ed__25_System_Collections_IEnumerator_Reset_m89FF2B5A5046E4D2AE276978B113DAC080C41F99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMirrorStepRoutineU3Ed__15_System_Collections_IEnumerator_Reset_mC306DCB5431D45897ECEFECFEE7FA3413C5DE748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShirtStepRoutineU3Ed__17_System_Collections_IEnumerator_Reset_mABCFA44207347EBEEC9F2EFD1E5F251E95EA9B83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSoapStepRoutineU3Ed__19_System_Collections_IEnumerator_Reset_mD8DAF7EB01B9FEFD731E3900CF2B1680EC8AF05A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTowelStepRoutineU3Ed__23_System_Collections_IEnumerator_Reset_m4A7AEC34F160BE6E8A9CEDE1DF15E0ADE5C125CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaterStepRoutineU3Ed__21_System_Collections_IEnumerator_Reset_mE02434849FFC0AFC71BB917F5A59952BCF889CA3_RuntimeMethod_var;
struct BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74;
struct Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};
struct U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* ___U3CU3E4__this;
};
struct U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* ___U3CU3E4__this;
};
struct U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* ___U3CU3E4__this;
};
struct U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* ___U3CU3E4__this;
};
struct U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* ___U3CU3E4__this;
};
struct U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7  : public RuntimeObject
{
	int32_t ___U3CU3E1__state;
	RuntimeObject* ___U3CU3E2__current;
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* ___U3CU3E4__this;
};
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	String_t* ___heading;
	String_t* ___text;
	String_t* ___linkText;
	String_t* ___url;
};
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack;
	int32_t ___index;
	float ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack;
	int32_t ___index;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	bool ___isDefaultMaterial;
	bool ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	uint8_t ___bold;
	uint8_t ___italic;
	uint8_t ___underline;
	uint8_t ___strikethrough;
	uint8_t ___highlight;
	uint8_t ___superscript;
	uint8_t ___subscript;
	uint8_t ___uppercase;
	uint8_t ___lowercase;
	uint8_t ___smallcaps;
};
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	float ___m_Left;
	float ___m_Right;
	float ___m_Top;
	float ___m_Bottom;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	float ___m_Seconds;
};
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds;
};
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds;
};
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D292_t190693508CB4486F23D30703A97454721019B526 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D292_t190693508CB4486F23D30703A97454721019B526__padding[292];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D559_t5D2B409CB46789D651D597D58F4FEF618CE2B63F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D559_t5D2B409CB46789D651D597D58F4FEF618CE2B63F__padding[559];
	};
};
#pragma pack(pop, tp)
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array;
	int32_t ___m_Index;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_Array;
	int32_t ___m_Index;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray* ___m_Array;
	int32_t ___m_Index;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack;
	int32_t ___index;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack;
	int32_t ___index;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	int32_t ___value__;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr;
};
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max;
};
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	int32_t ___value__;
};
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	int32_t ___value__;
};
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding;
};
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	int32_t ___value__;
};
struct KeyCode_t75B9ECCC26D858F55040DDFF9523681E996D17E9 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	int32_t ___value__;
};
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	int32_t ___value__;
};
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	int32_t ___value__;
};
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	int32_t ___value__;
};
struct TextWrappingModes_t982BC65D6DA703E73C04B99286285ECD3DDF207E 
{
	int32_t ___value__;
};
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	int32_t ___value__;
};
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight;
};
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	int32_t ___value__;
};
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	int32_t ___value__;
};
struct SkeletonType_tE92C65B8A8F6FAD617F4DEE8E954BD63FCA6AACF 
{
	int32_t ___value__;
};
struct BoneId_tA8A577FFBDF8D0A78A8B3FE279CD6597EF55FC7A 
{
	int32_t ___value__;
};
struct SkeletonType_t0AE484827382DB0DEE48F070AE81D58B4B8380FF 
{
	int32_t ___value__;
};
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	int32_t ___value__;
};
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack;
	int32_t ___index;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A  : public RuntimeObject
{
	int32_t ___U3CIdU3Ek__BackingField;
	int16_t ___U3CParentBoneIndexU3Ek__BackingField;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___U3CTransformU3Ek__BackingField;
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	int32_t ___controlCharacterCount;
	int32_t ___characterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___spaceCount;
	int32_t ___visibleSpaceCount;
	int32_t ___wordCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharacterIndex;
	float ___length;
	float ___lineHeight;
	float ___ascender;
	float ___baseline;
	float ___descender;
	float ___maxAdvance;
	float ___width;
	float ___marginLeft;
	float ___marginRight;
	int32_t ___alignment;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents;
};
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F 
{
	int32_t ___Type;
	uint32_t ___NumBones;
	uint32_t ___NumBoneCapsules;
	BoneU5BU5D_t71824F0E389C7A0C2B4986FF8CFB94C76081B784* ___Bones;
	BoneCapsuleU5BU5D_t672686845F44330C5D4B27EE19A8557BFE657B44* ___BoneCapsules;
};
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F_marshaled_pinvoke
{
	int32_t ___Type;
	uint32_t ___NumBones;
	uint32_t ___NumBoneCapsules;
	Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D* ___Bones;
	BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74* ___BoneCapsules;
};
struct Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F_marshaled_com
{
	int32_t ___Type;
	uint32_t ___NumBones;
	uint32_t ___NumBoneCapsules;
	Bone_tC5A0FC2629B8200D2FAA3C6E4DA8AF048617E43D* ___Bones;
	BoneCapsule_tF1A2277B943643BF2B8969910821CBAE47B3DD74* ___BoneCapsules;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon;
	String_t* ___title;
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections;
	bool ___loadedLayout;
};
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	bool ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	bool ___tagNoParsing;
	bool ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack;
	int32_t ___index;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};
struct AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___centerEyeAnchor;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___avatarRoot;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___avatarHeadAnchor;
	bool ___followYaw;
	float ___avatarYawOffsetDegrees;
	bool ___keepAvatarRootOnFloor;
	float ___avatarRootWorldY;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___headWorldOffset;
	bool ___followArms;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___avatarBoneRoot;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___leftHandAnchor;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___rightHandAnchor;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___avatarLeftUpperArm;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___avatarLeftForeArm;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___avatarLeftHand;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___avatarRightUpperArm;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___avatarRightForeArm;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___avatarRightHand;
	float ___elbowBendDown;
	float ___elbowBendSide;
	bool ___followHands;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftHandPositionOffset;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightHandPositionOffset;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftHandRotationOffset;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightHandRotationOffset;
	bool ___followFingers;
	OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ___leftSkeleton;
	OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ___rightSkeleton;
};
struct AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___avatarSlim;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___avatarMedium;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___avatarWide;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___activeAvatar;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___skinLight;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___skinMedium;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___skinDark;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___eyesBrown;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___eyesBlue;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___eyesGreen;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___hairBlack;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___hairLightBrown;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___hairDarkBrown;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___hairBlonde;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___hairGray;
};
struct InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* ___successParticles;
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___successAudio;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___introCanvas;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___introText;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___introCheck;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bathroomCanvas;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___bathroomText;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bathroomCheck;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___understoodButton;
	int32_t ___currentStep;
	bool ___instructionsStarted;
};
struct MirrorStepTrigger_tA7722F683C13C69CDFF87C60F7D8D61B9F6741BE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* ___instructionManager;
	bool ___completed;
	bool ___playerWasInside;
};
struct OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	int32_t ____skeletonType;
	RuntimeObject* ____dataProvider;
	bool ____updateRootPose;
	bool ____updateRootScale;
	bool ____enablePhysicsCapsules;
	bool ____applyBoneTranslations;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____bonesGO;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____bindPosesGO;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____capsulesGO;
	List_1_t47D92D044BD6BE23DD66F86497A9FB0EB0BB3A71* ____bones;
	List_1_t47D92D044BD6BE23DD66F86497A9FB0EB0BB3A71* ____bindPoses;
	List_1_t961B63350603C7ECDDDCD6793D2157F9BE734EEA* ____capsules;
	Skeleton2_t558BDFE1648B3DE26A17435B6BE8E692EA33025F ____skeleton;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___wristFixupRotation;
	bool ___U3CIsInitializedU3Ek__BackingField;
	bool ___U3CIsDataValidU3Ek__BackingField;
	bool ___U3CIsDataHighConfidenceU3Ek__BackingField;
	RuntimeObject* ___U3CBonesU3Ek__BackingField;
	RuntimeObject* ___U3CBindPosesU3Ek__BackingField;
	RuntimeObject* ___U3CCapsulesU3Ek__BackingField;
	int32_t ___U3CSkeletonChangedCountU3Ek__BackingField;
};
struct OpenCloseDoor_t31BE5A69CD7EB259A742F5E26F516D18AE629EB5  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	float ___closedAngle;
	float ___openAngle;
	float ___speed;
	int32_t ___interactionKey;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotationAxis;
	bool ___isOpen;
};
struct SelectionMenuUI_tAB25C668FCEBC7436438289E5A864F3484167FA6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___panels;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectionMenu;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___bathroomScene;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___xrOrigin;
	AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* ___avatarSelectionManager;
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* ___instructionManager;
};
struct ShirtHandTrigger_t114FEC2736D12E014E9A1FC3A8314CCD0491186B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* ___instructionManager;
	bool ___removed;
};
struct ShirtInteraction_t255774F036FFDA0397EE343495F748415B2169D4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* ___instructionManager;
	bool ___removed;
};
struct SoapTrigger_tB717EEE25B954F7D1101D854CA2BE71074727144  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* ___instructionManager;
	bool ___completed;
};
struct TowelTrigger_tD9E160B19D3C972269883B81C5BCD29F487237A2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* ___instructionManager;
	bool ___completed;
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct VRExperienceStarter_tE8ED61EA206751127AEA7C6EA71A236AEAEB1127  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___cameraRig;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___centerEyeAnchor;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___slimHeadAnchor;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mediumHeadAnchor;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___wideHeadAnchor;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___avatarSlim;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___avatarMedium;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___avatarWide;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectionMenu;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___instructionCanvas;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___selectedHeadAnchor;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___selectedAvatar;
};
struct WaterTrigger_t2C5CEE5FB3AB474809A94E1321296770F620AB66  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* ___instructionManager;
	bool ___completed;
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	bool ___m_SkipLayoutUpdate;
	bool ___m_SkipMaterialUpdate;
	bool ___m_RaycastTarget;
	bool ___m_RaycastTargetCache;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas;
	bool ___m_VertsDirty;
	bool ___m_MaterialDirty;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs;
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner;
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField;
};
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	bool ___m_ShouldRecalculateStencil;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial;
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask;
	bool ___m_Maskable;
	bool ___m_IsMaskingGraphic;
	bool ___m_IncludeForMasking;
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged;
	bool ___m_ShouldRecalculate;
	int32_t ___m_StencilValue;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners;
};
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	String_t* ___m_text;
	bool ___m_IsTextBackingStringDirty;
	RuntimeObject* ___m_TextPreprocessor;
	bool ___m_isRightToLeft;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset;
	bool ___m_isSDFShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial;
	int32_t ___m_currentMaterialIndex;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials;
	bool ___m_isMaterialDirty;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_HighlightState;
	bool ___m_ConvertToLinearSpace;
	bool ___m_enableVertexGradient;
	int32_t ___m_colorMode;
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset;
	bool ___m_tintAllSprites;
	bool ___m_tintSprite;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor;
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet;
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle;
	int32_t ___m_TextStyleHashCode;
	bool ___m_overrideHtmlColors;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor;
	float ___m_outlineWidth;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_currentEnvMapRotation;
	bool ___m_hasEnvMapProperty;
	float ___m_fontSize;
	float ___m_currentFontSize;
	float ___m_fontSizeBase;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack;
	int32_t ___m_fontWeight;
	int32_t ___m_FontWeightInternal;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack;
	bool ___m_enableAutoSizing;
	float ___m_maxFontSize;
	float ___m_minFontSize;
	int32_t ___m_AutoSizeIterationCount;
	int32_t ___m_AutoSizeMaxIterationCount;
	bool ___m_IsAutoSizePointSizeSet;
	float ___m_fontSizeMin;
	float ___m_fontSizeMax;
	int32_t ___m_fontStyle;
	int32_t ___m_FontStyleInternal;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack;
	bool ___m_isUsingBold;
	int32_t ___m_HorizontalAlignment;
	int32_t ___m_VerticalAlignment;
	int32_t ___m_textAlignment;
	int32_t ___m_lineJustification;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners;
	float ___m_characterSpacing;
	float ___m_cSpacing;
	float ___m_monoSpacing;
	bool ___m_duoSpace;
	float ___m_characterHorizontalScale;
	float ___m_wordSpacing;
	float ___m_lineSpacing;
	float ___m_lineSpacingDelta;
	float ___m_lineHeight;
	bool ___m_IsDrivenLineSpacing;
	float ___m_lineSpacingMax;
	float ___m_paragraphSpacing;
	float ___m_charWidthMaxAdj;
	float ___m_charWidthAdjDelta;
	int32_t ___m_TextWrappingMode;
	bool ___m_isCharacterWrappingEnabled;
	bool ___m_isNonBreakingSpace;
	bool ___m_isIgnoringAlignment;
	float ___m_wordWrappingRatios;
	int32_t ___m_overflowMode;
	int32_t ___m_firstOverflowCharacterIndex;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent;
	bool ___m_isTextTruncated;
	bool ___m_enableKerning;
	int32_t ___m_LastBaseGlyphIndex;
	List_1_t3A076A19AF26E22A128C32B5C19804DDD2877607* ___m_ActiveFontFeatures;
	bool ___m_enableExtraPadding;
	bool ___checkPaddingRequired;
	bool ___m_isRichText;
	bool ___m_EmojiFallbackSupport;
	bool ___m_parseCtrlCharacters;
	bool ___m_isOverlay;
	bool ___m_isOrthographic;
	bool ___m_isCullingEnabled;
	bool ___m_isMaskingEnabled;
	bool ___isMaskUpdateRequired;
	bool ___m_ignoreCulling;
	int32_t ___m_horizontalMapping;
	int32_t ___m_verticalMapping;
	float ___m_uvLineOffset;
	int32_t ___m_renderMode;
	int32_t ___m_geometrySortingOrder;
	bool ___m_IsTextObjectScaleStatic;
	bool ___m_VertexBufferAutoSizeReduction;
	int32_t ___m_firstVisibleCharacter;
	int32_t ___m_maxVisibleCharacters;
	int32_t ___m_maxVisibleWords;
	int32_t ___m_maxVisibleLines;
	bool ___m_useMaxVisibleDescender;
	int32_t ___m_pageToDisplay;
	bool ___m_isNewPage;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin;
	float ___m_marginLeft;
	float ___m_marginRight;
	float ___m_marginWidth;
	float ___m_marginHeight;
	float ___m_width;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo;
	bool ___m_havePropertiesChanged;
	bool ___m_isUsingLegacyAnimationComponent;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition;
	bool ___U3CautoSizeTextContainerU3Ek__BackingField;
	bool ___m_autoSizeTextContainer;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh;
	bool ___m_isVolumetricText;
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText;
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator;
	float ___m_flexibleHeight;
	float ___m_flexibleWidth;
	float ___m_minWidth;
	float ___m_minHeight;
	float ___m_maxWidth;
	float ___m_maxHeight;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement;
	float ___m_preferredWidth;
	float ___m_RenderedWidth;
	bool ___m_isPreferredWidthDirty;
	float ___m_preferredHeight;
	float ___m_RenderedHeight;
	bool ___m_isPreferredHeightDirty;
	bool ___m_isCalculatingPreferredValues;
	int32_t ___m_layoutPriority;
	bool ___m_isLayoutDirty;
	bool ___m_isAwake;
	bool ___m_isWaitingOnResourceLoad;
	int32_t ___m_inputSource;
	float ___m_fontScaleMultiplier;
	float ___tag_LineIndent;
	float ___tag_Indent;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack;
	bool ___tag_NoParsing;
	bool ___m_isTextLayoutPhase;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_FXRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FXScale;
	TextProcessingElementU5BU5D_tC3E97D1672C8DB6E1F91DB2C0987D0ED9A2E7113* ___m_TextProcessingArray;
	int32_t ___m_InternalTextProcessingArraySize;
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo;
	int32_t ___m_totalCharacterCount;
	int32_t ___m_characterCount;
	int32_t ___m_firstCharacterOfLine;
	int32_t ___m_firstVisibleCharacterOfLine;
	int32_t ___m_lastCharacterOfLine;
	int32_t ___m_lastVisibleCharacterOfLine;
	int32_t ___m_lineNumber;
	int32_t ___m_lineVisibleCharacterCount;
	int32_t ___m_lineVisibleSpaceCount;
	int32_t ___m_pageNumber;
	float ___m_PageAscender;
	float ___m_maxTextAscender;
	float ___m_maxCapHeight;
	float ___m_ElementAscender;
	float ___m_ElementDescender;
	float ___m_maxLineAscender;
	float ___m_maxLineDescender;
	float ___m_startOfLineAscender;
	float ___m_startOfLineDescender;
	float ___m_lineOffset;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack;
	bool ___m_colorGradientPresetIsTinted;
	float ___m_tabSpacing;
	float ___m_spacing;
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks;
	int32_t ___m_TextStyleStackDepth;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack;
	int32_t ___m_ItalicAngle;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack;
	float ___m_padding;
	float ___m_baselineOffset;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack;
	float ___m_xAdvance;
	int32_t ___m_textElementType;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement;
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis;
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset;
	int32_t ___m_spriteCount;
	int32_t ___m_spriteIndex;
	int32_t ___m_spriteAnimationID;
	bool ___m_ignoreActiveState;
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray;
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power;
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	__StaticArrayInitTypeSizeU3D292_t190693508CB4486F23D30703A97454721019B526 ___71D9761C005D98F11F876AF70D5BA64B86610C3FA564B26A8146BC7411A00F08;
	__StaticArrayInitTypeSizeU3D559_t5D2B409CB46789D651D597D58F4FEF618CE2B63F ___E59C58BEE3958E3D927ACD40C7163337B7521448115A2AC7027DF8137222AAAC;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	float ___Epsilon;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3_StaticFields
{
	int32_t ___k_ColorId;
	int32_t ___k_MainTexId;
};
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite;
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest;
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest;
	MissingCharacterEventCallback_t955241181324E0FEF9A9BDBA400E8780F8979DE6* ___OnMissingCharacter;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag;
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState;
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2;
	float ___k_LargePositiveFloat;
	float ___k_LargeNegativeFloat;
	int32_t ___k_LargePositiveInt;
	int32_t ___k_LargeNegativeInt;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_AutoAssignAvatarArmBones_m3CA4B9F00AE85046501DA999BB4F45515F7C1EBB (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_FollowHeadAndBody_m97849CC7B1968A0B0FB1B0E003767E3F4DED349A (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_FollowArms_m80719713373BAE424DEED273D1B3F89DF52B5A18 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_FollowHands_m5F6699F145EB11C29E00FCB8EDB73FC06C8E98C5 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_FollowFingers_mC2831F7CB0ACF774E9C4ADD28C0428911AD27B14 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_SolveArm_m81BEFD9A89B84782B29E9735413F2748FC6D6E0C (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_trackedHand, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_upperArm, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_foreArm, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_avatarHand, float ___4_sideSign, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_planeNormal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_RotateBoneTowardChild_m031D7EDBF41B3A3BD88A6A6EAE95DD9C5A9BE278 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_bone, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_child, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_targetDirection, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fromDirection, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_toDirection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_CopyTrackedHand_m90D36EF444508989AA767B44DCF17E30C843E4B7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_trackedHand, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_avatarHand, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_positionOffset, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_rotationOffset, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_CopyHandSkeleton_m7D97FA29A4394C12646133409EA4D711A7185FB1 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ___0_skeleton, String_t* ___1_prefix, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRSkeleton_get_IsInitialized_mD0C73DF54C26EDDC73E93B5871804828C3FB0F4C_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRSkeleton_get_IsDataValid_m2B32059A233ABF9F01EE9B04A2C6A5A39A24883E_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ___0_skeleton, int32_t ___1_sourceId, String_t* ___2_avatarBoneName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* AvatarBodyFollower_GetOVRBone_m15F94571CC8D70D7F8711387014A3A4FC4CEA0E7 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ___0_skeleton, int32_t ___1_boneId, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* AvatarBodyFollower_FindChildRecursive_m0760E292893251177DEA5D804C8890AE4E84C647 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, String_t* ___1_name, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OVRBone_get_Id_m4BC533EE83B90F49F45D80E64A5EC5572E37E06C_inline (OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline (OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SelectBodySlim_m8D6C1F0B1469EC3DD9FF9C152E0F1211945148DD (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetActiveAvatar_m9CD03C46E4688C64CAA82EF656826186A8B2BCDD (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_avatar, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetOnlyActive_m2B0A9D8925C4E832AEAA88683F009FE360E1BF1F (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, String_t* ___0_anchorName, String_t* ___1_selectedName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetSkin_m779014AAC8CB051E57DA9CA1BB398AF6494DC937 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mE483A27E876DE8E4E6901D6814837F81D7C42F65_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetEyes_mAFF786A9640838499954753E1693B92D2336AECA (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetHair_mFE9CDFD52C8A2350AB3F62A5595FBE3CFF6B494E (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InstructionManager_IsCurrentStep_mFA1ADF7BA987901C2FE36D9CF031AD58AFFB7A0B (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, int32_t ___0_step, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionManager_MirrorStepRoutine_m1C85D4015DA6F5C9C667002C0BD6A9A53ABC4339 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___0_routine, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMirrorStepRoutineU3Ed__15__ctor_mEDB94269FAE48DFFD19C764D18818216D3BFDCA0 (U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionManager_ShirtStepRoutine_m27575C8D17E19FF4A7EF6142072ACF84DB5D56F5 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShirtStepRoutineU3Ed__17__ctor_m855A20199D6B88F93B6563905D69233B3F7D4736 (U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionManager_SoapStepRoutine_m6C2CB00EDBBE735BEB23290AF05815A1CCD1E08C (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSoapStepRoutineU3Ed__19__ctor_m440037A7226D6E7BF43A48478109E193962B942A (U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionManager_WaterStepRoutine_m9B1AA1DDD6BA6774F63C225CA3AD0C721C06AC35 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterStepRoutineU3Ed__21__ctor_mE846DA7D054A30DA5CD1AD17D95DB6AC5D879E29 (U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionManager_TowelStepRoutine_m5E728061E5E1BCF297B4D6A27E865C35386311D3 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTowelStepRoutineU3Ed__23__ctor_m86ECC9D2037859C1F9894E92A91D55F289543F64 (U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_PlaySuccessFeedback_m364750FCE52A5A9FAED96BCFDA087EF21A17236B (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionManager_EndExperienceRoutine_m1B4C4A6CB3AE7F573D583A0739DC0AA2E4FF9E7A (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndExperienceRoutineU3Ed__25__ctor_m991BE684A75FEBDC8BCE47A7970E2CA17ED55FA2 (U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5 (ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___0_seconds, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MirrorStepTrigger_IsPlayer_m0DB811EB230449A5ADCF40E9610E0E65741B41C8 (MirrorStepTrigger_tA7722F683C13C69CDFF87C60F7D8D61B9F6741BE* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MirrorStepTrigger_CompleteStep_mC372CE5B01E179A15839C920496846FC0B6E7DC4 (MirrorStepTrigger_tA7722F683C13C69CDFF87C60F7D8D61B9F6741BE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_CompleteMirrorStep_m69CFD8817584F7867D5A382C99A6B0D62927EEAA (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2 (int32_t ___0_key, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80_inline (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AvatarSelectionManager_GetActiveAvatar_m176E27295924267CB2A75C3F744F993B53484D44_inline (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_StartInstructions_mE19931D53E6A30DC0FDF3DD4261CACF216FC1DF8 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_RemoveShirt_m991B7E1D3A2F1C05F05EEA188CFE5197730BF87F (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_shirtToRemove, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_CompleteSoapStep_mDC82D48A71498D1F1065FF8396CFB7FA4908B0F8 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_CompleteTowelStep_m149426543EC3D88F65C16C15A7A86BA791CFC979 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_CompleteWaterStep_mA5CB9084F15D333BF486D0E604CC60D1A62590B9 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_mD0C4C0EFE1D70EC0EA4A92B11F1A4D5B0A134E49 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_euler, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m1DE89849FE2019B6AA0031306896F3B800849399_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m9B5EBE36643126708DB3F444C59C11FA30803DBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_rhs, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromToRotation_m4A801EE9080CD4CBCB9319FF12EB7934E885932F (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_fromDirection, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_toDirection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_AngleAxis_m1A896524F98EF69748915ED902CC9DCEF16245D4 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_axis, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_Lerp_mB9D9E19C29CA86767758B70DCFF9DB7C65821B39 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_b, float ___2_t, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129876
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_Awake_mA999384B70660F49CF785CFF697150C3F74831FC (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:51>
		AvatarBodyFollower_AutoAssignAvatarArmBones_m3CA4B9F00AE85046501DA999BB4F45515F7C1EBB(__this, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:52>
		return;
	}
}
// Method Definition Index: 129877
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_LateUpdate_mA4EF63A1AE39F2A681D76CD21D8E913A0F5C39C1 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:56>
		AvatarBodyFollower_FollowHeadAndBody_m97849CC7B1968A0B0FB1B0E003767E3F4DED349A(__this, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:57>
		AvatarBodyFollower_AutoAssignAvatarArmBones_m3CA4B9F00AE85046501DA999BB4F45515F7C1EBB(__this, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:58>
		AvatarBodyFollower_FollowArms_m80719713373BAE424DEED273D1B3F89DF52B5A18(__this, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:59>
		AvatarBodyFollower_FollowHands_m5F6699F145EB11C29E00FCB8EDB73FC06C8E98C5(__this, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:60>
		AvatarBodyFollower_FollowFingers_mC2831F7CB0ACF774E9C4ADD28C0428911AD27B14(__this, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:61>
		return;
	}
}
// Method Definition Index: 129878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_FollowHeadAndBody_m97849CC7B1968A0B0FB1B0E003767E3F4DED349A (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:65>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___centerEyeAnchor;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___avatarRoot;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___avatarHeadAnchor;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_002b;
		}
	}

IL_002a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:66>
		return;
	}

IL_002b:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:68>
		bool L_6 = __this->___followYaw;
		if (!L_6)
		{
			goto IL_0066;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:70>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___centerEyeAnchor;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_7, NULL);
		float L_9 = L_8.___y;
		float L_10 = __this->___avatarYawOffsetDegrees;
		V_1 = ((float)il2cpp_codegen_add(L_9, L_10));
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:71>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___avatarRoot;
		float L_12 = V_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), L_12, (0.0f), NULL);
		NullCheck(L_11);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_11, L_13, NULL);
	}

IL_0066:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:74>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___centerEyeAnchor;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___headWorldOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_16, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:75>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___avatarHeadAnchor;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_17, L_19, NULL);
		V_0 = L_20;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:76>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = __this->___avatarRoot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = L_21;
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_23, L_24, NULL);
		NullCheck(L_22);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_22, L_25, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:78>
		bool L_26 = __this->___keepAvatarRootOnFloor;
		if (!L_26)
		{
			goto IL_00e2;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:80>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:81>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:82>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:83>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:84>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27 = __this->___avatarRoot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___avatarRoot;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		float L_30 = L_29.___x;
		float L_31 = __this->___avatarRootWorldY;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32 = __this->___avatarRoot;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		float L_34 = L_33.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), L_30, L_31, L_34, NULL);
		NullCheck(L_27);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_35, NULL);
	}

IL_00e2:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:86>
		return;
	}
}
// Method Definition Index: 129879
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_FollowArms_m80719713373BAE424DEED273D1B3F89DF52B5A18 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:90>
		bool L_0 = __this->___followArms;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:91>
		return;
	}

IL_0009:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:93>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:94>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:95>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:96>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:97>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:98>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:99>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___leftHandAnchor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___avatarLeftUpperArm;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___avatarLeftForeArm;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___avatarLeftHand;
		AvatarBodyFollower_SolveArm_m81BEFD9A89B84782B29E9735413F2748FC6D6E0C(__this, L_1, L_2, L_3, L_4, (-1.0f), NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:101>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:102>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:103>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:104>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:105>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:106>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:107>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___rightHandAnchor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___avatarRightUpperArm;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = __this->___avatarRightForeArm;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___avatarRightHand;
		AvatarBodyFollower_SolveArm_m81BEFD9A89B84782B29E9735413F2748FC6D6E0C(__this, L_5, L_6, L_7, L_8, (1.0f), NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:108>
		return;
	}
}
// Method Definition Index: 129880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_SolveArm_m81BEFD9A89B84782B29E9735413F2748FC6D6E0C (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_trackedHand, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_upperArm, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___2_foreArm, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___3_avatarHand, float ___4_sideSign, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	float G_B9_0 = 0.0f;
	float G_B8_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B10_0;
	memset((&G_B10_0), 0, sizeof(G_B10_0));
	float G_B10_1 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B11_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B13_0;
	memset((&G_B13_0), 0, sizeof(G_B13_0));
	float G_B13_1 = 0.0f;
	float G_B15_0 = 0.0f;
	float G_B14_0 = 0.0f;
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:117>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_trackedHand;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___1_upperArm;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0025;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___2_foreArm;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_5)
		{
			goto IL_0025;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___3_avatarHand;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0026;
		}
	}

IL_0025:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:118>
		return;
	}

IL_0026:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:120>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___1_upperArm;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		V_0 = L_9;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:121>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = ___0_trackedHand;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		V_1 = L_11;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:122>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_12, L_13, NULL);
		V_2 = L_14;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:124>
		float L_15;
		L_15 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_2), NULL);
		if ((!(((float)L_15) < ((float)(9.99999975E-05f)))))
		{
			goto IL_004b;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:125>
		return;
	}

IL_004b:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:127>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___1_upperArm;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = ___2_foreArm;
		NullCheck(L_18);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_18, NULL);
		float L_20;
		L_20 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_17, L_19, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:128>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21 = ___2_foreArm;
		NullCheck(L_21);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_21, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = ___3_avatarHand;
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_23, NULL);
		float L_25;
		L_25 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_22, L_24, NULL);
		V_3 = L_25;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:129>
		float L_26 = L_20;
		float L_27 = V_3;
		float L_28;
		L_28 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_add(L_26, L_27)), (0.00999999978f), NULL);
		V_4 = L_28;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:130>
		float L_29;
		L_29 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_2), NULL);
		float L_30 = V_4;
		float L_31;
		L_31 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_29, ((float)il2cpp_codegen_multiply(L_30, (0.980000019f))), NULL);
		V_5 = L_31;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:132>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_6 = L_32;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:133>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33 = __this->___avatarRoot;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_33, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_34)
		{
			G_B9_0 = L_26;
			goto IL_00b9;
		}
		G_B8_0 = L_26;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		float L_36 = ___4_sideSign;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_35, L_36, NULL);
		G_B10_0 = L_37;
		G_B10_1 = G_B8_0;
		goto IL_00cb;
	}

IL_00b9:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = __this->___avatarRoot;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Transform_get_right_mC6DC057C23313802E2186A9E0DB760D795A758A4(L_38, NULL);
		float L_40 = ___4_sideSign;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_39, L_40, NULL);
		G_B10_0 = L_41;
		G_B10_1 = G_B9_0;
	}

IL_00cb:
	{
		V_7 = G_B10_0;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:134>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42 = __this->___avatarRoot;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_43)
		{
			G_B12_0 = G_B10_1;
			goto IL_00e2;
		}
		G_B11_0 = G_B10_1;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		G_B13_0 = L_44;
		G_B13_1 = G_B11_0;
		goto IL_00f2;
	}

IL_00e2:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45 = __this->___avatarRoot;
		NullCheck(L_45);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_46, NULL);
		G_B13_0 = L_47;
		G_B13_1 = G_B12_0;
	}

IL_00f2:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:135>
		float L_48 = __this->___elbowBendDown;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(G_B13_0, L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = V_7;
		float L_51 = __this->___elbowBendSide;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_50, L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_49, L_52, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_53, L_54, NULL);
		V_12 = L_55;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_12), NULL);
		V_8 = L_56;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:137>
		float L_57;
		L_57 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_8), NULL);
		if ((!(((float)L_57) < ((float)(9.99999975E-05f)))))
		{
			G_B15_0 = G_B13_1;
			goto IL_0146;
		}
		G_B14_0 = G_B13_1;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:138>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline(L_58, L_59, NULL);
		V_12 = L_60;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_12), NULL);
		V_8 = L_61;
		G_B15_0 = G_B14_0;
	}

IL_0146:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:140>
		float L_62 = G_B15_0;
		float L_63 = L_62;
		float L_64 = V_3;
		float L_65 = V_3;
		float L_66 = V_5;
		float L_67 = V_5;
		float L_68 = V_5;
		V_9 = ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_63, L_63)), ((float)il2cpp_codegen_multiply(L_64, L_65)))), ((float)il2cpp_codegen_multiply(L_66, L_67))))/((float)il2cpp_codegen_multiply((2.0f), L_68))));
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:141>
		float L_69 = L_62;
		float L_70 = V_9;
		float L_71 = V_9;
		float L_72;
		L_72 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_69, L_69)), ((float)il2cpp_codegen_multiply(L_70, L_71)))), (0.0f), NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:142>
		float L_73;
		L_73 = sqrtf(L_72);
		V_10 = L_73;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:144>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_6;
		float L_76 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77;
		L_77 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_75, L_76, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_74, L_77, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_8;
		float L_80 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_79, L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_78, L_81, NULL);
		V_11 = L_82;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:146>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_83 = ___1_upperArm;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_84 = ___2_foreArm;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_85, L_86, NULL);
		AvatarBodyFollower_RotateBoneTowardChild_m031D7EDBF41B3A3BD88A6A6EAE95DD9C5A9BE278(L_83, L_84, L_87, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:147>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_88 = ___2_foreArm;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89 = ___3_avatarHand;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_91 = ___2_foreArm;
		NullCheck(L_91);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_91, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_90, L_92, NULL);
		AvatarBodyFollower_RotateBoneTowardChild_m031D7EDBF41B3A3BD88A6A6EAE95DD9C5A9BE278(L_88, L_89, L_93, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:148>
		return;
	}
}
// Method Definition Index: 129881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_RotateBoneTowardChild_m031D7EDBF41B3A3BD88A6A6EAE95DD9C5A9BE278 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_bone, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_child, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_targetDirection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:152>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_bone;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___1_child;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		float L_4;
		L_4 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&___2_targetDirection), NULL);
		if ((!(((float)L_4) < ((float)(9.99999975E-05f)))))
		{
			goto IL_0021;
		}
	}

IL_0020:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:153>
		return;
	}

IL_0021:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:155>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___1_child;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_5, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___0_bone;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_8, NULL);
		V_0 = L_9;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:157>
		float L_10;
		L_10 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		if ((!(((float)L_10) < ((float)(9.99999975E-05f)))))
		{
			goto IL_0042;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:158>
		return;
	}

IL_0042:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:160>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&___2_targetDirection), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A_inline(L_11, L_12, NULL);
		V_1 = L_13;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:161>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = ___0_bone;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = ___0_bone;
		NullCheck(L_16);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17;
		L_17 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_15, L_17, NULL);
		NullCheck(L_14);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_14, L_18, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:162>
		return;
	}
}
// Method Definition Index: 129882
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_FollowHands_m5F6699F145EB11C29E00FCB8EDB73FC06C8E98C5 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:166>
		bool L_0 = __this->___followHands;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:167>
		return;
	}

IL_0009:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:169>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___leftHandAnchor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___avatarLeftHand;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = __this->___leftHandPositionOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___leftHandRotationOffset;
		AvatarBodyFollower_CopyTrackedHand_m90D36EF444508989AA767B44DCF17E30C843E4B7(L_1, L_2, L_3, L_4, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:170>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = __this->___rightHandAnchor;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___avatarRightHand;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___rightHandPositionOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___rightHandRotationOffset;
		AvatarBodyFollower_CopyTrackedHand_m90D36EF444508989AA767B44DCF17E30C843E4B7(L_5, L_6, L_7, L_8, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:171>
		return;
	}
}
// Method Definition Index: 129883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_CopyTrackedHand_m90D36EF444508989AA767B44DCF17E30C843E4B7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_trackedHand, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___1_avatarHand, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_positionOffset, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_rotationOffset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:179>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_trackedHand;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___1_avatarHand;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0013;
		}
	}

IL_0012:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:180>
		return;
	}

IL_0013:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:182>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = ___1_avatarHand;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = ___0_trackedHand;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___2_positionOffset;
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_5, L_6, NULL);
		NullCheck(L_4);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_4, L_7, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:183>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = ___1_avatarHand;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9 = ___0_trackedHand;
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___3_rotationOffset;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_11, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_10, L_12, NULL);
		NullCheck(L_8);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_8, L_13, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:184>
		return;
	}
}
// Method Definition Index: 129884
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_FollowFingers_mC2831F7CB0ACF774E9C4ADD28C0428911AD27B14 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45FA688F31F228DBEB941721369DDA28A4926D24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7AA770297A7E9F8775DFAC450F3081F20D11B5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:188>
		bool L_0 = __this->___followFingers;
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1 = __this->___avatarBoneRoot;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}

IL_0016:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:189>
		return;
	}

IL_0017:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:191>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_3 = __this->___leftSkeleton;
		AvatarBodyFollower_CopyHandSkeleton_m7D97FA29A4394C12646133409EA4D711A7185FB1(__this, L_3, _stringLiteral45FA688F31F228DBEB941721369DDA28A4926D24, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:192>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_4 = __this->___rightSkeleton;
		AvatarBodyFollower_CopyHandSkeleton_m7D97FA29A4394C12646133409EA4D711A7185FB1(__this, L_4, _stringLiteralC7AA770297A7E9F8775DFAC450F3081F20D11B5F, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:193>
		return;
	}
}
// Method Definition Index: 129885
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_CopyHandSkeleton_m7D97FA29A4394C12646133409EA4D711A7185FB1 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ___0_skeleton, String_t* ___1_prefix, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BE5F8C7B2E79710B77C2AE27585948DBC237DA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2244D688A193583F02C90B0847B2DDF4672F313C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22B36BC0BC1BCEB92E0D7E715F14D7B71D55F222);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral346062C5CC6591F9ACB650FCDDE8BBCC995029BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B4358FFFC66B3D87992695D9C56058E0A40B633);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B618D0EC3E0214F051BD1C13A750AEE623D89D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6100DDC8926DC5F526340385666DB54E35DE2105);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral61C7F81BBD493D7330B375404C1898A05F9A12AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78761936F57E8D82ECB18CC29EB39E450324A11B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E75D9CD803DAAF209A9AB6606988C43044D5620);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB872F153175EBBA2D8F07F70A4B8163D4BD6988);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBA2BD52A6524606BC79260CE7ABE567D8307495);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD03E57602722FAB8BA0DB62EA70CA7C2126E0311);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3541B6A3CB458DA20F4EFA06302C0A0B5021D75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE992956634FD0D298478A3F5D67A24E9417D96F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:197>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_0 = ___0_skeleton;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_1)
		{
			goto IL_0019;
		}
	}
	{
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_2 = ___0_skeleton;
		NullCheck(L_2);
		bool L_3;
		L_3 = OVRSkeleton_get_IsInitialized_mD0C73DF54C26EDDC73E93B5871804828C3FB0F4C_inline(L_2, NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_4 = ___0_skeleton;
		NullCheck(L_4);
		bool L_5;
		L_5 = OVRSkeleton_get_IsDataValid_m2B32059A233ABF9F01EE9B04A2C6A5A39A24883E_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_001a;
		}
	}

IL_0019:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:198>
		return;
	}

IL_001a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:200>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_6 = ___0_skeleton;
		String_t* L_7 = ___1_prefix;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteral346062C5CC6591F9ACB650FCDDE8BBCC995029BC, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_6, 3, L_8, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:201>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_9 = ___0_skeleton;
		String_t* L_10 = ___1_prefix;
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_10, _stringLiteral3B4358FFFC66B3D87992695D9C56058E0A40B633, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_9, 4, L_11, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:202>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_12 = ___0_skeleton;
		String_t* L_13 = ___1_prefix;
		String_t* L_14;
		L_14 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_13, _stringLiteral22B36BC0BC1BCEB92E0D7E715F14D7B71D55F222, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_12, 5, L_14, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:204>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_15 = ___0_skeleton;
		String_t* L_16 = ___1_prefix;
		String_t* L_17;
		L_17 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_16, _stringLiteral2244D688A193583F02C90B0847B2DDF4672F313C, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_15, 6, L_17, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:205>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_18 = ___0_skeleton;
		String_t* L_19 = ___1_prefix;
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_19, _stringLiteralD03E57602722FAB8BA0DB62EA70CA7C2126E0311, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_18, 7, L_20, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:206>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_21 = ___0_skeleton;
		String_t* L_22 = ___1_prefix;
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_22, _stringLiteralE3541B6A3CB458DA20F4EFA06302C0A0B5021D75, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_21, 8, L_23, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:208>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_24 = ___0_skeleton;
		String_t* L_25 = ___1_prefix;
		String_t* L_26;
		L_26 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_25, _stringLiteralAB872F153175EBBA2D8F07F70A4B8163D4BD6988, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_24, ((int32_t)9), L_26, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:209>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_27 = ___0_skeleton;
		String_t* L_28 = ___1_prefix;
		String_t* L_29;
		L_29 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_28, _stringLiteral3B618D0EC3E0214F051BD1C13A750AEE623D89D8, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_27, ((int32_t)10), L_29, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:210>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_30 = ___0_skeleton;
		String_t* L_31 = ___1_prefix;
		String_t* L_32;
		L_32 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_31, _stringLiteralBBA2BD52A6524606BC79260CE7ABE567D8307495, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_30, ((int32_t)11), L_32, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:212>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_33 = ___0_skeleton;
		String_t* L_34 = ___1_prefix;
		String_t* L_35;
		L_35 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_34, _stringLiteral9E75D9CD803DAAF209A9AB6606988C43044D5620, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_33, ((int32_t)12), L_35, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:213>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_36 = ___0_skeleton;
		String_t* L_37 = ___1_prefix;
		String_t* L_38;
		L_38 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_37, _stringLiteral61C7F81BBD493D7330B375404C1898A05F9A12AB, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_36, ((int32_t)13), L_38, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:214>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_39 = ___0_skeleton;
		String_t* L_40 = ___1_prefix;
		String_t* L_41;
		L_41 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_40, _stringLiteralE992956634FD0D298478A3F5D67A24E9417D96F8, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_39, ((int32_t)14), L_41, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:216>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_42 = ___0_skeleton;
		String_t* L_43 = ___1_prefix;
		String_t* L_44;
		L_44 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_43, _stringLiteral6100DDC8926DC5F526340385666DB54E35DE2105, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_42, ((int32_t)16), L_44, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:217>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_45 = ___0_skeleton;
		String_t* L_46 = ___1_prefix;
		String_t* L_47;
		L_47 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_46, _stringLiteral78761936F57E8D82ECB18CC29EB39E450324A11B, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_45, ((int32_t)17), L_47, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:218>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_48 = ___0_skeleton;
		String_t* L_49 = ___1_prefix;
		String_t* L_50;
		L_50 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_49, _stringLiteral1BE5F8C7B2E79710B77C2AE27585948DBC237DA1, NULL);
		AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2(__this, L_48, ((int32_t)18), L_50, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:219>
		return;
	}
}
// Method Definition Index: 129886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_CopyFingerBone_mC4A8AF3D9F14A4CBEF3B29D88C206BA97F9C51D2 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ___0_skeleton, int32_t ___1_sourceId, String_t* ___2_avatarBoneName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:223>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_0 = ___0_skeleton;
		int32_t L_1 = ___1_sourceId;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = AvatarBodyFollower_GetOVRBone_m15F94571CC8D70D7F8711387014A3A4FC4CEA0E7(__this, L_0, L_1, NULL);
		V_0 = L_2;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:224>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = __this->___avatarBoneRoot;
		String_t* L_4 = ___2_avatarBoneName;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = AvatarBodyFollower_FindChildRecursive_m0760E292893251177DEA5D804C8890AE4E84C647(__this, L_3, L_4, NULL);
		V_1 = L_5;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:226>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_7)
		{
			goto IL_0029;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_002a;
		}
	}

IL_0029:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:227>
		return;
	}

IL_002a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:229>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_0;
		NullCheck(L_11);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12;
		L_12 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_11, NULL);
		NullCheck(L_10);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_10, L_12, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:230>
		return;
	}
}
// Method Definition Index: 129887
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* AvatarBodyFollower_GetOVRBone_m15F94571CC8D70D7F8711387014A3A4FC4CEA0E7 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* ___0_skeleton, int32_t ___1_boneId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t9AED68FB46C5658809C1425AE68F2069A1EF7127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t266549170A950B8D20A23E76D3B037DA0C424E45_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:234>
		OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* L_0 = ___0_skeleton;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, IEnumerable_1_t9AED68FB46C5658809C1425AE68F2069A1EF7127_il2cpp_TypeInfo_var, L_1);
		V_0 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{
				{
					RuntimeObject* L_3 = V_0;
					if (!L_3)
					{
						goto IL_003a;
					}
				}
				{
					RuntimeObject* L_4 = V_0;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_003a:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0027_1;
			}

IL_000e_1:
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:234>
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_6;
				L_6 = InterfaceFuncInvoker0< OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* >::Invoke(0, IEnumerator_1_t266549170A950B8D20A23E76D3B037DA0C424E45_il2cpp_TypeInfo_var, L_5);
				V_1 = L_6;
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:236>
				OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_7 = V_1;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = OVRBone_get_Id_m4BC533EE83B90F49F45D80E64A5EC5572E37E06C_inline(L_7, NULL);
				int32_t L_9 = ___1_boneId;
				if ((!(((uint32_t)L_8) == ((uint32_t)L_9))))
				{
					goto IL_0027_1;
				}
			}
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:237>
				OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* L_10 = V_1;
				NullCheck(L_10);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
				L_11 = OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline(L_10, NULL);
				V_2 = L_11;
				goto IL_003d;
			}

IL_0027_1:
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:234>
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				bool L_13;
				L_13 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				if (L_13)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_003b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:240>
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}

IL_003d:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:241>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_2;
		return L_14;
	}
}
// Method Definition Index: 129888
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower_AutoAssignAvatarArmBones_m3CA4B9F00AE85046501DA999BB4F45515F7C1EBB (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02B8B77F254D382671D0C1364D8A0D55314079A2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45FA688F31F228DBEB941721369DDA28A4926D24);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68628E7B83A35C500F7AAE5B8AA07858B1219829);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92F954E356681799E49616D75089E0E3D8EBD29B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDCE9E20342293DA1BF928E7A473B1CF5E03F8D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7AA770297A7E9F8775DFAC450F3081F20D11B5F);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:245>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___avatarBoneRoot;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:246>
		return;
	}

IL_000f:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:248>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___avatarLeftUpperArm;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:249>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___avatarBoneRoot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = AvatarBodyFollower_FindChildRecursive_m0760E292893251177DEA5D804C8890AE4E84C647(__this, L_4, _stringLiteral92F954E356681799E49616D75089E0E3D8EBD29B, NULL);
		__this->___avatarLeftUpperArm = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatarLeftUpperArm), (void*)L_5);
	}

IL_0034:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:251>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___avatarLeftForeArm;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0059;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:252>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___avatarBoneRoot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = AvatarBodyFollower_FindChildRecursive_m0760E292893251177DEA5D804C8890AE4E84C647(__this, L_8, _stringLiteralBDCE9E20342293DA1BF928E7A473B1CF5E03F8D6, NULL);
		__this->___avatarLeftForeArm = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatarLeftForeArm), (void*)L_9);
	}

IL_0059:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:254>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___avatarLeftHand;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_007e;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:255>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___avatarBoneRoot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = AvatarBodyFollower_FindChildRecursive_m0760E292893251177DEA5D804C8890AE4E84C647(__this, L_12, _stringLiteral45FA688F31F228DBEB941721369DDA28A4926D24, NULL);
		__this->___avatarLeftHand = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatarLeftHand), (void*)L_13);
	}

IL_007e:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:257>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = __this->___avatarRightUpperArm;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00a3;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:258>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___avatarBoneRoot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = AvatarBodyFollower_FindChildRecursive_m0760E292893251177DEA5D804C8890AE4E84C647(__this, L_16, _stringLiteral02B8B77F254D382671D0C1364D8A0D55314079A2, NULL);
		__this->___avatarRightUpperArm = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatarRightUpperArm), (void*)L_17);
	}

IL_00a3:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:260>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = __this->___avatarRightForeArm;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_00c8;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:261>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = __this->___avatarBoneRoot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = AvatarBodyFollower_FindChildRecursive_m0760E292893251177DEA5D804C8890AE4E84C647(__this, L_20, _stringLiteral68628E7B83A35C500F7AAE5B8AA07858B1219829, NULL);
		__this->___avatarRightForeArm = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatarRightForeArm), (void*)L_21);
	}

IL_00c8:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:263>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = __this->___avatarRightHand;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00ed;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:264>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_24 = __this->___avatarBoneRoot;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = AvatarBodyFollower_FindChildRecursive_m0760E292893251177DEA5D804C8890AE4E84C647(__this, L_24, _stringLiteralC7AA770297A7E9F8775DFAC450F3081F20D11B5F, NULL);
		__this->___avatarRightHand = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___avatarRightHand), (void*)L_25);
	}

IL_00ed:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:265>
		return;
	}
}
// Method Definition Index: 129889
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* AvatarBodyFollower_FindChildRecursive_m0760E292893251177DEA5D804C8890AE4E84C647 (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_parent, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:269>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_parent;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:270>
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}

IL_000b:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:272>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___0_parent;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		String_t* L_4 = ___1_name;
		bool L_5;
		L_5 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_3, L_4, NULL);
		if (!L_5)
		{
			goto IL_001b;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:273>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = ___0_parent;
		return L_6;
	}

IL_001b:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:275>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = ___0_parent;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_7, NULL);
		V_0 = L_8;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0050:
			{
				{
					RuntimeObject* L_9 = V_0;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_10 = V_4;
					if (!L_10)
					{
						goto IL_0063;
					}
				}
				{
					RuntimeObject* L_11 = V_4;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0063:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0046_1;
			}

IL_0024_1:
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:275>
				RuntimeObject* L_12 = V_0;
				NullCheck(L_12);
				RuntimeObject* L_13;
				L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_13, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:277>
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14 = V_1;
				String_t* L_15 = ___1_name;
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
				L_16 = AvatarBodyFollower_FindChildRecursive_m0760E292893251177DEA5D804C8890AE4E84C647(__this, L_14, L_15, NULL);
				V_2 = L_16;
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:279>
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_18)
				{
					goto IL_0046_1;
				}
			}
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:280>
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19 = V_2;
				V_3 = L_19;
				goto IL_0066;
			}

IL_0046_1:
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:275>
				RuntimeObject* L_20 = V_0;
				NullCheck(L_20);
				bool L_21;
				L_21 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_20);
				if (L_21)
				{
					goto IL_0024_1;
				}
			}
			{
				goto IL_0064;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:283>
		return (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL;
	}

IL_0066:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:284>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22 = V_3;
		return L_22;
	}
}
// Method Definition Index: 129890
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarBodyFollower__ctor_m64C9CB131994189F4E80E6B132D4A3BB5B13370F (AvatarBodyFollower_t513AC7CB8CAA5424AB7EFF42F32E8C4BFFF9E914* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:11>
		__this->___followYaw = (bool)1;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:12>
		__this->___avatarYawOffsetDegrees = (180.0f);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:17>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___headWorldOffset = L_0;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:20>
		__this->___followArms = (bool)1;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:32>
		__this->___elbowBendDown = (0.219999999f);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarBodyFollower.cs:35>
		__this->___elbowBendSide = (0.119999997f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129891
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AvatarSelectionManager_GetActiveAvatar_m176E27295924267CB2A75C3F744F993B53484D44 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:14>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___activeAvatar;
		return L_0;
	}
}
// Method Definition Index: 129892
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_Start_mE3230D81D3DEF830ECCEA91F25402C4BCFCAD469 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:36>
		AvatarSelectionManager_SelectBodySlim_m8D6C1F0B1469EC3DD9FF9C152E0F1211945148DD(__this, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:37>
		return;
	}
}
// Method Definition Index: 129893
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SelectBodySlim_m8D6C1F0B1469EC3DD9FF9C152E0F1211945148DD (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:41>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___avatarSlim;
		AvatarSelectionManager_SetActiveAvatar_m9CD03C46E4688C64CAA82EF656826186A8B2BCDD(__this, L_0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:42>
		return;
	}
}
// Method Definition Index: 129894
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SelectBodyMedium_m5C67D49FD304FBD9B0ECA9B92FD9D16E24E13A0F (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:46>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___avatarMedium;
		AvatarSelectionManager_SetActiveAvatar_m9CD03C46E4688C64CAA82EF656826186A8B2BCDD(__this, L_0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:47>
		return;
	}
}
// Method Definition Index: 129895
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SelectBodyWide_mC0642365353C8150E1BDC4260338308C45DC9978 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:51>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___avatarWide;
		AvatarSelectionManager_SetActiveAvatar_m9CD03C46E4688C64CAA82EF656826186A8B2BCDD(__this, L_0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:52>
		return;
	}
}
// Method Definition Index: 129896
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetActiveAvatar_m9CD03C46E4688C64CAA82EF656826186A8B2BCDD (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_avatar, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:56>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___avatarSlim;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:57>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___avatarMedium;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:58>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___avatarWide;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:60>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_avatar;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:61>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_avatar;
		__this->___activeAvatar = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___activeAvatar), (void*)L_4);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:62>
		return;
	}
}
// Method Definition Index: 129897
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SelectMastectomyNormal_m2E60ADAE6C5DA9C8B6FDA5CF3CF040887ABDB9B2 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22D4F9A7F9A23A957817638442A8FFADE06DCFBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral704A8F9FB29A4B0EBFAC5BDDEE5262AC15EBC842);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:66>
		AvatarSelectionManager_SetOnlyActive_m2B0A9D8925C4E832AEAA88683F009FE360E1BF1F(__this, _stringLiteral22D4F9A7F9A23A957817638442A8FFADE06DCFBB, _stringLiteral704A8F9FB29A4B0EBFAC5BDDEE5262AC15EBC842, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:67>
		return;
	}
}
// Method Definition Index: 129898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SelectMastectomyLeft_m512106DE7C35EF55FDD10503DD84B44BA7C04DCA (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22D4F9A7F9A23A957817638442A8FFADE06DCFBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5535DC7B50302EA3E85F9EBD591909F5E0145098);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:71>
		AvatarSelectionManager_SetOnlyActive_m2B0A9D8925C4E832AEAA88683F009FE360E1BF1F(__this, _stringLiteral22D4F9A7F9A23A957817638442A8FFADE06DCFBB, _stringLiteral5535DC7B50302EA3E85F9EBD591909F5E0145098, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:72>
		return;
	}
}
// Method Definition Index: 129899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SelectMastectomyRight_mC47F7EA3499EE5DCAB91DBF3E4A3E7DC601EF95B (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22D4F9A7F9A23A957817638442A8FFADE06DCFBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral635E0A1FEA07E1510478CBDFE8ED575B666D2372);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:76>
		AvatarSelectionManager_SetOnlyActive_m2B0A9D8925C4E832AEAA88683F009FE360E1BF1F(__this, _stringLiteral22D4F9A7F9A23A957817638442A8FFADE06DCFBB, _stringLiteral635E0A1FEA07E1510478CBDFE8ED575B666D2372, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:77>
		return;
	}
}
// Method Definition Index: 129900
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SelectMastectomyBilateral_mEF587F95E3DA8A59924175BAA47FCBD19F989C69 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20B21483D0B393C182DA9408AD2AF8ECA63065FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral22D4F9A7F9A23A957817638442A8FFADE06DCFBB);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:81>
		AvatarSelectionManager_SetOnlyActive_m2B0A9D8925C4E832AEAA88683F009FE360E1BF1F(__this, _stringLiteral22D4F9A7F9A23A957817638442A8FFADE06DCFBB, _stringLiteral20B21483D0B393C182DA9408AD2AF8ECA63065FD, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:82>
		return;
	}
}
// Method Definition Index: 129901
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SelectHairLongCurly_m23DFF7FCF5FC0ABBEE3F53FE3931237E97601616 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41F1C6728B9F429C650C43A50567B91FBCD91455);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6071C2F8BA11FE1E131CE39607A2D5F096FD96);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:86>
		AvatarSelectionManager_SetOnlyActive_m2B0A9D8925C4E832AEAA88683F009FE360E1BF1F(__this, _stringLiteralAD6071C2F8BA11FE1E131CE39607A2D5F096FD96, _stringLiteral41F1C6728B9F429C650C43A50567B91FBCD91455, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:87>
		return;
	}
}
// Method Definition Index: 129902
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SelectHairLongStraight_mDDC8EE1C89650D9E107D5F9B27B6A99E331A90F9 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05430B2CC6B88A5A759884D7E9A75367169C51DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6071C2F8BA11FE1E131CE39607A2D5F096FD96);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:91>
		AvatarSelectionManager_SetOnlyActive_m2B0A9D8925C4E832AEAA88683F009FE360E1BF1F(__this, _stringLiteralAD6071C2F8BA11FE1E131CE39607A2D5F096FD96, _stringLiteral05430B2CC6B88A5A759884D7E9A75367169C51DC, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:92>
		return;
	}
}
// Method Definition Index: 129903
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SelectHairMediumCurly_mD0CA7083832179F474EC22215028FC15DBAFF0AF (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C736B6A45D5F0FFF583A92A488E8D0A803FE6D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6071C2F8BA11FE1E131CE39607A2D5F096FD96);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:96>
		AvatarSelectionManager_SetOnlyActive_m2B0A9D8925C4E832AEAA88683F009FE360E1BF1F(__this, _stringLiteralAD6071C2F8BA11FE1E131CE39607A2D5F096FD96, _stringLiteral4C736B6A45D5F0FFF583A92A488E8D0A803FE6D2, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:97>
		return;
	}
}
// Method Definition Index: 129904
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SelectHairShortCurly_m78F32D34D6E85E6FBED89411498DD4D7D22B0FCC (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6071C2F8BA11FE1E131CE39607A2D5F096FD96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB87D04A60C97465126C2C5974EB7144AEA63997C);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:101>
		AvatarSelectionManager_SetOnlyActive_m2B0A9D8925C4E832AEAA88683F009FE360E1BF1F(__this, _stringLiteralAD6071C2F8BA11FE1E131CE39607A2D5F096FD96, _stringLiteralB87D04A60C97465126C2C5974EB7144AEA63997C, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:102>
		return;
	}
}
// Method Definition Index: 129905
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SelectHairShortStraight_mE179DAAA168B7E2E217243EC886DA7AE2A0B14CE (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral230C6A2940DEC5C3C0A96E5579DB67EB28CCCFE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6071C2F8BA11FE1E131CE39607A2D5F096FD96);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:106>
		AvatarSelectionManager_SetOnlyActive_m2B0A9D8925C4E832AEAA88683F009FE360E1BF1F(__this, _stringLiteralAD6071C2F8BA11FE1E131CE39607A2D5F096FD96, _stringLiteral230C6A2940DEC5C3C0A96E5579DB67EB28CCCFE2, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:107>
		return;
	}
}
// Method Definition Index: 129906
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetSkinLight_m8C4C7BEBE5FD66BEAAA248876B4BA5CC13C662B6 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:111>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___skinLight;
		AvatarSelectionManager_SetSkin_m779014AAC8CB051E57DA9CA1BB398AF6494DC937(__this, L_0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:112>
		return;
	}
}
// Method Definition Index: 129907
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetSkinMedium_m2C9B0A54F3C4C74586173000D4405156EC7616EC (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:116>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___skinMedium;
		AvatarSelectionManager_SetSkin_m779014AAC8CB051E57DA9CA1BB398AF6494DC937(__this, L_0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:117>
		return;
	}
}
// Method Definition Index: 129908
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetSkinDark_m73A3DAE0BA0C5910A3BB6ABF62C8E6FDF58557F6 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:121>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___skinDark;
		AvatarSelectionManager_SetSkin_m779014AAC8CB051E57DA9CA1BB398AF6494DC937(__this, L_0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:122>
		return;
	}
}
// Method Definition Index: 129909
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetSkin_m779014AAC8CB051E57DA9CA1BB398AF6494DC937 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4554A90AB594B90441778CE0DCB4B78F2CAD6FFB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74BB8787B2E1662F65B0B3A69E1EC2868D622389);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD13E78417E56B4F8D4D0B9EAA6ED11117563137);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCD9FBF451F0FD58FCA7BE6D8275F9AB84E96138D);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_1 = NULL;
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:126>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___activeAvatar;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteralCD13E78417E56B4F8D4D0B9EAA6ED11117563137, NULL);
		V_0 = L_2;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:128>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:129>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___activeAvatar;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_6, _stringLiteral4554A90AB594B90441778CE0DCB4B78F2CAD6FFB, NULL);
		V_0 = L_7;
	}

IL_0035:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:131>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0054;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:132>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___activeAvatar;
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_10, NULL);
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_11, _stringLiteral74BB8787B2E1662F65B0B3A69E1EC2868D622389, NULL);
		V_0 = L_12;
	}

IL_0054:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:134>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0073;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:135>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___activeAvatar;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		NullCheck(L_16);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_16, _stringLiteralCD9FBF451F0FD58FCA7BE6D8275F9AB84E96138D, NULL);
		V_0 = L_17;
	}

IL_0073:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:137>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_0093;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:139>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20 = V_0;
		NullCheck(L_20);
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_21;
		L_21 = Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8(L_20, Component_GetComponentInChildren_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_m7CBAFA50AB995C9F53D6140718FCD31D7BEC7CC8_RuntimeMethod_var);
		V_1 = L_21;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:140>
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_22 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_0093;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:140>
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_24 = V_1;
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_25 = ___0_mat;
		NullCheck(L_24);
		Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_24, L_25, NULL);
	}

IL_0093:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:142>
		return;
	}
}
// Method Definition Index: 129910
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetEyesBrown_m5CE690330D34F02496D77C5C53A26C8DD8710F0F (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:146>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___eyesBrown;
		AvatarSelectionManager_SetEyes_mAFF786A9640838499954753E1693B92D2336AECA(__this, L_0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:147>
		return;
	}
}
// Method Definition Index: 129911
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetEyesBlue_m13345CD4DAED8AEE5273B1ADFDDBB0E99F1D8AC7 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:151>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___eyesBlue;
		AvatarSelectionManager_SetEyes_mAFF786A9640838499954753E1693B92D2336AECA(__this, L_0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:152>
		return;
	}
}
// Method Definition Index: 129912
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetEyesGreen_m1DE33275940CDD010043953F21AB93F8A4A1A6AB (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:156>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___eyesGreen;
		AvatarSelectionManager_SetEyes_mAFF786A9640838499954753E1693B92D2336AECA(__this, L_0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:157>
		return;
	}
}
// Method Definition Index: 129913
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetEyes_mAFF786A9640838499954753E1693B92D2336AECA (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral099F785FF132E64411F248E9DC67DC7FABC5D8D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CFA60697305C386CD067B1206AD14E65F1ABC9E);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:161>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___activeAvatar;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteral099F785FF132E64411F248E9DC67DC7FABC5D8D0, NULL);
		V_0 = L_2;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:163>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:165>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral2CFA60697305C386CD067B1206AD14E65F1ABC9E, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:166>
		return;
	}

IL_002a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:169>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_5, NULL);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{
				{
					RuntimeObject* L_7 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_8 = V_3;
					if (!L_8)
					{
						goto IL_006e;
					}
				}
				{
					RuntimeObject* L_9 = V_3;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_006e:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0054_1;
			}

IL_0033_1:
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:169>
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:171>
				NullCheck(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_11, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)));
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_12;
				L_12 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_11, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
				V_2 = L_12;
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:172>
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_13 = V_2;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_14;
				L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_14)
				{
					goto IL_0054_1;
				}
			}
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:172>
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_15 = V_2;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_16 = ___0_mat;
				NullCheck(L_15);
				Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_15, L_16, NULL);
			}

IL_0054_1:
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:169>
				RuntimeObject* L_17 = V_1;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0033_1;
				}
			}
			{
				goto IL_006f;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006f:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:174>
		return;
	}
}
// Method Definition Index: 129914
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetHairBlack_m63B0893D24B06E4A80812F5BD322261B69EE0FF1 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:178>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___hairBlack;
		AvatarSelectionManager_SetHair_mFE9CDFD52C8A2350AB3F62A5595FBE3CFF6B494E(__this, L_0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:179>
		return;
	}
}
// Method Definition Index: 129915
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetHairLightBrown_m9171C4465AE9560E6CCAB0A2D317E078C1292487 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:183>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___hairLightBrown;
		AvatarSelectionManager_SetHair_mFE9CDFD52C8A2350AB3F62A5595FBE3CFF6B494E(__this, L_0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:184>
		return;
	}
}
// Method Definition Index: 129916
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetHairDarkBrown_m6F75AD04C4BD102FC59F6F2F2C4FCCA9606743E7 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:188>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___hairDarkBrown;
		AvatarSelectionManager_SetHair_mFE9CDFD52C8A2350AB3F62A5595FBE3CFF6B494E(__this, L_0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:189>
		return;
	}
}
// Method Definition Index: 129917
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetHairBlonde_m89682E2C33A5E5E80299C7566F0797CFCF42AF09 (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:193>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___hairBlonde;
		AvatarSelectionManager_SetHair_mFE9CDFD52C8A2350AB3F62A5595FBE3CFF6B494E(__this, L_0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:194>
		return;
	}
}
// Method Definition Index: 129918
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetHairGray_mC97385A80569D6EC12742601BAC474D789AA4DAE (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:198>
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_0 = __this->___hairGray;
		AvatarSelectionManager_SetHair_mFE9CDFD52C8A2350AB3F62A5595FBE3CFF6B494E(__this, L_0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:199>
		return;
	}
}
// Method Definition Index: 129919
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetHair_mFE9CDFD52C8A2350AB3F62A5595FBE3CFF6B494E (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_mat, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD6071C2F8BA11FE1E131CE39607A2D5F096FD96);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB81D6CD3D2F28EDA8DE882BA8167F06898D4A589);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:203>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___activeAvatar;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteralAD6071C2F8BA11FE1E131CE39607A2D5F096FD96, NULL);
		V_0 = L_2;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:205>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:207>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralB81D6CD3D2F28EDA8DE882BA8167F06898D4A589, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:208>
		return;
	}

IL_002a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:211>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_5, NULL);
		V_1 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006d:
			{
				{
					RuntimeObject* L_7 = V_1;
					V_4 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_8 = V_4;
					if (!L_8)
					{
						goto IL_0080;
					}
				}
				{
					RuntimeObject* L_9 = V_4;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_0080:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_0063_1;
			}

IL_0033_1:
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:211>
				RuntimeObject* L_10 = V_1;
				NullCheck(L_10);
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_10);
				V_2 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_11, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:213>
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_2;
				NullCheck(L_12);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
				L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
				NullCheck(L_13);
				bool L_14;
				L_14 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_13, NULL);
				if (!L_14)
				{
					goto IL_0063_1;
				}
			}
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:215>
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_2;
				NullCheck(L_15);
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_16;
				L_16 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(L_15, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
				V_3 = L_16;
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:216>
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_17 = V_3;
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_18;
				L_18 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				if (!L_18)
				{
					goto IL_0063_1;
				}
			}
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:216>
				Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_19 = V_3;
				Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_20 = ___0_mat;
				NullCheck(L_19);
				Renderer_set_material_m21E88977071E0A914D62F3D9CFF0193B3117C45A(L_19, L_20, NULL);
			}

IL_0063_1:
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:211>
				RuntimeObject* L_21 = V_1;
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_0033_1;
				}
			}
			{
				goto IL_0081;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:219>
		return;
	}
}
// Method Definition Index: 129920
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager_SetOnlyActive_m2B0A9D8925C4E832AEAA88683F009FE360E1BF1F (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, String_t* ___0_anchorName, String_t* ___1_selectedName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA327DAA699E047009056FEB675F7EE5CFEFC70D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1875FA62A14187DE325B5AA71772B18F450D503);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:223>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___activeAvatar;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		String_t* L_2 = ___0_anchorName;
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, L_2, NULL);
		V_0 = L_3;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:225>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:227>
		String_t* L_6 = ___0_anchorName;
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralBA327DAA699E047009056FEB675F7EE5CFEFC70D, L_6, _stringLiteralC1875FA62A14187DE325B5AA71772B18F450D503, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_7, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:228>
		return;
	}

IL_0031:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:231>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = V_0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_8, NULL);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0067:
			{
				{
					RuntimeObject* L_10 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_10, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_11 = V_3;
					if (!L_11)
					{
						goto IL_0077;
					}
				}
				{
					RuntimeObject* L_12 = V_3;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0077:
				{
					return;
				}
			}
		});
		try
		{
			{
				goto IL_005d_1;
			}

IL_003a_1:
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:231>
				RuntimeObject* L_13 = V_1;
				NullCheck(L_13);
				RuntimeObject* L_14;
				L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_13);
				V_2 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_14, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:233>
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_2;
				NullCheck(L_15);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
				L_16 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_15, NULL);
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = V_2;
				NullCheck(L_17);
				String_t* L_18;
				L_18 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_17, NULL);
				String_t* L_19 = ___1_selectedName;
				bool L_20;
				L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_18, L_19, NULL);
				NullCheck(L_16);
				GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, L_20, NULL);
			}

IL_005d_1:
			{
				//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:231>
				RuntimeObject* L_21 = V_1;
				NullCheck(L_21);
				bool L_22;
				L_22 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_21);
				if (L_22)
				{
					goto IL_003a_1;
				}
			}
			{
				goto IL_0078;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0078:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:235>
		return;
	}
}
// Method Definition Index: 129921
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvatarSelectionManager__ctor_mD0FEE6A4D461F5469F6AD5BF8BAFFE956EC6552A (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129922
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_Start_m717F9A3916A513424D11B105FAD7867B40787A4C (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:29>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___introCanvas;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:29>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___introCanvas;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
	}

IL_001a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:30>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___bathroomCanvas;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:30>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___bathroomCanvas;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_0034:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:31>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___introCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:31>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___introCheck;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_004e:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:32>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___bathroomCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:32>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___bathroomCheck;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
	}

IL_0068:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:33>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___understoodButton;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_0082;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:33>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___understoodButton;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
	}

IL_0082:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:34>
		return;
	}
}
// Method Definition Index: 129923
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InstructionManager_IsCurrentStep_mFA1ADF7BA987901C2FE36D9CF031AD58AFFB7A0B (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, int32_t ___0_step, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:38>
		bool L_0 = __this->___instructionsStarted;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_1 = __this->___currentStep;
		int32_t L_2 = ___0_step;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}

IL_0012:
	{
		return (bool)0;
	}
}
// Method Definition Index: 129924
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_StartInstructions_mE19931D53E6A30DC0FDF3DD4261CACF216FC1DF8 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2B83F5B7265F3ED8CBA012378355423C2B97806);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:43>
		__this->___instructionsStarted = (bool)1;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:44>
		__this->___currentStep = 0;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:46>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___introCanvas;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:46>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___introCanvas;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
	}

IL_0028:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:47>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___bathroomCanvas;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0042;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:47>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___bathroomCanvas;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
	}

IL_0042:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:48>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___introCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_005c;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:48>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___introCheck;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
	}

IL_005c:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:49>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___bathroomCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:49>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___bathroomCheck;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
	}

IL_0076:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:50>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___understoodButton;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_0090;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:50>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___understoodButton;
		NullCheck(L_14);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_14, (bool)0, NULL);
	}

IL_0090:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:52>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_15 = __this->___introText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_15, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_16)
		{
			goto IL_00ae;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:53>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_17 = __this->___introText;
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_17, _stringLiteralF2B83F5B7265F3ED8CBA012378355423C2B97806);
	}

IL_00ae:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:54>
		return;
	}
}
// Method Definition Index: 129925
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_CompleteMirrorStep_m69CFD8817584F7867D5A382C99A6B0D62927EEAA (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:58>
		bool L_0;
		L_0 = InstructionManager_IsCurrentStep_mFA1ADF7BA987901C2FE36D9CF031AD58AFFB7A0B(__this, 0, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:58>
		return;
	}

IL_000a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:59>
		RuntimeObject* L_1;
		L_1 = InstructionManager_MirrorStepRoutine_m1C85D4015DA6F5C9C667002C0BD6A9A53ABC4339(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:60>
		return;
	}
}
// Method Definition Index: 129926
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionManager_MirrorStepRoutine_m1C85D4015DA6F5C9C667002C0BD6A9A53ABC4339 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736* L_0 = (U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736*)il2cpp_codegen_object_new(U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736_il2cpp_TypeInfo_var);
		U3CMirrorStepRoutineU3Ed__15__ctor_mEDB94269FAE48DFFD19C764D18818216D3BFDCA0(L_0, 0, NULL);
		U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
// Method Definition Index: 129927
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_RemoveShirt_m991B7E1D3A2F1C05F05EEA188CFE5197730BF87F (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_shirtToRemove, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:90>
		bool L_0;
		L_0 = InstructionManager_IsCurrentStep_mFA1ADF7BA987901C2FE36D9CF031AD58AFFB7A0B(__this, 1, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:90>
		return;
	}

IL_000a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:92>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___0_shirtToRemove;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:93>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___0_shirtToRemove;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_001a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:95>
		RuntimeObject* L_4;
		L_4 = InstructionManager_ShirtStepRoutine_m27575C8D17E19FF4A7EF6142072ACF84DB5D56F5(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:96>
		return;
	}
}
// Method Definition Index: 129928
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionManager_ShirtStepRoutine_m27575C8D17E19FF4A7EF6142072ACF84DB5D56F5 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741* L_0 = (U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741*)il2cpp_codegen_object_new(U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741_il2cpp_TypeInfo_var);
		U3CShirtStepRoutineU3Ed__17__ctor_m855A20199D6B88F93B6563905D69233B3F7D4736(L_0, 0, NULL);
		U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
// Method Definition Index: 129929
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_CompleteSoapStep_mDC82D48A71498D1F1065FF8396CFB7FA4908B0F8 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:120>
		bool L_0;
		L_0 = InstructionManager_IsCurrentStep_mFA1ADF7BA987901C2FE36D9CF031AD58AFFB7A0B(__this, 2, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:120>
		return;
	}

IL_000a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:121>
		RuntimeObject* L_1;
		L_1 = InstructionManager_SoapStepRoutine_m6C2CB00EDBBE735BEB23290AF05815A1CCD1E08C(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:122>
		return;
	}
}
// Method Definition Index: 129930
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionManager_SoapStepRoutine_m6C2CB00EDBBE735BEB23290AF05815A1CCD1E08C (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546* L_0 = (U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546*)il2cpp_codegen_object_new(U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546_il2cpp_TypeInfo_var);
		U3CSoapStepRoutineU3Ed__19__ctor_m440037A7226D6E7BF43A48478109E193962B942A(L_0, 0, NULL);
		U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
// Method Definition Index: 129931
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_CompleteWaterStep_mA5CB9084F15D333BF486D0E604CC60D1A62590B9 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:146>
		bool L_0;
		L_0 = InstructionManager_IsCurrentStep_mFA1ADF7BA987901C2FE36D9CF031AD58AFFB7A0B(__this, 3, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:146>
		return;
	}

IL_000a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:147>
		RuntimeObject* L_1;
		L_1 = InstructionManager_WaterStepRoutine_m9B1AA1DDD6BA6774F63C225CA3AD0C721C06AC35(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:148>
		return;
	}
}
// Method Definition Index: 129932
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionManager_WaterStepRoutine_m9B1AA1DDD6BA6774F63C225CA3AD0C721C06AC35 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7* L_0 = (U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7*)il2cpp_codegen_object_new(U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7_il2cpp_TypeInfo_var);
		U3CWaterStepRoutineU3Ed__21__ctor_mE846DA7D054A30DA5CD1AD17D95DB6AC5D879E29(L_0, 0, NULL);
		U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
// Method Definition Index: 129933
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_CompleteTowelStep_m149426543EC3D88F65C16C15A7A86BA791CFC979 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:172>
		bool L_0;
		L_0 = InstructionManager_IsCurrentStep_mFA1ADF7BA987901C2FE36D9CF031AD58AFFB7A0B(__this, 4, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:172>
		return;
	}

IL_000a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:173>
		RuntimeObject* L_1;
		L_1 = InstructionManager_TowelStepRoutine_m5E728061E5E1BCF297B4D6A27E865C35386311D3(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:174>
		return;
	}
}
// Method Definition Index: 129934
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionManager_TowelStepRoutine_m5E728061E5E1BCF297B4D6A27E865C35386311D3 (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06* L_0 = (U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06*)il2cpp_codegen_object_new(U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06_il2cpp_TypeInfo_var);
		U3CTowelStepRoutineU3Ed__23__ctor_m86ECC9D2037859C1F9894E92A91D55F289543F64(L_0, 0, NULL);
		U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
// Method Definition Index: 129935
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_CompleteExperience_mA5A2D575CD702C536F47F7D16C725A8363D614BC (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BFB3B2662D4F5D8EC1EE09E26D789CA17182134);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:202>
		bool L_0;
		L_0 = InstructionManager_IsCurrentStep_mFA1ADF7BA987901C2FE36D9CF031AD58AFFB7A0B(__this, 5, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:202>
		return;
	}

IL_000a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:204>
		__this->___currentStep = ((int32_t)99);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:206>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___understoodButton;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:207>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___understoodButton;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
	}

IL_002c:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:209>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___bathroomCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:210>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___bathroomCheck;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
	}

IL_0046:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:212>
		InstructionManager_PlaySuccessFeedback_m364750FCE52A5A9FAED96BCFDA087EF21A17236B(__this, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:214>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_7 = __this->___bathroomText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_006a;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:215>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_9 = __this->___bathroomText;
		NullCheck(L_9);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_9, _stringLiteral9BFB3B2662D4F5D8EC1EE09E26D789CA17182134);
	}

IL_006a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:217>
		RuntimeObject* L_10;
		L_10 = InstructionManager_EndExperienceRoutine_m1B4C4A6CB3AE7F573D583A0739DC0AA2E4FF9E7A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_10, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:218>
		return;
	}
}
// Method Definition Index: 129936
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InstructionManager_EndExperienceRoutine_m1B4C4A6CB3AE7F573D583A0739DC0AA2E4FF9E7A (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E* L_0 = (U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E*)il2cpp_codegen_object_new(U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E_il2cpp_TypeInfo_var);
		U3CEndExperienceRoutineU3Ed__25__ctor_m991BE684A75FEBDC8BCE47A7970E2CA17ED55FA2(L_0, 0, NULL);
		U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this), (void*)__this);
		return L_1;
	}
}
// Method Definition Index: 129937
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager_PlaySuccessFeedback_m364750FCE52A5A9FAED96BCFDA087EF21A17236B (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:233>
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_0 = __this->___successParticles;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:234>
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_2 = __this->___successParticles;
		NullCheck(L_2);
		ParticleSystem_Play_mD943E601BFE16CB9BB5D1F5E6AED5C36F5F11EF5(L_2, NULL);
	}

IL_0019:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:236>
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_3 = __this->___successAudio;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:237>
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = __this->___successAudio;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
	}

IL_0032:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:238>
		return;
	}
}
// Method Definition Index: 129938
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstructionManager__ctor_mFD1795F3D6B236490BBD62B50D98FDD93869EA2C (InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:24>
		__this->___currentStep = (-1);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129939
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndExperienceRoutineU3Ed__25__ctor_m991BE684A75FEBDC8BCE47A7970E2CA17ED55FA2 (U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
// Method Definition Index: 129940
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndExperienceRoutineU3Ed__25_System_IDisposable_Dispose_mD6A2CAE8484069ABA604C18461B164417683D15B (U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 129941
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEndExperienceRoutineU3Ed__25_MoveNext_m1CED8906959CECDB061883E5A090DEE5294EA93C (U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86B92D82D7A4165CD9A52C68B4373EAEE63C9888);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:222>
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (4.0f), NULL);
		__this->___U3CU3E2__current = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_4);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:224>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___bathroomCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0058;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:225>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___bathroomCheck;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
	}

IL_0058:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:227>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_10 = V_1;
		NullCheck(L_10);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_11 = L_10->___bathroomText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_12;
		L_12 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_11, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_12)
		{
			goto IL_0076;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:228>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_13 = V_1;
		NullCheck(L_13);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_14 = L_13->___bathroomText;
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_14, _stringLiteral86B92D82D7A4165CD9A52C68B4373EAEE63C9888);
	}

IL_0076:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:229>
		return (bool)0;
	}
}
// Method Definition Index: 129942
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndExperienceRoutineU3Ed__25_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5977B6482BEA59EF6CBAEE1146B8A4589823536A (U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 129943
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEndExperienceRoutineU3Ed__25_System_Collections_IEnumerator_Reset_m89FF2B5A5046E4D2AE276978B113DAC080C41F99 (U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEndExperienceRoutineU3Ed__25_System_Collections_IEnumerator_Reset_m89FF2B5A5046E4D2AE276978B113DAC080C41F99_RuntimeMethod_var)));
	}
}
// Method Definition Index: 129944
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEndExperienceRoutineU3Ed__25_System_Collections_IEnumerator_get_Current_mD2244FA6F9397A470C96480C6FDDF4C62603B68D (U3CEndExperienceRoutineU3Ed__25_t6A894DA75A7ADF7942C1B1BEF59A79617DDEAA4E* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129945
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMirrorStepRoutineU3Ed__15__ctor_mEDB94269FAE48DFFD19C764D18818216D3BFDCA0 (U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
// Method Definition Index: 129946
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMirrorStepRoutineU3Ed__15_System_IDisposable_Dispose_mDFD9342BD2ACD3E187C827ECCC3E511931C9B602 (U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 129947
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMirrorStepRoutineU3Ed__15_MoveNext_m9EF0D104D5FE4DF62799F8BB1E0D1FBA32BDF86C (U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E9D401FA40916AADDCEA7C1B60C5BDF08D9ECAD);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:64>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_4 = V_1;
		NullCheck(L_4);
		L_4->___currentStep = ((int32_t)99);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:66>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___introCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:67>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___introCheck;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
	}

IL_0040:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:69>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_10 = V_1;
		NullCheck(L_10);
		InstructionManager_PlaySuccessFeedback_m364750FCE52A5A9FAED96BCFDA087EF21A17236B(L_10, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:71>
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (1.20000005f), NULL);
		__this->___U3CU3E2__current = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_11);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_005f:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:73>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___introCanvas;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0080;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:74>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_15 = V_1;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___introCanvas;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
	}

IL_0080:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:76>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_17 = V_1;
		NullCheck(L_17);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = L_17->___bathroomCanvas;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_009a;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:77>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_20 = V_1;
		NullCheck(L_20);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = L_20->___bathroomCanvas;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)1, NULL);
	}

IL_009a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:79>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_22 = V_1;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = L_22->___bathroomCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:80>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_25 = V_1;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___bathroomCheck;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
	}

IL_00b4:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:82>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_27 = V_1;
		NullCheck(L_27);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_28 = L_27->___bathroomText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_28, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_29)
		{
			goto IL_00d2;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:83>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_30 = V_1;
		NullCheck(L_30);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_31 = L_30->___bathroomText;
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_31, _stringLiteral7E9D401FA40916AADDCEA7C1B60C5BDF08D9ECAD);
	}

IL_00d2:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:85>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_32 = V_1;
		NullCheck(L_32);
		L_32->___currentStep = 1;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:86>
		return (bool)0;
	}
}
// Method Definition Index: 129948
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMirrorStepRoutineU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m15502DB6E16917B87C85A889332C2BF4A974647A (U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 129949
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMirrorStepRoutineU3Ed__15_System_Collections_IEnumerator_Reset_mC306DCB5431D45897ECEFECFEE7FA3413C5DE748 (U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMirrorStepRoutineU3Ed__15_System_Collections_IEnumerator_Reset_mC306DCB5431D45897ECEFECFEE7FA3413C5DE748_RuntimeMethod_var)));
	}
}
// Method Definition Index: 129950
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CMirrorStepRoutineU3Ed__15_System_Collections_IEnumerator_get_Current_m3FE7CC0887F95AFC069C629D0989B038B24D59CD (U3CMirrorStepRoutineU3Ed__15_t61FB02FFE99C0819B084CC840A38D43516834736* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129951
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShirtStepRoutineU3Ed__17__ctor_m855A20199D6B88F93B6563905D69233B3F7D4736 (U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
// Method Definition Index: 129952
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShirtStepRoutineU3Ed__17_System_IDisposable_Dispose_m3EA13294BA3CD91B656E9A962171860A34B67B33 (U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 129953
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShirtStepRoutineU3Ed__17_MoveNext_m023BE1E93395C93F788CBFFD268F7935E58E2503 (U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E8A145EBB1D9A4F1574A31248BE2C4A296BA056);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:100>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_4 = V_1;
		NullCheck(L_4);
		L_4->___currentStep = ((int32_t)99);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:102>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___bathroomCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:103>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___bathroomCheck;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
	}

IL_0040:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:105>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_10 = V_1;
		NullCheck(L_10);
		InstructionManager_PlaySuccessFeedback_m364750FCE52A5A9FAED96BCFDA087EF21A17236B(L_10, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:107>
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (1.20000005f), NULL);
		__this->___U3CU3E2__current = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_11);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_005f:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:109>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___bathroomCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0080;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:110>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_15 = V_1;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___bathroomCheck;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
	}

IL_0080:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:112>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_17 = V_1;
		NullCheck(L_17);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_18 = L_17->___bathroomText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_009e;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:113>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_20 = V_1;
		NullCheck(L_20);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_21 = L_20->___bathroomText;
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_21, _stringLiteral0E8A145EBB1D9A4F1574A31248BE2C4A296BA056);
	}

IL_009e:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:115>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_22 = V_1;
		NullCheck(L_22);
		L_22->___currentStep = 2;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:116>
		return (bool)0;
	}
}
// Method Definition Index: 129954
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShirtStepRoutineU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m016B84BD514DFBA2339AFE026BE0BF74CEE4DDE0 (U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 129955
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShirtStepRoutineU3Ed__17_System_Collections_IEnumerator_Reset_mABCFA44207347EBEEC9F2EFD1E5F251E95EA9B83 (U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShirtStepRoutineU3Ed__17_System_Collections_IEnumerator_Reset_mABCFA44207347EBEEC9F2EFD1E5F251E95EA9B83_RuntimeMethod_var)));
	}
}
// Method Definition Index: 129956
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShirtStepRoutineU3Ed__17_System_Collections_IEnumerator_get_Current_m7060F86E06A8FFF4A89DA72844286157475CFEFD (U3CShirtStepRoutineU3Ed__17_t7155E30620BBE3A447EF655DDA5000AC278EA741* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129957
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSoapStepRoutineU3Ed__19__ctor_m440037A7226D6E7BF43A48478109E193962B942A (U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
// Method Definition Index: 129958
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSoapStepRoutineU3Ed__19_System_IDisposable_Dispose_m5390B9249FD985B0FF178D9BD6E4419B1A6B5767 (U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 129959
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSoapStepRoutineU3Ed__19_MoveNext_m1F1AEF16C78C33A083BA7A039D7F04F38B33F8E1 (U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD2661614671ED2D7EEBC84AA3071FA4C5DE5AE7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:126>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_4 = V_1;
		NullCheck(L_4);
		L_4->___currentStep = ((int32_t)99);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:128>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___bathroomCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:129>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___bathroomCheck;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
	}

IL_0040:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:131>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_10 = V_1;
		NullCheck(L_10);
		InstructionManager_PlaySuccessFeedback_m364750FCE52A5A9FAED96BCFDA087EF21A17236B(L_10, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:133>
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (1.20000005f), NULL);
		__this->___U3CU3E2__current = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_11);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_005f:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:135>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___bathroomCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0080;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:136>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_15 = V_1;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___bathroomCheck;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
	}

IL_0080:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:138>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_17 = V_1;
		NullCheck(L_17);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_18 = L_17->___bathroomText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_009e;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:139>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_20 = V_1;
		NullCheck(L_20);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_21 = L_20->___bathroomText;
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_21, _stringLiteralFD2661614671ED2D7EEBC84AA3071FA4C5DE5AE7);
	}

IL_009e:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:141>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_22 = V_1;
		NullCheck(L_22);
		L_22->___currentStep = 3;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:142>
		return (bool)0;
	}
}
// Method Definition Index: 129960
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSoapStepRoutineU3Ed__19_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE7399C15934A42A49BA69DB168F5772DFFD8A484 (U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 129961
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSoapStepRoutineU3Ed__19_System_Collections_IEnumerator_Reset_mD8DAF7EB01B9FEFD731E3900CF2B1680EC8AF05A (U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSoapStepRoutineU3Ed__19_System_Collections_IEnumerator_Reset_mD8DAF7EB01B9FEFD731E3900CF2B1680EC8AF05A_RuntimeMethod_var)));
	}
}
// Method Definition Index: 129962
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSoapStepRoutineU3Ed__19_System_Collections_IEnumerator_get_Current_m8BFC05A1C78523180240230537701F18CF4D62F2 (U3CSoapStepRoutineU3Ed__19_t4BA1D86B2E9092CD08A335757385503D6D56F546* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129963
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTowelStepRoutineU3Ed__23__ctor_m86ECC9D2037859C1F9894E92A91D55F289543F64 (U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
// Method Definition Index: 129964
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTowelStepRoutineU3Ed__23_System_IDisposable_Dispose_m45354A3CFF28F95C9B48BEEE0674B58468A12071 (U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 129965
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTowelStepRoutineU3Ed__23_MoveNext_m33EB4FE0AD7294F29A5E3792F11F1CB757855FD2 (U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9C2C3853A89F093F65843F82AFDE780EDCC05B6);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:178>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_4 = V_1;
		NullCheck(L_4);
		L_4->___currentStep = ((int32_t)99);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:180>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___bathroomCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:181>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___bathroomCheck;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
	}

IL_0040:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:183>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_10 = V_1;
		NullCheck(L_10);
		InstructionManager_PlaySuccessFeedback_m364750FCE52A5A9FAED96BCFDA087EF21A17236B(L_10, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:185>
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (1.20000005f), NULL);
		__this->___U3CU3E2__current = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_11);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_005f:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:187>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___bathroomCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0080;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:188>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_15 = V_1;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___bathroomCheck;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
	}

IL_0080:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:190>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_17 = V_1;
		NullCheck(L_17);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_18 = L_17->___bathroomText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_009e;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:191>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:192>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_20 = V_1;
		NullCheck(L_20);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_21 = L_20->___bathroomText;
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_21, _stringLiteralC9C2C3853A89F093F65843F82AFDE780EDCC05B6);
	}

IL_009e:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:194>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_22 = V_1;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = L_22->___understoodButton;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_23, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_24)
		{
			goto IL_00b8;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:195>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_25 = V_1;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = L_25->___understoodButton;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)1, NULL);
	}

IL_00b8:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:197>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_27 = V_1;
		NullCheck(L_27);
		L_27->___currentStep = 5;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:198>
		return (bool)0;
	}
}
// Method Definition Index: 129966
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTowelStepRoutineU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3E16E620F4CEBA3CDF60A5DE505D9B93EB68A5F8 (U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 129967
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTowelStepRoutineU3Ed__23_System_Collections_IEnumerator_Reset_m4A7AEC34F160BE6E8A9CEDE1DF15E0ADE5C125CD (U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTowelStepRoutineU3Ed__23_System_Collections_IEnumerator_Reset_m4A7AEC34F160BE6E8A9CEDE1DF15E0ADE5C125CD_RuntimeMethod_var)));
	}
}
// Method Definition Index: 129968
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTowelStepRoutineU3Ed__23_System_Collections_IEnumerator_get_Current_m5E5B637F87CFE4884B2845A23FE223794DFA8720 (U3CTowelStepRoutineU3Ed__23_t0998695466238672A09FE231E6F5C4B028CADB06* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129969
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterStepRoutineU3Ed__21__ctor_mE846DA7D054A30DA5CD1AD17D95DB6AC5D879E29 (U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state = L_0;
		return;
	}
}
// Method Definition Index: 129970
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterStepRoutineU3Ed__21_System_IDisposable_Dispose_mC20C7FD1AB6C966266C0358510CFE89A121BCC7F (U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Method Definition Index: 129971
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaterStepRoutineU3Ed__21_MoveNext_mFD2B16790D96277EEC403C2CE311D02AFFF17CC7 (U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral585709405E0A171459CA1F450D6BD002BE808958);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state;
		V_0 = L_0;
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_1 = __this->___U3CU3E4__this;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:152>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_4 = V_1;
		NullCheck(L_4);
		L_4->___currentStep = ((int32_t)99);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:154>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___bathroomCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:155>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___bathroomCheck;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)1, NULL);
	}

IL_0040:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:157>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_10 = V_1;
		NullCheck(L_10);
		InstructionManager_PlaySuccessFeedback_m364750FCE52A5A9FAED96BCFDA087EF21A17236B(L_10, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:159>
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_11 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_11, (1.20000005f), NULL);
		__this->___U3CU3E2__current = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current), (void*)L_11);
		__this->___U3CU3E1__state = 1;
		return (bool)1;
	}

IL_005f:
	{
		__this->___U3CU3E1__state = (-1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:161>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_12 = V_1;
		NullCheck(L_12);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = L_12->___bathroomCheck;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_14)
		{
			goto IL_0080;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:162>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_15 = V_1;
		NullCheck(L_15);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = L_15->___bathroomCheck;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
	}

IL_0080:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:164>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_17 = V_1;
		NullCheck(L_17);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_18 = L_17->___bathroomText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_19)
		{
			goto IL_009e;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:165>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_20 = V_1;
		NullCheck(L_20);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_21 = L_20->___bathroomText;
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_21, _stringLiteral585709405E0A171459CA1F450D6BD002BE808958);
	}

IL_009e:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:167>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_22 = V_1;
		NullCheck(L_22);
		L_22->___currentStep = 4;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/InstructionManager.cs:168>
		return (bool)0;
	}
}
// Method Definition Index: 129972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaterStepRoutineU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD1FFE923C5C15D6E79020EC2A2BAC08B6B6D04CA (U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
// Method Definition Index: 129973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaterStepRoutineU3Ed__21_System_Collections_IEnumerator_Reset_mE02434849FFC0AFC71BB917F5A59952BCF889CA3 (U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaterStepRoutineU3Ed__21_System_Collections_IEnumerator_Reset_mE02434849FFC0AFC71BB917F5A59952BCF889CA3_RuntimeMethod_var)));
	}
}
// Method Definition Index: 129974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CWaterStepRoutineU3Ed__21_System_Collections_IEnumerator_get_Current_m1F0E336A30BF34844CDAD5A83363B49D5DD17568 (U3CWaterStepRoutineU3Ed__21_t211B324AEF1FBBB05FCCC977BDC3B8A1E2B30CE7* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129975
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MirrorStepTrigger_OnTriggerEnter_m43774E7829B09FEC62C0253126C1D73B2D585B65 (MirrorStepTrigger_tA7722F683C13C69CDFF87C60F7D8D61B9F6741BE* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:12>
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		bool L_1;
		L_1 = MirrorStepTrigger_IsPlayer_m0DB811EB230449A5ADCF40E9610E0E65741B41C8(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:12>
		return;
	}

IL_000a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:15>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_2 = __this->___instructionManager;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_3)
		{
			goto IL_0026;
		}
	}
	{
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_4 = __this->___instructionManager;
		NullCheck(L_4);
		bool L_5;
		L_5 = InstructionManager_IsCurrentStep_mFA1ADF7BA987901C2FE36D9CF031AD58AFFB7A0B(L_4, 0, NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}

IL_0026:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:17>
		__this->___playerWasInside = (bool)1;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:18>
		return;
	}

IL_002e:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:22>
		bool L_6 = __this->___playerWasInside;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:22>
		return;
	}

IL_0037:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:24>
		MirrorStepTrigger_CompleteStep_mC372CE5B01E179A15839C920496846FC0B6E7DC4(__this, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:25>
		return;
	}
}
// Method Definition Index: 129976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MirrorStepTrigger_OnTriggerExit_m0ECF35890A6A316FC841A595078D73FD59662209 (MirrorStepTrigger_tA7722F683C13C69CDFF87C60F7D8D61B9F6741BE* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:29>
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		bool L_1;
		L_1 = MirrorStepTrigger_IsPlayer_m0DB811EB230449A5ADCF40E9610E0E65741B41C8(__this, L_0, NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:29>
		return;
	}

IL_000a:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:31>
		__this->___playerWasInside = (bool)0;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:32>
		return;
	}
}
// Method Definition Index: 129977
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MirrorStepTrigger_IsPlayer_m0DB811EB230449A5ADCF40E9610E0E65741B41C8 (MirrorStepTrigger_tA7722F683C13C69CDFF87C60F7D8D61B9F6741BE* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E59A9F9DA37A05B58E7A1FCC2DE7D33725F73CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:36>
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___0_other;
		NullCheck(L_0);
		bool L_1;
		L_1 = Component_CompareTag_mE6F8897E84F12DF12D302FFC4D58204D51096FC5(L_0, _stringLiteralE302AA9BECF9F1CB69CF2A3E5B33E0716BEA97F6, NULL);
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_2 = ___0_other;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_3, _stringLiteral5E59A9F9DA37A05B58E7A1FCC2DE7D33725F73CA, NULL);
		return L_4;
	}

IL_001e:
	{
		return (bool)1;
	}
}
// Method Definition Index: 129978
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MirrorStepTrigger_CompleteStep_mC372CE5B01E179A15839C920496846FC0B6E7DC4 (MirrorStepTrigger_tA7722F683C13C69CDFF87C60F7D8D61B9F6741BE* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:41>
		bool L_0 = __this->___completed;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:41>
		return;
	}

IL_0009:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:43>
		__this->___completed = (bool)1;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:44>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_1 = __this->___instructionManager;
		NullCheck(L_1);
		InstructionManager_CompleteMirrorStep_m69CFD8817584F7867D5A382C99A6B0D62927EEAA(L_1, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/MirrorStepTrigger.cs:45>
		return;
	}
}
// Method Definition Index: 129979
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MirrorStepTrigger__ctor_m06017864878EBFADFFD60D2AD566F7F61157DA3D (MirrorStepTrigger_tA7722F683C13C69CDFF87C60F7D8D61B9F6741BE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129980
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCloseDoor_Update_m0B58A0C42C53BFC37D7FAE12EDE292C647ED607A (OpenCloseDoor_t31BE5A69CD7EB259A742F5E26F516D18AE629EB5* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float G_B5_0 = 0.0f;
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/OpenCloseDoor.cs:16>
		int32_t L_0 = __this->___interactionKey;
		bool L_1;
		L_1 = Input_GetKeyDown_mB237DEA6244132670D38990BAB77D813FBB028D2(L_0, NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/OpenCloseDoor.cs:18>
		bool L_2 = __this->___isOpen;
		__this->___isOpen = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_001c:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/OpenCloseDoor.cs:21>
		bool L_3 = __this->___isOpen;
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		float L_4 = __this->___closedAngle;
		G_B5_0 = L_4;
		goto IL_0032;
	}

IL_002c:
	{
		float L_5 = __this->___openAngle;
		G_B5_0 = L_5;
	}

IL_0032:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/OpenCloseDoor.cs:23>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___rotationAxis;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80_inline(G_B5_0, L_6, NULL);
		V_0 = L_7;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/OpenCloseDoor.cs:25>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/OpenCloseDoor.cs:26>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/OpenCloseDoor.cs:27>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/OpenCloseDoor.cs:28>
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/OpenCloseDoor.cs:29>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = V_0;
		float L_12;
		L_12 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_13 = __this->___speed;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D_inline(L_10, L_11, ((float)il2cpp_codegen_multiply(L_12, L_13)), NULL);
		NullCheck(L_8);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_8, L_14, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/OpenCloseDoor.cs:30>
		return;
	}
}
// Method Definition Index: 129981
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OpenCloseDoor__ctor_m524E843A8F8096CD29F2F02111D19333AFA6CDDA (OpenCloseDoor_t31BE5A69CD7EB259A742F5E26F516D18AE629EB5* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/OpenCloseDoor.cs:6>
		__this->___openAngle = (90.0f);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/OpenCloseDoor.cs:7>
		__this->___speed = (2.0f);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/OpenCloseDoor.cs:8>
		__this->___interactionKey = ((int32_t)101);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/OpenCloseDoor.cs:10>
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___rotationAxis = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129982
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMenuUI_ShowPanel_m36721829373FFF11E0F6BAD3AF767132BB81B378 (SelectionMenuUI_tAB25C668FCEBC7436438289E5A864F3484167FA6* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:20>
		V_0 = 0;
		goto IL_0019;
	}

IL_0004:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:22>
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_0 = __this->___panels;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = V_0;
		int32_t L_5 = ___0_index;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0), NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:20>
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0019:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:20>
		int32_t L_7 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___panels;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:24>
		return;
	}
}
// Method Definition Index: 129983
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMenuUI_StartExperience_m358F240378060A8B0E9E26361982B7E71A26A006 (SelectionMenuUI_tAB25C668FCEBC7436438289E5A864F3484167FA6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D54CF025485D368BD653670F343F961E8A683C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AD7E11F4475E335CEE09709C3B020C8590B9842);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD096B1321B858086729B5A44824E697540D4F26D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD14634CC35A49A9778FE1CB8C2AF7335B31920D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:28>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___selectionMenu;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:30>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___bathroomScene;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:31>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___bathroomScene;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
	}

IL_0026:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:33>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___xrOrigin;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_00b7;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:35>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___xrOrigin;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)1, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:37>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___xrOrigin;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_8, _stringLiteral4AD7E11F4475E335CEE09709C3B020C8590B9842, NULL);
		V_1 = L_9;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:38>
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), (0.0f), NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:40>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_00b7;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:42>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = V_1;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___xrOrigin;
		NullCheck(L_14);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		NullCheck(L_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_16, NULL);
		V_3 = L_17;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:43>
		(&V_3)->___y = (0.0f);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:44>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___xrOrigin;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_20, L_21, NULL);
		NullCheck(L_19);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_19, L_22, NULL);
	}

IL_00b7:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:48>
		AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* L_23 = __this->___avatarSelectionManager;
		NullCheck(L_23);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = AvatarSelectionManager_GetActiveAvatar_m176E27295924267CB2A75C3F744F993B53484D44_inline(L_23, NULL);
		V_0 = L_24;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:50>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_25, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_26)
		{
			goto IL_00d7;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:52>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral0D54CF025485D368BD653670F343F961E8A683C3, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:53>
		return;
	}

IL_00d7:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:56>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_0;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29;
		L_29 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_28, _stringLiteralDD14634CC35A49A9778FE1CB8C2AF7335B31920D, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:58>
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_30;
		L_30 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_29, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_30)
		{
			goto IL_00fa;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:60>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralD096B1321B858086729B5A44824E697540D4F26D, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:61>
		return;
	}

IL_00fa:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:64>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_31 = __this->___instructionManager;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_31, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_32)
		{
			goto IL_0113;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:66>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_33 = __this->___instructionManager;
		NullCheck(L_33);
		InstructionManager_StartInstructions_mE19931D53E6A30DC0FDF3DD4261CACF216FC1DF8(L_33, NULL);
	}

IL_0113:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SelectionMenuUI.cs:68>
		return;
	}
}
// Method Definition Index: 129984
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SelectionMenuUI__ctor_m4D7438F2C1C5DB846BBD160A32BBB56236B1AF29 (SelectionMenuUI_tAB25C668FCEBC7436438289E5A864F3484167FA6* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129985
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShirtHandTrigger_OnTriggerEnter_mE57EDA7CF9EF2AAE5261BA0F16F8CCB314128C09 (ShirtHandTrigger_t114FEC2736D12E014E9A1FC3A8314CCD0491186B* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D5174454E3D3F9E783E0B8B821F8B1A68A0547F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF91CCC42729FED4D77421D6F8E1B13F461E983A);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/ShirtHandTrigger.cs:11>
		bool L_0 = __this->___removed;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/ShirtHandTrigger.cs:11>
		return;
	}

IL_0009:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/ShirtHandTrigger.cs:13>
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___0_other;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (L_3)
		{
			goto IL_003f;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_4 = ___0_other;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_4, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_5, _stringLiteralFF91CCC42729FED4D77421D6F8E1B13F461E983A, NULL);
		if (L_6)
		{
			goto IL_003f;
		}
	}
	{
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_7 = ___0_other;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		NullCheck(L_8);
		bool L_9;
		L_9 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_8, _stringLiteral5D5174454E3D3F9E783E0B8B821F8B1A68A0547F, NULL);
		if (!L_9)
		{
			goto IL_0065;
		}
	}

IL_003f:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/ShirtHandTrigger.cs:15>
		__this->___removed = (bool)1;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/ShirtHandTrigger.cs:17>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_10 = __this->___instructionManager;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_10, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_11)
		{
			goto IL_0065;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/ShirtHandTrigger.cs:19>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_12 = __this->___instructionManager;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_12);
		InstructionManager_RemoveShirt_m991B7E1D3A2F1C05F05EEA188CFE5197730BF87F(L_12, L_13, NULL);
	}

IL_0065:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/ShirtHandTrigger.cs:22>
		return;
	}
}
// Method Definition Index: 129986
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShirtHandTrigger__ctor_m82D604AD2FC0A4ECDBF6255E146C2AFEC19681EC (ShirtHandTrigger_t114FEC2736D12E014E9A1FC3A8314CCD0491186B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129987
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShirtInteraction_RemoveShirt_m947F1451AE74961531E3D2EE2A08B9EBC375D8EA (ShirtInteraction_t255774F036FFDA0397EE343495F748415B2169D4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/ShirtInteraction.cs:11>
		bool L_0 = __this->___removed;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/ShirtInteraction.cs:11>
		return;
	}

IL_0009:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/ShirtInteraction.cs:13>
		__this->___removed = (bool)1;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/ShirtInteraction.cs:15>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/ShirtInteraction.cs:17>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_2 = __this->___instructionManager;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/ShirtInteraction.cs:19>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_4 = __this->___instructionManager;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_4);
		InstructionManager_RemoveShirt_m991B7E1D3A2F1C05F05EEA188CFE5197730BF87F(L_4, L_5, NULL);
	}

IL_003b:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/ShirtInteraction.cs:21>
		return;
	}
}
// Method Definition Index: 129988
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShirtInteraction__ctor_m51FDA120ABC093982612893A97856C76950EB14F (ShirtInteraction_t255774F036FFDA0397EE343495F748415B2169D4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129989
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoapTrigger_OnTriggerEnter_mB20D71422F0AACD9DA48F1092F4EBC99B429CA9B (SoapTrigger_tB717EEE25B954F7D1101D854CA2BE71074727144* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SoapTrigger.cs:11>
		bool L_0 = __this->___completed;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SoapTrigger.cs:11>
		return;
	}

IL_0009:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SoapTrigger.cs:13>
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___0_other;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SoapTrigger.cs:15>
		__this->___completed = (bool)1;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SoapTrigger.cs:17>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_4 = __this->___instructionManager;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SoapTrigger.cs:18>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_6 = __this->___instructionManager;
		NullCheck(L_6);
		InstructionManager_CompleteSoapStep_mDC82D48A71498D1F1065FF8396CFB7FA4908B0F8(L_6, NULL);
	}

IL_003b:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/SoapTrigger.cs:20>
		return;
	}
}
// Method Definition Index: 129990
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SoapTrigger__ctor_m016406928076C281BFACF159DE1555B47F8D634D (SoapTrigger_tB717EEE25B954F7D1101D854CA2BE71074727144* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129991
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowelTrigger_OnTriggerEnter_m221E2BAB23BFF0B06E63EEBD24BE489C09336A9F (TowelTrigger_tD9E160B19D3C972269883B81C5BCD29F487237A2* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/TowelTrigger.cs:11>
		bool L_0 = __this->___completed;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/TowelTrigger.cs:11>
		return;
	}

IL_0009:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/TowelTrigger.cs:13>
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___0_other;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/TowelTrigger.cs:15>
		__this->___completed = (bool)1;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/TowelTrigger.cs:17>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_4 = __this->___instructionManager;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/TowelTrigger.cs:18>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_6 = __this->___instructionManager;
		NullCheck(L_6);
		InstructionManager_CompleteTowelStep_m149426543EC3D88F65C16C15A7A86BA791CFC979(L_6, NULL);
	}

IL_003b:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/TowelTrigger.cs:20>
		return;
	}
}
// Method Definition Index: 129992
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TowelTrigger__ctor_m199EBC4C426EB4141990F9E60CA3D1CE5D68E97A (TowelTrigger_tD9E160B19D3C972269883B81C5BCD29F487237A2* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129993
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRExperienceStarter_SelectSlim_mEFE6CB2A991BB8FB6F36C061A2DC92ECE7E20DC6 (VRExperienceStarter_tE8ED61EA206751127AEA7C6EA71A236AEAEB1127* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:28>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___slimHeadAnchor;
		__this->___selectedHeadAnchor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedHeadAnchor), (void*)L_0);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:29>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___avatarSlim;
		__this->___selectedAvatar = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedAvatar), (void*)L_1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:30>
		return;
	}
}
// Method Definition Index: 129994
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRExperienceStarter_SelectMedium_m06408CF34CC6F5C22295EDE55AAB97A30CB01FA9 (VRExperienceStarter_tE8ED61EA206751127AEA7C6EA71A236AEAEB1127* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:34>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___mediumHeadAnchor;
		__this->___selectedHeadAnchor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedHeadAnchor), (void*)L_0);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:35>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___avatarMedium;
		__this->___selectedAvatar = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedAvatar), (void*)L_1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:36>
		return;
	}
}
// Method Definition Index: 129995
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRExperienceStarter_SelectWide_m723E0B71914FBD4F3AE652ACFBE198482EEE386C (VRExperienceStarter_tE8ED61EA206751127AEA7C6EA71A236AEAEB1127* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:40>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___wideHeadAnchor;
		__this->___selectedHeadAnchor = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedHeadAnchor), (void*)L_0);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:41>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___avatarWide;
		__this->___selectedAvatar = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedAvatar), (void*)L_1);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:42>
		return;
	}
}
// Method Definition Index: 129996
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRExperienceStarter_StartExperience_m714C6C95151573A9D63DDFA39A92C7B427113D65 (VRExperienceStarter_tE8ED61EA206751127AEA7C6EA71A236AEAEB1127* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45347342097076C7CC7F693D42A0DB3BD082457D);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:46>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___selectedHeadAnchor;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:48>
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteral45347342097076C7CC7F693D42A0DB3BD082457D, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:49>
		return;
	}

IL_0019:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:52>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___avatarSlim;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:53>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___avatarMedium;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:54>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___avatarWide;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:56>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___selectedAvatar;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)1, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:58>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6 = __this->___centerEyeAnchor;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8 = __this->___cameraRig;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_9, NULL);
		V_0 = L_10;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:59>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = __this->___cameraRig;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12 = __this->___selectedHeadAnchor;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_13, L_14, NULL);
		NullCheck(L_11);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_15, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:61>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___cameraRig;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17 = __this->___selectedHeadAnchor;
		NullCheck(L_17);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_17, NULL);
		NullCheck(L_16);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_16, L_18, NULL);
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:63>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___selectionMenu;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00b1;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:64>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___selectionMenu;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
	}

IL_00b1:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:66>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___instructionCanvas;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_23)
		{
			goto IL_00cb;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:67>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___instructionCanvas;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)1, NULL);
	}

IL_00cb:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/VRExperienceStarter.cs:68>
		return;
	}
}
// Method Definition Index: 129997
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VRExperienceStarter__ctor_m7D0373FECAE370CEADE780DC440E7429133D3B06 (VRExperienceStarter_tE8ED61EA206751127AEA7C6EA71A236AEAEB1127* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 129998
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterTrigger_OnTriggerEnter_mD0A07A27B8156F1979A01600B3D50BDABD1D492A (WaterTrigger_t2C5CEE5FB3AB474809A94E1321296770F620AB66* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/WaterTrigger.cs:11>
		bool L_0 = __this->___completed;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/WaterTrigger.cs:11>
		return;
	}

IL_0009:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/WaterTrigger.cs:13>
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = ___0_other;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_1, NULL);
		NullCheck(L_2);
		bool L_3;
		L_3 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_2, _stringLiteral34DCA05D8BE72FF2DADEA6AED17DD247B6588439, NULL);
		if (!L_3)
		{
			goto IL_003b;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/WaterTrigger.cs:15>
		__this->___completed = (bool)1;
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/WaterTrigger.cs:17>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_4 = __this->___instructionManager;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/WaterTrigger.cs:18>
		InstructionManager_t656EFB1AA7CBEB12899823326E8C0B34A77B20B7* L_6 = __this->___instructionManager;
		NullCheck(L_6);
		InstructionManager_CompleteWaterStep_mA5CB9084F15D333BF486D0E604CC60D1A62590B9(L_6, NULL);
	}

IL_003b:
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/WaterTrigger.cs:20>
		return;
	}
}
// Method Definition Index: 129999
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterTrigger__ctor_m0535725B059FBBE8A40008D1CA71E27A70499AAC (WaterTrigger_t2C5CEE5FB3AB474809A94E1321296770F620AB66* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 130000
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 130001
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 130002
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mBEB95BEB954BB63E9710BBC7AD5E78C4CB0A0033 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____71D9761C005D98F11F876AF70D5BA64B86610C3FA564B26A8146BC7411A00F08_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E59C58BEE3958E3D927ACD40C7163337B7521448115A2AC7027DF8137222AAAC_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)559));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____E59C58BEE3958E3D927ACD40C7163337B7521448115A2AC7027DF8137222AAAC_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)292));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____71D9761C005D98F11F876AF70D5BA64B86610C3FA564B26A8146BC7411A00F08_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = ((int32_t)13);
		(&V_0)->___TotalTypes = ((int32_t)14);
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 130003
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mE70FB23ACC1EA12ABC948AA22C2E78B2D0AA39B1 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_back(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_cleanup(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com_back(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com_cleanup(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 65605
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		float L_0 = ___0_x;
		(&V_0)->___x = ((float)il2cpp_codegen_multiply(L_0, (0.0174532924f)));
		float L_1 = ___1_y;
		(&V_0)->___y = ((float)il2cpp_codegen_multiply(L_1, (0.0174532924f)));
		float L_2 = ___2_z;
		(&V_0)->___z = ((float)il2cpp_codegen_multiply(L_2, (0.0174532924f)));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3;
		L_3 = Quaternion_Internal_FromEulerRad_mD0C4C0EFE1D70EC0EA4A92B11F1A4D5B0A134E49((&V_0), NULL);
		return L_3;
	}
}
// Method Definition Index: 65555
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		(&V_0)->___x = ((float)il2cpp_codegen_add(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		(&V_0)->___y = ((float)il2cpp_codegen_add(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		(&V_0)->___z = ((float)il2cpp_codegen_add(L_9, L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		return L_12;
	}
}
// Method Definition Index: 65556
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		(&V_0)->___x = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		(&V_0)->___y = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		(&V_0)->___z = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		return L_12;
	}
}
// Method Definition Index: 65514
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x = L_0;
		float L_1 = ___1_y;
		__this->___y = L_1;
		float L_2 = ___2_z;
		__this->___z = L_2;
		return;
	}
}
// Method Definition Index: 65541
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	{
		float L_0 = __this->___x;
		float L_1 = __this->___x;
		float L_2 = __this->___y;
		float L_3 = __this->___y;
		float L_4 = __this->___z;
		float L_5 = __this->___z;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
	}
}
// Method Definition Index: 65536
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
// Method Definition Index: 65649
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 65539
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = __this->___x;
		float L_1 = __this->___x;
		float L_2 = __this->___y;
		float L_3 = __this->___y;
		float L_4 = __this->___z;
		float L_5 = __this->___z;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		return ((float)L_6);
	}
}
// Method Definition Index: 65645
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// Method Definition Index: 65528
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_Normalize_m1DE89849FE2019B6AA0031306896F3B800849399_inline(__this, NULL);
		return L_0;
	}
}
// Method Definition Index: 65553
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector;
		return L_0;
	}
}
// Method Definition Index: 65558
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		float L_2 = ___1_d;
		(&V_0)->___x = ((float)il2cpp_codegen_multiply(L_1, L_2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y;
		float L_5 = ___1_d;
		(&V_0)->___y = ((float)il2cpp_codegen_multiply(L_4, L_5));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z;
		float L_8 = ___1_d;
		(&V_0)->___z = ((float)il2cpp_codegen_multiply(L_7, L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		return L_9;
	}
}
// Method Definition Index: 65551
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_down_mF62B2AE7C5AC31EAC9CB62797C7190C90A7A8599_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___downVector;
		return L_0;
	}
}
// Method Definition Index: 65557
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x;
		(&V_0)->___x = ((-L_1));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y;
		(&V_0)->___y = ((-L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z;
		(&V_0)->___z = ((-L_5));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 65532
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_ProjectOnPlane_m68FB895F6E9FCC45676BB8B95857D091C0D78794_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_planeNormal, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		float L_0;
		L_0 = Vector3_Dot_m9B5EBE36643126708DB3F444C59C11FA30803DBB_inline((&___1_planeNormal), (&___1_planeNormal), NULL);
		V_0 = L_0;
		float L_1 = V_0;
		float L_2 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon;
		V_1 = (bool)((((float)L_1) < ((float)L_2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		V_2 = L_4;
		goto IL_006f;
	}

IL_001b:
	{
		float L_5;
		L_5 = Vector3_Dot_m9B5EBE36643126708DB3F444C59C11FA30803DBB_inline((&___0_vector), (&___1_planeNormal), NULL);
		float L_6 = V_0;
		V_3 = ((float)(L_5/L_6));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_vector;
		float L_8 = L_7.___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___1_planeNormal;
		float L_10 = L_9.___x;
		float L_11 = V_3;
		(&V_4)->___x = ((float)il2cpp_codegen_subtract(L_8, ((float)il2cpp_codegen_multiply(L_10, L_11))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_vector;
		float L_13 = L_12.___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_planeNormal;
		float L_15 = L_14.___y;
		float L_16 = V_3;
		(&V_4)->___y = ((float)il2cpp_codegen_subtract(L_13, ((float)il2cpp_codegen_multiply(L_15, L_16))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___0_vector;
		float L_18 = L_17.___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___1_planeNormal;
		float L_20 = L_19.___z;
		float L_21 = V_3;
		(&V_4)->___z = ((float)il2cpp_codegen_subtract(L_18, ((float)il2cpp_codegen_multiply(L_20, L_21))));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_4;
		V_2 = L_22;
		goto IL_006f;
	}

IL_006f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_2;
		return L_23;
	}
}
// Method Definition Index: 65569
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_mCB3100F93637E72455388B901C36EF8A25DFDB9A_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fromDirection, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_toDirection, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Quaternion_Internal_FromToRotation_m4A801EE9080CD4CBCB9319FF12EB7934E885932F((&___0_fromDirection), (&___1_toDirection), NULL);
		return L_0;
	}
}
// Method Definition Index: 65591
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y;
		(&V_0)->___x = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15))));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z;
		(&V_0)->___y = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31))));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x;
		(&V_0)->___z = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47))));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z;
		(&V_0)->___w = ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63))));
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64 = V_0;
		return L_64;
	}
}
// Method Definition Index: 65606
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_euler, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_euler;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		V_0 = L_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_mD0C4C0EFE1D70EC0EA4A92B11F1A4D5B0A134E49((&V_0), NULL);
		return L_2;
	}
}
// Method Definition Index: 29652
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRSkeleton_get_IsInitialized_mD0C73DF54C26EDDC73E93B5871804828C3FB0F4C_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@f4a2a776f923/Scripts/Util/OVRSkeleton.cs:426>
		bool L_0 = __this->___U3CIsInitializedU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 29654
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool OVRSkeleton_get_IsDataValid_m2B32059A233ABF9F01EE9B04A2C6A5A39A24883E_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@f4a2a776f923/Scripts/Util/OVRSkeleton.cs:435>
		bool L_0 = __this->___U3CIsDataValidU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 29658
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* OVRSkeleton_get_Bones_mA38877C10AAB3F56F41939A858400F267899304F_inline (OVRSkeleton_tB20461CF545E43EA4D24FC36EDE3D21B3ECA5374* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@f4a2a776f923/Scripts/Util/OVRSkeleton.cs:445>
		RuntimeObject* L_0 = __this->___U3CBonesU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 29708
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OVRBone_get_Id_m4BC533EE83B90F49F45D80E64A5EC5572E37E06C_inline (OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@f4a2a776f923/Scripts/Util/OVRSkeleton.cs:1598>
		int32_t L_0 = __this->___U3CIdU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 29712
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* OVRBone_get_Transform_m10B9A0E5ADEE62EA0668BA406E0D44084F87AF2F_inline (OVRBone_tB3106B7D44FF86F8A767E0E6160EAB259B70A14A* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:./Library/PackageCache/com.meta.xr.sdk.core@f4a2a776f923/Scripts/Util/OVRSkeleton.cs:1608>
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___U3CTransformU3Ek__BackingField;
		return L_0;
	}
}
// Method Definition Index: 65546
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector;
		return L_0;
	}
}
// Method Definition Index: 65583
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80_inline (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_angle;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Internal_AngleAxis_m1A896524F98EF69748915ED902CC9DCEF16245D4(L_0, (&___1_axis), NULL);
		return L_1;
	}
}
// Method Definition Index: 65577
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_a, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	{
		float L_0 = ___2_t;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Internal_Lerp_mB9D9E19C29CA86767758B70DCFF9DB7C65821B39((&___0_a), (&___1_b), L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 65550
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector;
		return L_0;
	}
}
// Method Definition Index: 129891
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* AvatarSelectionManager_GetActiveAvatar_m176E27295924267CB2A75C3F744F993B53484D44_inline (AvatarSelectionManager_tAA151E81AB01E8630A5DDB73B5EA1C75CAF92B5D* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/carlota.fernandez/Unity Projects/TFG mastectomia final/Assets/Scripts/AvatarSelectionManager.cs:14>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___activeAvatar;
		return L_0;
	}
}
// Method Definition Index: 65526
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m1DE89849FE2019B6AA0031306896F3B800849399_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		if ((((float)L_2) > ((float)(9.99999975E-06f))))
		{
			goto IL_0017;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector;
		G_B3_0 = L_3;
		goto IL_004d;
	}

IL_0017:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___0_value;
		float L_5 = L_4->___x;
		float L_6 = V_0;
		(&V_1)->___x = ((float)(L_5/L_6));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_value;
		float L_8 = L_7->___y;
		float L_9 = V_0;
		(&V_1)->___y = ((float)(L_8/L_9));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = ___0_value;
		float L_11 = L_10->___z;
		float L_12 = V_0;
		(&V_1)->___z = ((float)(L_11/L_12));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		G_B3_0 = L_13;
	}

IL_004d:
	{
		V_2 = G_B3_0;
		goto IL_0050;
	}

IL_0050:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_2;
		return L_14;
	}
}
// Method Definition Index: 65530
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Dot_m9B5EBE36643126708DB3F444C59C11FA30803DBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_rhs, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = ___0_lhs;
		float L_1 = L_0->___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___1_rhs;
		float L_3 = L_2->___x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___0_lhs;
		float L_5 = L_4->___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___1_rhs;
		float L_7 = L_6->___y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___0_lhs;
		float L_9 = L_8->___z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_10 = ___1_rhs;
		float L_11 = L_10->___z;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))));
	}
}
