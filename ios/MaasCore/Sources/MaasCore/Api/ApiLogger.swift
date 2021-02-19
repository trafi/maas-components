import os.log

class ApiLogger : CoreBinary.Logger {

    private init() {}
    static let `default` = ApiLogger()
    
    var apiLogLevel: ApiLogLevel { .all }
    
    func log(message: String) {
        os_log("%@", log: .MaasComponentsApi, type: .debug, message)
    }
}

extension OSLog {
    
    private static var subsystem = Bundle.main.bundleIdentifier!
    
    static let MaasComponentsApi = OSLog(subsystem: subsystem, category: "MaasComponents")
}
