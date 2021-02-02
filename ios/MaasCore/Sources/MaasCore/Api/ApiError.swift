/**
 - Tag: ApiError
 */
enum ApiError: Swift.Error, Equatable, Hashable {
    /**
     The server returned 401.
     - Parameter error: optional error message.
     */
    case unauthorized(error: ApiResultError)
    /**
     The server returned an error.
     - Parameter error: optional error message.
     */
    case error(error: ApiResultError)
    /**
     A generic failure not covered by the more specific [ApiError](x-source-tag://ApiError) types.
     - Parameter developerMessage: optional message to help identify the error.
     */
    case failure(developerMessage: String?)
}



struct ApiResultError: Equatable, Hashable {
    
    let developerMessage: String?
    let fallbackMessage: String?
    let translationKey: String?
    let statusCode: Int
}
