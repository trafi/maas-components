# Badge

Badge is a block that accomodates small pieces of information


## Preview

[Figma](https://www.figma.com/file/1P6PQxKaqIaLjxxfy1cFtH/MaaS-Design-System?node-id=735%3A11698)


## Usage

- represent vehicle type in route search (e.g. Audi A3)
- represent PT vehicle route (e.g. S5)
- represent payment status (e.g. “DEFAULT”)
- represent car type in stationary car sharing (e.g. budget)
- represent POI in stationary bike sharing (e.g. “2 Riese & Müller 60”)
- highlight new/upcoming provider in the app (e.g. “NEW” or “SOON”)



## Variations and constituents

**badge types**
sizes: medium, small

**medium badge**
- may have an icon
- may have a subbadge icon
- may be stacked (in stacks of 2 or 3 badges) vertically
extension: in PT flow content inside fits a maximum of 4 string characters and truncates afterwards

**small badge**
- doesn't have an icon
- may have a subbadge icon
- cannot be stacked
- texts inside are always uppercase
- may be disabled



## Constants for styling

[embedmd]:# (BadgeConstants.kt kotlin /class / $)
