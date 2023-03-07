using UnityEngine;

namespace ACESDK.Singleton
{
	/// <summary>
	/// Singleton pattern.
	/// </summary>
	public class FSDK_Singleton<T> : MonoBehaviour	where T : Component
	{
		protected static T _instance;

		/// <summary>
		/// Singleton design pattern
		/// </summary>
		/// <value>The instance.</value>
		public static T Instance
		{
			get
			{
				if (_instance == null)
				{
					_instance = FindObjectOfType<T> ();
					if (_instance == null)
					{
						GameObject obj = new GameObject ();
						//obj.hideFlags = HideFlags.HideAndDontSave;
						_instance = obj.AddComponent<T> ();
					}
				}
				return _instance;
			}
		}

	    /// <summary>
	    /// On awake, we initialize our instance. Make sure to call base.Awake() in override if you need awake.
	    /// </summary>
	    protected virtual void Awake ()
		{
			_instance = this as T;			
		}
	}
}

//Khai báo
//public class PlayerManager : Singleton<PlayerManager>