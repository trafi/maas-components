package com.trafi.core

class Configuration(val api: ApiConfiguration, val identity: IdentityConfiguration)

class ApiConfiguration(val baseUrl: String, val apiKey: String)
class IdentityConfiguration(val getIdToken: () -> String?)
