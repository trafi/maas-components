## Specifications
**Types:** Primary, Secondary.  
**Sizes:** Small, Normal, Large.  
**States:** Normal, Active, Disabled  
**Behaviour:** onTap changes state to “Active”. If interaction takes longer than 300ms changes state to “inProgress” [TBD].  

## Recommendations
- As a rule of thumb, there should be only one primary button per screen. If you need more actions, please consider secondary, and/or tertiary buttons.
- Keep text concise. Text longer than 22 symbols, might be truncated on smaller screens.

## API
See [ButtonConstants.kt](https://github.com/trafi/maas-components/blob/main/common/core/src/commonMain/kotlin/com/trafi/ui/component/internal/ButtonConstants.kt)
