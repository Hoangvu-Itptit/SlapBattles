#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct ABSTweenPlugin_3_tA51581359A1B697A7A0A8F2FFDE00794FA1E67F4;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct ABSTweenPlugin_3_tE7EF56C4695649256BA2077D8E447E739C869256;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>
struct ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7;
// System.Action`1<DG.Tweening.DOTweenAnimation>
struct Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>
struct DOGetter_1_t64F1C0E113DC45CC9A1FD194A80B7B4C40AC4923;
// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03;
// DG.Tweening.Core.DOGetter`1<System.String>
struct DOGetter_1_t65A2B66606014CD7EFBA1D8DDD1273F57511D146;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>
struct DOSetter_1_t1682EBCD9936CA04E27CEC6CFD3F7C8CD8584CDD;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200;
// DG.Tweening.Core.DOSetter`1<System.String>
struct DOSetter_1_t999572008E4C4CFE5EF6FA70393F8B092CA8C438;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1;
// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct TweenerCore_3_t390910F1CE8B4737AA72FEED470399C8DBE1AF8B;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>
struct TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77;
// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer>
struct UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// DG.Tweening.DOTweenAnimation[]
struct DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// DG.Tweening.Tween[]
struct TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// DG.Tweening.Core.ABSAnimationComponent
struct ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// DG.Tweening.DOTweenAnimation
struct DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DG.Tweening.EaseFunction
struct EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F;
// DG.Tweening.Sequence
struct Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C;
// DG.Tweening.Plugins.SpiralPlugin
struct SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C;
// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24;
// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362;
// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetType_t447F9EC340B2415E5A08FE18BF68AB046907A867_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87;
IL2CPP_EXTERN_C String_t* _stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75;
IL2CPP_EXTERN_C String_t* _stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE;
IL2CPP_EXTERN_C String_t* _stringLiteral7C74FE91B960EA053252893469BAA876CFA5735D;
IL2CPP_EXTERN_C String_t* _stringLiteral852803C0E0511404910B712837FFA455156FC4CE;
IL2CPP_EXTERN_C String_t* _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C;
IL2CPP_EXTERN_C String_t* _stringLiteral913C50E64A56501917C8F2949B1286A52BB08F32;
IL2CPP_EXTERN_C String_t* _stringLiteral95736F87FFB47A6CBA1FAEFC7529C2A3F3EE5E7A;
IL2CPP_EXTERN_C String_t* _stringLiteralC2702D9E80DE46EB93B5096879A1DA0332C4970B;
IL2CPP_EXTERN_C String_t* _stringLiteralD8EA9923B74BD243E764B8F9D62174B9D637CB97;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB;
IL2CPP_EXTERN_C String_t* _stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisDOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_mF2F2B0B9347E8BC29B0E5ABD6269172C5236F021_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DOTweenAnimation_U3CCreateTweenU3Eb__53_0_m6FAD551707875C16968DC88C6F575EBE6BD484AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m6716A7D71A3E516E4FB46A9B1C8AD83153E46190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponents_TisDOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_m96E59C66BD2A1BF461EE718111524F6C2E591A01_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m67DE92D56689877B5E346FE6239B6DEF7BB63685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBD5BB455040E882AE50EEAB6A2501BE795C1D799_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBBA1302CE258A2BE2EDB4EAB0282A0F7E57A574F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m0FBA342A78026EAD99F1F4E3E4985D1872AEBF3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnRewind_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m6B6BE5929932148628C6F31855D79FF5A02066F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m745FAA93F7F77272847DE1A1E848E87E6D71DD85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m792BB03889E21524E3344FA61E814C7584D3BE7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m57E18275D826369CD94860A3F1C39309D94D7379_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCBB51799984C28B2039C1B35CB74368B6086A92B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2CEAE4E85D33463167ECC3B78A9F01FF36E41E43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mDA92D25D7C9B5461C21556F824B8615E54D4B102_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEAB195CDAFF31E19188BBC670CFC250810B26F6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEDDCA7FC4729778EA0AB5E9A49317F79F499816C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6F6CE91C47CB2C78B0DC42F6F9452FEF789419C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m39A70F3F6856D8F28E39EDE44E5A3E20053DA917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6EF9BB4F327508610878B8B6DB2D16BBB5A7188_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m27A612ECE14371AB2BA5F411E9D7739F28208EC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m593D7B49993413FC2357476183683A34122E55B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mC3077CF17652F227E5720D80251A7B8238090CF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_mCF844891B1DE1191685CE705C948D760E1FD42EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_m14BB58219098C628C62F5D8C4310B04B02C9B4E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_m1D7023148D2DF8CB476E254A4F3A9EEBA0DBA664_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TargetType_t447F9EC340B2415E5A08FE18BF68AB046907A867_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2;
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t100AED5E473360948C77C598296839709DEF57F8 
{
};

// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>
struct ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C  : public RuntimeObject
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TweenU5BU5D_t6E5F58C51FA0DA64C990C1C7E02EE9B70220C2F7* ___s_emptyArray_5;
};

// DG.Tweening.Core.ABSSequentiable
struct ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89  : public RuntimeObject
{
	// DG.Tweening.TweenType DG.Tweening.Core.ABSSequentiable::tweenType
	int32_t ___tweenType_0;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedPosition
	float ___sequencedPosition_1;
	// System.Single DG.Tweening.Core.ABSSequentiable::sequencedEndPosition
	float ___sequencedEndPosition_2;
	// DG.Tweening.TweenCallback DG.Tweening.Core.ABSSequentiable::onStart
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStart_3;
};
struct Il2CppArrayBounds;

// DG.Tweening.DOTweenAnimationExtensions
struct DOTweenAnimationExtensions_t7A1DE3F243724804B473ACFBA38A4F0507552410  : public RuntimeObject
{
};

// DG.Tweening.DOTweenProShortcuts
struct DOTweenProShortcuts_t4E389DFBE13BF7435443BCC47E04334575F589D4  : public RuntimeObject
{
};

// DG.Tweening.Core.Debugger
struct Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0  : public RuntimeObject
{
};

