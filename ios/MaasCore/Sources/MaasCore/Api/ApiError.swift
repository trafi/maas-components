enum ApiError: Swift.Error, Equatable, Hashable {
    case httpError
    case parseError
    case error(String)
    case unknownError
    
    case apiResultFailure
}
