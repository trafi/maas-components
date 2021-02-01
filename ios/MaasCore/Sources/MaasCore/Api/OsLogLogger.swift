import os.log

public class OsLogLogger : CoreBinary.Logger {
    func log(message: String) {
        os_log("%@", log: .default, type: .debug, message)
    }
}
