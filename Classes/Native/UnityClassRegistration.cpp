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
	//Total: 72 classes
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

	//36. WebCamTexture
	void RegisterClass_WebCamTexture();
	RegisterClass_WebCamTexture();

	//37. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//38. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//39. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//40. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//41. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//42. TextMesh
	void RegisterClass_TextMesh();
	RegisterClass_TextMesh();

	//43. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//44. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//45. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//46. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//47. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//48. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//49. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//50. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//51. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//52. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//53. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//54. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//55. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//56. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//57. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//58. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//59. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//60. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//61. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//62. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//63. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//64. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//65. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//66. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//67. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//68. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//69. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//70. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//71. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
