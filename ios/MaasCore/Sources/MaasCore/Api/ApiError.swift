/**
 - Tag: ApiError
 */
public enum ApiError: Swift.Error, Equatable, Hashable {
    /**
     The server returned 401.
     - Parameter error: optional error message.
     */
    case unauthorized(error: CoreBinary.Error?)
    /**
     The server returned an error.
     - Parameter error: optional error message.
     */
    case error(error: CoreBinary.Error?)
    /**
     A generic failure not covered by the more specific [ApiError](x-source-tag://ApiError) types.
     - Parameter developerMessage: optional message to help identify the error.
     */
    case failure(developerMessage: String?)

    public var developerMessage: String? {
        switch self {
        case .unauthorized(let error): return error?.developerMessage
        case .error(let error): return error?.developerMessage
        case .failure(let error): return error
        }
    }
}
