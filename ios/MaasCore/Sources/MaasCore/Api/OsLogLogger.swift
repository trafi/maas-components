import os.log

class ApiLogger : CoreBinary.Logger {

    private init() {}
    static let `default` = ApiLogger()
    
    func log(message: String) {
        os_log("%@", log: .default, type: .debug, message)
    }
}
