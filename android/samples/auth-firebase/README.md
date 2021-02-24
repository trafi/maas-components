# Firebase Authentication sample

Demonstrates how to integrate [Firebase Authentication][firebase-auth].

[Firebase Authentication][firebase-auth] supports
[numerous authentication & identity providers][firebase-auth-providers].
This sample demonstrates Google Sign-In.

This sample uses UI components from the [Bedrock design system][bedrock-design-system].
Alternatively, you may choose to use [FirebaseUI][firebase-ui].

## Build
To build a working version of this sample, you need to set up your own Firebase project and specify
the credentials. [Follow the instructions here][firebase-setup].

1. Add app to your Firebase project and specify the debug signing certificate SHA-1.
   By default this sample's debug build type uses [the `debug.keystore` in this repository][debug-keystore].
   The signing certificate SHA-1 is [required for Google Sign-In support][google-sha1].
1. Download and add `google-services.json` to this directory.

[firebase-auth]: https://firebase.google.com/docs/auth
[firebase-auth-providers]: https://firebase.google.com/docs/auth#key_capabilities
[firebase-ui]: https://github.com/firebase/firebaseui-android
[firebase-setup]: https://firebase.google.com/docs/android/setup#console
[google-sha1]: https://developers.google.com/android/guides/client-auth
[bedrock-design-system]: ../../ui-android/README.md
[debug-keystore]: ../../keystores/debug.keystore
