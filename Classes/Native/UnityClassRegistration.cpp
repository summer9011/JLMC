struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 71 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//4. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//5. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//6. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//7. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//8. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//9. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//10. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//11. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//12. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//13. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//14. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//15. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//16. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//17. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//18. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//19. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//20. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//21. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//22. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//23. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//24. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//25. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//26. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//27. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//28. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//29. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//30. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//31. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//32. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//33. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//34. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//35. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//36. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//37. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//38. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//39. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//40. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//41. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//42. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//43. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//44. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//45. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//46. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//47. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//48. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//49. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//50. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//51. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//52. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//53. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//54. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//55. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//56. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//57. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//58. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//59. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//60. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//61. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//62. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//63. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//64. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//65. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//66. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//67. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//68. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//69. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//70. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