struct Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields
{
	// System.Int32 DG.Tweening.Core.Debugger::_logPriority
	int32_t ____logPriority_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362  : public RuntimeObject
{
	// UnityEngine.Transform DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_0;
};

// DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA  : public RuntimeObject
{
	// UnityEngine.Rigidbody DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::target
	Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___target_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 
{
	// System.Boolean DG.Tweening.Plugins.Options.ColorOptions::alphaOnly
	bool ___alphaOnly_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_pinvoke
{
	int32_t ___alphaOnly_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.ColorOptions
struct ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39_marshaled_com
{
	int32_t ___alphaOnly_0;
};

// DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 
{
	// System.Boolean DG.Tweening.Plugins.Options.FloatOptions::snapping
	bool ___snapping_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.FloatOptions
struct FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5_marshaled_com
{
	int32_t ___snapping_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Keyframe
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	// System.Single UnityEngine.Keyframe::m_Time
	float ___m_Time_0;
	// System.Single UnityEngine.Keyframe::m_Value
	float ___m_Value_1;
	// System.Single UnityEngine.Keyframe::m_InTangent
	float ___m_InTangent_2;
	// System.Single UnityEngine.Keyframe::m_OutTangent
	float ___m_OutTangent_3;
	// System.Int32 UnityEngine.Keyframe::m_WeightedMode
	int32_t ___m_WeightedMode_4;
	// System.Single UnityEngine.Keyframe::m_InWeight
	float ___m_InWeight_5;
	// System.Single UnityEngine.Keyframe::m_OutWeight
	float ___m_OutWeight_6;
};

// UnityEngine.Mathf
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

struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// DG.Tweening.Plugins.Options.RectOptions
struct RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC 
{
	// System.Boolean DG.Tweening.Plugins.Options.RectOptions::snapping
	bool ___snapping_0;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.RectOptions
struct RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_marshaled_pinvoke
{
	int32_t ___snapping_0;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.RectOptions
struct RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC_marshaled_com
{
	int32_t ___snapping_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA 
{
	// System.Boolean DG.Tweening.Plugins.Options.StringOptions::richTextEnabled
	bool ___richTextEnabled_0;
	// DG.Tweening.ScrambleMode DG.Tweening.Plugins.Options.StringOptions::scrambleMode
	int32_t ___scrambleMode_1;
	// System.Char[] DG.Tweening.Plugins.Options.StringOptions::scrambledChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___scrambledChars_2;
	// System.Int32 DG.Tweening.Plugins.Options.StringOptions::startValueStrippedLength
	int32_t ___startValueStrippedLength_3;
	// System.Int32 DG.Tweening.Plugins.Options.StringOptions::changeValueStrippedLength
	int32_t ___changeValueStrippedLength_4;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_marshaled_pinvoke
{
	int32_t ___richTextEnabled_0;
	int32_t ___scrambleMode_1;
	uint8_t* ___scrambledChars_2;
	int32_t ___startValueStrippedLength_3;
	int32_t ___changeValueStrippedLength_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.StringOptions
struct StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA_marshaled_com
{
	int32_t ___richTextEnabled_0;
	int32_t ___scrambleMode_1;
	uint8_t* ___scrambledChars_2;
	int32_t ___startValueStrippedLength_3;
	int32_t ___changeValueStrippedLength_4;
};

// DG.Tweening.Tween
struct Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C  : public ABSSequentiable_t05DF85FC63E3650D2D4CF6ABBA0F43263EB8CE89
{
	// System.Single DG.Tweening.Tween::timeScale
	float ___timeScale_4;
	// System.Boolean DG.Tweening.Tween::isBackwards
	bool ___isBackwards_5;
	// System.Boolean DG.Tweening.Tween::isInverted
	bool ___isInverted_6;
	// System.Object DG.Tweening.Tween::id
	RuntimeObject* ___id_7;
	// System.String DG.Tweening.Tween::stringId
	String_t* ___stringId_8;
	// System.Int32 DG.Tweening.Tween::intId
	int32_t ___intId_9;
	// System.Object DG.Tweening.Tween::target
	RuntimeObject* ___target_10;
	// DG.Tweening.UpdateType DG.Tweening.Tween::updateType
	int32_t ___updateType_11;
	// System.Boolean DG.Tweening.Tween::isIndependentUpdate
	bool ___isIndependentUpdate_12;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPlay
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPlay_13;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onPause
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onPause_14;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onRewind
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onRewind_15;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onUpdate
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onUpdate_16;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onStepComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onStepComplete_17;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onComplete
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onComplete_18;
	// DG.Tweening.TweenCallback DG.Tweening.Tween::onKill
	TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___onKill_19;
	// DG.Tweening.TweenCallback`1<System.Int32> DG.Tweening.Tween::onWaypointChange
	TweenCallback_1_tF0ADCA0C226C9C243ACB55E67D852E4BB53AEB67* ___onWaypointChange_20;
	// System.Boolean DG.Tweening.Tween::isFrom
	bool ___isFrom_21;
	// System.Boolean DG.Tweening.Tween::isBlendable
	bool ___isBlendable_22;
	// System.Boolean DG.Tweening.Tween::isRecyclable
	bool ___isRecyclable_23;
	// System.Boolean DG.Tweening.Tween::isSpeedBased
	bool ___isSpeedBased_24;
	// System.Boolean DG.Tweening.Tween::autoKill
	bool ___autoKill_25;
	// System.Single DG.Tweening.Tween::duration
	float ___duration_26;
	// System.Int32 DG.Tweening.Tween::loops
	int32_t ___loops_27;
	// DG.Tweening.LoopType DG.Tweening.Tween::loopType
	int32_t ___loopType_28;
	// System.Single DG.Tweening.Tween::delay
	float ___delay_29;
	// System.Boolean DG.Tweening.Tween::<isRelative>k__BackingField
	bool ___U3CisRelativeU3Ek__BackingField_30;
	// DG.Tweening.Ease DG.Tweening.Tween::easeType
	int32_t ___easeType_31;
	// DG.Tweening.EaseFunction DG.Tweening.Tween::customEase
	EaseFunction_t0F945D9D726B0915C5FBF30862E987EC3AC12A04* ___customEase_32;
	// System.Single DG.Tweening.Tween::easeOvershootOrAmplitude
	float ___easeOvershootOrAmplitude_33;
	// System.Single DG.Tweening.Tween::easePeriod
	float ___easePeriod_34;
	// System.String DG.Tweening.Tween::debugTargetId
	String_t* ___debugTargetId_35;
	// System.Type DG.Tweening.Tween::typeofT1
	Type_t* ___typeofT1_36;
	// System.Type DG.Tweening.Tween::typeofT2
	Type_t* ___typeofT2_37;
	// System.Type DG.Tweening.Tween::typeofTPlugOptions
	Type_t* ___typeofTPlugOptions_38;
	// System.Boolean DG.Tweening.Tween::<active>k__BackingField
	bool ___U3CactiveU3Ek__BackingField_39;
	// System.Boolean DG.Tweening.Tween::isSequenced
	bool ___isSequenced_40;
	// DG.Tweening.Sequence DG.Tweening.Tween::sequenceParent
	Sequence_tEADBE56D6ED2E9EE8FB2E5459C3E57131EC0545C* ___sequenceParent_41;
	// System.Int32 DG.Tweening.Tween::activeId
	int32_t ___activeId_42;
	// DG.Tweening.Core.Enums.SpecialStartupMode DG.Tweening.Tween::specialStartupMode
	int32_t ___specialStartupMode_43;
	// System.Boolean DG.Tweening.Tween::creationLocked
	bool ___creationLocked_44;
	// System.Boolean DG.Tweening.Tween::startupDone
	bool ___startupDone_45;
	// System.Boolean DG.Tweening.Tween::<playedOnce>k__BackingField
	bool ___U3CplayedOnceU3Ek__BackingField_46;
	// System.Single DG.Tweening.Tween::<position>k__BackingField
	float ___U3CpositionU3Ek__BackingField_47;
	// System.Single DG.Tweening.Tween::fullDuration
	float ___fullDuration_48;
	// System.Int32 DG.Tweening.Tween::completedLoops
	int32_t ___completedLoops_49;
	// System.Boolean DG.Tweening.Tween::isPlaying
	bool ___isPlaying_50;
	// System.Boolean DG.Tweening.Tween::isComplete
	bool ___isComplete_51;
	// System.Single DG.Tweening.Tween::elapsedDelay
	float ___elapsedDelay_52;
	// System.Boolean DG.Tweening.Tween::delayComplete
	bool ___delayComplete_53;
	// System.Int32 DG.Tweening.Tween::miscInt
	int32_t ___miscInt_54;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 
{
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.VectorOptions::axisConstraint
	int32_t ___axisConstraint_0;
	// System.Boolean DG.Tweening.Plugins.Options.VectorOptions::snapping
	bool ___snapping_1;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_pinvoke
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.VectorOptions
struct VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9_marshaled_com
{
	int32_t ___axisConstraint_0;
	int32_t ___snapping_1;
};

// System.Void
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

// System.Nullable`1<UnityEngine.Vector3>
struct Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_1;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 
{
	// DG.Tweening.RotateMode DG.Tweening.Plugins.Options.QuaternionOptions::rotateMode
	int32_t ___rotateMode_0;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.QuaternionOptions::axisConstraint
	int32_t ___axisConstraint_1;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	// System.Boolean DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAt
	bool ___dynamicLookAt_3;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.QuaternionOptions::dynamicLookAtWorldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_pinvoke
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.Options.QuaternionOptions
struct QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718_marshaled_com
{
	int32_t ___rotateMode_0;
	int32_t ___axisConstraint_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_2;
	int32_t ___dynamicLookAt_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dynamicLookAtWorldPosition_4;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// DG.Tweening.Plugins.SpiralOptions
struct SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D 
{
	// System.Single DG.Tweening.Plugins.SpiralOptions::depth
	float ___depth_0;
	// System.Single DG.Tweening.Plugins.SpiralOptions::frequency
	float ___frequency_1;
	// System.Single DG.Tweening.Plugins.SpiralOptions::speed
	float ___speed_2;
	// DG.Tweening.SpiralMode DG.Tweening.Plugins.SpiralOptions::mode
	int32_t ___mode_3;
	// System.Boolean DG.Tweening.Plugins.SpiralOptions::snapping
	bool ___snapping_4;
	// System.Single DG.Tweening.Plugins.SpiralOptions::unit
	float ___unit_5;
	// UnityEngine.Quaternion DG.Tweening.Plugins.SpiralOptions::axisQ
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___axisQ_6;
};
// Native definition for P/Invoke marshalling of DG.Tweening.Plugins.SpiralOptions
struct SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_marshaled_pinvoke
{
	float ___depth_0;
	float ___frequency_1;
	float ___speed_2;
	int32_t ___mode_3;
	int32_t ___snapping_4;
	float ___unit_5;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___axisQ_6;
};
// Native definition for COM marshalling of DG.Tweening.Plugins.SpiralOptions
struct SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_marshaled_com
{
	float ___depth_0;
	float ___frequency_1;
	float ___speed_2;
	int32_t ___mode_3;
	int32_t ___snapping_4;
	float ___unit_5;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___axisQ_6;
};

// DG.Tweening.Plugins.SpiralPlugin
struct SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E  : public ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C
{
};

struct SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_StaticFields
{
	// UnityEngine.Vector3 DG.Tweening.Plugins.SpiralPlugin::DefaultDirection
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___DefaultDirection_0;
};

// DG.Tweening.Tweener
struct Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140  : public Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C
{
	// System.Boolean DG.Tweening.Tweener::hasManuallySetStartValue
	bool ___hasManuallySetStartValue_55;
	// System.Boolean DG.Tweening.Tweener::isFromAllowed
	bool ___isFromAllowed_56;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t9F2151E3A21F3FE2A41BEEF7D288D670C2685F39 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t4DFFF7454A1BCD259676FED36CCF2114E34B5B95* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t5E2B8A5C7040616545D7D029D20C4BF5F3E6DA89* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tC26278B0CA053BAF4547345679D3E8D1F748AC12* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	QuaternionOptions_t1B83700718F7417854E4B6FB0E1726E183F69718 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tB89DD12456B8E79576BB70E1CA6DF899686410D3* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t9EFF8DD70A15F455A6FE698A22BD0FE9683AC28E* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t3823C0F935A3168B9E48DC90ABD9A0CED3D7BB82* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	RectOptions_tCE72F3B850FF80059E448A0ED2AA3FF16EE5EDAC ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t64F1C0E113DC45CC9A1FD194A80B7B4C40AC4923* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t1682EBCD9936CA04E27CEC6CFD3F7C8CD8584CDD* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tA51581359A1B697A7A0A8F2FFDE00794FA1E67F4* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	float ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	float ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	float ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	FloatOptions_t8A9B05DB7CF6CC90A27F300C2977D91A48B3FEF5 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_tE8B39477E96408653D0242624F4D7E48ABFD1B03* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t48D41DB8CE0BFC91A1844C4CC49A8A7222A69200* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t60F4DE5120CFD5986925189A0E775FAEAB4C59B9* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct TweenerCore_3_t390910F1CE8B4737AA72FEED470399C8DBE1AF8B  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	String_t* ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	String_t* ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	String_t* ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	StringOptions_tC70D70DB6854CE62E6BBC3AA066517835919E9FA ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t65A2B66606014CD7EFBA1D8DDD1273F57511D146* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t999572008E4C4CFE5EF6FA70393F8B092CA8C438* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE7EF56C4695649256BA2077D8E447E739C869256* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t13276681BE97FCE6AB699EF1F894EA98C825FE66* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t0DAD29F0B667B9ED214C9F6B9C4D7093FE7C0D9C* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t4082710A2BB933E2D055E454B3EFAC4C0A319444* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>
struct TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77  : public Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140
{
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___startValue_57;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue_58;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___changeValue_59;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	VectorOptions_t2814CC842518C92C9DFC5DE6F7A73824758D3EF9 ___plugOptions_60;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter_61;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter_62;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_tE5A78BE46D046C07A6356B8AB596B2D00F9295E7* ___tweenPlugin_63;
	// System.Type DG.Tweening.Core.TweenerCore`3::_colorType
	Type_t* ____colorType_65;
	// System.Type DG.Tweening.Core.TweenerCore`3::_color32Type
	Type_t* ____color32Type_66;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<DG.Tweening.DOTweenAnimation>
struct Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338  : public MulticastDelegate_t
{
};

// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DG.Tweening.TweenCallback
struct TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24  : public MulticastDelegate_t
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.CanvasGroup
struct CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B  : public Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF
{
	// UnityEngine.Events.UnityEvent`1<UnityEngine.SpriteRenderer> UnityEngine.SpriteRenderer::m_SpriteChangeEvent
	UnityEvent_1_t8ABE5544759145B8D7A09F1C54FFCB6907EDD56E* ___m_SpriteChangeEvent_4;
};

// DG.Tweening.Core.ABSAnimationComponent
struct ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DG.Tweening.UpdateType DG.Tweening.Core.ABSAnimationComponent::updateType
	int32_t ___updateType_4;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::isSpeedBased
	bool ___isSpeedBased_5;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnStart
	bool ___hasOnStart_6;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnPlay
	bool ___hasOnPlay_7;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnUpdate
	bool ___hasOnUpdate_8;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnStepComplete
	bool ___hasOnStepComplete_9;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnComplete
	bool ___hasOnComplete_10;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnTweenCreated
	bool ___hasOnTweenCreated_11;
	// System.Boolean DG.Tweening.Core.ABSAnimationComponent::hasOnRewind
	bool ___hasOnRewind_12;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onStart
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onStart_13;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onPlay
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onPlay_14;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onUpdate
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onUpdate_15;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onStepComplete
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onStepComplete_16;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onComplete
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onComplete_17;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onTweenCreated
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onTweenCreated_18;
	// UnityEngine.Events.UnityEvent DG.Tweening.Core.ABSAnimationComponent::onRewind
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onRewind_19;
	// DG.Tweening.Tween DG.Tweening.Core.ABSAnimationComponent::tween
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___tween_20;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// DG.Tweening.DOTweenAnimation
struct DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E  : public ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C
{
	// System.Boolean DG.Tweening.DOTweenAnimation::targetIsSelf
	bool ___targetIsSelf_22;
	// UnityEngine.GameObject DG.Tweening.DOTweenAnimation::targetGO
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___targetGO_23;
	// System.Boolean DG.Tweening.DOTweenAnimation::tweenTargetIsTargetGO
	bool ___tweenTargetIsTargetGO_24;
	// System.Single DG.Tweening.DOTweenAnimation::delay
	float ___delay_25;
	// System.Single DG.Tweening.DOTweenAnimation::duration
	float ___duration_26;
	// DG.Tweening.Ease DG.Tweening.DOTweenAnimation::easeType
	int32_t ___easeType_27;
	// UnityEngine.AnimationCurve DG.Tweening.DOTweenAnimation::easeCurve
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___easeCurve_28;
	// DG.Tweening.LoopType DG.Tweening.DOTweenAnimation::loopType
	int32_t ___loopType_29;
	// System.Int32 DG.Tweening.DOTweenAnimation::loops
	int32_t ___loops_30;
	// System.String DG.Tweening.DOTweenAnimation::id
	String_t* ___id_31;
	// System.Boolean DG.Tweening.DOTweenAnimation::isRelative
	bool ___isRelative_32;
	// System.Boolean DG.Tweening.DOTweenAnimation::isFrom
	bool ___isFrom_33;
	// System.Boolean DG.Tweening.DOTweenAnimation::isIndependentUpdate
	bool ___isIndependentUpdate_34;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoKill
	bool ___autoKill_35;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoGenerate
	bool ___autoGenerate_36;
	// System.Boolean DG.Tweening.DOTweenAnimation::isActive
	bool ___isActive_37;
	// System.Boolean DG.Tweening.DOTweenAnimation::isValid
	bool ___isValid_38;
	// UnityEngine.Component DG.Tweening.DOTweenAnimation::target
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___target_39;
	// DG.Tweening.DOTweenAnimation/AnimationType DG.Tweening.DOTweenAnimation::animationType
	int32_t ___animationType_40;
	// DG.Tweening.DOTweenAnimation/TargetType DG.Tweening.DOTweenAnimation::targetType
	int32_t ___targetType_41;
	// DG.Tweening.DOTweenAnimation/TargetType DG.Tweening.DOTweenAnimation::forcedTargetType
	int32_t ___forcedTargetType_42;
	// System.Boolean DG.Tweening.DOTweenAnimation::autoPlay
	bool ___autoPlay_43;
	// System.Boolean DG.Tweening.DOTweenAnimation::useTargetAsV3
	bool ___useTargetAsV3_44;
	// System.Single DG.Tweening.DOTweenAnimation::endValueFloat
	float ___endValueFloat_45;
	// UnityEngine.Vector3 DG.Tweening.DOTweenAnimation::endValueV3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValueV3_46;
	// UnityEngine.Vector2 DG.Tweening.DOTweenAnimation::endValueV2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValueV2_47;
	// UnityEngine.Color DG.Tweening.DOTweenAnimation::endValueColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValueColor_48;
	// System.String DG.Tweening.DOTweenAnimation::endValueString
	String_t* ___endValueString_49;
	// UnityEngine.Rect DG.Tweening.DOTweenAnimation::endValueRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___endValueRect_50;
	// UnityEngine.Transform DG.Tweening.DOTweenAnimation::endValueTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___endValueTransform_51;
	// System.Boolean DG.Tweening.DOTweenAnimation::optionalBool0
	bool ___optionalBool0_52;
	// System.Boolean DG.Tweening.DOTweenAnimation::optionalBool1
	bool ___optionalBool1_53;
	// System.Single DG.Tweening.DOTweenAnimation::optionalFloat0
	float ___optionalFloat0_54;
	// System.Int32 DG.Tweening.DOTweenAnimation::optionalInt0
	int32_t ___optionalInt0_55;
	// DG.Tweening.RotateMode DG.Tweening.DOTweenAnimation::optionalRotationMode
	int32_t ___optionalRotationMode_56;
	// DG.Tweening.ScrambleMode DG.Tweening.DOTweenAnimation::optionalScrambleMode
	int32_t ___optionalScrambleMode_57;
	// System.String DG.Tweening.DOTweenAnimation::optionalString
	String_t* ___optionalString_58;
	// System.Boolean DG.Tweening.DOTweenAnimation::_tweenAutoGenerationCalled
	bool ____tweenAutoGenerationCalled_59;
	// System.Int32 DG.Tweening.DOTweenAnimation::_playCount
	int32_t ____playCount_60;
};

struct DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_StaticFields
{
	// System.Action`1<DG.Tweening.DOTweenAnimation> DG.Tweening.DOTweenAnimation::OnReset
	Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* ___OnReset_21;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// DG.Tweening.DOTweenAnimation[]
struct DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2  : public RuntimeArray
{
	ALIGN_FIELD (8) DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* m_Items[1];

	inline DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3  : public RuntimeArray
{
	ALIGN_FIELD (8) Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 m_Items[1];

	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::From<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_From_TisRuntimeObject_m581919CB70693A14993B037509BAA8E8EC1EC530_gshared (RuntimeObject* ___t0, bool ___isRelative1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetRelative<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetRelative_TisRuntimeObject_mA2AD07BE9F0E803F61F6B09473DFE479A65ADBE1_gshared (RuntimeObject* ___t0, bool ___isRelative1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetTarget<System.Object>(T,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetTarget_TisRuntimeObject_m864840DC4375075588F2154A96F118D5FAEE3FD6_gshared (RuntimeObject* ___t0, RuntimeObject* ___target1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetDelay<System.Object>(T,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetDelay_TisRuntimeObject_mF70ED89B398DC4E92D4C6835829159161826326B_gshared (RuntimeObject* ___t0, float ___delay1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetLoops<System.Object>(T,System.Int32,DG.Tweening.LoopType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetLoops_TisRuntimeObject_m47D6D13211B8E98EC93621D5ACA6828C463AFBF9_gshared (RuntimeObject* ___t0, int32_t ___loops1, int32_t ___loopType2, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetAutoKill<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetAutoKill_TisRuntimeObject_m5303908097DB4965532C4DAE045A5ADB75808258_gshared (RuntimeObject* ___t0, bool ___autoKillOnCompletion1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnKill<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnKill_TisRuntimeObject_m168DA4CCA1333ECE0D8191965AFF93CEB822BA14_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetSpeedBased<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetSpeedBased_TisRuntimeObject_m2B2A06DDF3716F8F63F6AE9B786AB9379CCA57C9_gshared (RuntimeObject* ___t0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_mDA26A73227A145837952376DD9573026EB80599F_gshared (RuntimeObject* ___t0, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___animCurve1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetEase<System.Object>(T,DG.Tweening.Ease)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared (RuntimeObject* ___t0, int32_t ___ease1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetId<System.Object>(T,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetId_TisRuntimeObject_m4FB9D05F8ED6B508C90460EBF5ED845224DD4755_gshared (RuntimeObject* ___t0, String_t* ___stringId1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetUpdate<System.Object>(T,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_SetUpdate_TisRuntimeObject_m31DAD606349424C0FDDA8FD20A1155DB5DE576D7_gshared (RuntimeObject* ___t0, bool ___isIndependentUpdate1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnStart<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnStart_TisRuntimeObject_m52FC13AB79CA3D572C72BA5BBCE169E95B255CE5_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnPlay<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnPlay_TisRuntimeObject_m3DC6406E5D6E8C865EB9FDFCF625C08A9A0870B7_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnUpdate<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnUpdate_TisRuntimeObject_m15415E2F0A79910AE2BEE06E8C7B0696B9E6ECE8_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnStepComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnStepComplete_TisRuntimeObject_mECE3A33094D444884FDA86525A4C76348E06008A_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnComplete<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnRewind<System.Object>(T,DG.Tweening.TweenCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenSettingsExtensions_OnRewind_TisRuntimeObject_m90AD5AA2C24716496A9C55F426ED348E7FA3120C_gshared (RuntimeObject* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenExtensions::Play<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenExtensions_Play_TisRuntimeObject_m255A424EE8F1D490359AB0C9CC5D8393F5C2B1B7_gshared (RuntimeObject* ___t0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenExtensions::Pause<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenExtensions_Pause_TisRuntimeObject_m36D60DCEDF6720E9E82F204E1AE3B95E9E53C364_gshared (RuntimeObject* ___t0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector3>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_gshared (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOGetter_1__ctor_m59C11B3FE64C69454BE28721314FD6189629F27E_gshared (DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOSetter_1__ctor_m9E67232146D149892F1946395AD1B6B1C53F3B60_gshared (DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_gshared (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.DOTween::To<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>(DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m6716A7D71A3E516E4FB46A9B1C8AD83153E46190_gshared (ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C* ___plugin0, DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter1, DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue3, float ___duration4, const RuntimeMethod* method) ;

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Action`1<DG.Tweening.DOTweenAnimation>::Invoke(T)
inline void Action_1_Invoke_mA5A3AA899330D724CE0CAB756A2223B5BC6BF975_inline (Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* __this, DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE*, DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void DG.Tweening.DOTweenAnimation::CreateTween(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_CreateTween_m087F3C335B0666D2F97271A0FAD07AFD8D88749A (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, bool ___regenerateIfExists0, bool ___andPlay1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenAnimation::Dispatch_OnReset(DG.Tweening.DOTweenAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Dispatch_OnReset_m45BC616F21C2CD87672364D75CF5E85E79FE8AE9 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* ___anim0, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.Tween::get_active()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenExtensions::Kill(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Kill_mFFDE4DE45D8A91C357ABFF2F8FA95D412924F466 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___complete1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.TweenExtensions::Rewind(DG.Tweening.Tween,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenExtensions_Rewind_m0ECE9F671C1A1BE35270FD24F9AC81DC5645DAF1 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___includeDelay1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// UnityEngine.GameObject DG.Tweening.DOTweenAnimation::GetTweenGO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* DOTweenAnimation_GetTweenGO_m55DBE7691F9241F891180C06CB2B104DD72913AD (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// DG.Tweening.DOTweenAnimation/TargetType DG.Tweening.DOTweenAnimation::TypeToDOTargetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTweenAnimation_TypeToDOTargetType_mB3798DC9E39AE262B955B4603B8E9C167D0B4D56 (Type_t* ___t0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 DG.Tweening.DOTweenModuleUI/Utils::SwitchToRectTransform(UnityEngine.RectTransform,UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Utils_SwitchToRectTransform_mBE1AC389B2EBD6D6D2C869064922F7B5C474122A (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___from0, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___to1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOMove_m82274FDC0216A91A1FAF16844805D06BF9A287FF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOAnchorPos3D(UnityEngine.RectTransform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* DOTweenModuleUI_DOAnchorPos3D_mFBCC12B6A9DD7BC7D5D28D69975F61E60F8CB8D8 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics::DOMove(UnityEngine.Rigidbody,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* DOTweenModulePhysics_DOMove_m0631991898F40DE178397D023912E48F583BA522 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModulePhysics2D::DOMove(UnityEngine.Rigidbody2D,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* DOTweenModulePhysics2D_DOMove_mD6A94446FA93172EABE7070235B3686C5FF7C6F1 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___target0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOLocalMove(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOLocalMove_m22F3EB581DADB5A3FC59B69F7F6F05A86F8E8348 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.ShortcutExtensions::DORotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ShortcutExtensions_DORotate_mA2804C1A3E4780383111262752CC7056BBC7D470 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.DOTweenModulePhysics::DORotate(UnityEngine.Rigidbody,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* DOTweenModulePhysics_DORotate_m0CCB210C4A51881CF411879CA3860629317788D6 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModulePhysics2D::DORotate(UnityEngine.Rigidbody2D,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* DOTweenModulePhysics2D_DORotate_m67EA91BCD8DD63315B1C837F1C07D7B160A0E449 (Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions> DG.Tweening.ShortcutExtensions::DOLocalRotate(UnityEngine.Transform,UnityEngine.Vector3,System.Single,DG.Tweening.RotateMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* ShortcutExtensions_DOLocalRotate_m6EB8F37963023C6B157C60013B98D2B612816DA4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, int32_t ___mode3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.ShortcutExtensions::DOScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions> DG.Tweening.DOTweenModuleUI::DOSizeDelta(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* DOTweenModuleUI_DOSizeDelta_mD60636423B3BC3144AFD4AB4561F8E2EB82A32F9 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___endValue1, float ___duration2, bool ___snapping3, const RuntimeMethod* method) ;
// UnityEngine.Material UnityEngine.Renderer::get_material()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Material,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ShortcutExtensions_DOColor_m7770E3969D58563343B129139B857669312EFAA9 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Light,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ShortcutExtensions_DOColor_mAC2C2C38A8C15064D70E6B39F5735A09DDA0D581 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleSprite::DOColor(UnityEngine.SpriteRenderer,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleSprite_DOColor_m218F26321AC150A0661156F1E00E10301955520B (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Graphic,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleUI_DOColor_m9233FF1AA86CD2279B793E0AF8F54DC5C85FCFD3 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOColor(UnityEngine.UI.Text,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleUI_DOColor_m8F5AC6B85FE7F362C1BBC07B4988B2925DA5D222 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOFade(UnityEngine.Material,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ShortcutExtensions_DOFade_m1C499FE6483845A6BBE9C4EB80D11062C9859FC8 (Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.ShortcutExtensions::DOIntensity(UnityEngine.Light,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ShortcutExtensions_DOIntensity_m27397BA48763F123CFEE2F08D1B68C536BD1AE12 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleSprite::DOFade(UnityEngine.SpriteRenderer,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleSprite_DOFade_m0617BC96272648A1F03FD134F59E0F2AFC9B7413 (SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Graphic,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleUI_DOFade_m5C46AC9BCADB210582200412278801F3009397C7 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.UI.Text,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* DOTweenModuleUI_DOFade_m22F7B333A0005355770318E7AC1615573D6019B0 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.DOTweenModuleUI::DOFade(UnityEngine.CanvasGroup,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* DOTweenModuleUI_DOFade_m8612845CE1ABEC7CA83639B8A6BA939242459B6C (CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions> DG.Tweening.DOTweenModuleUI::DOText(UnityEngine.UI.Text,System.String,System.Single,System.Boolean,DG.Tweening.ScrambleMode,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t390910F1CE8B4737AA72FEED470399C8DBE1AF8B* DOTweenModuleUI_DOText_mE06A0BE77648B90B728F52D8A6A812AF767C06F2 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___target0, String_t* ___endValue1, float ___duration2, bool ___richTextEnabled3, int32_t ___scrambleMode4, String_t* ___scrambleChars5, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchPosition(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOPunchPosition_mD022015ABB94942EE909F7F8E0F3660D52FA3D9E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, bool ___snapping5, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOPunchAnchorPos(UnityEngine.RectTransform,UnityEngine.Vector2,System.Single,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* DOTweenModuleUI_DOPunchAnchorPos_m132FA6E0387614584C69F859E9D3ADC0D2C90A2F (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, bool ___snapping5, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchScale(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOPunchScale_mD7D825D1761F0264BC1D00027B79330844400B9A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOPunchRotation(UnityEngine.Transform,UnityEngine.Vector3,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOPunchRotation_mDC55C1F23E2C17A4E9D4BF5BB787BB1DE98D7AC4 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___punch1, float ___duration2, int32_t ___vibrato3, float ___elasticity4, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakePosition(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOShakePosition_mEF231F12CB359BF88DEA0B5BF1480A270DE9366D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___duration1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___snapping5, bool ___fadeOut6, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.DOTweenModuleUI::DOShakeAnchorPos(UnityEngine.RectTransform,System.Single,UnityEngine.Vector2,System.Int32,System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* DOTweenModuleUI_DOShakeAnchorPos_mFCD2F579DAFCBCA0AF43F7B69BDC31B1A874476E (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target0, float ___duration1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___snapping5, bool ___fadeOut6, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakeScale(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOShakeScale_m6DF910EF19D54F5136100A2F3175B3DD53D85BBA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___duration1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___fadeOut5, const RuntimeMethod* method) ;
// DG.Tweening.Tweener DG.Tweening.ShortcutExtensions::DOShakeRotation(UnityEngine.Transform,System.Single,UnityEngine.Vector3,System.Int32,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ShortcutExtensions_DOShakeRotation_m36228095EBEDF630E0B87230083E6947A04DBB5E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___duration1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___strength2, int32_t ___vibrato3, float ___randomness4, bool ___fadeOut5, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.ShortcutExtensions::DOAspect(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ShortcutExtensions_DOAspect_mE9ECE416D6C7FD3BDE1DB73DFBCAA738589062E2 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions> DG.Tweening.ShortcutExtensions::DOColor(UnityEngine.Camera,UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* ShortcutExtensions_DOColor_mC438262691549AA19473BFC4777A39E4DF995E03 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.ShortcutExtensions::DOFieldOfView(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ShortcutExtensions_DOFieldOfView_mDF8F791F7D4672A51988CE4F3434A589F0F7F62D (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions> DG.Tweening.ShortcutExtensions::DOOrthoSize(UnityEngine.Camera,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* ShortcutExtensions_DOOrthoSize_mE96037CC51B44CB1B04CF436779EAF60BF6C0CD3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, float ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions> DG.Tweening.ShortcutExtensions::DOPixelRect(UnityEngine.Camera,UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* ShortcutExtensions_DOPixelRect_m30CEF5D00DEFB324BB8514B95CF0328929274598 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions> DG.Tweening.ShortcutExtensions::DORect(UnityEngine.Camera,UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* ShortcutExtensions_DORect_m21D8649612CDF6196C7D4C591382743112FEAFD3 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___target0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___endValue1, float ___duration2, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::From<DG.Tweening.Tweener>(T,System.Boolean)
inline Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBD5BB455040E882AE50EEAB6A2501BE795C1D799 (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* ___t0, bool ___isRelative1, const RuntimeMethod* method)
{
	return ((  Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* (*) (Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, bool, const RuntimeMethod*))TweenSettingsExtensions_From_TisRuntimeObject_m581919CB70693A14993B037509BAA8E8EC1EC530_gshared)(___t0, ___isRelative1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetRelative<DG.Tweening.Tween>(T,System.Boolean)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m39A70F3F6856D8F28E39EDE44E5A3E20053DA917 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___isRelative1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, bool, const RuntimeMethod*))TweenSettingsExtensions_SetRelative_TisRuntimeObject_mA2AD07BE9F0E803F61F6B09473DFE479A65ADBE1_gshared)(___t0, ___isRelative1, method);
}
// UnityEngine.GameObject DG.Tweening.DOTweenAnimation::GetTweenTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetTarget<DG.Tweening.Tween>(T,System.Object)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m27A612ECE14371AB2BA5F411E9D7739F28208EC5 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, RuntimeObject* ___target1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, RuntimeObject*, const RuntimeMethod*))TweenSettingsExtensions_SetTarget_TisRuntimeObject_m864840DC4375075588F2154A96F118D5FAEE3FD6_gshared)(___t0, ___target1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetDelay<DG.Tweening.Tween>(T,System.Single)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2CEAE4E85D33463167ECC3B78A9F01FF36E41E43 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, float ___delay1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, float, const RuntimeMethod*))TweenSettingsExtensions_SetDelay_TisRuntimeObject_mF70ED89B398DC4E92D4C6835829159161826326B_gshared)(___t0, ___delay1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetLoops<DG.Tweening.Tween>(T,System.Int32,DG.Tweening.LoopType)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6F6CE91C47CB2C78B0DC42F6F9452FEF789419C (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, int32_t ___loops1, int32_t ___loopType2, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, int32_t, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetLoops_TisRuntimeObject_m47D6D13211B8E98EC93621D5ACA6828C463AFBF9_gshared)(___t0, ___loops1, ___loopType2, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetAutoKill<DG.Tweening.Tween>(T,System.Boolean)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCBB51799984C28B2039C1B35CB74368B6086A92B (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___autoKillOnCompletion1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, bool, const RuntimeMethod*))TweenSettingsExtensions_SetAutoKill_TisRuntimeObject_m5303908097DB4965532C4DAE045A5ADB75808258_gshared)(___t0, ___autoKillOnCompletion1, method);
}
// System.Void DG.Tweening.TweenCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621 (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::OnKill<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBBA1302CE258A2BE2EDB4EAB0282A0F7E57A574F (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnKill_TisRuntimeObject_m168DA4CCA1333ECE0D8191965AFF93CEB822BA14_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetSpeedBased<DG.Tweening.Tween>(T)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6EF9BB4F327508610878B8B6DB2D16BBB5A7188 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))TweenSettingsExtensions_SetSpeedBased_TisRuntimeObject_m2B2A06DDF3716F8F63F6AE9B786AB9379CCA57C9_gshared)(___t0, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Tween>(T,UnityEngine.AnimationCurve)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mDA92D25D7C9B5461C21556F824B8615E54D4B102 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___animCurve1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_mDA26A73227A145837952376DD9573026EB80599F_gshared)(___t0, ___animCurve1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetEase<DG.Tweening.Tween>(T,DG.Tweening.Ease)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEAB195CDAFF31E19188BBC670CFC250810B26F6F (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, int32_t ___ease1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, int32_t, const RuntimeMethod*))TweenSettingsExtensions_SetEase_TisRuntimeObject_m28E0D61D2E7C5417FB6048D549C4A02BCABF3F46_gshared)(___t0, ___ease1, method);
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// T DG.Tweening.TweenSettingsExtensions::SetId<DG.Tweening.Tween>(T,System.String)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEDDCA7FC4729778EA0AB5E9A49317F79F499816C (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, String_t* ___stringId1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, String_t*, const RuntimeMethod*))TweenSettingsExtensions_SetId_TisRuntimeObject_m4FB9D05F8ED6B508C90460EBF5ED845224DD4755_gshared)(___t0, ___stringId1, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetUpdate<DG.Tweening.Tween>(T,System.Boolean)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mC3077CF17652F227E5720D80251A7B8238090CF8 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, bool ___isIndependentUpdate1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, bool, const RuntimeMethod*))TweenSettingsExtensions_SetUpdate_TisRuntimeObject_m31DAD606349424C0FDDA8FD20A1155DB5DE576D7_gshared)(___t0, ___isIndependentUpdate1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnStart<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m745FAA93F7F77272847DE1A1E848E87E6D71DD85 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnStart_TisRuntimeObject_m52FC13AB79CA3D572C72BA5BBCE169E95B255CE5_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnPlay<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m0FBA342A78026EAD99F1F4E3E4985D1872AEBF3B (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnPlay_TisRuntimeObject_m3DC6406E5D6E8C865EB9FDFCF625C08A9A0870B7_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnUpdate<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m57E18275D826369CD94860A3F1C39309D94D7379 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnUpdate_TisRuntimeObject_m15415E2F0A79910AE2BEE06E8C7B0696B9E6ECE8_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnStepComplete<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m792BB03889E21524E3344FA61E814C7584D3BE7C (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnStepComplete_TisRuntimeObject_mECE3A33094D444884FDA86525A4C76348E06008A_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnComplete<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnComplete_TisRuntimeObject_mC014D07E92193DA79B257C4508B6DF208FE502A6_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenSettingsExtensions::OnRewind<DG.Tweening.Tween>(T,DG.Tweening.TweenCallback)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenSettingsExtensions_OnRewind_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m6B6BE5929932148628C6F31855D79FF5A02066F8 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* ___action1, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*, const RuntimeMethod*))TweenSettingsExtensions_OnRewind_TisRuntimeObject_m90AD5AA2C24716496A9C55F426ED348E7FA3120C_gshared)(___t0, ___action1, method);
}
// T DG.Tweening.TweenExtensions::Play<DG.Tweening.Tween>(T)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))TweenExtensions_Play_TisRuntimeObject_m255A424EE8F1D490359AB0C9CC5D8393F5C2B1B7_gshared)(___t0, method);
}
// T DG.Tweening.TweenExtensions::Pause<DG.Tweening.Tween>(T)
inline Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m67DE92D56689877B5E346FE6239B6DEF7BB63685 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method)
{
	return ((  Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* (*) (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))TweenExtensions_Pause_TisRuntimeObject_m36D60DCEDF6720E9E82F204E1AE3B95E9E53C364_gshared)(___t0, method);
}
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DG.Tweening.Tween>::.ctor()
inline void List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8 (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponents<DG.Tweening.DOTweenAnimation>()
inline DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* Component_GetComponents_TisDOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_mF2F2B0B9347E8BC29B0E5ABD6269172C5236F021 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<DG.Tweening.Tween>::Add(T)
inline void List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_inline (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* __this, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD*, Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Play(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Play_m466F46F9DF6585E17C595438BA15147319540DC4 (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::PlayBackwards(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayBackwards_m3709E26071CCE5CB368584477DF2FC9A8B9D052B (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::PlayForward(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayForward_m4F27092024989DEB74466D9D9C370D5FA6621DCF (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Pause(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Pause_m498BECFBBC8FBD76425B8AE1F38E2ECC9AE296D4 (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::TogglePause(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_TogglePause_m8CE7CA00FE30F3C926F34362E2DE67A161536598 (RuntimeObject* ___targetOrId0, const RuntimeMethod* method) ;
// T[] UnityEngine.GameObject::GetComponents<DG.Tweening.DOTweenAnimation>()
inline DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* GameObject_GetComponents_TisDOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_m96E59C66BD2A1BF461EE718111524F6C2E591A01 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponents_TisRuntimeObject_m1654344F5C897CA86F9AB51530972086BDB05948_gshared)(__this, method);
}
// System.Boolean DG.Tweening.TweenExtensions::IsInitialized(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsInitialized_m8C2B24B55147A6773849EB32D4D00E128CAB211B (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.Core.Debugger::get_logPriority()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline (const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.Debugger::LogNullTween(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debugger_LogNullTween_m9C6A433A68F2C3DFCDFF127434135F8BBC116740 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenAnimation::ReEvaluateRelativeTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_ReEvaluateRelativeTween_m9A697CFDF38CAEC29754F3C8F8DFA6089758387A (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Restart(System.Object,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Restart_mEE2F85FC8741BBCE7C1E76C143B3DCE5B9C78DEF (RuntimeObject* ___targetOrId0, bool ___includeDelay1, float ___changeDelayTo2, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Complete(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Complete_m12E2987F7D42218DCCE051E2FDB803E75FD8BA91 (RuntimeObject* ___targetOrId0, bool ___withCallbacks1, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Kill(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Kill_mAB4C96CE1F1BCF25E5347AE0FC295D064EA53FB2 (RuntimeObject* ___targetOrId0, bool ___complete1, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Play(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Play_mEFD3A1E3CC218D3916032325F2E119C2004D9473 (RuntimeObject* ___target0, RuntimeObject* ___id1, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::PlayBackwards(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayBackwards_mC4FB110A49C220C2B5FE768989D133F0F8721FA7 (RuntimeObject* ___target0, RuntimeObject* ___id1, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::PlayForward(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_PlayForward_mC1FF85BCF9DC773A3E4FA3DC12377D1F9E1BADD4 (RuntimeObject* ___target0, RuntimeObject* ___id1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.TweenExtensions::IsPlaying(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsPlaying_m32EF28DEB59B931FA4607BAC3BED0DE275A1D843 (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Boolean DG.Tweening.TweenExtensions::IsComplete(DG.Tweening.Tween)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TweenExtensions_IsComplete_mBB619B64C19A85AB4EEEBB3D37D3E720A9E0AF4C (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* ___t0, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Rewind(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Rewind_m5C4020E9007FAAF719C1BE01CE440EBB39193619 (RuntimeObject* ___targetOrId0, bool ___includeDelay1, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenAnimation::DOPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayNext_m7F3C6AD20E7861EFFAAF4F44952EB4105C458BAB (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Restart(System.Object,System.Object,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Restart_m89E03C91814831E13EA36751C4A8471CF41FA249 (RuntimeObject* ___target0, RuntimeObject* ___id1, bool ___includeDelay2, float ___changeDelayTo3, const RuntimeMethod* method) ;
// System.Int32 DG.Tweening.DOTween::Kill(System.Object,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTween_Kill_m53573B76803A245F23AFAC2AB22995FDA4A9235A (RuntimeObject* ___target0, RuntimeObject* ___id1, bool ___complete2, const RuntimeMethod* method) ;
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Int32 System.String::IndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Object System.Enum::Parse(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F (Type_t* ___enumType0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Keyframe::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34 (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* __this, float ___time0, float ___value1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* ___keys0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.ABSAnimationComponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ABSAnimationComponent__ctor_mF2DC2EF90DDA4C57EC4858124EEEE03FE4CBB328 (ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.Plugins.SpiralPlugin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpiralPlugin__ctor_m9ACFE0F9B14BBBD77A9570420667150892067033 (SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E* __this, const RuntimeMethod* method) ;
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m665B96661A7A52DAF40B02BCA600ADAC5B13D8C1 (U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<UnityEngine.Vector3>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline)(__this, method);
}
// T System.Nullable`1<UnityEngine.Vector3>::GetValueOrDefault()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// System.Void System.Nullable`1<UnityEngine.Vector3>::.ctor(T)
inline void Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2 (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, const RuntimeMethod*))Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_gshared)(__this, ___value0, method);
}
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions> DG.Tweening.Plugins.SpiralPlugin::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C* SpiralPlugin_Get_mEF40CC56A5043E8122C572AFCBC224BA925BC326 (const RuntimeMethod* method) ;
// System.Void DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void DOGetter_1__ctor_m59C11B3FE64C69454BE28721314FD6189629F27E (DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338*, RuntimeObject*, intptr_t, const RuntimeMethod*))DOGetter_1__ctor_m59C11B3FE64C69454BE28721314FD6189629F27E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
inline void DOSetter_1__ctor_m9E67232146D149892F1946395AD1B6B1C53F3B60 (DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358*, RuntimeObject*, intptr_t, const RuntimeMethod*))DOSetter_1__ctor_m9E67232146D149892F1946395AD1B6B1C53F3B60_gshared)(__this, ___object0, ___method1, method);
}
// T System.Nullable`1<UnityEngine.Vector3>::get_Value()
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792 (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE*, const RuntimeMethod*))Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_gshared)(__this, method);
}
// DG.Tweening.Core.TweenerCore`3<T1,T2,TPlugOptions> DG.Tweening.DOTween::To<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>(DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions>,DG.Tweening.Core.DOGetter`1<T1>,DG.Tweening.Core.DOSetter`1<T1>,T2,System.Single)
inline TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m6716A7D71A3E516E4FB46A9B1C8AD83153E46190 (ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C* ___plugin0, DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* ___getter1, DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* ___setter2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___endValue3, float ___duration4, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* (*) (ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C*, DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338*, DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, float, const RuntimeMethod*))DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m6716A7D71A3E516E4FB46A9B1C8AD83153E46190_gshared)(___plugin0, ___getter1, ___setter2, ___endValue3, ___duration4, method);
}
// T DG.Tweening.TweenSettingsExtensions::SetTarget<DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3,DG.Tweening.Plugins.SpiralOptions>>(T,System.Object)
inline TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m593D7B49993413FC2357476183683A34122E55B6 (TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* ___t0, RuntimeObject* ___target1, const RuntimeMethod* method)
{
	return ((  TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* (*) (TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B*, RuntimeObject*, const RuntimeMethod*))TweenSettingsExtensions_SetTarget_TisRuntimeObject_m864840DC4375075588F2154A96F118D5FAEE3FD6_gshared)(___t0, ___target1, method);
}
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mA27CB724758EC4DA900BC4D3C875DD981AAF3A51 (U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
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
// System.Void DG.Tweening.DOTweenAnimation::add_OnReset(System.Action`1<DG.Tweening.DOTweenAnimation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_add_OnReset_m02F08585BBA083884794DEE8A3EA71F34F1E8C26 (Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* V_0 = NULL;
	Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* V_1 = NULL;
	Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* V_2 = NULL;
	{
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_0 = ((DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_il2cpp_TypeInfo_var))->___OnReset_21;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_2 = V_1;
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE*)Castclass((RuntimeObject*)L_4, Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE_il2cpp_TypeInfo_var));
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_5 = V_2;
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_6 = V_1;
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE*>((&((DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_il2cpp_TypeInfo_var))->___OnReset_21), L_5, L_6);
		V_0 = L_7;
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_8 = V_0;
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE*)L_8) == ((RuntimeObject*)(Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::remove_OnReset(System.Action`1<DG.Tweening.DOTweenAnimation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_remove_OnReset_m7F38A9A0C364E6EFC340FBEAA2092BFDE3528714 (Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* V_0 = NULL;
	Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* V_1 = NULL;
	Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* V_2 = NULL;
	{
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_0 = ((DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_il2cpp_TypeInfo_var))->___OnReset_21;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_1 = V_0;
		V_1 = L_1;
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_2 = V_1;
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE*)Castclass((RuntimeObject*)L_4, Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE_il2cpp_TypeInfo_var));
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_5 = V_2;
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_6 = V_1;
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE*>((&((DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_il2cpp_TypeInfo_var))->___OnReset_21), L_5, L_6);
		V_0 = L_7;
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_8 = V_0;
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE*)L_8) == ((RuntimeObject*)(Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::Dispatch_OnReset(DG.Tweening.DOTweenAnimation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Dispatch_OnReset_m45BC616F21C2CD87672364D75CF5E85E79FE8AE9 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* ___anim0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static void Dispatch_OnReset(DOTweenAnimation anim) { if (OnReset != null) OnReset(anim); }
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_0 = ((DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_il2cpp_TypeInfo_var))->___OnReset_21;
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// static void Dispatch_OnReset(DOTweenAnimation anim) { if (OnReset != null) OnReset(anim); }
		Action_1_t3DCB40248451703330D699AF5CC93F4866168CCE* L_1 = ((DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_StaticFields*)il2cpp_codegen_static_fields_for(DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_il2cpp_TypeInfo_var))->___OnReset_21;
		DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* L_2 = ___anim0;
		NullCheck(L_1);
		Action_1_Invoke_mA5A3AA899330D724CE0CAB756A2223B5BC6BF975_inline(L_1, L_2, NULL);
	}

IL_0012:
	{
		// static void Dispatch_OnReset(DOTweenAnimation anim) { if (OnReset != null) OnReset(anim); }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Awake_mCFFD1C6DA6D6868077CB9D690BFAF070E3D9BCDD (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	{
		// if (!isActive || !autoGenerate) return;
		bool L_0 = __this->___isActive_37;
		if (!L_0)
		{
			goto IL_0010;
		}
	}
	{
		bool L_1 = __this->___autoGenerate_36;
		if (L_1)
		{
			goto IL_0011;
		}
	}

IL_0010:
	{
		// if (!isActive || !autoGenerate) return;
		return;
	}

IL_0011:
	{
		// if (animationType != AnimationType.Move || !useTargetAsV3) {
		int32_t L_2 = __this->___animationType_40;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0022;
		}
	}
	{
		bool L_3 = __this->___useTargetAsV3_44;
		if (L_3)
		{
			goto IL_0036;
		}
	}

IL_0022:
	{
		// CreateTween(false, autoPlay);
		bool L_4 = __this->___autoPlay_43;
		DOTweenAnimation_CreateTween_m087F3C335B0666D2F97271A0FAD07AFD8D88749A(__this, (bool)0, L_4, NULL);
		// _tweenAutoGenerationCalled = true;
		__this->____tweenAutoGenerationCalled_59 = (bool)1;
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Start_m9CD1EFDDD7177E8C20E1971BE24C927E2EDF8E63 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	{
		// if (_tweenAutoGenerationCalled || !isActive || !autoGenerate) return;
		bool L_0 = __this->____tweenAutoGenerationCalled_59;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		bool L_1 = __this->___isActive_37;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		bool L_2 = __this->___autoGenerate_36;
		if (L_2)
		{
			goto IL_0019;
		}
	}

IL_0018:
	{
		// if (_tweenAutoGenerationCalled || !isActive || !autoGenerate) return;
		return;
	}

IL_0019:
	{
		// CreateTween(false, autoPlay);
		bool L_3 = __this->___autoPlay_43;
		DOTweenAnimation_CreateTween_m087F3C335B0666D2F97271A0FAD07AFD8D88749A(__this, (bool)0, L_3, NULL);
		// _tweenAutoGenerationCalled = true;
		__this->____tweenAutoGenerationCalled_59 = (bool)1;
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_Reset_mD6102F6B03D15D33D0BAC57D100950EFE002495D (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	{
		// Dispatch_OnReset(this);
		DOTweenAnimation_Dispatch_OnReset_m45BC616F21C2CD87672364D75CF5E85E79FE8AE9(__this, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_OnDestroy_m14C0E2EB15F1ACDD6A12A13AE706AEC7695EBD00 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	{
		// if (tween != null && tween.active) tween.Kill();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		NullCheck(L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (tween != null && tween.active) tween.Kill();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		TweenExtensions_Kill_mFFDE4DE45D8A91C357ABFF2F8FA95D412924F466(L_3, (bool)0, NULL);
	}

IL_0021:
	{
		// tween = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)(Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::RewindThenRecreateTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_RewindThenRecreateTween_m9FBE019382B2B9EAB4C06156085865630110CE62 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	{
		// if (tween != null && tween.active) tween.Rewind();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		NullCheck(L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (tween != null && tween.active) tween.Rewind();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		TweenExtensions_Rewind_m0ECE9F671C1A1BE35270FD24F9AC81DC5645DAF1(L_3, (bool)1, NULL);
	}

IL_0021:
	{
		// CreateTween(true, false);
		DOTweenAnimation_CreateTween_m087F3C335B0666D2F97271A0FAD07AFD8D88749A(__this, (bool)1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::RewindThenRecreateTweenAndPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_RewindThenRecreateTweenAndPlay_m1647140988F9180BBEB4DB7437D03EA7AB1E3402 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	{
		// if (tween != null && tween.active) tween.Rewind();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_1 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		NullCheck(L_1);
		bool L_2;
		L_2 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_1, NULL);
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// if (tween != null && tween.active) tween.Rewind();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_3 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		TweenExtensions_Rewind_m0ECE9F671C1A1BE35270FD24F9AC81DC5645DAF1(L_3, (bool)1, NULL);
	}

IL_0021:
	{
		// CreateTween(true, true);
		DOTweenAnimation_CreateTween_m087F3C335B0666D2F97271A0FAD07AFD8D88749A(__this, (bool)1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::RecreateTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_RecreateTween_mF80A7FD74CD25449F16B5D472B82C44D54852782 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	{
		// { CreateTween(true, false); }
		DOTweenAnimation_CreateTween_m087F3C335B0666D2F97271A0FAD07AFD8D88749A(__this, (bool)1, (bool)0, NULL);
		// { CreateTween(true, false); }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::RecreateTweenAndPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_RecreateTweenAndPlay_mB5AD565663B048A72E64CE8C79DB2DBC44EBBA69 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	{
		// { CreateTween(true, true); }
		DOTweenAnimation_CreateTween_m087F3C335B0666D2F97271A0FAD07AFD8D88749A(__this, (bool)1, (bool)1, NULL);
		// { CreateTween(true, true); }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::CreateTween(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_CreateTween_m087F3C335B0666D2F97271A0FAD07AFD8D88749A (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, bool ___regenerateIfExists0, bool ___andPlay1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTweenAnimation_U3CCreateTweenU3Eb__53_0_m6FAD551707875C16968DC88C6F575EBE6BD484AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m67DE92D56689877B5E346FE6239B6DEF7BB63685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBD5BB455040E882AE50EEAB6A2501BE795C1D799_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBBA1302CE258A2BE2EDB4EAB0282A0F7E57A574F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m0FBA342A78026EAD99F1F4E3E4985D1872AEBF3B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnRewind_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m6B6BE5929932148628C6F31855D79FF5A02066F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m745FAA93F7F77272847DE1A1E848E87E6D71DD85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m792BB03889E21524E3344FA61E814C7584D3BE7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m57E18275D826369CD94860A3F1C39309D94D7379_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCBB51799984C28B2039C1B35CB74368B6086A92B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2CEAE4E85D33463167ECC3B78A9F01FF36E41E43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mDA92D25D7C9B5461C21556F824B8615E54D4B102_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEAB195CDAFF31E19188BBC670CFC250810B26F6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEDDCA7FC4729778EA0AB5E9A49317F79F499816C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6F6CE91C47CB2C78B0DC42F6F9452FEF789419C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m39A70F3F6856D8F28E39EDE44E5A3E20053DA917_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6EF9BB4F327508610878B8B6DB2D16BBB5A7188_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m27A612ECE14371AB2BA5F411E9D7739F28208EC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mC3077CF17652F227E5720D80251A7B8238090CF8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C74FE91B960EA053252893469BAA876CFA5735D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral852803C0E0511404910B712837FFA455156FC4CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_1 = NULL;
	int32_t V_2 = 0;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_3 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_4 = NULL;
	int32_t V_5 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B47_0 = NULL;
	DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* G_B47_1 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B46_0 = NULL;
	DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* G_B46_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B48_0;
	memset((&G_B48_0), 0, sizeof(G_B48_0));
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* G_B48_1 = NULL;
	DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* G_B48_2 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B51_0 = NULL;
	DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* G_B51_1 = NULL;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B50_0 = NULL;
	DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* G_B50_1 = NULL;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B52_0;
	memset((&G_B52_0), 0, sizeof(G_B52_0));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* G_B52_1 = NULL;
	DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* G_B52_2 = NULL;
	{
		// if (!isValid) {
		bool L_0 = __this->___isValid_38;
		if (L_0)
		{
			goto IL_002c;
		}
	}
	{
		// if (regenerateIfExists) { // Called manually: warn users
		bool L_1 = ___regenerateIfExists0;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This DOTweenAnimation isn't valid and its tween won't be created", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_2, NULL);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral7C74FE91B960EA053252893469BAA876CFA5735D, L_3, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_4, L_5, NULL);
	}

IL_002b:
	{
		// return;
		return;
	}

IL_002c:
	{
		// if (tween != null) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_6 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		// if (tween.active) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_7 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		NullCheck(L_7);
		bool L_8;
		L_8 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_7, NULL);
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		// if (regenerateIfExists) tween.Kill();
		bool L_9 = ___regenerateIfExists0;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// if (regenerateIfExists) tween.Kill();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_10 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		TweenExtensions_Kill_mFFDE4DE45D8A91C357ABFF2F8FA95D412924F466(L_10, (bool)0, NULL);
		goto IL_0053;
	}

IL_0052:
	{
		// else return;
		return;
	}

IL_0053:
	{
		// tween = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)(Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
	}

IL_005a:
	{
		// GameObject tweenGO = GetTweenGO();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = DOTweenAnimation_GetTweenGO_m55DBE7691F9241F891180C06CB2B104DD72913AD(__this, NULL);
		V_0 = L_11;
		// if (target == null || tweenGO == null) {
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_12 = __this->___target_39;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_13)
		{
			goto IL_0078;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_14, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_15)
		{
			goto IL_00d0;
		}
	}

IL_0078:
	{
		// if (targetIsSelf && target == null) {
		bool L_16 = __this->___targetIsSelf_22;
		if (!L_16)
		{
			goto IL_00af;
		}
	}
	{
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_17 = __this->___target_39;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_18)
		{
			goto IL_00af;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This DOTweenAnimation's target is NULL, because the animation was created with a DOTween Pro version older than 0.9.255. To fix this, exit Play mode then simply select this object, and it will update automatically", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_19, NULL);
		String_t* L_21;
		L_21 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral852803C0E0511404910B712837FFA455156FC4CE, L_20, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22;
		L_22 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_21, L_22, NULL);
		return;
	}

IL_00af:
	{
		// Debug.LogWarning(string.Format("{0} :: This DOTweenAnimation's target/GameObject is unset: the tween will not be created.", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_23);
		String_t* L_24;
		L_24 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_23, NULL);
		String_t* L_25;
		L_25 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE, L_24, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_25, L_26, NULL);
		// return;
		return;
	}

IL_00d0:
	{
		// if (forcedTargetType != TargetType.Unset) targetType = forcedTargetType;
		int32_t L_27 = __this->___forcedTargetType_42;
		if (!L_27)
		{
			goto IL_00e4;
		}
	}
	{
		// if (forcedTargetType != TargetType.Unset) targetType = forcedTargetType;
		int32_t L_28 = __this->___forcedTargetType_42;
		__this->___targetType_41 = L_28;
	}

IL_00e4:
	{
		// if (targetType == TargetType.Unset) {
		int32_t L_29 = __this->___targetType_41;
		if (L_29)
		{
			goto IL_0102;
		}
	}
	{
		// targetType = TypeToDOTargetType(target.GetType());
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_30 = __this->___target_39;
		NullCheck(L_30);
		Type_t* L_31;
		L_31 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_30, NULL);
		int32_t L_32;
		L_32 = DOTweenAnimation_TypeToDOTargetType_mB3798DC9E39AE262B955B4603B8E9C167D0B4D56(L_31, NULL);
		__this->___targetType_41 = L_32;
	}

IL_0102:
	{
		// switch (animationType) {
		int32_t L_33 = __this->___animationType_40;
		V_2 = L_33;
		int32_t L_34 = V_2;
		switch (L_34)
		{
			case 0:
			{
				goto IL_0a19;
			}
			case 1:
			{
				goto IL_016c;
			}
			case 2:
			{
				goto IL_0354;
			}
			case 3:
			{
				goto IL_037c;
			}
			case 4:
			{
				goto IL_0423;
			}
			case 5:
			{
				goto IL_044b;
			}
			case 6:
			{
				goto IL_04d8;
			}
			case 7:
			{
				goto IL_05dd;
			}
			case 8:
			{
				goto IL_070d;
			}
			case 9:
			{
				goto IL_0753;
			}
			case 10:
			{
				goto IL_080e;
			}
			case 11:
			{
				goto IL_07e0;
			}
			case 12:
			{
				goto IL_083c;
			}
			case 13:
			{
				goto IL_0909;
			}
			case 14:
			{
				goto IL_08d5;
			}
			case 15:
			{
				goto IL_093d;
			}
			case 16:
			{
				goto IL_0964;
			}
			case 17:
			{
				goto IL_098b;
			}
			case 18:
			{
				goto IL_09af;
			}
			case 19:
			{
				goto IL_09d3;
			}
			case 20:
			{
				goto IL_09f7;
			}
			case 21:
			{
				goto IL_0495;
			}
		}
	}
	{
		goto IL_0a19;
	}

IL_016c:
	{
		// if (useTargetAsV3) {
		bool L_35 = __this->___useTargetAsV3_44;
		if (!L_35)
		{
			goto IL_0269;
		}
	}
	{
		// isRelative = false;
		__this->___isRelative_32 = (bool)0;
		// if (endValueTransform == null) {
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = __this->___endValueTransform_51;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_36, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_37)
		{
			goto IL_01bc;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's TO target is NULL, a Vector3 of (0,0,0) will be used instead", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_38);
		String_t* L_39;
		L_39 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_38, NULL);
		String_t* L_40;
		L_40 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralE2996F43EBFFA914B746B5861EC325951281A3EB, L_39, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_40, L_41, NULL);
		// endValueV3 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___endValueV3_46 = L_42;
		goto IL_0269;
	}

IL_01bc:
	{
		// if (targetType == TargetType.RectTransform) {
		int32_t L_43 = __this->___targetType_41;
		if ((!(((uint32_t)L_43) == ((uint32_t)5))))
		{
			goto IL_0258;
		}
	}
	{
		// RectTransform endValueT = endValueTransform as RectTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44 = __this->___endValueTransform_51;
		V_3 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_44, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// if (endValueT == null) {
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_45 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_45, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_46)
		{
			goto IL_020a;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's TO target should be a RectTransform, a Vector3 of (0,0,0) will be used instead", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47;
		L_47 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_47);
		String_t* L_48;
		L_48 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_47, NULL);
		String_t* L_49;
		L_49 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral71F308FB57202965E618BD0381AEBFDEEDF31F75, L_48, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50;
		L_50 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_49, L_50, NULL);
		// endValueV3 = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___endValueV3_46 = L_51;
		goto IL_0269;
	}

IL_020a:
	{
		// RectTransform rTarget = target as RectTransform;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_52 = __this->___target_39;
		V_4 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_52, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// if (rTarget == null) {
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_53 = V_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_54;
		L_54 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_53, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_54)
		{
			goto IL_0243;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This tween's target and TO target are not of the same type. Please reassign the values", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_55);
		String_t* L_56;
		L_56 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_55, NULL);
		String_t* L_57;
		L_57 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralF0AD9F8B1A2A2D534505FEA8D4D74C1BFD40753F, L_56, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58;
		L_58 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_57, L_58, NULL);
		goto IL_0269;
	}

IL_0243:
	{
		// endValueV3 = DOTweenModuleUI.Utils.SwitchToRectTransform(endValueT, rTarget);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_59 = V_3;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_60 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = Utils_SwitchToRectTransform_mBE1AC389B2EBD6D6D2C869064922F7B5C474122A(L_59, L_60, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_61, NULL);
		__this->___endValueV3_46 = L_62;
		goto IL_0269;
	}

IL_0258:
	{
		// endValueV3 = endValueTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_63 = __this->___endValueTransform_51;
		NullCheck(L_63);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_63, NULL);
		__this->___endValueV3_46 = L_64;
	}

IL_0269:
	{
		// switch (targetType) {
		int32_t L_65 = __this->___targetType_41;
		V_5 = L_65;
		int32_t L_66 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_66, 5)))
		{
			case 0:
			{
				goto IL_02c8;
			}
			case 1:
			{
				goto IL_0a19;
			}
			case 2:
			{
				goto IL_0a19;
			}
			case 3:
			{
				goto IL_02f5;
			}
			case 4:
			{
				goto IL_0322;
			}
			case 5:
			{
				goto IL_0a19;
			}
			case 6:
			{
				goto IL_029b;
			}
		}
	}
	{
		goto IL_0a19;
	}

IL_029b:
	{
		// tween = ((Transform)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_67 = __this->___target_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = __this->___endValueV3_46;
		float L_69 = __this->___duration_26;
		bool L_70 = __this->___optionalBool0_52;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_71;
		L_71 = ShortcutExtensions_DOMove_m82274FDC0216A91A1FAF16844805D06BF9A287FF(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_67, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_68, L_69, L_70, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_71;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_71);
		// break;
		goto IL_0a19;
	}

IL_02c8:
	{
		// tween = ((RectTransform)target).DOAnchorPos3D(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_72 = __this->___target_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = __this->___endValueV3_46;
		float L_74 = __this->___duration_26;
		bool L_75 = __this->___optionalBool0_52;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_76;
		L_76 = DOTweenModuleUI_DOAnchorPos3D_mFBCC12B6A9DD7BC7D5D28D69975F61E60F8CB8D8(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_72, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_73, L_74, L_75, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_76;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_76);
		// break;
		goto IL_0a19;
	}

IL_02f5:
	{
		// tween = ((Rigidbody)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_77 = __this->___target_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = __this->___endValueV3_46;
		float L_79 = __this->___duration_26;
		bool L_80 = __this->___optionalBool0_52;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_81;
		L_81 = DOTweenModulePhysics_DOMove_m0631991898F40DE178397D023912E48F583BA522(((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)CastclassClass((RuntimeObject*)L_77, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var)), L_78, L_79, L_80, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_81;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_81);
		// break;
		goto IL_0a19;
	}

IL_0322:
	{
		// tween = ((Rigidbody2D)target).DOMove(endValueV3, duration, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_82 = __this->___target_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = __this->___endValueV3_46;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_84;
		L_84 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_83, NULL);
		float L_85 = __this->___duration_26;
		bool L_86 = __this->___optionalBool0_52;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_87;
		L_87 = DOTweenModulePhysics2D_DOMove_mD6A94446FA93172EABE7070235B3686C5FF7C6F1(((Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*)CastclassSealed((RuntimeObject*)L_82, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var)), L_84, L_85, L_86, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_87;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_87);
		// break;
		goto IL_0a19;
	}

IL_0354:
	{
		// tween = tweenGO.transform.DOLocalMove(endValueV3, duration, optionalBool0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = V_0;
		NullCheck(L_88);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_89;
		L_89 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_88, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90 = __this->___endValueV3_46;
		float L_91 = __this->___duration_26;
		bool L_92 = __this->___optionalBool0_52;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_93;
		L_93 = ShortcutExtensions_DOLocalMove_m22F3EB581DADB5A3FC59B69F7F6F05A86F8E8348(L_89, L_90, L_91, L_92, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_93;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_93);
		// break;
		goto IL_0a19;
	}

IL_037c:
	{
		// switch (targetType) {
		int32_t L_94 = __this->___targetType_41;
		V_5 = L_94;
		int32_t L_95 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_95, 8)))
		{
			case 0:
			{
				goto IL_03cf;
			}
			case 1:
			{
				goto IL_03fc;
			}
			case 2:
			{
				goto IL_0a19;
			}
			case 3:
			{
				goto IL_03a2;
			}
		}
	}
	{
		goto IL_0a19;
	}

IL_03a2:
	{
		// tween = ((Transform)target).DORotate(endValueV3, duration, optionalRotationMode);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_96 = __this->___target_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = __this->___endValueV3_46;
		float L_98 = __this->___duration_26;
		int32_t L_99 = __this->___optionalRotationMode_56;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_100;
		L_100 = ShortcutExtensions_DORotate_mA2804C1A3E4780383111262752CC7056BBC7D470(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_96, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_97, L_98, L_99, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_100;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_100);
		// break;
		goto IL_0a19;
	}

IL_03cf:
	{
		// tween = ((Rigidbody)target).DORotate(endValueV3, duration, optionalRotationMode);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_101 = __this->___target_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = __this->___endValueV3_46;
		float L_103 = __this->___duration_26;
		int32_t L_104 = __this->___optionalRotationMode_56;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_105;
		L_105 = DOTweenModulePhysics_DORotate_m0CCB210C4A51881CF411879CA3860629317788D6(((Rigidbody_t268697F5A994213ED97393309870968BC1C7393C*)CastclassClass((RuntimeObject*)L_101, Rigidbody_t268697F5A994213ED97393309870968BC1C7393C_il2cpp_TypeInfo_var)), L_102, L_103, L_104, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_105;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_105);
		// break;
		goto IL_0a19;
	}

IL_03fc:
	{
		// tween = ((Rigidbody2D)target).DORotate(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_106 = __this->___target_39;
		float L_107 = __this->___endValueFloat_45;
		float L_108 = __this->___duration_26;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_109;
		L_109 = DOTweenModulePhysics2D_DORotate_m67EA91BCD8DD63315B1C837F1C07D7B160A0E449(((Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F*)CastclassSealed((RuntimeObject*)L_106, Rigidbody2D_tBEBE9523CF4448544085AF46BF7E10AA499F320F_il2cpp_TypeInfo_var)), L_107, L_108, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_109;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_109);
		// break;
		goto IL_0a19;
	}

IL_0423:
	{
		// tween = tweenGO.transform.DOLocalRotate(endValueV3, duration, optionalRotationMode);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110 = V_0;
		NullCheck(L_110);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_111;
		L_111 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_110, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = __this->___endValueV3_46;
		float L_113 = __this->___duration_26;
		int32_t L_114 = __this->___optionalRotationMode_56;
		TweenerCore_3_t392C54729BB024F5802F8E205C583653C4E886E3* L_115;
		L_115 = ShortcutExtensions_DOLocalRotate_m6EB8F37963023C6B157C60013B98D2B612816DA4(L_111, L_112, L_113, L_114, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_115;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_115);
		// break;
		goto IL_0a19;
	}

IL_044b:
	{
		// switch (targetType) {
		int32_t L_116 = __this->___targetType_41;
		// tween = tweenGO.transform.DOScale(optionalBool0 ? new Vector3(endValueFloat, endValueFloat, endValueFloat) : endValueV3, duration);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_117 = V_0;
		NullCheck(L_117);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_118;
		L_118 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_117, NULL);
		bool L_119 = __this->___optionalBool0_52;
		G_B46_0 = L_118;
		G_B46_1 = __this;
		if (L_119)
		{
			G_B47_0 = L_118;
			G_B47_1 = __this;
			goto IL_0469;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_120 = __this->___endValueV3_46;
		G_B48_0 = L_120;
		G_B48_1 = G_B46_0;
		G_B48_2 = G_B46_1;
		goto IL_0480;
	}

IL_0469:
	{
		float L_121 = __this->___endValueFloat_45;
		float L_122 = __this->___endValueFloat_45;
		float L_123 = __this->___endValueFloat_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		memset((&L_124), 0, sizeof(L_124));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_124), L_121, L_122, L_123, /*hidden argument*/NULL);
		G_B48_0 = L_124;
		G_B48_1 = G_B47_0;
		G_B48_2 = G_B47_1;
	}

IL_0480:
	{
		float L_125 = __this->___duration_26;
		TweenerCore_3_tCD82DFC45FB71C681FA8659EA63A7D7D16BFFE77* L_126;
		L_126 = ShortcutExtensions_DOScale_mF7AC6EA0FD71B399776D758AD57B94F18A47F580(G_B48_1, G_B48_0, L_125, NULL);
		NullCheck(G_B48_2);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B48_2)->___tween_20 = L_126;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B48_2)->___tween_20), (void*)L_126);
		// break;
		goto IL_0a19;
	}

IL_0495:
	{
		// tween = ((RectTransform)target).DOSizeDelta(optionalBool0 ? new Vector2(endValueFloat, endValueFloat) : endValueV2, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_127 = __this->___target_39;
		bool L_128 = __this->___optionalBool0_52;
		G_B50_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_127, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		G_B50_1 = __this;
		if (L_128)
		{
			G_B51_0 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_127, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
			G_B51_1 = __this;
			goto IL_04b1;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_129 = __this->___endValueV2_47;
		G_B52_0 = L_129;
		G_B52_1 = G_B50_0;
		G_B52_2 = G_B50_1;
		goto IL_04c2;
	}

IL_04b1:
	{
		float L_130 = __this->___endValueFloat_45;
		float L_131 = __this->___endValueFloat_45;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_132;
		memset((&L_132), 0, sizeof(L_132));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_132), L_130, L_131, /*hidden argument*/NULL);
		G_B52_0 = L_132;
		G_B52_1 = G_B51_0;
		G_B52_2 = G_B51_1;
	}

IL_04c2:
	{
		float L_133 = __this->___duration_26;
		TweenerCore_3_t2FB3CB0C11B50649FE6CFC6DBE404552B898B271* L_134;
		L_134 = DOTweenModuleUI_DOSizeDelta_mD60636423B3BC3144AFD4AB4561F8E2EB82A32F9(G_B52_1, G_B52_0, L_133, (bool)0, NULL);
		NullCheck(G_B52_2);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B52_2)->___tween_20 = L_134;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)G_B52_2)->___tween_20), (void*)L_134);
		// break;
		goto IL_0a19;
	}

IL_04d8:
	{
		// isRelative = false;
		__this->___isRelative_32 = (bool)0;
		// switch (targetType) {
		int32_t L_135 = __this->___targetType_41;
		V_5 = L_135;
		int32_t L_136 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_136, 3)))
		{
			case 0:
			{
				goto IL_058f;
			}
			case 1:
			{
				goto IL_0541;
			}
			case 2:
			{
				goto IL_0a19;
			}
			case 3:
			{
				goto IL_0515;
			}
			case 4:
			{
				goto IL_0568;
			}
			case 5:
			{
				goto IL_0a19;
			}
			case 6:
			{
				goto IL_0a19;
			}
			case 7:
			{
				goto IL_05b6;
			}
		}
	}
	{
		goto IL_0a19;
	}

IL_0515:
	{
		// tween = ((Renderer)target).material.DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_137 = __this->___target_39;
		NullCheck(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_137, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_138;
		L_138 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_137, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_139 = __this->___endValueColor_48;
		float L_140 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_141;
		L_141 = ShortcutExtensions_DOColor_m7770E3969D58563343B129139B857669312EFAA9(L_138, L_139, L_140, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_141;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_141);
		// break;
		goto IL_0a19;
	}

IL_0541:
	{
		// tween = ((Light)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_142 = __this->___target_39;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_143 = __this->___endValueColor_48;
		float L_144 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_145;
		L_145 = ShortcutExtensions_DOColor_mAC2C2C38A8C15064D70E6B39F5735A09DDA0D581(((Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*)CastclassSealed((RuntimeObject*)L_142, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var)), L_143, L_144, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_145;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_145);
		// break;
		goto IL_0a19;
	}

IL_0568:
	{
		// tween = ((SpriteRenderer)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_146 = __this->___target_39;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_147 = __this->___endValueColor_48;
		float L_148 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_149;
		L_149 = DOTweenModuleSprite_DOColor_m218F26321AC150A0661156F1E00E10301955520B(((SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)CastclassSealed((RuntimeObject*)L_146, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var)), L_147, L_148, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_149;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_149);
		// break;
		goto IL_0a19;
	}

IL_058f:
	{
		// tween = ((Graphic)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_150 = __this->___target_39;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_151 = __this->___endValueColor_48;
		float L_152 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_153;
		L_153 = DOTweenModuleUI_DOColor_m9233FF1AA86CD2279B793E0AF8F54DC5C85FCFD3(((Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931*)CastclassClass((RuntimeObject*)L_150, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var)), L_151, L_152, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_153;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_153);
		// break;
		goto IL_0a19;
	}

IL_05b6:
	{
		// tween = ((Text)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_154 = __this->___target_39;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_155 = __this->___endValueColor_48;
		float L_156 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_157;
		L_157 = DOTweenModuleUI_DOColor_m8F5AC6B85FE7F362C1BBC07B4988B2925DA5D222(((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)CastclassClass((RuntimeObject*)L_154, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var)), L_155, L_156, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_157;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_157);
		// break;
		goto IL_0a19;
	}

IL_05dd:
	{
		// isRelative = false;
		__this->___isRelative_32 = (bool)0;
		// switch (targetType) {
		int32_t L_158 = __this->___targetType_41;
		V_5 = L_158;
		int32_t L_159 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_159, 2)))
		{
			case 0:
			{
				goto IL_06e6;
			}
			case 1:
			{
				goto IL_0698;
			}
			case 2:
			{
				goto IL_064a;
			}
			case 3:
			{
				goto IL_0a19;
			}
			case 4:
			{
				goto IL_061e;
			}
			case 5:
			{
				goto IL_0671;
			}
			case 6:
			{
				goto IL_0a19;
			}
			case 7:
			{
				goto IL_0a19;
			}
			case 8:
			{
				goto IL_06bf;
			}
		}
	}
	{
		goto IL_0a19;
	}

IL_061e:
	{
		// tween = ((Renderer)target).material.DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_160 = __this->___target_39;
		NullCheck(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_160, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)));
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_161;
		L_161 = Renderer_get_material_m5BA2A00816C4CC66580D4B2E409CF10718C15656(((Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF*)CastclassClass((RuntimeObject*)L_160, Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_il2cpp_TypeInfo_var)), NULL);
		float L_162 = __this->___endValueFloat_45;
		float L_163 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_164;
		L_164 = ShortcutExtensions_DOFade_m1C499FE6483845A6BBE9C4EB80D11062C9859FC8(L_161, L_162, L_163, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_164;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_164);
		// break;
		goto IL_0a19;
	}

IL_064a:
	{
		// tween = ((Light)target).DOIntensity(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_165 = __this->___target_39;
		float L_166 = __this->___endValueFloat_45;
		float L_167 = __this->___duration_26;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_168;
		L_168 = ShortcutExtensions_DOIntensity_m27397BA48763F123CFEE2F08D1B68C536BD1AE12(((Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3*)CastclassSealed((RuntimeObject*)L_165, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_il2cpp_TypeInfo_var)), L_166, L_167, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_168;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_168);
		// break;
		goto IL_0a19;
	}

IL_0671:
	{
		// tween = ((SpriteRenderer)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_169 = __this->___target_39;
		float L_170 = __this->___endValueFloat_45;
		float L_171 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_172;
		L_172 = DOTweenModuleSprite_DOFade_m0617BC96272648A1F03FD134F59E0F2AFC9B7413(((SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B*)CastclassSealed((RuntimeObject*)L_169, SpriteRenderer_t1DD7FE258F072E1FA87D6577BA27225892B8047B_il2cpp_TypeInfo_var)), L_170, L_171, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_172;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_172);
		// break;
		goto IL_0a19;
	}

IL_0698:
	{
		// tween = ((Graphic)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_173 = __this->___target_39;
		float L_174 = __this->___endValueFloat_45;
		float L_175 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_176;
		L_176 = DOTweenModuleUI_DOFade_m5C46AC9BCADB210582200412278801F3009397C7(((Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931*)CastclassClass((RuntimeObject*)L_173, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_il2cpp_TypeInfo_var)), L_174, L_175, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_176;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_176);
		// break;
		goto IL_0a19;
	}

IL_06bf:
	{
		// tween = ((Text)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_177 = __this->___target_39;
		float L_178 = __this->___endValueFloat_45;
		float L_179 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_180;
		L_180 = DOTweenModuleUI_DOFade_m22F7B333A0005355770318E7AC1615573D6019B0(((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)CastclassClass((RuntimeObject*)L_177, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var)), L_178, L_179, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_180;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_180);
		// break;
		goto IL_0a19;
	}

IL_06e6:
	{
		// tween = ((CanvasGroup)target).DOFade(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_181 = __this->___target_39;
		float L_182 = __this->___endValueFloat_45;
		float L_183 = __this->___duration_26;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_184;
		L_184 = DOTweenModuleUI_DOFade_m8612845CE1ABEC7CA83639B8A6BA939242459B6C(((CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094*)CastclassSealed((RuntimeObject*)L_181, CanvasGroup_t048C1461B14628CFAEBE6E7353093ADB04EBC094_il2cpp_TypeInfo_var)), L_182, L_183, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_184;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_184);
		// break;
		goto IL_0a19;
	}

IL_070d:
	{
		// switch (targetType) {
		int32_t L_185 = __this->___targetType_41;
		if ((!(((uint32_t)L_185) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0a19;
		}
	}
	{
		// tween = ((Text)target).DOText(endValueString, duration, optionalBool0, optionalScrambleMode, optionalString);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_186 = __this->___target_39;
		String_t* L_187 = __this->___endValueString_49;
		float L_188 = __this->___duration_26;
		bool L_189 = __this->___optionalBool0_52;
		int32_t L_190 = __this->___optionalScrambleMode_57;
		String_t* L_191 = __this->___optionalString_58;
		TweenerCore_3_t390910F1CE8B4737AA72FEED470399C8DBE1AF8B* L_192;
		L_192 = DOTweenModuleUI_DOText_mE06A0BE77648B90B728F52D8A6A812AF767C06F2(((Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62*)CastclassClass((RuntimeObject*)L_186, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_il2cpp_TypeInfo_var)), L_187, L_188, L_189, L_190, L_191, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_192;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_192);
		// break;
		goto IL_0a19;
	}

IL_0753:
	{
		// switch (targetType) {
		int32_t L_193 = __this->___targetType_41;
		V_5 = L_193;
		int32_t L_194 = V_5;
		if ((((int32_t)L_194) == ((int32_t)5)))
		{
			goto IL_07a2;
		}
	}
	{
		int32_t L_195 = V_5;
		if ((!(((uint32_t)L_195) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0a19;
		}
	}
	{
		// tween = ((Transform)target).DOPunchPosition(endValueV3, duration, optionalInt0, optionalFloat0, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_196 = __this->___target_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_197 = __this->___endValueV3_46;
		float L_198 = __this->___duration_26;
		int32_t L_199 = __this->___optionalInt0_55;
		float L_200 = __this->___optionalFloat0_54;
		bool L_201 = __this->___optionalBool0_52;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_202;
		L_202 = ShortcutExtensions_DOPunchPosition_mD022015ABB94942EE909F7F8E0F3660D52FA3D9E(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_196, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_197, L_198, L_199, L_200, L_201, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_202;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_202);
		// break;
		goto IL_0a19;
	}

IL_07a2:
	{
		// tween = ((RectTransform)target).DOPunchAnchorPos(endValueV3, duration, optionalInt0, optionalFloat0, optionalBool0);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_203 = __this->___target_39;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_204 = __this->___endValueV3_46;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_205;
		L_205 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_204, NULL);
		float L_206 = __this->___duration_26;
		int32_t L_207 = __this->___optionalInt0_55;
		float L_208 = __this->___optionalFloat0_54;
		bool L_209 = __this->___optionalBool0_52;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_210;
		L_210 = DOTweenModuleUI_DOPunchAnchorPos_m132FA6E0387614584C69F859E9D3ADC0D2C90A2F(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_203, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_205, L_206, L_207, L_208, L_209, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_210;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_210);
		// break;
		goto IL_0a19;
	}

IL_07e0:
	{
		// tween = tweenGO.transform.DOPunchScale(endValueV3, duration, optionalInt0, optionalFloat0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_211 = V_0;
		NullCheck(L_211);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_212;
		L_212 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_211, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_213 = __this->___endValueV3_46;
		float L_214 = __this->___duration_26;
		int32_t L_215 = __this->___optionalInt0_55;
		float L_216 = __this->___optionalFloat0_54;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_217;
		L_217 = ShortcutExtensions_DOPunchScale_mD7D825D1761F0264BC1D00027B79330844400B9A(L_212, L_213, L_214, L_215, L_216, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_217;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_217);
		// break;
		goto IL_0a19;
	}

IL_080e:
	{
		// tween = tweenGO.transform.DOPunchRotation(endValueV3, duration, optionalInt0, optionalFloat0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_218 = V_0;
		NullCheck(L_218);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_219;
		L_219 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_218, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_220 = __this->___endValueV3_46;
		float L_221 = __this->___duration_26;
		int32_t L_222 = __this->___optionalInt0_55;
		float L_223 = __this->___optionalFloat0_54;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_224;
		L_224 = ShortcutExtensions_DOPunchRotation_mDC55C1F23E2C17A4E9D4BF5BB787BB1DE98D7AC4(L_219, L_220, L_221, L_222, L_223, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_224;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_224);
		// break;
		goto IL_0a19;
	}

IL_083c:
	{
		// switch (targetType) {
		int32_t L_225 = __this->___targetType_41;
		V_5 = L_225;
		int32_t L_226 = V_5;
		if ((((int32_t)L_226) == ((int32_t)5)))
		{
			goto IL_0891;
		}
	}
	{
		int32_t L_227 = V_5;
		if ((!(((uint32_t)L_227) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0a19;
		}
	}
	{
		// tween = ((Transform)target).DOShakePosition(duration, endValueV3, optionalInt0, optionalFloat0, optionalBool0, optionalBool1);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_228 = __this->___target_39;
		float L_229 = __this->___duration_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_230 = __this->___endValueV3_46;
		int32_t L_231 = __this->___optionalInt0_55;
		float L_232 = __this->___optionalFloat0_54;
		bool L_233 = __this->___optionalBool0_52;
		bool L_234 = __this->___optionalBool1_53;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_235;
		L_235 = ShortcutExtensions_DOShakePosition_mEF231F12CB359BF88DEA0B5BF1480A270DE9366D(((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_228, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var)), L_229, L_230, L_231, L_232, L_233, L_234, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_235;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_235);
		// break;
		goto IL_0a19;
	}

IL_0891:
	{
		// tween = ((RectTransform)target).DOShakeAnchorPos(duration, endValueV3, optionalInt0, optionalFloat0, optionalBool0, optionalBool1);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_236 = __this->___target_39;
		float L_237 = __this->___duration_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_238 = __this->___endValueV3_46;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_239;
		L_239 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_238, NULL);
		int32_t L_240 = __this->___optionalInt0_55;
		float L_241 = __this->___optionalFloat0_54;
		bool L_242 = __this->___optionalBool0_52;
		bool L_243 = __this->___optionalBool1_53;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_244;
		L_244 = DOTweenModuleUI_DOShakeAnchorPos_mFCD2F579DAFCBCA0AF43F7B69BDC31B1A874476E(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_236, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_237, L_239, L_240, L_241, L_242, L_243, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_244;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_244);
		// break;
		goto IL_0a19;
	}

IL_08d5:
	{
		// tween = tweenGO.transform.DOShakeScale(duration, endValueV3, optionalInt0, optionalFloat0, optionalBool1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_245 = V_0;
		NullCheck(L_245);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_246;
		L_246 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_245, NULL);
		float L_247 = __this->___duration_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_248 = __this->___endValueV3_46;
		int32_t L_249 = __this->___optionalInt0_55;
		float L_250 = __this->___optionalFloat0_54;
		bool L_251 = __this->___optionalBool1_53;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_252;
		L_252 = ShortcutExtensions_DOShakeScale_m6DF910EF19D54F5136100A2F3175B3DD53D85BBA(L_246, L_247, L_248, L_249, L_250, L_251, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_252;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_252);
		// break;
		goto IL_0a19;
	}

IL_0909:
	{
		// tween = tweenGO.transform.DOShakeRotation(duration, endValueV3, optionalInt0, optionalFloat0, optionalBool1);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_253 = V_0;
		NullCheck(L_253);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_254;
		L_254 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_253, NULL);
		float L_255 = __this->___duration_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_256 = __this->___endValueV3_46;
		int32_t L_257 = __this->___optionalInt0_55;
		float L_258 = __this->___optionalFloat0_54;
		bool L_259 = __this->___optionalBool1_53;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_260;
		L_260 = ShortcutExtensions_DOShakeRotation_m36228095EBEDF630E0B87230083E6947A04DBB5E(L_254, L_255, L_256, L_257, L_258, L_259, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_260;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_260);
		// break;
		goto IL_0a19;
	}

IL_093d:
	{
		// tween = ((Camera)target).DOAspect(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_261 = __this->___target_39;
		float L_262 = __this->___endValueFloat_45;
		float L_263 = __this->___duration_26;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_264;
		L_264 = ShortcutExtensions_DOAspect_mE9ECE416D6C7FD3BDE1DB73DFBCAA738589062E2(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_261, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_262, L_263, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_264;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_264);
		// break;
		goto IL_0a19;
	}

IL_0964:
	{
		// tween = ((Camera)target).DOColor(endValueColor, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_265 = __this->___target_39;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_266 = __this->___endValueColor_48;
		float L_267 = __this->___duration_26;
		TweenerCore_3_tC0593021331EF2AF46590E2184F512C0D38FD4C3* L_268;
		L_268 = ShortcutExtensions_DOColor_mC438262691549AA19473BFC4777A39E4DF995E03(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_265, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_266, L_267, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_268;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_268);
		// break;
		goto IL_0a19;
	}

IL_098b:
	{
		// tween = ((Camera)target).DOFieldOfView(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_269 = __this->___target_39;
		float L_270 = __this->___endValueFloat_45;
		float L_271 = __this->___duration_26;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_272;
		L_272 = ShortcutExtensions_DOFieldOfView_mDF8F791F7D4672A51988CE4F3434A589F0F7F62D(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_269, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_270, L_271, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_272;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_272);
		// break;
		goto IL_0a19;
	}

IL_09af:
	{
		// tween = ((Camera)target).DOOrthoSize(endValueFloat, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_273 = __this->___target_39;
		float L_274 = __this->___endValueFloat_45;
		float L_275 = __this->___duration_26;
		TweenerCore_3_t88CA32E51F4E95E6907CE2C6FD5D8122059AC2C1* L_276;
		L_276 = ShortcutExtensions_DOOrthoSize_mE96037CC51B44CB1B04CF436779EAF60BF6C0CD3(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_273, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_274, L_275, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_276;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_276);
		// break;
		goto IL_0a19;
	}

IL_09d3:
	{
		// tween = ((Camera)target).DOPixelRect(endValueRect, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_277 = __this->___target_39;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_278 = __this->___endValueRect_50;
		float L_279 = __this->___duration_26;
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_280;
		L_280 = ShortcutExtensions_DOPixelRect_m30CEF5D00DEFB324BB8514B95CF0328929274598(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_277, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_278, L_279, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_280;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_280);
		// break;
		goto IL_0a19;
	}

IL_09f7:
	{
		// tween = ((Camera)target).DORect(endValueRect, duration);
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_281 = __this->___target_39;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_282 = __this->___endValueRect_50;
		float L_283 = __this->___duration_26;
		TweenerCore_3_tE0A3D42393A2015849880D806418B2EDD0187D5D* L_284;
		L_284 = ShortcutExtensions_DORect_m21D8649612CDF6196C7D4C591382743112FEAFD3(((Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184*)CastclassSealed((RuntimeObject*)L_281, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_il2cpp_TypeInfo_var)), L_282, L_283, NULL);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = L_284;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)L_284);
	}

IL_0a19:
	{
		// if (tween == null) return;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_285 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		if (L_285)
		{
			goto IL_0a22;
		}
	}
	{
		// if (tween == null) return;
		return;
	}

IL_0a22:
	{
		// if (isFrom) {
		bool L_286 = __this->___isFrom_33;
		if (!L_286)
		{
			goto IL_0a43;
		}
	}
	{
		// ((Tweener)tween).From(isRelative);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_287 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		bool L_288 = __this->___isRelative_32;
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_289;
		L_289 = TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBD5BB455040E882AE50EEAB6A2501BE795C1D799(((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_287, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)), L_288, TweenSettingsExtensions_From_TisTweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_mBD5BB455040E882AE50EEAB6A2501BE795C1D799_RuntimeMethod_var);
		goto IL_0a55;
	}

IL_0a43:
	{
		// tween.SetRelative(isRelative);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_290 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		bool L_291 = __this->___isRelative_32;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_292;
		L_292 = TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m39A70F3F6856D8F28E39EDE44E5A3E20053DA917(L_290, L_291, TweenSettingsExtensions_SetRelative_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m39A70F3F6856D8F28E39EDE44E5A3E20053DA917_RuntimeMethod_var);
	}

IL_0a55:
	{
		// GameObject setTarget = GetTweenTarget();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_293;
		L_293 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		V_1 = L_293;
		// tween.SetTarget(setTarget).SetDelay(delay).SetLoops(loops, loopType).SetAutoKill(autoKill)
		//     .OnKill(()=> tween = null);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_294 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_295 = V_1;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_296;
		L_296 = TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m27A612ECE14371AB2BA5F411E9D7739F28208EC5(L_294, L_295, TweenSettingsExtensions_SetTarget_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m27A612ECE14371AB2BA5F411E9D7739F28208EC5_RuntimeMethod_var);
		float L_297 = __this->___delay_25;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_298;
		L_298 = TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2CEAE4E85D33463167ECC3B78A9F01FF36E41E43(L_296, L_297, TweenSettingsExtensions_SetDelay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m2CEAE4E85D33463167ECC3B78A9F01FF36E41E43_RuntimeMethod_var);
		int32_t L_299 = __this->___loops_30;
		int32_t L_300 = __this->___loopType_29;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_301;
		L_301 = TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6F6CE91C47CB2C78B0DC42F6F9452FEF789419C(L_298, L_299, L_300, TweenSettingsExtensions_SetLoops_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6F6CE91C47CB2C78B0DC42F6F9452FEF789419C_RuntimeMethod_var);
		bool L_302 = __this->___autoKill_35;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_303;
		L_303 = TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCBB51799984C28B2039C1B35CB74368B6086A92B(L_301, L_302, TweenSettingsExtensions_SetAutoKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCBB51799984C28B2039C1B35CB74368B6086A92B_RuntimeMethod_var);
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_304 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_304);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_304, __this, (intptr_t)((void*)DOTweenAnimation_U3CCreateTweenU3Eb__53_0_m6FAD551707875C16968DC88C6F575EBE6BD484AE_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_305;
		L_305 = TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBBA1302CE258A2BE2EDB4EAB0282A0F7E57A574F(L_303, L_304, TweenSettingsExtensions_OnKill_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBBA1302CE258A2BE2EDB4EAB0282A0F7E57A574F_RuntimeMethod_var);
		// if (isSpeedBased) tween.SetSpeedBased();
		bool L_306 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___isSpeedBased_5;
		if (!L_306)
		{
			goto IL_0ab5;
		}
	}
	{
		// if (isSpeedBased) tween.SetSpeedBased();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_307 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_308;
		L_308 = TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6EF9BB4F327508610878B8B6DB2D16BBB5A7188(L_307, TweenSettingsExtensions_SetSpeedBased_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mD6EF9BB4F327508610878B8B6DB2D16BBB5A7188_RuntimeMethod_var);
	}

IL_0ab5:
	{
		// if (easeType == Ease.INTERNAL_Custom) tween.SetEase(easeCurve);
		int32_t L_309 = __this->___easeType_27;
		if ((!(((uint32_t)L_309) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0ad3;
		}
	}
	{
		// if (easeType == Ease.INTERNAL_Custom) tween.SetEase(easeCurve);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_310 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_311 = __this->___easeCurve_28;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_312;
		L_312 = TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mDA92D25D7C9B5461C21556F824B8615E54D4B102(L_310, L_311, TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mDA92D25D7C9B5461C21556F824B8615E54D4B102_RuntimeMethod_var);
		goto IL_0ae5;
	}

IL_0ad3:
	{
		// else tween.SetEase(easeType);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_313 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		int32_t L_314 = __this->___easeType_27;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_315;
		L_315 = TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEAB195CDAFF31E19188BBC670CFC250810B26F6F(L_313, L_314, TweenSettingsExtensions_SetEase_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEAB195CDAFF31E19188BBC670CFC250810B26F6F_RuntimeMethod_var);
	}

IL_0ae5:
	{
		// if (!string.IsNullOrEmpty(id)) tween.SetId(id);
		String_t* L_316 = __this->___id_31;
		bool L_317;
		L_317 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_316, NULL);
		if (L_317)
		{
			goto IL_0b04;
		}
	}
	{
		// if (!string.IsNullOrEmpty(id)) tween.SetId(id);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_318 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		String_t* L_319 = __this->___id_31;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_320;
		L_320 = TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEDDCA7FC4729778EA0AB5E9A49317F79F499816C(L_318, L_319, TweenSettingsExtensions_SetId_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mEDDCA7FC4729778EA0AB5E9A49317F79F499816C_RuntimeMethod_var);
	}

IL_0b04:
	{
		// tween.SetUpdate(isIndependentUpdate);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_321 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		bool L_322 = __this->___isIndependentUpdate_34;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_323;
		L_323 = TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mC3077CF17652F227E5720D80251A7B8238090CF8(L_321, L_322, TweenSettingsExtensions_SetUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mC3077CF17652F227E5720D80251A7B8238090CF8_RuntimeMethod_var);
		// if (hasOnStart) {
		bool L_324 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnStart_6;
		if (!L_324)
		{
			goto IL_0b45;
		}
	}
	{
		// if (onStart != null) tween.OnStart(onStart.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_325 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_13;
		if (!L_325)
		{
			goto IL_0b4c;
		}
	}
	{
		// if (onStart != null) tween.OnStart(onStart.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_326 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_327 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_13;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_328 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_328);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_328, L_327, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_329;
		L_329 = TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m745FAA93F7F77272847DE1A1E848E87E6D71DD85(L_326, L_328, TweenSettingsExtensions_OnStart_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m745FAA93F7F77272847DE1A1E848E87E6D71DD85_RuntimeMethod_var);
		goto IL_0b4c;
	}

IL_0b45:
	{
		// } else onStart = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_13 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStart_13), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0b4c:
	{
		// if (hasOnPlay) {
		bool L_330 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnPlay_7;
		if (!L_330)
		{
			goto IL_0b7b;
		}
	}
	{
		// if (onPlay != null) tween.OnPlay(onPlay.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_331 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_14;
		if (!L_331)
		{
			goto IL_0b82;
		}
	}
	{
		// if (onPlay != null) tween.OnPlay(onPlay.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_332 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_333 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_14;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_334 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_334);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_334, L_333, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_335;
		L_335 = TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m0FBA342A78026EAD99F1F4E3E4985D1872AEBF3B(L_332, L_334, TweenSettingsExtensions_OnPlay_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m0FBA342A78026EAD99F1F4E3E4985D1872AEBF3B_RuntimeMethod_var);
		goto IL_0b82;
	}

IL_0b7b:
	{
		// } else onPlay = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_14 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onPlay_14), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0b82:
	{
		// if (hasOnUpdate) {
		bool L_336 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnUpdate_8;
		if (!L_336)
		{
			goto IL_0bb1;
		}
	}
	{
		// if (onUpdate != null) tween.OnUpdate(onUpdate.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_337 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_15;
		if (!L_337)
		{
			goto IL_0bb8;
		}
	}
	{
		// if (onUpdate != null) tween.OnUpdate(onUpdate.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_338 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_339 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_15;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_340 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_340);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_340, L_339, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_341;
		L_341 = TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m57E18275D826369CD94860A3F1C39309D94D7379(L_338, L_340, TweenSettingsExtensions_OnUpdate_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m57E18275D826369CD94860A3F1C39309D94D7379_RuntimeMethod_var);
		goto IL_0bb8;
	}

IL_0bb1:
	{
		// } else onUpdate = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_15 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onUpdate_15), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0bb8:
	{
		// if (hasOnStepComplete) {
		bool L_342 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnStepComplete_9;
		if (!L_342)
		{
			goto IL_0be7;
		}
	}
	{
		// if (onStepComplete != null) tween.OnStepComplete(onStepComplete.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_343 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_16;
		if (!L_343)
		{
			goto IL_0bee;
		}
	}
	{
		// if (onStepComplete != null) tween.OnStepComplete(onStepComplete.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_344 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_345 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_16;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_346 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_346);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_346, L_345, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_347;
		L_347 = TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m792BB03889E21524E3344FA61E814C7584D3BE7C(L_344, L_346, TweenSettingsExtensions_OnStepComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m792BB03889E21524E3344FA61E814C7584D3BE7C_RuntimeMethod_var);
		goto IL_0bee;
	}

IL_0be7:
	{
		// } else onStepComplete = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_16 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onStepComplete_16), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0bee:
	{
		// if (hasOnComplete) {
		bool L_348 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnComplete_10;
		if (!L_348)
		{
			goto IL_0c1d;
		}
	}
	{
		// if (onComplete != null) tween.OnComplete(onComplete.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_349 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_17;
		if (!L_349)
		{
			goto IL_0c24;
		}
	}
	{
		// if (onComplete != null) tween.OnComplete(onComplete.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_350 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_351 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_17;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_352 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_352);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_352, L_351, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_353;
		L_353 = TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F(L_350, L_352, TweenSettingsExtensions_OnComplete_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mBE711AE994C1480385AE49921B1DE8D773AC0F6F_RuntimeMethod_var);
		goto IL_0c24;
	}

IL_0c1d:
	{
		// } else onComplete = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_17 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onComplete_17), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0c24:
	{
		// if (hasOnRewind) {
		bool L_354 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnRewind_12;
		if (!L_354)
		{
			goto IL_0c53;
		}
	}
	{
		// if (onRewind != null) tween.OnRewind(onRewind.Invoke);
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_355 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onRewind_19;
		if (!L_355)
		{
			goto IL_0c5a;
		}
	}
	{
		// if (onRewind != null) tween.OnRewind(onRewind.Invoke);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_356 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_357 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onRewind_19;
		TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24* L_358 = (TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24*)il2cpp_codegen_object_new(TweenCallback_t7C8B8A38E7B30905FF1B83C943256EF23617BB24_il2cpp_TypeInfo_var);
		NullCheck(L_358);
		TweenCallback__ctor_m68CC9304423CBDE43001F9B1413B5DAAF70DB621(L_358, L_357, (intptr_t)((void*)UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2_RuntimeMethod_var), NULL);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_359;
		L_359 = TweenSettingsExtensions_OnRewind_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m6B6BE5929932148628C6F31855D79FF5A02066F8(L_356, L_358, TweenSettingsExtensions_OnRewind_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m6B6BE5929932148628C6F31855D79FF5A02066F8_RuntimeMethod_var);
		goto IL_0c5a;
	}

IL_0c53:
	{
		// } else onRewind = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onRewind_19 = (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onRewind_19), (void*)(UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977*)NULL);
	}

IL_0c5a:
	{
		// if (andPlay) tween.Play();
		bool L_360 = ___andPlay1;
		if (!L_360)
		{
			goto IL_0c6b;
		}
	}
	{
		// if (andPlay) tween.Play();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_361 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_362;
		L_362 = TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79(L_361, TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79_RuntimeMethod_var);
		goto IL_0c77;
	}

IL_0c6b:
	{
		// else tween.Pause();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_363 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_364;
		L_364 = TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m67DE92D56689877B5E346FE6239B6DEF7BB63685(L_363, TweenExtensions_Pause_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_m67DE92D56689877B5E346FE6239B6DEF7BB63685_RuntimeMethod_var);
	}

IL_0c77:
	{
		// if (hasOnTweenCreated && onTweenCreated != null) onTweenCreated.Invoke();
		bool L_365 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___hasOnTweenCreated_11;
		if (!L_365)
		{
			goto IL_0c92;
		}
	}
	{
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_366 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onTweenCreated_18;
		if (!L_366)
		{
			goto IL_0c92;
		}
	}
	{
		// if (hasOnTweenCreated && onTweenCreated != null) onTweenCreated.Invoke();
		UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* L_367 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___onTweenCreated_18;
		NullCheck(L_367);
		UnityEvent_Invoke_mFBF80D59B03C30C5FE6A06F897D954ACADE061D2(L_367, NULL);
	}

IL_0c92:
	{
		// }
		return;
	}
}
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.DOTweenAnimation::GetTweens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* DOTweenAnimation_GetTweens_m9F40329777391B442440439543DB0ABFCCFE77AB (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisDOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_mF2F2B0B9347E8BC29B0E5ABD6269172C5236F021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* V_0 = NULL;
	DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* V_1 = NULL;
	int32_t V_2 = 0;
	DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* V_3 = NULL;
	{
		// List<Tween> result = new List<Tween>();
		List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* L_0 = (List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD*)il2cpp_codegen_object_new(List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8(L_0, List_1__ctor_mEDBC45510C70567B8263CF690D19D50EF22235D8_RuntimeMethod_var);
		V_0 = L_0;
		// DOTweenAnimation[] anims = this.GetComponents<DOTweenAnimation>();
		DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* L_1;
		L_1 = Component_GetComponents_TisDOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_mF2F2B0B9347E8BC29B0E5ABD6269172C5236F021(__this, Component_GetComponents_TisDOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_mF2F2B0B9347E8BC29B0E5ABD6269172C5236F021_RuntimeMethod_var);
		// foreach (DOTweenAnimation anim in anims) {
		V_1 = L_1;
		V_2 = 0;
		goto IL_003a;
	}

IL_0011:
	{
		// foreach (DOTweenAnimation anim in anims) {
		DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* L_2 = V_1;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		// if (anim.tween != null && anim.tween.active) result.Add(anim.tween);
		DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* L_6 = V_3;
		NullCheck(L_6);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_7 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_6)->___tween_20;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* L_8 = V_3;
		NullCheck(L_8);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_9 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_8)->___tween_20;
		NullCheck(L_9);
		bool L_10;
		L_10 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_9, NULL);
		if (!L_10)
		{
			goto IL_0036;
		}
	}
	{
		// if (anim.tween != null && anim.tween.active) result.Add(anim.tween);
		List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* L_11 = V_0;
		DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* L_12 = V_3;
		NullCheck(L_12);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_13 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_12)->___tween_20;
		NullCheck(L_11);
		List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_inline(L_11, L_13, List_1_Add_mBA978C54F180239702014DDD75202F19F926C6C6_RuntimeMethod_var);
	}

IL_0036:
	{
		int32_t L_14 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_003a:
	{
		// foreach (DOTweenAnimation anim in anims) {
		int32_t L_15 = V_2;
		DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* L_16 = V_1;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		// return result;
		List_1_tDA2C18E15C40590123A37DABB6D0D9AEB77A3BBD* L_17 = V_0;
		return L_17;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::SetAnimationTarget(UnityEngine.Component,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_SetAnimationTarget_mC34E9F6727AC73B4328C8DC4C7776430992EB6B5 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___tweenTarget0, bool ___useTweenTargetGameObjectForGroupOperations1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2702D9E80DE46EB93B5096879A1DA0332C4970B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TargetType newTargetType = TypeToDOTargetType(target.GetType());
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_0 = __this->___target_39;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		int32_t L_2;
		L_2 = DOTweenAnimation_TypeToDOTargetType_mB3798DC9E39AE262B955B4603B8E9C167D0B4D56(L_1, NULL);
		// if (newTargetType != targetType) {
		int32_t L_3 = __this->___targetType_41;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0023;
		}
	}
	{
		// Debug.LogError("DOTweenAnimation ? SetAnimationTarget: the new target is of a different type from the one set in the Inspector");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralC2702D9E80DE46EB93B5096879A1DA0332C4970B, NULL);
		// return;
		return;
	}

IL_0023:
	{
		// target = tweenTarget;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_4 = ___tweenTarget0;
		__this->___target_39 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___target_39), (void*)L_4);
		// targetGO = target.gameObject;
		Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* L_5 = __this->___target_39;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		__this->___targetGO_23 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetGO_23), (void*)L_6);
		// tweenTargetIsTargetGO = useTweenTargetGameObjectForGroupOperations;
		bool L_7 = ___useTweenTargetGameObjectForGroupOperations1;
		__this->___tweenTargetIsTargetGO_24 = L_7;
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlay_mA17A61AB21FE9732DC6C30A11ADC7E8E23AE173A (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(GetTweenTarget());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Play_m466F46F9DF6585E17C595438BA15147319540DC4(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayBackwards_mF50D6CEAB2D862F952095AADD22128640568C8FA (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayBackwards(GetTweenTarget());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayBackwards_m3709E26071CCE5CB368584477DF2FC9A8B9D052B(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayForward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayForward_m9E8D005E253669B88EB94B576B30B51ED8B7E772 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayForward(GetTweenTarget());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayForward_m4F27092024989DEB74466D9D9C370D5FA6621DCF(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPause_mBB91CF9160F4D7ECD485375C3423FFC7D6CE7C63 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Pause(GetTweenTarget());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Pause_m498BECFBBC8FBD76425B8AE1F38E2ECC9AE296D4(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOTogglePause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOTogglePause_m8107C487BD51C5C9A914F4CE0370154E24A1413D (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.TogglePause(GetTweenTarget());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_TogglePause_m8CE7CA00FE30F3C926F34362E2DE67A161536598(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORewind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORewind_m2A9B660F97F3EA6DDC351772D2E1C3762334F250 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponents_TisDOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_m96E59C66BD2A1BF461EE718111524F6C2E591A01_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* V_0 = NULL;
	int32_t V_1 = 0;
	Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* V_2 = NULL;
	{
		// _playCount = -1;
		__this->____playCount_60 = (-1);
		// DOTweenAnimation[] anims = this.gameObject.GetComponents<DOTweenAnimation>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* L_1;
		L_1 = GameObject_GetComponents_TisDOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_m96E59C66BD2A1BF461EE718111524F6C2E591A01(L_0, GameObject_GetComponents_TisDOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_m96E59C66BD2A1BF461EE718111524F6C2E591A01_RuntimeMethod_var);
		V_0 = L_1;
		// for (int i = anims.Length - 1; i > -1; --i) {
		DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* L_2 = V_0;
		NullCheck(L_2);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
		goto IL_0041;
	}

IL_001b:
	{
		// Tween t = anims[i].tween;
		DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* L_3 = V_0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_7 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_6)->___tween_20;
		V_2 = L_7;
		// if (t != null && t.IsInitialized()) anims[i].tween.Rewind();
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_8 = V_2;
		if (!L_8)
		{
			goto IL_003d;
		}
	}
	{
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_9 = V_2;
		bool L_10;
		L_10 = TweenExtensions_IsInitialized_m8C2B24B55147A6773849EB32D4D00E128CAB211B(L_9, NULL);
		if (!L_10)
		{
			goto IL_003d;
		}
	}
	{
		// if (t != null && t.IsInitialized()) anims[i].tween.Rewind();
		DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* L_11 = V_0;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_15 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_14)->___tween_20;
		TweenExtensions_Rewind_m0ECE9F671C1A1BE35270FD24F9AC81DC5645DAF1(L_15, (bool)1, NULL);
	}

IL_003d:
	{
		// for (int i = anims.Length - 1; i > -1; --i) {
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
	}

IL_0041:
	{
		// for (int i = anims.Length - 1; i > -1; --i) {
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) > ((int32_t)(-1))))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestart_m6F611A46C252F8C433ADEAB7B918D20703629434 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	{
		// { DORestart(false); }
		VirtualActionInvoker1< bool >::Invoke(11 /* System.Void DG.Tweening.Core.ABSAnimationComponent::DORestart(System.Boolean) */, __this, (bool)0);
		// { DORestart(false); }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestart_m7DD6D4BF8124D797EEA3EA9BBEF65CE5E68293B2 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, bool ___fromHere0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_60 = (-1);
		// if (tween == null) {
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_0 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		int32_t L_1;
		L_1 = Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline(NULL);
		if ((((int32_t)L_1) <= ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		Debugger_LogNullTween_m9C6A433A68F2C3DFCDFF127434135F8BBC116740(L_2, NULL);
	}

IL_0022:
	{
		// if (Debugger.logPriority > 1) Debugger.LogNullTween(tween); return;
		return;
	}

IL_0023:
	{
		// if (fromHere && isRelative) ReEvaluateRelativeTween();
		bool L_3 = ___fromHere0;
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		bool L_4 = __this->___isRelative_32;
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// if (fromHere && isRelative) ReEvaluateRelativeTween();
		DOTweenAnimation_ReEvaluateRelativeTween_m9A697CFDF38CAEC29754F3C8F8DFA6089758387A(__this, NULL);
	}

IL_0034:
	{
		// DOTween.Restart(GetTweenTarget());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = DOTween_Restart_mEE2F85FC8741BBCE7C1E76C143B3DCE5B9C78DEF(L_5, (bool)1, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOComplete_mE01083726D0674612F8CB8D49B4CC24F29523711 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Complete(GetTweenTarget());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Complete_m12E2987F7D42218DCCE051E2FDB803E75FD8BA91(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOKill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOKill_m5F94DADFFBB077E4E6261EAC1B75168031F235AC (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Kill(GetTweenTarget());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Kill_mAB4C96CE1F1BCF25E5347AE0FC295D064EA53FB2(L_0, (bool)0, NULL);
		// tween = null;
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)(Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayById_m2FC7E172F7F16BC289A51C0CC6887902306351AA (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(GetTweenTarget(), id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		String_t* L_1 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_Play_mEFD3A1E3CC218D3916032325F2E119C2004D9473(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayAllById_mD7AFBEDA562E8B98DD7F2BC55F03B255CDC6BE1B (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Play(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Play_m466F46F9DF6585E17C595438BA15147319540DC4(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPauseAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPauseAllById_mBD7471CAB69EADB2E4F8C435EEB8A23114C5634C (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Pause(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Pause_m498BECFBBC8FBD76425B8AE1F38E2ECC9AE296D4(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwardsById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayBackwardsById_m7FC599DCEE85E4A5F696C781274F866EFD048215 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayBackwards(GetTweenTarget(), id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		String_t* L_1 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_PlayBackwards_mC4FB110A49C220C2B5FE768989D133F0F8721FA7(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwardsAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayBackwardsAllById_m563817775A511A7EBD1314C594D9D915F2DE181F (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayBackwards(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayBackwards_m3709E26071CCE5CB368584477DF2FC9A8B9D052B(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayForwardById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayForwardById_m7D3CB64308438D21A71ED3A440F9DB7E1F28A53D (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayForward(GetTweenTarget(), id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		String_t* L_1 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_PlayForward_mC1FF85BCF9DC773A3E4FA3DC12377D1F9E1BADD4(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayForwardAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayForwardAllById_m9859FBDCB9923D4A0B497DC90D3B5FBA6827FAAA (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.PlayForward(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_PlayForward_m4F27092024989DEB74466D9D9C370D5FA6621DCF(L_0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOPlayNext_m7F3C6AD20E7861EFFAAF4F44952EB4105C458BAB (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisDOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_mF2F2B0B9347E8BC29B0E5ABD6269172C5236F021_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* V_0 = NULL;
	DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* V_1 = NULL;
	{
		// DOTweenAnimation[] anims = this.GetComponents<DOTweenAnimation>();
		DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* L_0;
		L_0 = Component_GetComponents_TisDOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_mF2F2B0B9347E8BC29B0E5ABD6269172C5236F021(__this, Component_GetComponents_TisDOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E_mF2F2B0B9347E8BC29B0E5ABD6269172C5236F021_RuntimeMethod_var);
		V_0 = L_0;
		goto IL_0065;
	}

IL_0009:
	{
		// _playCount++;
		int32_t L_1 = __this->____playCount_60;
		__this->____playCount_60 = ((int32_t)il2cpp_codegen_add(L_1, 1));
		// DOTweenAnimation anim = anims[_playCount];
		DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* L_2 = V_0;
		int32_t L_3 = __this->____playCount_60;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_1 = L_5;
		// if (anim != null && anim.tween != null && anim.tween.active && !anim.tween.IsPlaying() && !anim.tween.IsComplete()) {
		DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_7)
		{
			goto IL_0065;
		}
	}
	{
		DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* L_8 = V_1;
		NullCheck(L_8);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_9 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_8)->___tween_20;
		if (!L_9)
		{
			goto IL_0065;
		}
	}
	{
		DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* L_10 = V_1;
		NullCheck(L_10);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_11 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_10)->___tween_20;
		NullCheck(L_11);
		bool L_12;
		L_12 = Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline(L_11, NULL);
		if (!L_12)
		{
			goto IL_0065;
		}
	}
	{
		DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* L_13 = V_1;
		NullCheck(L_13);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_14 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_13)->___tween_20;
		bool L_15;
		L_15 = TweenExtensions_IsPlaying_m32EF28DEB59B931FA4607BAC3BED0DE275A1D843(L_14, NULL);
		if (L_15)
		{
			goto IL_0065;
		}
	}
	{
		DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* L_16 = V_1;
		NullCheck(L_16);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_17 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_16)->___tween_20;
		bool L_18;
		L_18 = TweenExtensions_IsComplete_mBB619B64C19A85AB4EEEBB3D37D3E720A9E0AF4C(L_17, NULL);
		if (L_18)
		{
			goto IL_0065;
		}
	}
	{
		// anim.tween.Play();
		DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* L_19 = V_1;
		NullCheck(L_19);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_20 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)L_19)->___tween_20;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_21;
		L_21 = TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79(L_20, TweenExtensions_Play_TisTween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C_mCD6CAE712476C0289135EE4E2113770DFB882C79_RuntimeMethod_var);
		// break;
		return;
	}

IL_0065:
	{
		// while (_playCount < anims.Length - 1) {
		int32_t L_22 = __this->____playCount_60;
		DOTweenAnimationU5BU5D_t419E3509C3972940660297E2A8BF4EA41AB0BAD2* L_23 = V_0;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_23)->max_length)), 1)))))
		{
			goto IL_0009;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORewindAndPlayNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORewindAndPlayNext_mC3187022124848DB62730568C0FDB2BB7F46ACF0 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_60 = (-1);
		// DOTween.Rewind(GetTweenTarget());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Rewind_m5C4020E9007FAAF719C1BE01CE440EBB39193619(L_0, (bool)1, NULL);
		// DOPlayNext();
		DOTweenAnimation_DOPlayNext_m7F3C6AD20E7861EFFAAF4F44952EB4105C458BAB(__this, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORewindAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORewindAllById_mC574CA46864296DEBDF55B1C9C59FA5F1EB4BDA6 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_60 = (-1);
		// DOTween.Rewind(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Rewind_m5C4020E9007FAAF719C1BE01CE440EBB39193619(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestartById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestartById_m0DCC0BBB930CDD7EEF91E3934A50A4C87A612F00 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_60 = (-1);
		// DOTween.Restart(GetTweenTarget(), id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		String_t* L_1 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_Restart_m89E03C91814831E13EA36751C4A8471CF41FA249(L_0, L_1, (bool)1, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DORestartAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DORestartAllById_mBE502158DAC35109A4A1A3FBA908619CE042E983 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _playCount = -1;
		__this->____playCount_60 = (-1);
		// DOTween.Restart(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Restart_mEE2F85FC8741BBCE7C1E76C143B3DCE5B9C78DEF(L_0, (bool)1, (-1.0f), NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOKillById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOKillById_m03097C7B53CBFE2A4C1B1508D21660C1F76140A9 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Kill(GetTweenTarget(), id);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D(__this, NULL);
		String_t* L_1 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = DOTween_Kill_m53573B76803A245F23AFAC2AB22995FDA4A9235A(L_0, L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::DOKillAllById(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_DOKillAllById_mE79D58F7598236ACFC735646BCC1725126830FF6 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DOTween.Kill(id);
		String_t* L_0 = ___id0;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = DOTween_Kill_mAB4C96CE1F1BCF25E5347AE0FC295D064EA53FB2(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// DG.Tweening.DOTweenAnimation/TargetType DG.Tweening.DOTweenAnimation::TypeToDOTargetType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DOTweenAnimation_TypeToDOTargetType_mB3798DC9E39AE262B955B4603B8E9C167D0B4D56 (Type_t* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetType_t447F9EC340B2415E5A08FE18BF68AB046907A867_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TargetType_t447F9EC340B2415E5A08FE18BF68AB046907A867_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral913C50E64A56501917C8F2949B1286A52BB08F32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95736F87FFB47A6CBA1FAEFC7529C2A3F3EE5E7A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8EA9923B74BD243E764B8F9D62174B9D637CB97);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// string str = t.ToString();
		Type_t* L_0 = ___t0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		V_0 = L_1;
		// int dotIndex = str.LastIndexOf(".");
		String_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_LastIndexOf_m8923DBD89F2B3E5A34190B038B48F402E0C17E40(L_2, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		V_1 = L_3;
		// if (dotIndex != -1) str = str.Substring(dotIndex + 1);
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) == ((int32_t)(-1))))
		{
			goto IL_0021;
		}
	}
	{
		// if (dotIndex != -1) str = str.Substring(dotIndex + 1);
		String_t* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		String_t* L_7;
		L_7 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		V_0 = L_7;
	}

IL_0021:
	{
		// if (str.IndexOf("Renderer") != -1 && (str != "SpriteRenderer")) str = "Renderer";
		String_t* L_8 = V_0;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_IndexOf_m69E9BDAFD93767C85A7FF861B453415D3B4A200F(L_8, _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C, NULL);
		if ((((int32_t)L_9) == ((int32_t)(-1))))
		{
			goto IL_0042;
		}
	}
	{
		String_t* L_10 = V_0;
		bool L_11;
		L_11 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_10, _stringLiteral6696B5BAE2BDB2FB41C480BCA3BEA55217F8CC87, NULL);
		if (!L_11)
		{
			goto IL_0042;
		}
	}
	{
		// if (str.IndexOf("Renderer") != -1 && (str != "SpriteRenderer")) str = "Renderer";
		V_0 = _stringLiteral8CCF95ED19A7C10C7DD800A4E0C960CACFE7FF1C;
	}

IL_0042:
	{
		// if (str == "RawImage" || str == "Graphic") str = "Image"; // RawImages/Graphics are managed like Images for DOTweenAnimation (color and fade use Graphic target anyway)
		String_t* L_12 = V_0;
		bool L_13;
		L_13 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_12, _stringLiteral95736F87FFB47A6CBA1FAEFC7529C2A3F3EE5E7A, NULL);
		if (L_13)
		{
			goto IL_005c;
		}
	}
	{
		String_t* L_14 = V_0;
		bool L_15;
		L_15 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_14, _stringLiteral913C50E64A56501917C8F2949B1286A52BB08F32, NULL);
		if (!L_15)
		{
			goto IL_0062;
		}
	}

IL_005c:
	{
		// if (str == "RawImage" || str == "Graphic") str = "Image"; // RawImages/Graphics are managed like Images for DOTweenAnimation (color and fade use Graphic target anyway)
		V_0 = _stringLiteralD8EA9923B74BD243E764B8F9D62174B9D637CB97;
	}

IL_0062:
	{
		// return (TargetType)Enum.Parse(typeof(TargetType), str);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16 = { reinterpret_cast<intptr_t> (TargetType_t447F9EC340B2415E5A08FE18BF68AB046907A867_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_16, NULL);
		String_t* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		RuntimeObject* L_19;
		L_19 = Enum_Parse_m2846B01D5DEA00E4674AED09DE0B2E59ECEED61F(L_17, L_18, NULL);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_19, TargetType_t447F9EC340B2415E5A08FE18BF68AB046907A867_il2cpp_TypeInfo_var))));
	}
}
// DG.Tweening.Tween DG.Tweening.DOTweenAnimation::CreateEditorPreview()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* DOTweenAnimation_CreateEditorPreview_m630AAEC3652BD304EFA69473FC2D874B675BAB00 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	{
		// if (Application.isPlaying) return null;
		bool L_0;
		L_0 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (Application.isPlaying) return null;
		return (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
	}

IL_0009:
	{
		// CreateTween(true, autoPlay);
		bool L_1 = __this->___autoPlay_43;
		DOTweenAnimation_CreateTween_m087F3C335B0666D2F97271A0FAD07AFD8D88749A(__this, (bool)1, L_1, NULL);
		// return tween;
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_2 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		return L_2;
	}
}
// UnityEngine.GameObject DG.Tweening.DOTweenAnimation::GetTweenGO()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* DOTweenAnimation_GetTweenGO_m55DBE7691F9241F891180C06CB2B104DD72913AD (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	{
		// return targetIsSelf ? this.gameObject : targetGO;
		bool L_0 = __this->___targetIsSelf_22;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___targetGO_23;
		return L_1;
	}

IL_000f:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		return L_2;
	}
}
// UnityEngine.GameObject DG.Tweening.DOTweenAnimation::GetTweenTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* DOTweenAnimation_GetTweenTarget_m54527FF096B8D6E94A1A1709179FA0BFBF08DE1D (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	{
		// return targetIsSelf || !tweenTargetIsTargetGO ? this.gameObject : targetGO;
		bool L_0 = __this->___targetIsSelf_22;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		bool L_1 = __this->___tweenTargetIsTargetGO_24;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___targetGO_23;
		return L_2;
	}

IL_0017:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		return L_3;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::ReEvaluateRelativeTween()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_ReEvaluateRelativeTween_m9A697CFDF38CAEC29754F3C8F8DFA6089758387A (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject tweenGO = GetTweenGO();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = DOTweenAnimation_GetTweenGO_m55DBE7691F9241F891180C06CB2B104DD72913AD(__this, NULL);
		V_0 = L_0;
		// if (tweenGO == null) {
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		// Debug.LogWarning(string.Format("{0} :: This DOTweenAnimation's target/GameObject is unset: the tween will not be created.", this.gameObject.name), this.gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_3, NULL);
		String_t* L_5;
		L_5 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral7BCD07D6842DC528F48EA9D13B36828C4A3980CE, L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m23033D7E2F0F298BE465B7F3A63CDF40A4EB70EB(L_5, L_6, NULL);
		// return;
		return;
	}

IL_0031:
	{
		// if (animationType == AnimationType.Move) {
		int32_t L_7 = __this->___animationType_40;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0068;
		}
	}
	{
		// ((Tweener)tween).ChangeEndValue(tweenGO.transform.position + endValueV3, true);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_8 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = V_0;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_10, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___endValueV3_46;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_11, L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = L_13;
		RuntimeObject* L_15 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_14);
		NullCheck(((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_8, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)));
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_16;
		L_16 = VirtualFuncInvoker2< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, RuntimeObject*, bool >::Invoke(11 /* DG.Tweening.Tweener DG.Tweening.Tweener::ChangeEndValue(System.Object,System.Boolean) */, ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_8, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)), L_15, (bool)1);
		return;
	}

IL_0068:
	{
		// } else if (animationType == AnimationType.LocalMove) {
		int32_t L_17 = __this->___animationType_40;
		if ((!(((uint32_t)L_17) == ((uint32_t)2))))
		{
			goto IL_009e;
		}
	}
	{
		// ((Tweener)tween).ChangeEndValue(tweenGO.transform.localPosition + endValueV3, true);
		Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* L_18 = ((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = V_0;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_19, NULL);
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_20, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = __this->___endValueV3_46;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23;
		RuntimeObject* L_25 = Box(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var, &L_24);
		NullCheck(((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_18, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)));
		Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* L_26;
		L_26 = VirtualFuncInvoker2< Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*, RuntimeObject*, bool >::Invoke(11 /* DG.Tweening.Tweener DG.Tweening.Tweener::ChangeEndValue(System.Object,System.Boolean) */, ((Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140*)CastclassClass((RuntimeObject*)L_18, Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140_il2cpp_TypeInfo_var)), L_25, (bool)1);
	}

IL_009e:
	{
		// }
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation__ctor_m3412ABFB6684180EBBBC9E26D8106084D73DD6E0 (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool targetIsSelf = true; // If FALSE allows to set the target manually
		__this->___targetIsSelf_22 = (bool)1;
		// public bool tweenTargetIsTargetGO = true;
		__this->___tweenTargetIsTargetGO_24 = (bool)1;
		// public float duration = 1;
		__this->___duration_26 = (1.0f);
		// public Ease easeType = Ease.OutQuad;
		__this->___easeType_27 = 6;
		// public AnimationCurve easeCurve = new AnimationCurve(new Keyframe(0, 0), new Keyframe(1, 1));
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_0 = (KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3*)SZArrayNew(KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3_il2cpp_TypeInfo_var, (uint32_t)2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_1 = L_0;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_2), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_2);
		KeyframeU5BU5D_t63250A46914A6A07B2A6689850D47D7D19D80BA3* L_3 = L_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Keyframe__ctor_mECF144086B28785BE911A22C06194A9E0FBF3C34((&L_4), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0)L_4);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_5 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)il2cpp_codegen_object_new(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		AnimationCurve__ctor_mEABC98C03805713354D61E50D9340766BD5B717E(L_5, L_3, NULL);
		__this->___easeCurve_28 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___easeCurve_28), (void*)L_5);
		// public int loops = 1;
		__this->___loops_30 = 1;
		// public string id = "";
		__this->___id_31 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___id_31), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public bool autoKill = true;
		__this->___autoKill_35 = (bool)1;
		// public bool autoGenerate = true; // If TRUE automatically creates the tween at startup
		__this->___autoGenerate_36 = (bool)1;
		// public bool isActive = true;
		__this->___isActive_37 = (bool)1;
		// public bool autoPlay = true;
		__this->___autoPlay_43 = (bool)1;
		// public Color endValueColor = new Color(1, 1, 1, 1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_6), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->___endValueColor_48 = L_6;
		// public string endValueString = "";
		__this->___endValueString_49 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___endValueString_49), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// public Rect endValueRect = new Rect(0, 0, 0, 0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		memset((&L_7), 0, sizeof(L_7));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_7), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->___endValueRect_50 = L_7;
		// int _playCount = -1; // Used when calling DOPlayNext
		__this->____playCount_60 = (-1);
		ABSAnimationComponent__ctor_mF2DC2EF90DDA4C57EC4858124EEEE03FE4CBB328(__this, NULL);
		return;
	}
}
// System.Void DG.Tweening.DOTweenAnimation::<CreateTween>b__53_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenAnimation_U3CCreateTweenU3Eb__53_0_m6FAD551707875C16968DC88C6F575EBE6BD484AE (DOTweenAnimation_tCBC4D1ECB340BFC1AB55252AE67D2D61DFA6B28E* __this, const RuntimeMethod* method) 
{
	{
		// .OnKill(()=> tween = null);
		((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20 = (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((ABSAnimationComponent_t9F4FA691DC061D111BE0D991B3460910B31B6B7C*)__this)->___tween_20), (void*)(Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C*)NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DG.Tweening.DOTweenProShortcuts::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DOTweenProShortcuts__cctor_mA076EF4F55A7F24198AF820EEE046B85C46A2F3E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SpiralPlugin stub = new SpiralPlugin();
		SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E* L_0 = (SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E*)il2cpp_codegen_object_new(SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SpiralPlugin__ctor_m9ACFE0F9B14BBBD77A9570420667150892067033(L_0, NULL);
		// }
		return;
	}
}
// DG.Tweening.Tweener DG.Tweening.DOTweenProShortcuts::DOSpiral(UnityEngine.Transform,System.Single,System.Nullable`1<UnityEngine.Vector3>,DG.Tweening.SpiralMode,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* DOTweenProShortcuts_DOSpiral_m43C682328E537056D2A949ADA64D2B2667864B8E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target0, float ___duration1, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___axis2, int32_t ___mode3, float ___speed4, float ___frequency5, float ___depth6, bool ___snapping7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m6716A7D71A3E516E4FB46A9B1C8AD83153E46190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m593D7B49993413FC2357476183683A34122E55B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_mCF844891B1DE1191685CE705C948D760E1FD42EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_m14BB58219098C628C62F5D8C4310B04B02C9B4E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362* V_0 = NULL;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B8_0 = 0;
	{
		U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362* L_0 = (U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_m665B96661A7A52DAF40B02BCA600ADAC5B13D8C1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362* L_1 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = ___target0;
		NullCheck(L_1);
		L_1->___target_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___target_0), (void*)L_2);
		// if (Mathf.Approximately(speed, 0)) speed = 1;
		float L_3 = ___speed4;
		bool L_4;
		L_4 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_3, (0.0f), NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// if (Mathf.Approximately(speed, 0)) speed = 1;
		___speed4 = (1.0f);
	}

IL_0022:
	{
		// if (axis == null || axis == Vector3.zero) axis = Vector3.forward;
		bool L_5;
		L_5 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&___axis2), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_6 = ___axis2;
		V_1 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		bool L_8;
		L_8 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&V_1), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003f;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0058;
	}

IL_003f:
	{
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&V_1), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_004b;
		}
	}
	{
		G_B8_0 = 1;
		goto IL_0058;
	}

IL_004b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_inline((&V_1), Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		bool L_12;
		L_12 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_10, L_11, NULL);
		G_B8_0 = ((int32_t)(L_12));
	}

IL_0058:
	{
		if (!G_B8_0)
		{
			goto IL_0066;
		}
	}

IL_005a:
	{
		// if (axis == null || axis == Vector3.zero) axis = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2((&___axis2), L_13, Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var);
	}

IL_0066:
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.localPosition, x => target.localPosition = x, (Vector3)axis, duration)
		//     .SetTarget(target);
		il2cpp_codegen_runtime_class_init_inline(SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_il2cpp_TypeInfo_var);
		ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C* L_14;
		L_14 = SpiralPlugin_Get_mEF40CC56A5043E8122C572AFCBC224BA925BC326(NULL);
		U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362* L_15 = V_0;
		DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* L_16 = (DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338*)il2cpp_codegen_object_new(DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		DOGetter_1__ctor_m59C11B3FE64C69454BE28721314FD6189629F27E(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_mCF844891B1DE1191685CE705C948D760E1FD42EC_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362* L_17 = V_0;
		DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* L_18 = (DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358*)il2cpp_codegen_object_new(DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		DOSetter_1__ctor_m9E67232146D149892F1946395AD1B6B1C53F3B60(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_m14BB58219098C628C62F5D8C4310B04B02C9B4E0_RuntimeMethod_var), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792((&___axis2), Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		float L_20 = ___duration1;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_21;
		L_21 = DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m6716A7D71A3E516E4FB46A9B1C8AD83153E46190(L_14, L_16, L_18, L_19, L_20, DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m6716A7D71A3E516E4FB46A9B1C8AD83153E46190_RuntimeMethod_var);
		U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362* L_22 = V_0;
		NullCheck(L_22);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23 = L_22->___target_0;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_24;
		L_24 = TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m593D7B49993413FC2357476183683A34122E55B6(L_21, L_23, TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m593D7B49993413FC2357476183683A34122E55B6_RuntimeMethod_var);
		// t.plugOptions.mode = mode;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_25 = L_24;
		NullCheck(L_25);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_26 = (&L_25->___plugOptions_60);
		int32_t L_27 = ___mode3;
		L_26->___mode_3 = L_27;
		// t.plugOptions.speed = speed;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_28 = L_25;
		NullCheck(L_28);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_29 = (&L_28->___plugOptions_60);
		float L_30 = ___speed4;
		L_29->___speed_2 = L_30;
		// t.plugOptions.frequency = frequency;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_31 = L_28;
		NullCheck(L_31);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_32 = (&L_31->___plugOptions_60);
		float L_33 = ___frequency5;
		L_32->___frequency_1 = L_33;
		// t.plugOptions.depth = depth;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_34 = L_31;
		NullCheck(L_34);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_35 = (&L_34->___plugOptions_60);
		float L_36 = ___depth6;
		L_35->___depth_0 = L_36;
		// t.plugOptions.snapping = snapping;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_37 = L_34;
		NullCheck(L_37);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_38 = (&L_37->___plugOptions_60);
		bool L_39 = ___snapping7;
		L_38->___snapping_4 = L_39;
		// return t;
		return L_37;
	}
}
// DG.Tweening.Tweener DG.Tweening.DOTweenProShortcuts::DOSpiral(UnityEngine.Rigidbody,System.Single,System.Nullable`1<UnityEngine.Vector3>,DG.Tweening.SpiralMode,System.Single,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tweener_tD38633F1A42EDF47A73CE3BF1894D946E830E140* DOTweenProShortcuts_DOSpiral_m57AB7E770A11E0F828FDD358EDBAB5A117C7C32B (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* ___target0, float ___duration1, Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE ___axis2, int32_t ___mode3, float ___speed4, float ___frequency5, float ___depth6, bool ___snapping7, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m6716A7D71A3E516E4FB46A9B1C8AD83153E46190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m593D7B49993413FC2357476183683A34122E55B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_m1D7023148D2DF8CB476E254A4F3A9EEBA0DBA664_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA* V_0 = NULL;
	Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B8_0 = 0;
	{
		U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA* L_0 = (U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_mA27CB724758EC4DA900BC4D3C875DD981AAF3A51(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA* L_1 = V_0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_2 = ___target0;
		NullCheck(L_1);
		L_1->___target_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___target_0), (void*)L_2);
		// if (Mathf.Approximately(speed, 0)) speed = 1;
		float L_3 = ___speed4;
		bool L_4;
		L_4 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_3, (0.0f), NULL);
		if (!L_4)
		{
			goto IL_0022;
		}
	}
	{
		// if (Mathf.Approximately(speed, 0)) speed = 1;
		___speed4 = (1.0f);
	}

IL_0022:
	{
		// if (axis == null || axis == Vector3.zero) axis = Vector3.forward;
		bool L_5;
		L_5 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&___axis2), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE L_6 = ___axis2;
		V_1 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		bool L_8;
		L_8 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&V_1), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (L_8)
		{
			goto IL_003f;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0058;
	}

IL_003f:
	{
		bool L_9;
		L_9 = Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_inline((&V_1), Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_RuntimeMethod_var);
		if (L_9)
		{
			goto IL_004b;
		}
	}
	{
		G_B8_0 = 1;
		goto IL_0058;
	}

IL_004b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_inline((&V_1), Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_2;
		bool L_12;
		L_12 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_10, L_11, NULL);
		G_B8_0 = ((int32_t)(L_12));
	}

IL_0058:
	{
		if (!G_B8_0)
		{
			goto IL_0066;
		}
	}

IL_005a:
	{
		// if (axis == null || axis == Vector3.zero) axis = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2((&___axis2), L_13, Nullable_1__ctor_m75F3ABB694E26670F021136BD3B9E71A65948BC2_RuntimeMethod_var);
	}

IL_0066:
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.position, target.MovePosition, (Vector3)axis, duration)
		//     .SetTarget(target);
		il2cpp_codegen_runtime_class_init_inline(SpiralPlugin_t0EC3955D810AAED4713FA63AAEACDA66063B604E_il2cpp_TypeInfo_var);
		ABSTweenPlugin_3_tF7CEB9BBF8FF28D2F3BBF9DB950849DCA238F80C* L_14;
		L_14 = SpiralPlugin_Get_mEF40CC56A5043E8122C572AFCBC224BA925BC326(NULL);
		U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA* L_15 = V_0;
		DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338* L_16 = (DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338*)il2cpp_codegen_object_new(DOGetter_1_t709462C08281F3AA5DFEF36CAF91404B1004C338_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		DOGetter_1__ctor_m59C11B3FE64C69454BE28721314FD6189629F27E(L_16, L_15, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_m1D7023148D2DF8CB476E254A4F3A9EEBA0DBA664_RuntimeMethod_var), NULL);
		U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA* L_17 = V_0;
		NullCheck(L_17);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18 = L_17->___target_0;
		DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358* L_19 = (DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358*)il2cpp_codegen_object_new(DOSetter_1_t02E8F9920F174322F1CF5AC8BCDEAABD14A03358_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		DOSetter_1__ctor_m9E67232146D149892F1946395AD1B6B1C53F3B60(L_19, L_18, (intptr_t)((void*)Rigidbody_MovePosition_mB2CD29ABC8F59AC338C0A3A5A6B75C38FDA92CA9_RuntimeMethod_var), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792((&___axis2), Nullable_1_get_Value_m6A74FA440FE386A9905C61B41B5C261CD9DC4792_RuntimeMethod_var);
		float L_21 = ___duration1;
		il2cpp_codegen_runtime_class_init_inline(DOTween_t96369E1D40ABE93A56308F57DEA6B04219C66D13_il2cpp_TypeInfo_var);
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_22;
		L_22 = DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m6716A7D71A3E516E4FB46A9B1C8AD83153E46190(L_14, L_16, L_19, L_20, L_21, DOTween_To_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_TisSpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D_m6716A7D71A3E516E4FB46A9B1C8AD83153E46190_RuntimeMethod_var);
		U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA* L_23 = V_0;
		NullCheck(L_23);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_24 = L_23->___target_0;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_25;
		L_25 = TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m593D7B49993413FC2357476183683A34122E55B6(L_22, L_24, TweenSettingsExtensions_SetTarget_TisTweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B_m593D7B49993413FC2357476183683A34122E55B6_RuntimeMethod_var);
		// t.plugOptions.mode = mode;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_26 = L_25;
		NullCheck(L_26);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_27 = (&L_26->___plugOptions_60);
		int32_t L_28 = ___mode3;
		L_27->___mode_3 = L_28;
		// t.plugOptions.speed = speed;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_29 = L_26;
		NullCheck(L_29);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_30 = (&L_29->___plugOptions_60);
		float L_31 = ___speed4;
		L_30->___speed_2 = L_31;
		// t.plugOptions.frequency = frequency;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_32 = L_29;
		NullCheck(L_32);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_33 = (&L_32->___plugOptions_60);
		float L_34 = ___frequency5;
		L_33->___frequency_1 = L_34;
		// t.plugOptions.depth = depth;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_35 = L_32;
		NullCheck(L_35);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_36 = (&L_35->___plugOptions_60);
		float L_37 = ___depth6;
		L_36->___depth_0 = L_37;
		// t.plugOptions.snapping = snapping;
		TweenerCore_3_tE784F67C453B80BE098F39F499AD7BE5D4F1657B* L_38 = L_35;
		NullCheck(L_38);
		SpiralOptions_t4D382379BCA86778126603AE4412B2C6D8DB3F1D* L_39 = (&L_38->___plugOptions_60);
		bool L_40 = ___snapping7;
		L_39->___snapping_4 = L_40;
		// return t;
		return L_38;
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
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_m665B96661A7A52DAF40B02BCA600ADAC5B13D8C1 (U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::<DOSpiral>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__0_mCF844891B1DE1191685CE705C948D760E1FD42EC (U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362* __this, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.localPosition, x => target.localPosition = x, (Vector3)axis, duration)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_0, NULL);
		return L_1;
	}
}
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass1_0::<DOSpiral>b__1(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CDOSpiralU3Eb__1_m14BB58219098C628C62F5D8C4310B04B02C9B4E0 (U3CU3Ec__DisplayClass1_0_tC04C2EE0829CAD2125EA480888AA39835BBB8362* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___x0, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.localPosition, x => target.localPosition = x, (Vector3)axis, duration)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___x0;
		NullCheck(L_0);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_0, L_1, NULL);
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
// System.Void DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mA27CB724758EC4DA900BC4D3C875DD981AAF3A51 (U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// UnityEngine.Vector3 DG.Tweening.DOTweenProShortcuts/<>c__DisplayClass2_0::<DOSpiral>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 U3CU3Ec__DisplayClass2_0_U3CDOSpiralU3Eb__0_m1D7023148D2DF8CB476E254A4F3A9EEBA0DBA664 (U3CU3Ec__DisplayClass2_0_tFD001EF78B40DF196A47828AC3249D5B17B08EFA* __this, const RuntimeMethod* method) 
{
	{
		// TweenerCore<Vector3, Vector3, SpiralOptions> t = DOTween.To(SpiralPlugin.Get(), () => target.position, target.MovePosition, (Vector3)axis, duration)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0 = __this->___target_0;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_position_m4ECB79BDBBF8FD1EA572EDB792D3330DDED24691(L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Tween_get_active_mD4253DD1A64623E342282E139081B787935A3E5E_inline (Tween_t8CB06EBC48A5B6F5065C490E4F4909C18CE7983C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CactiveU3Ek__BackingField_39;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Debugger_get_logPriority_m7AC0D46AE0BA9AC3ED1ED50AD20734033D16D0AC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ((Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_StaticFields*)il2cpp_codegen_static_fields_for(Debugger_tCF42DBFBF81B46CDEE59CA397F2860F3427FE1F0_il2cpp_TypeInfo_var))->____logPriority_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___b1;
		float L_1 = ___a0;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___a0;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___b1;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m6B76086B0E863AB1D634FD03E30154F230070435_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Nullable_1_GetValueOrDefault_mD88C565C80170105E87BB423C5B2F974840EF90F_gshared_inline (Nullable_1_t9C51B084784B716FFF4ED4575C63CFD8A71A86FE* __this, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
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
