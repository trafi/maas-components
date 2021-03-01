/**
 - Tag: ApiError
 */
public enum ApiError: Swift.Error, Equatable, Hashable {
    /**
     The server returned 403 Forbidden.
     The x-api-key header retrieved using [ApiConfig.apiKey](x-source-tag://ApiConfig.apiKey) may be invalid or not subscribed to the API.
     - Parameter error: optional error message.
     */
    case forbidden(error: CoreBinary.Error?)
    
    /**
     The server returned an error not covered by the more specific [ApiError](x-source-tag://ApiError) types..
     - Parameter error: optional error message.
     */
    case error(code: Code?, error: CoreBinary.Error?)
    
    /**
     A generic failure not covered by the more specific [ApiError](x-source-tag://ApiError) types.
     - Parameter developerMessage: optional message to help identify the error.
     */
    case failure(developerMessage: String?)
    
    public enum Code: Equatable, Hashable {
        case user(CoreBinary.ErrorCode.Users)
        case msp(CoreBinary.ErrorCode.Msp)
        case httpStatus(Int)
    }

    public var developerMessage: String? {
        switch self {
        case .forbidden(let error): return error?.developerMessage
        case .error(_, let error): return error?.developerMessage
        case .failure(let error): return error
        }
    }
}
