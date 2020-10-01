#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SharedAcceptedPlatformTerms, SharedAcceptedProviderTerms, SharedTerms, SharedAccountProviderFeatures, SharedDeepLink, SharedAccountProvider, SharedAddDrivingLicenceParameters, SharedAddPaymentMethodRequestType, SharedAddPaymentMethodRequest, SharedKotlinEnum<E>, SharedKotlinArray<T>, SharedCommonEnumSerializer<T>, SharedAdditionalFee, SharedAddress, SharedSchedule, SharedAffectedSchedule, SharedAutoCompleteLocationType, SharedScheduleAtStop, SharedTransport, SharedLatLng, SharedAutoCompleteLocation, SharedAutoCompleteLocations, SharedBattery, SharedSharingBooking, SharedRideHailingBooking, SharedBookingsResponse, SharedBreakdownItemType, SharedBreakdownItem, SharedLocation, SharedCancelledTrip, SharedCapacity, SharedCar, SharedConnectAccountParameters, SharedNotificationSettings, SharedCreateDrivingLicenceVerificationSessionRequest, SharedDocumentVerificationSession, SharedCreateDrivingLicenceVerificationSessionResponse, SharedIdentityVerificationDocument, SharedCreateIdentityVerificationSessionRequest, SharedCreateIdentityVerificationSessionResponse, SharedCreateRideHailingBookingRequest, SharedSurgeInfo, SharedCreateRideHailingBookingResponse, SharedCreateSharingBookingRequestInitialBookingStatus, SharedCreateSharingBookingRequest, SharedCreditCardInfo, SharedDeclinedPlatformTerms, SharedDeclinedProviderTerms, SharedTrackWithDepartures, SharedDestinationWithDepartures, SharedDirectDebitInfo, SharedPath, SharedDirectionsResponse, SharedDiscountInfo, SharedDisruptionSeverity, SharedDisruption, SharedDistance, SharedRating, SharedDriver, SharedDrivingInfo, SharedDrivingLicenceCategory, SharedDrivingLicenceVerificationStatus, SharedDrivingLicence, SharedDuration, SharedError, SharedUiError, SharedErrorsError, SharedEstimateParkingPriceRequest, SharedParkingOption, SharedEstimateParkingPriceResponse, SharedEta, SharedExactDepartureDisruption, SharedExactDeparture, SharedExactDepartureDisruptionSeverity, SharedExactTime, SharedExtendedExactDepartureScheduledDepartureStatus, SharedExtendedExactDeparture, SharedExtendedIntervalDepartureScheduledDepartureStatus, SharedIntervalDeparture, SharedExtendedIntervalDeparture, SharedLocalizedFaq, SharedFaq, SharedMoney, SharedRideHailingFare, SharedFare, SharedPrice, SharedFareBreakdownItem, SharedFareEstimate, SharedFeeType, SharedFee, SharedFeeInfo, SharedFuel, SharedFuelCard, SharedGetTicketPriceRequest, SharedParkingPrice, SharedGetTicketPriceResponse, SharedGroup, SharedHistorySharingPart, SharedHistoryAllowanceParts, SharedHistoryBalanceDuration, SharedHistoryBalanceMeters, SharedHistoryBreakdownItemType, SharedHistoryBreakdownItem, SharedHistoryCar, SharedHistoryDriver, SharedHistoryMoney, SharedHistoryPaymentMethodType, SharedHistoryPaymentMethod, SharedHistorySharingPurchaseBreakdownInfo, SharedHistoryPaymentPurchaseBreakdownItem, SharedHistoryPriceBreakdown, SharedHistorySubscriptionPurchaseBreakdownItem, SharedHistoryPurchaseBreakdown, SharedHistorySharingProvider, SharedHistorySharingProviderVehicleType, SharedPropertyValue, SharedLocalizedPropertyValues, SharedHistoryTicket, SharedHistoryZone, SharedHoursOfControl, SharedIdentityVerificationStatus, SharedIdentity, SharedIdentityVerificationDocumentType, SharedInitiateAddPaymentMethodRequest, SharedInitiateAddPaymentMethodResponse, SharedIntervalTime, SharedLatLngBounds, SharedLocalizedDeepLink, SharedLocalizedPropertyValue, SharedLocalizedTerms, SharedMembershipType, SharedMembership, SharedResourceSpecifier, SharedRequirementStatus, SharedMspRequirements, SharedOperationTime, SharedOperationRestrictions, SharedParkingTimeIntervalPricing, SharedParkingPricing, SharedPayment, SharedParkingRecord, SharedParkingSessionStatus, SharedSessionStatusInfo, SharedParkingSession, SharedParkingSessionsResponse, SharedParkingSpotVehicleType, SharedParkingSpot, SharedTariff, SharedParkingZone, SharedParkingZonesResponse, SharedPayForParkingRequest, SharedPayPalInfo, SharedSharingBreakdownItem, SharedPaymentBreakdownItem, SharedPaymentConfirmation, SharedPaymentMethodType, SharedPaymentMethod, SharedPaymentMethods, SharedPhoneNumberVerificationStatus, SharedPhoneNumber, SharedPlatformTermsType, SharedPlatformTerms, SharedPriceInterval, SharedPriceBreakdown, SharedProfileGender, SharedProfile, SharedProviderFeatures, SharedSharingProviderOptions, SharedRideHailingProviderOptions, SharedSharingPricingInfo, SharedRideHailingPricingInfo, SharedProvider, SharedProviderAccountType, SharedProviderAccount, SharedProviderPaymentMethod, SharedUsersMoney, SharedProviderPaymentMethods, SharedProviderRequirementStatus, SharedProviderWithVehicleTypeVehicleType, SharedProviderWithVehicleType, SharedUser, SharedProvidersRequirementStatusResponse, SharedSubscriptionBreakdownItem, SharedPurchaseBreakdown, SharedRideHailingRecord, SharedSharingRecord, SharedTicketsRecord, SharedTicketActivationsRecord, SharedSubscriptionRenewalRecord, SharedRecords, SharedRequirementStatusResponse, SharedReturnOptions, SharedReverseGeocodeResponse, SharedRideOptions, SharedRideEstimateRequest, SharedRideHailingAllowedActionBookingStatus, SharedRideHailingAllowedActionAction, SharedRideHailingAllowedAction, SharedRideHailingProduct, SharedRideHailingBookingStatus, SharedRideHailingBookingEstimate, SharedRideHailingBookingOptions, SharedRideHailingPricing, SharedRideHailingProductWithEta, SharedRideHailingProductsResponse, SharedRideHailingProductsWithEtaResponse, SharedTrip, SharedRideHailingRecordStatus, SharedRouteSegment, SharedRouteFare, SharedRouteDisruption, SharedRoute, SharedRouteDisruptionSeverity, SharedRouteExactDeparture, SharedRouteIntervalDeparture, SharedRouteSegmentMode, SharedRouteSegmentTransit, SharedRouteSegmentWalking, SharedRouteSegmentSharing, SharedRouteSegmentRideHailing, SharedRouteSegmentDisruption, SharedRouteSegmentDisruptionSeverity, SharedStation, SharedSharedVehicle, SharedStop, SharedRouteSegmentStop, SharedTrack, SharedTransitAlternative, SharedWalkingPath, SharedRoutesResult, SharedScheduleWithDepartures, SharedScheduleWithDeparturesByDestination, SharedScheduleWithStopWithDepartures, SharedTimes, SharedScheduleWithStopWithTimes, SharedTrackWithStops, SharedScheduleWithStops, SharedScheduleWithTracks, SharedStopWithSchedules, SharedSchedulesAndStops, SharedSharedVehicleVehicleType, SharedSharedVehicleWithDirections, SharedSharedVehiclesAndDirectionsResponse, SharedSharedVehiclesResponse, SharedSharingAllowedActionAction, SharedSharingAllowedActionBookingStatus, SharedSharingAllowedAction, SharedSharingBookingStatus, SharedUnlockInfo, SharedSharingBookingOptions, SharedTimeIntervalPricing, SharedSharingPricing, SharedSharingProviderOptionsVehicleType, SharedSharingRoutingOptions, SharedSharingVehicleSelectionOptions, SharedVehicle, SharedSpaceTime, SharedStationVehicleType, SharedStationWithDirections, SharedStationsResponse, SharedStationsWithDirectionsResponse, SharedStopType, SharedStopWithSchedulesWithDepartures, SharedStopWithSchedulesWithDeparturesByDestination, SharedStopWithSchedulesWithDeparturesByDestinationWithDirections, SharedStopWithSchedulesWithDeparturesWithDirections, SharedSubregion, SharedSubscriptionRenewalRecordRenewalType, SharedTermsResponse, SharedTrackDirection, SharedTrackWithDeparturesDisruption, SharedTrackWithDeparturesDisruptionSeverity, SharedTransitRegionConfig, SharedTransitConfig, SharedTransitTripExactTime, SharedTransitTripIntervalDuration, SharedTransitVehiclePosition, SharedTransitTripDisruption, SharedTransitTrip, SharedTransitVehiclePositionWithScheduleAndTrack, SharedTransitVehiclePositionsWithSchedule, SharedUpdatePaymentMethodRequest, SharedUpdatePlatformTermsAction, SharedUpdatePlatformTerms, SharedUpdatePlatformTermsRequest, SharedUpdateProfileParameters, SharedUpdateProviderTermsAction, SharedUpdateProviderTerms, SharedUpdateProviderTermsRequest, SharedUpdateRideHailingBookingRequest, SharedUpdateSharingBookingRequestSharingBookingStatus, SharedUpdateSharingBookingRequest, SharedUpdateVerificationSessionRequest, SharedUserTerms, SharedUserImportResponseResult, SharedUserImportResponse, SharedUserImportStatusResponseState, SharedUserImportStatusResponse, SharedVehicleVehicleType, SharedVerificationProvider, SharedVerificationProvidersResponse, SharedVerifyPhoneNumberParameters, SharedVerifyProviderRequirementsResponse, SharedWalkingPathWalkType, SharedZone, SharedZonesResponse, SharedKotlinx_serialization_coreSerializersModule, SharedKotlinx_serialization_coreSerialKind, SharedKotlinNothing, SharedKotlinx_serialization_coreUpdateMode;

@protocol SharedKotlinx_serialization_coreKSerializer, SharedKotlinComparable, SharedKotlinx_serialization_coreEncoder, SharedKotlinx_serialization_coreSerialDescriptor, SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDecoder, SharedKotlinx_serialization_coreDeserializationStrategy, SharedKotlinx_serialization_coreCompositeEncoder, SharedKotlinAnnotation, SharedKotlinx_serialization_coreCompositeDecoder, SharedKotlinIterator, SharedKotlinx_serialization_coreSerializersModuleCollector, SharedKotlinKClass, SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

__attribute__((swift_name("KotlinBase")))
@interface SharedBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SharedBase (SharedBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SharedMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SharedMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSharedKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SharedNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SharedByte : SharedNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SharedUByte : SharedNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SharedShort : SharedNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SharedUShort : SharedNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SharedInt : SharedNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SharedUInt : SharedNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SharedLong : SharedNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SharedULong : SharedNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SharedFloat : SharedNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SharedDouble : SharedNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SharedBoolean : SharedNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AcceptedPlatformTerms")))
@interface SharedAcceptedPlatformTerms : SharedBase
- (instancetype)initWithKey:(NSString *)key version:(NSString *)version acceptedAt:(NSString *)acceptedAt __attribute__((swift_name("init(key:version:acceptedAt:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SharedAcceptedPlatformTerms *)doCopyKey:(NSString *)key version:(NSString *)version acceptedAt:(NSString *)acceptedAt __attribute__((swift_name("doCopy(key:version:acceptedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *acceptedAt __attribute__((swift_name("acceptedAt")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AcceptedPlatformTerms.Companion")))
@interface SharedAcceptedPlatformTermsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AcceptedProviderTerms")))
@interface SharedAcceptedProviderTerms : SharedBase
- (instancetype)initWithKey:(NSString *)key version:(NSString *)version providerId:(NSString *)providerId acceptedAt:(NSString *)acceptedAt __attribute__((swift_name("init(key:version:providerId:acceptedAt:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (SharedAcceptedProviderTerms *)doCopyKey:(NSString *)key version:(NSString *)version providerId:(NSString *)providerId acceptedAt:(NSString *)acceptedAt __attribute__((swift_name("doCopy(key:version:providerId:acceptedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *acceptedAt __attribute__((swift_name("acceptedAt")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AcceptedProviderTerms.Companion")))
@interface SharedAcceptedProviderTermsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountProvider")))
@interface SharedAccountProvider : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id name:(NSString * _Nullable)name terms:(NSArray<SharedTerms *> * _Nullable)terms isLevel3:(SharedBoolean * _Nullable)isLevel3 features:(SharedAccountProviderFeatures * _Nullable)features registrationDeepLinkIos:(SharedDeepLink * _Nullable)registrationDeepLinkIos registrationDeepLinkAndroid:(SharedDeepLink * _Nullable)registrationDeepLinkAndroid connectionParameters:(NSDictionary<NSString *, NSString *> * _Nullable)connectionParameters __attribute__((swift_name("init(id:name:terms:isLevel3:features:registrationDeepLinkIos:registrationDeepLinkAndroid:connectionParameters:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedTerms *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedBoolean * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedAccountProviderFeatures * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedDeepLink * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedDeepLink * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSDictionary<NSString *, NSString *> * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedAccountProvider *)doCopyId:(NSString * _Nullable)id name:(NSString * _Nullable)name terms:(NSArray<SharedTerms *> * _Nullable)terms isLevel3:(SharedBoolean * _Nullable)isLevel3 features:(SharedAccountProviderFeatures * _Nullable)features registrationDeepLinkIos:(SharedDeepLink * _Nullable)registrationDeepLinkIos registrationDeepLinkAndroid:(SharedDeepLink * _Nullable)registrationDeepLinkAndroid connectionParameters:(NSDictionary<NSString *, NSString *> * _Nullable)connectionParameters __attribute__((swift_name("doCopy(id:name:terms:isLevel3:features:registrationDeepLinkIos:registrationDeepLinkAndroid:connectionParameters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable connectionParameters __attribute__((swift_name("connectionParameters")));
@property (readonly) SharedAccountProviderFeatures * _Nullable features __attribute__((swift_name("features")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) SharedBoolean * _Nullable isLevel3 __attribute__((swift_name("isLevel3")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) SharedDeepLink * _Nullable registrationDeepLinkAndroid __attribute__((swift_name("registrationDeepLinkAndroid")));
@property (readonly) SharedDeepLink * _Nullable registrationDeepLinkIos __attribute__((swift_name("registrationDeepLinkIos")));
@property (readonly) NSArray<SharedTerms *> * _Nullable terms __attribute__((swift_name("terms")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountProvider.Companion")))
@interface SharedAccountProviderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountProviderFeatures")))
@interface SharedAccountProviderFeatures : SharedBase
- (instancetype)initWithSupportsConnect:(SharedBoolean * _Nullable)supportsConnect supportsRegistration:(SharedBoolean * _Nullable)supportsRegistration requiresPayment:(SharedBoolean * _Nullable)requiresPayment __attribute__((swift_name("init(supportsConnect:supportsRegistration:requiresPayment:)"))) __attribute__((objc_designated_initializer));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedAccountProviderFeatures *)doCopySupportsConnect:(SharedBoolean * _Nullable)supportsConnect supportsRegistration:(SharedBoolean * _Nullable)supportsRegistration requiresPayment:(SharedBoolean * _Nullable)requiresPayment __attribute__((swift_name("doCopy(supportsConnect:supportsRegistration:requiresPayment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable requiresPayment __attribute__((swift_name("requiresPayment")));
@property (readonly) SharedBoolean * _Nullable supportsConnect __attribute__((swift_name("supportsConnect")));
@property (readonly) SharedBoolean * _Nullable supportsRegistration __attribute__((swift_name("supportsRegistration")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AccountProviderFeatures.Companion")))
@interface SharedAccountProviderFeaturesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddDrivingLicenceParameters")))
@interface SharedAddDrivingLicenceParameters : SharedBase
- (instancetype)initWithLicenceNumber:(NSString * _Nullable)licenceNumber personalNumber:(NSString * _Nullable)personalNumber __attribute__((swift_name("init(licenceNumber:personalNumber:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedAddDrivingLicenceParameters *)doCopyLicenceNumber:(NSString * _Nullable)licenceNumber personalNumber:(NSString * _Nullable)personalNumber __attribute__((swift_name("doCopy(licenceNumber:personalNumber:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable licenceNumber __attribute__((swift_name("licenceNumber")));
@property (readonly) NSString * _Nullable personalNumber __attribute__((swift_name("personalNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddDrivingLicenceParameters.Companion")))
@interface SharedAddDrivingLicenceParametersCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPaymentMethodRequest")))
@interface SharedAddPaymentMethodRequest : SharedBase
- (instancetype)initWithType:(SharedAddPaymentMethodRequestType *)type encryptedPaymentMethod:(NSString *)encryptedPaymentMethod ext:(NSDictionary<NSString *, NSString *> * _Nullable)ext __attribute__((swift_name("init(type:encryptedPaymentMethod:ext:)"))) __attribute__((objc_designated_initializer));
- (SharedAddPaymentMethodRequestType *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, NSString *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedAddPaymentMethodRequest *)doCopyType:(SharedAddPaymentMethodRequestType *)type encryptedPaymentMethod:(NSString *)encryptedPaymentMethod ext:(NSDictionary<NSString *, NSString *> * _Nullable)ext __attribute__((swift_name("doCopy(type:encryptedPaymentMethod:ext:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encryptedPaymentMethod __attribute__((swift_name("encryptedPaymentMethod")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable ext __attribute__((swift_name("ext")));
@property (readonly) SharedAddPaymentMethodRequestType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPaymentMethodRequest.Companion")))
@interface SharedAddPaymentMethodRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SharedKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SharedKotlinEnum<E> : SharedBase <SharedKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPaymentMethodRequest.Type_")))
@interface SharedAddPaymentMethodRequestType : SharedKotlinEnum<SharedAddPaymentMethodRequestType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedAddPaymentMethodRequestType *none __attribute__((swift_name("none")));
@property (class, readonly) SharedAddPaymentMethodRequestType *creditCard __attribute__((swift_name("creditCard")));
@property (class, readonly) SharedAddPaymentMethodRequestType *directDebit __attribute__((swift_name("directDebit")));
@property (class, readonly) SharedAddPaymentMethodRequestType *payPal __attribute__((swift_name("payPal")));
@property (class, readonly) SharedAddPaymentMethodRequestType *prepay __attribute__((swift_name("prepay")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SharedKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SharedKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)"))) __attribute__((unavailable("Patch function is deprecated for removal since this functionality is no longer supported by serializer.Some formats may provide implementation-specific patching in their Decoders.")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SharedKotlinx_serialization_coreKSerializer <SharedKotlinx_serialization_coreSerializationStrategy, SharedKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("CommonEnumSerializer")))
@interface SharedCommonEnumSerializer<T> : SharedBase <SharedKotlinx_serialization_coreKSerializer>
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<T> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer));
- (T _Nullable)deserializeDecoder:(id<SharedKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<SharedKotlinx_serialization_coreEncoder>)encoder value:(T _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) SharedKotlinArray<T> *choices __attribute__((swift_name("choices")));
@property (readonly) id<SharedKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AddPaymentMethodRequest.Type_Serializer")))
@interface SharedAddPaymentMethodRequestTypeSerializer : SharedCommonEnumSerializer<SharedAddPaymentMethodRequestType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionalFee")))
@interface SharedAdditionalFee : SharedBase
- (instancetype)initWithName:(NSString *)name fee:(double)fee __attribute__((swift_name("init(name:fee:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (SharedAdditionalFee *)doCopyName:(NSString *)name fee:(double)fee __attribute__((swift_name("doCopy(name:fee:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double fee __attribute__((swift_name("fee")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AdditionalFee.Companion")))
@interface SharedAdditionalFeeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Address")))
@interface SharedAddress : SharedBase
- (instancetype)initWithLineOne:(NSString * _Nullable)lineOne lineTwo:(NSString * _Nullable)lineTwo postCode:(NSString * _Nullable)postCode city:(NSString * _Nullable)city country:(NSString * _Nullable)country __attribute__((swift_name("init(lineOne:lineTwo:postCode:city:country:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedAddress *)doCopyLineOne:(NSString * _Nullable)lineOne lineTwo:(NSString * _Nullable)lineTwo postCode:(NSString * _Nullable)postCode city:(NSString * _Nullable)city country:(NSString * _Nullable)country __attribute__((swift_name("doCopy(lineOne:lineTwo:postCode:city:country:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable city __attribute__((swift_name("city")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable lineOne __attribute__((swift_name("lineOne")));
@property (readonly) NSString * _Nullable lineTwo __attribute__((swift_name("lineTwo")));
@property (readonly) NSString * _Nullable postCode __attribute__((swift_name("postCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Address.Companion")))
@interface SharedAddressCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AffectedSchedule")))
@interface SharedAffectedSchedule : SharedBase
- (instancetype)initWithSchedule:(SharedSchedule * _Nullable)schedule __attribute__((swift_name("init(schedule:)"))) __attribute__((objc_designated_initializer));
- (SharedSchedule * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedAffectedSchedule *)doCopySchedule:(SharedSchedule * _Nullable)schedule __attribute__((swift_name("doCopy(schedule:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedSchedule * _Nullable schedule __attribute__((swift_name("schedule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AffectedSchedule.Companion")))
@interface SharedAffectedScheduleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoCompleteLocation")))
@interface SharedAutoCompleteLocation : SharedBase
- (instancetype)initWithId:(NSString *)id type:(SharedAutoCompleteLocationType *)type name:(NSString *)name icon:(NSString * _Nullable)icon address:(NSString * _Nullable)address schedules:(NSArray<SharedScheduleAtStop *> * _Nullable)schedules transports:(NSArray<SharedTransport *> * _Nullable)transports coordinate:(SharedLatLng * _Nullable)coordinate direction:(NSString * _Nullable)direction __attribute__((swift_name("init(id:type:name:icon:address:schedules:transports:coordinate:direction:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedAutoCompleteLocationType *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<SharedScheduleAtStop *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<SharedTransport *> * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedLatLng * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedAutoCompleteLocation *)doCopyId:(NSString *)id type:(SharedAutoCompleteLocationType *)type name:(NSString *)name icon:(NSString * _Nullable)icon address:(NSString * _Nullable)address schedules:(NSArray<SharedScheduleAtStop *> * _Nullable)schedules transports:(NSArray<SharedTransport *> * _Nullable)transports coordinate:(SharedLatLng * _Nullable)coordinate direction:(NSString * _Nullable)direction __attribute__((swift_name("doCopy(id:type:name:icon:address:schedules:transports:coordinate:direction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));
@property (readonly) SharedLatLng * _Nullable coordinate __attribute__((swift_name("coordinate")));
@property (readonly) NSString * _Nullable direction __attribute__((swift_name("direction")));
@property (readonly) NSString * _Nullable icon __attribute__((swift_name("icon")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<SharedScheduleAtStop *> * _Nullable schedules __attribute__((swift_name("schedules")));
@property (readonly) NSArray<SharedTransport *> * _Nullable transports __attribute__((swift_name("transports")));
@property (readonly) SharedAutoCompleteLocationType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoCompleteLocation.Companion")))
@interface SharedAutoCompleteLocationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoCompleteLocation.Type_")))
@interface SharedAutoCompleteLocationType : SharedKotlinEnum<SharedAutoCompleteLocationType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedAutoCompleteLocationType *locationTypeNone __attribute__((swift_name("locationTypeNone")));
@property (class, readonly) SharedAutoCompleteLocationType *stops __attribute__((swift_name("stops")));
@property (class, readonly) SharedAutoCompleteLocationType *poi __attribute__((swift_name("poi")));
@property (class, readonly) SharedAutoCompleteLocationType *address __attribute__((swift_name("address")));
@property (class, readonly) SharedAutoCompleteLocationType *coordinate __attribute__((swift_name("coordinate")));
@property (class, readonly) SharedAutoCompleteLocationType *currentLocation __attribute__((swift_name("currentLocation")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoCompleteLocation.Type_Serializer")))
@interface SharedAutoCompleteLocationTypeSerializer : SharedCommonEnumSerializer<SharedAutoCompleteLocationType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoCompleteLocations")))
@interface SharedAutoCompleteLocations : SharedBase
- (instancetype)initWithLocations:(NSArray<SharedAutoCompleteLocation *> *)locations __attribute__((swift_name("init(locations:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedAutoCompleteLocation *> *)component1 __attribute__((swift_name("component1()")));
- (SharedAutoCompleteLocations *)doCopyLocations:(NSArray<SharedAutoCompleteLocation *> *)locations __attribute__((swift_name("doCopy(locations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedAutoCompleteLocation *> *locations __attribute__((swift_name("locations")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AutoCompleteLocations.Companion")))
@interface SharedAutoCompleteLocationsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Battery")))
@interface SharedBattery : SharedBase
- (instancetype)initWithFraction:(SharedDouble * _Nullable)fraction isCharging:(SharedBoolean * _Nullable)isCharging __attribute__((swift_name("init(fraction:isCharging:)"))) __attribute__((objc_designated_initializer));
- (SharedDouble * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBattery *)doCopyFraction:(SharedDouble * _Nullable)fraction isCharging:(SharedBoolean * _Nullable)isCharging __attribute__((swift_name("doCopy(fraction:isCharging:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable fraction __attribute__((swift_name("fraction")));
@property (readonly) SharedBoolean * _Nullable isCharging __attribute__((swift_name("isCharging")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Battery.Companion")))
@interface SharedBatteryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BookingsResponse")))
@interface SharedBookingsResponse : SharedBase
- (instancetype)initWithSharingBookings:(NSArray<SharedSharingBooking *> * _Nullable)sharingBookings rideHailingBookings:(NSArray<SharedRideHailingBooking *> * _Nullable)rideHailingBookings __attribute__((swift_name("init(sharingBookings:rideHailingBookings:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedSharingBooking *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedRideHailingBooking *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBookingsResponse *)doCopySharingBookings:(NSArray<SharedSharingBooking *> * _Nullable)sharingBookings rideHailingBookings:(NSArray<SharedRideHailingBooking *> * _Nullable)rideHailingBookings __attribute__((swift_name("doCopy(sharingBookings:rideHailingBookings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedRideHailingBooking *> * _Nullable rideHailingBookings __attribute__((swift_name("rideHailingBookings")));
@property (readonly) NSArray<SharedSharingBooking *> * _Nullable sharingBookings __attribute__((swift_name("sharingBookings")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BookingsResponse.Companion")))
@interface SharedBookingsResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BreakdownItem")))
@interface SharedBreakdownItem : SharedBase
- (instancetype)initWithType:(SharedBreakdownItemType * _Nullable)type amount:(SharedDouble * _Nullable)amount __attribute__((swift_name("init(type:amount:)"))) __attribute__((objc_designated_initializer));
- (SharedBreakdownItemType * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBreakdownItem *)doCopyType:(SharedBreakdownItemType * _Nullable)type amount:(SharedDouble * _Nullable)amount __attribute__((swift_name("doCopy(type:amount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) SharedBreakdownItemType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BreakdownItem.Companion")))
@interface SharedBreakdownItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BreakdownItem.Type_")))
@interface SharedBreakdownItemType : SharedKotlinEnum<SharedBreakdownItemType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedBreakdownItemType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedBreakdownItemType *ridePrice __attribute__((swift_name("ridePrice")));
@property (class, readonly) SharedBreakdownItemType *outerZoneParkingFee __attribute__((swift_name("outerZoneParkingFee")));
@property (class, readonly) SharedBreakdownItemType *unlockFee __attribute__((swift_name("unlockFee")));
@property (class, readonly) SharedBreakdownItemType *userRegistrationFee __attribute__((swift_name("userRegistrationFee")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BreakdownItem.Type_Serializer")))
@interface SharedBreakdownItemTypeSerializer : SharedCommonEnumSerializer<SharedBreakdownItemType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelledTrip")))
@interface SharedCancelledTrip : SharedBase
- (instancetype)initWithStartLocation:(SharedLocation *)startLocation endLocation:(SharedLocation *)endLocation createdAt:(NSString *)createdAt cancelledAt:(NSString *)cancelledAt __attribute__((swift_name("init(startLocation:endLocation:createdAt:cancelledAt:)"))) __attribute__((objc_designated_initializer));
- (SharedLocation *)component1 __attribute__((swift_name("component1()")));
- (SharedLocation *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (SharedCancelledTrip *)doCopyStartLocation:(SharedLocation *)startLocation endLocation:(SharedLocation *)endLocation createdAt:(NSString *)createdAt cancelledAt:(NSString *)cancelledAt __attribute__((swift_name("doCopy(startLocation:endLocation:createdAt:cancelledAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *cancelledAt __attribute__((swift_name("cancelledAt")));
@property (readonly) NSString *createdAt __attribute__((swift_name("createdAt")));
@property (readonly) SharedLocation *endLocation __attribute__((swift_name("endLocation")));
@property (readonly) SharedLocation *startLocation __attribute__((swift_name("startLocation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CancelledTrip.Companion")))
@interface SharedCancelledTripCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Capacity")))
@interface SharedCapacity : SharedBase
- (instancetype)initWithTotal:(SharedInt * _Nullable)total free:(SharedInt * _Nullable)free __attribute__((swift_name("init(total:free:)"))) __attribute__((objc_designated_initializer));
- (SharedInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedCapacity *)doCopyTotal:(SharedInt * _Nullable)total free:(SharedInt * _Nullable)free __attribute__((swift_name("doCopy(total:free:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedInt * _Nullable free __attribute__((swift_name("free")));
@property (readonly) SharedInt * _Nullable total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Capacity.Companion")))
@interface SharedCapacityCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Car")))
@interface SharedCar : SharedBase
- (instancetype)initWithBrandAndModel:(NSString *)brandAndModel plateNumber:(NSString *)plateNumber pictureUrl:(NSString * _Nullable)pictureUrl latLng:(SharedLatLng * _Nullable)latLng bearing:(SharedDouble * _Nullable)bearing __attribute__((swift_name("init(brandAndModel:plateNumber:pictureUrl:latLng:bearing:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedLatLng * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedCar *)doCopyBrandAndModel:(NSString *)brandAndModel plateNumber:(NSString *)plateNumber pictureUrl:(NSString * _Nullable)pictureUrl latLng:(SharedLatLng * _Nullable)latLng bearing:(SharedDouble * _Nullable)bearing __attribute__((swift_name("doCopy(brandAndModel:plateNumber:pictureUrl:latLng:bearing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable bearing __attribute__((swift_name("bearing")));
@property (readonly) NSString *brandAndModel __attribute__((swift_name("brandAndModel")));
@property (readonly) SharedLatLng * _Nullable latLng __attribute__((swift_name("latLng")));
@property (readonly) NSString * _Nullable pictureUrl __attribute__((swift_name("pictureUrl")));
@property (readonly) NSString *plateNumber __attribute__((swift_name("plateNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Car.Companion")))
@interface SharedCarCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectAccountParameters")))
@interface SharedConnectAccountParameters : SharedBase
- (instancetype)initWithRefreshToken:(NSString * _Nullable)refreshToken providerAuthData:(NSString * _Nullable)providerAuthData ext:(NSDictionary<NSString *, NSString *> * _Nullable)ext __attribute__((swift_name("init(refreshToken:providerAuthData:ext:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, NSString *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedConnectAccountParameters *)doCopyRefreshToken:(NSString * _Nullable)refreshToken providerAuthData:(NSString * _Nullable)providerAuthData ext:(NSDictionary<NSString *, NSString *> * _Nullable)ext __attribute__((swift_name("doCopy(refreshToken:providerAuthData:ext:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable ext __attribute__((swift_name("ext")));
@property (readonly) NSString * _Nullable providerAuthData __attribute__((swift_name("providerAuthData")));
@property (readonly) NSString * _Nullable refreshToken __attribute__((swift_name("refreshToken")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectAccountParameters.Companion")))
@interface SharedConnectAccountParametersCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateDrivingLicenceVerificationSessionRequest")))
@interface SharedCreateDrivingLicenceVerificationSessionRequest : SharedBase
- (instancetype)initWithSettings:(SharedNotificationSettings * _Nullable)settings providerId:(NSString * _Nullable)providerId applicationId:(NSString * _Nullable)applicationId __attribute__((swift_name("init(settings:providerId:applicationId:)"))) __attribute__((objc_designated_initializer));
- (SharedNotificationSettings * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedCreateDrivingLicenceVerificationSessionRequest *)doCopySettings:(SharedNotificationSettings * _Nullable)settings providerId:(NSString * _Nullable)providerId applicationId:(NSString * _Nullable)applicationId __attribute__((swift_name("doCopy(settings:providerId:applicationId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable applicationId __attribute__((swift_name("applicationId")));
@property (readonly) NSString * _Nullable providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedNotificationSettings * _Nullable settings __attribute__((swift_name("settings")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateDrivingLicenceVerificationSessionRequest.Companion")))
@interface SharedCreateDrivingLicenceVerificationSessionRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateDrivingLicenceVerificationSessionResponse")))
@interface SharedCreateDrivingLicenceVerificationSessionResponse : SharedBase
- (instancetype)initWithSession:(SharedDocumentVerificationSession * _Nullable)session __attribute__((swift_name("init(session:)"))) __attribute__((objc_designated_initializer));
- (SharedDocumentVerificationSession * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedCreateDrivingLicenceVerificationSessionResponse *)doCopySession:(SharedDocumentVerificationSession * _Nullable)session __attribute__((swift_name("doCopy(session:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDocumentVerificationSession * _Nullable session __attribute__((swift_name("session")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateDrivingLicenceVerificationSessionResponse.Companion")))
@interface SharedCreateDrivingLicenceVerificationSessionResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateIdentityVerificationSessionRequest")))
@interface SharedCreateIdentityVerificationSessionRequest : SharedBase
- (instancetype)initWithDocument:(SharedIdentityVerificationDocument * _Nullable)document settings:(SharedNotificationSettings * _Nullable)settings providerId:(NSString * _Nullable)providerId applicationId:(NSString * _Nullable)applicationId __attribute__((swift_name("init(document:settings:providerId:applicationId:)"))) __attribute__((objc_designated_initializer));
- (SharedIdentityVerificationDocument * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedNotificationSettings * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedCreateIdentityVerificationSessionRequest *)doCopyDocument:(SharedIdentityVerificationDocument * _Nullable)document settings:(SharedNotificationSettings * _Nullable)settings providerId:(NSString * _Nullable)providerId applicationId:(NSString * _Nullable)applicationId __attribute__((swift_name("doCopy(document:settings:providerId:applicationId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable applicationId __attribute__((swift_name("applicationId")));
@property (readonly) SharedIdentityVerificationDocument * _Nullable document __attribute__((swift_name("document")));
@property (readonly) NSString * _Nullable providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedNotificationSettings * _Nullable settings __attribute__((swift_name("settings")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateIdentityVerificationSessionRequest.Companion")))
@interface SharedCreateIdentityVerificationSessionRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateIdentityVerificationSessionResponse")))
@interface SharedCreateIdentityVerificationSessionResponse : SharedBase
- (instancetype)initWithSession:(SharedDocumentVerificationSession * _Nullable)session __attribute__((swift_name("init(session:)"))) __attribute__((objc_designated_initializer));
- (SharedDocumentVerificationSession * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedCreateIdentityVerificationSessionResponse *)doCopySession:(SharedDocumentVerificationSession * _Nullable)session __attribute__((swift_name("doCopy(session:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDocumentVerificationSession * _Nullable session __attribute__((swift_name("session")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateIdentityVerificationSessionResponse.Companion")))
@interface SharedCreateIdentityVerificationSessionResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRideHailingBookingRequest")))
@interface SharedCreateRideHailingBookingRequest : SharedBase
- (instancetype)initWithProductId:(NSString *)productId requestContext:(NSString *)requestContext providerPaymentMethodId:(NSString * _Nullable)providerPaymentMethodId notificationSettings:(SharedNotificationSettings * _Nullable)notificationSettings __attribute__((swift_name("init(productId:requestContext:providerPaymentMethodId:notificationSettings:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedNotificationSettings * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedCreateRideHailingBookingRequest *)doCopyProductId:(NSString *)productId requestContext:(NSString *)requestContext providerPaymentMethodId:(NSString * _Nullable)providerPaymentMethodId notificationSettings:(SharedNotificationSettings * _Nullable)notificationSettings __attribute__((swift_name("doCopy(productId:requestContext:providerPaymentMethodId:notificationSettings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedNotificationSettings * _Nullable notificationSettings __attribute__((swift_name("notificationSettings")));
@property (readonly) NSString *productId __attribute__((swift_name("productId")));
@property (readonly) NSString * _Nullable providerPaymentMethodId __attribute__((swift_name("providerPaymentMethodId")));
@property (readonly) NSString *requestContext __attribute__((swift_name("requestContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRideHailingBookingRequest.Companion")))
@interface SharedCreateRideHailingBookingRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRideHailingBookingResponse")))
@interface SharedCreateRideHailingBookingResponse : SharedBase
- (instancetype)initWithRequestContext:(NSString *)requestContext surgeInfo:(SharedSurgeInfo * _Nullable)surgeInfo booking:(SharedRideHailingBooking * _Nullable)booking __attribute__((swift_name("init(requestContext:surgeInfo:booking:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedSurgeInfo * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedRideHailingBooking * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedCreateRideHailingBookingResponse *)doCopyRequestContext:(NSString *)requestContext surgeInfo:(SharedSurgeInfo * _Nullable)surgeInfo booking:(SharedRideHailingBooking * _Nullable)booking __attribute__((swift_name("doCopy(requestContext:surgeInfo:booking:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRideHailingBooking * _Nullable booking __attribute__((swift_name("booking")));
@property (readonly) NSString *requestContext __attribute__((swift_name("requestContext")));
@property (readonly) SharedSurgeInfo * _Nullable surgeInfo __attribute__((swift_name("surgeInfo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateRideHailingBookingResponse.Companion")))
@interface SharedCreateRideHailingBookingResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateSharingBookingRequest")))
@interface SharedCreateSharingBookingRequest : SharedBase
- (instancetype)initWithVehicleId:(NSString *)vehicleId providerPaymentMethodId:(NSString * _Nullable)providerPaymentMethodId notificationSettings:(SharedNotificationSettings * _Nullable)notificationSettings ext:(NSDictionary<NSString *, NSString *> * _Nullable)ext coordinates:(SharedLatLng * _Nullable)coordinates initialBookingStatus:(SharedCreateSharingBookingRequestInitialBookingStatus * _Nullable)initialBookingStatus __attribute__((swift_name("init(vehicleId:providerPaymentMethodId:notificationSettings:ext:coordinates:initialBookingStatus:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedNotificationSettings * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSDictionary<NSString *, NSString *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedLatLng * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedCreateSharingBookingRequestInitialBookingStatus * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedCreateSharingBookingRequest *)doCopyVehicleId:(NSString *)vehicleId providerPaymentMethodId:(NSString * _Nullable)providerPaymentMethodId notificationSettings:(SharedNotificationSettings * _Nullable)notificationSettings ext:(NSDictionary<NSString *, NSString *> * _Nullable)ext coordinates:(SharedLatLng * _Nullable)coordinates initialBookingStatus:(SharedCreateSharingBookingRequestInitialBookingStatus * _Nullable)initialBookingStatus __attribute__((swift_name("doCopy(vehicleId:providerPaymentMethodId:notificationSettings:ext:coordinates:initialBookingStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLatLng * _Nullable coordinates __attribute__((swift_name("coordinates")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable ext __attribute__((swift_name("ext")));
@property (readonly) SharedCreateSharingBookingRequestInitialBookingStatus * _Nullable initialBookingStatus __attribute__((swift_name("initialBookingStatus")));
@property (readonly) SharedNotificationSettings * _Nullable notificationSettings __attribute__((swift_name("notificationSettings")));
@property (readonly) NSString * _Nullable providerPaymentMethodId __attribute__((swift_name("providerPaymentMethodId")));
@property (readonly) NSString *vehicleId __attribute__((swift_name("vehicleId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateSharingBookingRequest.Companion")))
@interface SharedCreateSharingBookingRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateSharingBookingRequest.InitialBookingStatus")))
@interface SharedCreateSharingBookingRequestInitialBookingStatus : SharedKotlinEnum<SharedCreateSharingBookingRequestInitialBookingStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedCreateSharingBookingRequestInitialBookingStatus *reserved __attribute__((swift_name("reserved")));
@property (class, readonly) SharedCreateSharingBookingRequestInitialBookingStatus *leased __attribute__((swift_name("leased")));
@property (class, readonly) SharedCreateSharingBookingRequestInitialBookingStatus *finished __attribute__((swift_name("finished")));
@property (class, readonly) SharedCreateSharingBookingRequestInitialBookingStatus *canceled __attribute__((swift_name("canceled")));
@property (class, readonly) SharedCreateSharingBookingRequestInitialBookingStatus *paused __attribute__((swift_name("paused")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreateSharingBookingRequest.InitialBookingStatusSerializer")))
@interface SharedCreateSharingBookingRequestInitialBookingStatusSerializer : SharedCommonEnumSerializer<SharedCreateSharingBookingRequestInitialBookingStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreditCardInfo")))
@interface SharedCreditCardInfo : SharedBase
- (instancetype)initWithExpirationDate:(NSString * _Nullable)expirationDate lastNumbers:(NSString * _Nullable)lastNumbers cardType:(NSString * _Nullable)cardType title:(NSString * _Nullable)title cardTypeName:(NSString * _Nullable)cardTypeName __attribute__((swift_name("init(expirationDate:lastNumbers:cardType:title:cardTypeName:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedCreditCardInfo *)doCopyExpirationDate:(NSString * _Nullable)expirationDate lastNumbers:(NSString * _Nullable)lastNumbers cardType:(NSString * _Nullable)cardType title:(NSString * _Nullable)title cardTypeName:(NSString * _Nullable)cardTypeName __attribute__((swift_name("doCopy(expirationDate:lastNumbers:cardType:title:cardTypeName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable cardType __attribute__((swift_name("cardType")));
@property (readonly) NSString * _Nullable cardTypeName __attribute__((swift_name("cardTypeName")));
@property (readonly) NSString * _Nullable expirationDate __attribute__((swift_name("expirationDate")));
@property (readonly) NSString * _Nullable lastNumbers __attribute__((swift_name("lastNumbers")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CreditCardInfo.Companion")))
@interface SharedCreditCardInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeclinedPlatformTerms")))
@interface SharedDeclinedPlatformTerms : SharedBase
- (instancetype)initWithKey:(NSString *)key version:(NSString *)version declinedAt:(NSString *)declinedAt __attribute__((swift_name("init(key:version:declinedAt:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SharedDeclinedPlatformTerms *)doCopyKey:(NSString *)key version:(NSString *)version declinedAt:(NSString *)declinedAt __attribute__((swift_name("doCopy(key:version:declinedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *declinedAt __attribute__((swift_name("declinedAt")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeclinedPlatformTerms.Companion")))
@interface SharedDeclinedPlatformTermsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeclinedProviderTerms")))
@interface SharedDeclinedProviderTerms : SharedBase
- (instancetype)initWithKey:(NSString *)key version:(NSString *)version providerId:(NSString *)providerId declinedAt:(NSString *)declinedAt __attribute__((swift_name("init(key:version:providerId:declinedAt:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (SharedDeclinedProviderTerms *)doCopyKey:(NSString *)key version:(NSString *)version providerId:(NSString *)providerId declinedAt:(NSString *)declinedAt __attribute__((swift_name("doCopy(key:version:providerId:declinedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *declinedAt __attribute__((swift_name("declinedAt")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeclinedProviderTerms.Companion")))
@interface SharedDeclinedProviderTermsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeepLink")))
@interface SharedDeepLink : SharedBase
- (instancetype)initWithAppLink:(NSString * _Nullable)appLink webUrl:(NSString * _Nullable)webUrl __attribute__((swift_name("init(appLink:webUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedDeepLink *)doCopyAppLink:(NSString * _Nullable)appLink webUrl:(NSString * _Nullable)webUrl __attribute__((swift_name("doCopy(appLink:webUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable appLink __attribute__((swift_name("appLink")));
@property (readonly) NSString * _Nullable webUrl __attribute__((swift_name("webUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DeepLink.Companion")))
@interface SharedDeepLinkCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DestinationWithDepartures")))
@interface SharedDestinationWithDepartures : SharedBase
- (instancetype)initWithDestination:(NSString *)destination trackDepartures:(NSArray<SharedTrackWithDepartures *> *)trackDepartures __attribute__((swift_name("init(destination:trackDepartures:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedTrackWithDepartures *> *)component2 __attribute__((swift_name("component2()")));
- (SharedDestinationWithDepartures *)doCopyDestination:(NSString *)destination trackDepartures:(NSArray<SharedTrackWithDepartures *> *)trackDepartures __attribute__((swift_name("doCopy(destination:trackDepartures:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *destination __attribute__((swift_name("destination")));
@property (readonly) NSArray<SharedTrackWithDepartures *> *trackDepartures __attribute__((swift_name("trackDepartures")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DestinationWithDepartures.Companion")))
@interface SharedDestinationWithDeparturesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DirectDebitInfo")))
@interface SharedDirectDebitInfo : SharedBase
- (instancetype)initWithHolder:(NSString *)holder iban:(NSString *)iban __attribute__((swift_name("init(holder:iban:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedDirectDebitInfo *)doCopyHolder:(NSString *)holder iban:(NSString *)iban __attribute__((swift_name("doCopy(holder:iban:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *holder __attribute__((swift_name("holder")));
@property (readonly) NSString *iban __attribute__((swift_name("iban")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DirectDebitInfo.Companion")))
@interface SharedDirectDebitInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DirectionsResponse")))
@interface SharedDirectionsResponse : SharedBase
- (instancetype)initWithPath:(SharedPath *)path __attribute__((swift_name("init(path:)"))) __attribute__((objc_designated_initializer));
- (SharedPath *)component1 __attribute__((swift_name("component1()")));
- (SharedDirectionsResponse *)doCopyPath:(SharedPath *)path __attribute__((swift_name("doCopy(path:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedPath *path __attribute__((swift_name("path")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DirectionsResponse.Companion")))
@interface SharedDirectionsResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscountInfo")))
@interface SharedDiscountInfo : SharedBase
- (instancetype)initWithMultiplier:(double)multiplier __attribute__((swift_name("init(multiplier:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (SharedDiscountInfo *)doCopyMultiplier:(double)multiplier __attribute__((swift_name("doCopy(multiplier:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double multiplier __attribute__((swift_name("multiplier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DiscountInfo.Companion")))
@interface SharedDiscountInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Disruption")))
@interface SharedDisruption : SharedBase
- (instancetype)initWithSeverity:(SharedDisruptionSeverity *)severity fromTime:(NSString *)fromTime toTime:(NSString *)toTime affectedSchedules:(NSArray<SharedAffectedSchedule *> *)affectedSchedules title:(NSString * _Nullable)title description:(NSString * _Nullable)description eventId:(NSString * _Nullable)eventId __attribute__((swift_name("init(severity:fromTime:toTime:affectedSchedules:title:description:eventId:)"))) __attribute__((objc_designated_initializer));
- (SharedDisruptionSeverity *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedAffectedSchedule *> *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedDisruption *)doCopySeverity:(SharedDisruptionSeverity *)severity fromTime:(NSString *)fromTime toTime:(NSString *)toTime affectedSchedules:(NSArray<SharedAffectedSchedule *> *)affectedSchedules title:(NSString * _Nullable)title description:(NSString * _Nullable)description eventId:(NSString * _Nullable)eventId __attribute__((swift_name("doCopy(severity:fromTime:toTime:affectedSchedules:title:description:eventId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedAffectedSchedule *> *affectedSchedules __attribute__((swift_name("affectedSchedules")));
@property (readonly, getter=description_) NSString * _Nullable description __attribute__((swift_name("description")));
@property (readonly) NSString * _Nullable eventId __attribute__((swift_name("eventId")));
@property (readonly) NSString *fromTime __attribute__((swift_name("fromTime")));
@property (readonly) SharedDisruptionSeverity *severity __attribute__((swift_name("severity")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@property (readonly) NSString *toTime __attribute__((swift_name("toTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Disruption.Companion")))
@interface SharedDisruptionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Disruption.Severity")))
@interface SharedDisruptionSeverity : SharedKotlinEnum<SharedDisruptionSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedDisruptionSeverity *notAffected __attribute__((swift_name("notAffected")));
@property (class, readonly) SharedDisruptionSeverity *information __attribute__((swift_name("information")));
@property (class, readonly) SharedDisruptionSeverity *warning __attribute__((swift_name("warning")));
@property (class, readonly) SharedDisruptionSeverity *alert __attribute__((swift_name("alert")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Disruption.SeveritySerializer")))
@interface SharedDisruptionSeveritySerializer : SharedCommonEnumSerializer<SharedDisruptionSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Distance")))
@interface SharedDistance : SharedBase
- (instancetype)initWithMeters:(int32_t)meters text:(NSString *)text __attribute__((swift_name("init(meters:text:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedDistance *)doCopyMeters:(int32_t)meters text:(NSString *)text __attribute__((swift_name("doCopy(meters:text:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t meters __attribute__((swift_name("meters")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Distance.Companion")))
@interface SharedDistanceCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentVerificationSession")))
@interface SharedDocumentVerificationSession : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id providerId:(NSString * _Nullable)providerId data:(NSDictionary<NSString *, NSString *> * _Nullable)data __attribute__((swift_name("init(id:providerId:data:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, NSString *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedDocumentVerificationSession *)doCopyId:(NSString * _Nullable)id providerId:(NSString * _Nullable)providerId data:(NSDictionary<NSString *, NSString *> * _Nullable)data __attribute__((swift_name("doCopy(id:providerId:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable data __attribute__((swift_name("data")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable providerId __attribute__((swift_name("providerId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DocumentVerificationSession.Companion")))
@interface SharedDocumentVerificationSessionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Driver")))
@interface SharedDriver : SharedBase
- (instancetype)initWithName:(NSString *)name rating:(SharedRating * _Nullable)rating phoneNumber:(NSString * _Nullable)phoneNumber smsNumber:(NSString * _Nullable)smsNumber pictureUrl:(NSString * _Nullable)pictureUrl __attribute__((swift_name("init(name:rating:phoneNumber:smsNumber:pictureUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedRating * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedDriver *)doCopyName:(NSString *)name rating:(SharedRating * _Nullable)rating phoneNumber:(NSString * _Nullable)phoneNumber smsNumber:(NSString * _Nullable)smsNumber pictureUrl:(NSString * _Nullable)pictureUrl __attribute__((swift_name("doCopy(name:rating:phoneNumber:smsNumber:pictureUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable phoneNumber __attribute__((swift_name("phoneNumber")));
@property (readonly) NSString * _Nullable pictureUrl __attribute__((swift_name("pictureUrl")));
@property (readonly) SharedRating * _Nullable rating __attribute__((swift_name("rating")));
@property (readonly) NSString * _Nullable smsNumber __attribute__((swift_name("smsNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Driver.Companion")))
@interface SharedDriverCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrivingInfo")))
@interface SharedDrivingInfo : SharedBase
- (instancetype)initWithMeters:(SharedDouble * _Nullable)meters seconds:(SharedDouble * _Nullable)seconds __attribute__((swift_name("init(meters:seconds:)"))) __attribute__((objc_designated_initializer));
- (SharedDouble * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedDrivingInfo *)doCopyMeters:(SharedDouble * _Nullable)meters seconds:(SharedDouble * _Nullable)seconds __attribute__((swift_name("doCopy(meters:seconds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable meters __attribute__((swift_name("meters")));
@property (readonly) SharedDouble * _Nullable seconds __attribute__((swift_name("seconds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrivingInfo.Companion")))
@interface SharedDrivingInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrivingLicence")))
@interface SharedDrivingLicence : SharedBase
- (instancetype)initWithCategories:(NSArray<SharedDrivingLicenceCategory *> *)categories verificationStatus:(SharedDrivingLicenceVerificationStatus *)verificationStatus licenceNumber:(NSString * _Nullable)licenceNumber issuedAt:(NSString * _Nullable)issuedAt expiresAt:(NSString * _Nullable)expiresAt verificationMessageKey:(NSString * _Nullable)verificationMessageKey verificationFallbackMessage:(NSString * _Nullable)verificationFallbackMessage __attribute__((swift_name("init(categories:verificationStatus:licenceNumber:issuedAt:expiresAt:verificationMessageKey:verificationFallbackMessage:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedDrivingLicenceCategory *> *)component1 __attribute__((swift_name("component1()")));
- (SharedDrivingLicenceVerificationStatus *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedDrivingLicence *)doCopyCategories:(NSArray<SharedDrivingLicenceCategory *> *)categories verificationStatus:(SharedDrivingLicenceVerificationStatus *)verificationStatus licenceNumber:(NSString * _Nullable)licenceNumber issuedAt:(NSString * _Nullable)issuedAt expiresAt:(NSString * _Nullable)expiresAt verificationMessageKey:(NSString * _Nullable)verificationMessageKey verificationFallbackMessage:(NSString * _Nullable)verificationFallbackMessage __attribute__((swift_name("doCopy(categories:verificationStatus:licenceNumber:issuedAt:expiresAt:verificationMessageKey:verificationFallbackMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedDrivingLicenceCategory *> *categories __attribute__((swift_name("categories")));
@property (readonly) NSString * _Nullable expiresAt __attribute__((swift_name("expiresAt")));
@property (readonly) NSString * _Nullable issuedAt __attribute__((swift_name("issuedAt")));
@property (readonly) NSString * _Nullable licenceNumber __attribute__((swift_name("licenceNumber")));
@property (readonly) NSString * _Nullable verificationFallbackMessage __attribute__((swift_name("verificationFallbackMessage")));
@property (readonly) NSString * _Nullable verificationMessageKey __attribute__((swift_name("verificationMessageKey")));
@property (readonly) SharedDrivingLicenceVerificationStatus *verificationStatus __attribute__((swift_name("verificationStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrivingLicence.Companion")))
@interface SharedDrivingLicenceCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrivingLicence.VerificationStatus")))
@interface SharedDrivingLicenceVerificationStatus : SharedKotlinEnum<SharedDrivingLicenceVerificationStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedDrivingLicenceVerificationStatus *notVerified __attribute__((swift_name("notVerified")));
@property (class, readonly) SharedDrivingLicenceVerificationStatus *verified __attribute__((swift_name("verified")));
@property (class, readonly) SharedDrivingLicenceVerificationStatus *pending __attribute__((swift_name("pending")));
@property (class, readonly) SharedDrivingLicenceVerificationStatus *failed __attribute__((swift_name("failed")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrivingLicence.VerificationStatusSerializer")))
@interface SharedDrivingLicenceVerificationStatusSerializer : SharedCommonEnumSerializer<SharedDrivingLicenceVerificationStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrivingLicenceCategory")))
@interface SharedDrivingLicenceCategory : SharedBase
- (instancetype)initWithCategory:(NSString * _Nullable)category issuedAt:(NSString * _Nullable)issuedAt expiresAt:(NSString * _Nullable)expiresAt __attribute__((swift_name("init(category:issuedAt:expiresAt:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedDrivingLicenceCategory *)doCopyCategory:(NSString * _Nullable)category issuedAt:(NSString * _Nullable)issuedAt expiresAt:(NSString * _Nullable)expiresAt __attribute__((swift_name("doCopy(category:issuedAt:expiresAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable category __attribute__((swift_name("category")));
@property (readonly) NSString * _Nullable expiresAt __attribute__((swift_name("expiresAt")));
@property (readonly) NSString * _Nullable issuedAt __attribute__((swift_name("issuedAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DrivingLicenceCategory.Companion")))
@interface SharedDrivingLicenceCategoryCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Duration")))
@interface SharedDuration : SharedBase
- (instancetype)initWithSeconds:(int32_t)seconds text:(NSString *)text __attribute__((swift_name("init(seconds:text:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedDuration *)doCopySeconds:(int32_t)seconds text:(NSString *)text __attribute__((swift_name("doCopy(seconds:text:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Duration.Companion")))
@interface SharedDurationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Error")))
@interface SharedError : SharedBase
- (instancetype)initWithDeveloperMessage:(NSString * _Nullable)developerMessage translationKey:(NSString * _Nullable)translationKey fallbackMessage:(NSString * _Nullable)fallbackMessage __attribute__((swift_name("init(developerMessage:translationKey:fallbackMessage:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedError *)doCopyDeveloperMessage:(NSString * _Nullable)developerMessage translationKey:(NSString * _Nullable)translationKey fallbackMessage:(NSString * _Nullable)fallbackMessage __attribute__((swift_name("doCopy(developerMessage:translationKey:fallbackMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable developerMessage __attribute__((swift_name("developerMessage")));
@property (readonly) NSString * _Nullable fallbackMessage __attribute__((swift_name("fallbackMessage")));
@property (readonly) NSString * _Nullable translationKey __attribute__((swift_name("translationKey")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Error.Companion")))
@interface SharedErrorCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorsError")))
@interface SharedErrorsError : SharedBase
- (instancetype)initWithUiError:(SharedUiError * _Nullable)uiError developerMessage:(NSString * _Nullable)developerMessage errorCode:(NSString * _Nullable)errorCode providerId:(NSString * _Nullable)providerId ext:(NSDictionary<NSString *, NSString *> * _Nullable)ext __attribute__((swift_name("init(uiError:developerMessage:errorCode:providerId:ext:)"))) __attribute__((objc_designated_initializer));
- (SharedUiError * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSDictionary<NSString *, NSString *> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedErrorsError *)doCopyUiError:(SharedUiError * _Nullable)uiError developerMessage:(NSString * _Nullable)developerMessage errorCode:(NSString * _Nullable)errorCode providerId:(NSString * _Nullable)providerId ext:(NSDictionary<NSString *, NSString *> * _Nullable)ext __attribute__((swift_name("doCopy(uiError:developerMessage:errorCode:providerId:ext:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable developerMessage __attribute__((swift_name("developerMessage")));
@property (readonly) NSString * _Nullable errorCode __attribute__((swift_name("errorCode")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable ext __attribute__((swift_name("ext")));
@property (readonly) NSString * _Nullable providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedUiError * _Nullable uiError __attribute__((swift_name("uiError")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorsError.Companion")))
@interface SharedErrorsErrorCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EstimateParkingPriceRequest")))
@interface SharedEstimateParkingPriceRequest : SharedBase
- (instancetype)initWithPlateNumber:(NSString *)plateNumber parkingZoneCode:(NSString *)parkingZoneCode __attribute__((swift_name("init(plateNumber:parkingZoneCode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedEstimateParkingPriceRequest *)doCopyPlateNumber:(NSString *)plateNumber parkingZoneCode:(NSString *)parkingZoneCode __attribute__((swift_name("doCopy(plateNumber:parkingZoneCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *parkingZoneCode __attribute__((swift_name("parkingZoneCode")));
@property (readonly) NSString *plateNumber __attribute__((swift_name("plateNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EstimateParkingPriceRequest.Companion")))
@interface SharedEstimateParkingPriceRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EstimateParkingPriceResponse")))
@interface SharedEstimateParkingPriceResponse : SharedBase
- (instancetype)initWithFareId:(NSString *)fareId fareToken:(NSString *)fareToken created:(NSString *)created plateNumber:(NSString *)plateNumber parkingZoneCode:(NSString *)parkingZoneCode parkingOptions:(NSArray<SharedParkingOption *> *)parkingOptions __attribute__((swift_name("init(fareId:fareToken:created:plateNumber:parkingZoneCode:parkingOptions:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSArray<SharedParkingOption *> *)component6 __attribute__((swift_name("component6()")));
- (SharedEstimateParkingPriceResponse *)doCopyFareId:(NSString *)fareId fareToken:(NSString *)fareToken created:(NSString *)created plateNumber:(NSString *)plateNumber parkingZoneCode:(NSString *)parkingZoneCode parkingOptions:(NSArray<SharedParkingOption *> *)parkingOptions __attribute__((swift_name("doCopy(fareId:fareToken:created:plateNumber:parkingZoneCode:parkingOptions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *created __attribute__((swift_name("created")));
@property (readonly) NSString *fareId __attribute__((swift_name("fareId")));
@property (readonly) NSString *fareToken __attribute__((swift_name("fareToken")));
@property (readonly) NSArray<SharedParkingOption *> *parkingOptions __attribute__((swift_name("parkingOptions")));
@property (readonly) NSString *parkingZoneCode __attribute__((swift_name("parkingZoneCode")));
@property (readonly) NSString *plateNumber __attribute__((swift_name("plateNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EstimateParkingPriceResponse.Companion")))
@interface SharedEstimateParkingPriceResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Eta")))
@interface SharedEta : SharedBase
- (instancetype)initWithSeconds:(int32_t)seconds kilometers:(SharedDouble * _Nullable)kilometers __attribute__((swift_name("init(seconds:kilometers:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedEta *)doCopySeconds:(int32_t)seconds kilometers:(SharedDouble * _Nullable)kilometers __attribute__((swift_name("doCopy(seconds:kilometers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable kilometers __attribute__((swift_name("kilometers")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Eta.Companion")))
@interface SharedEtaCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExactDeparture")))
@interface SharedExactDeparture : SharedBase
- (instancetype)initWithTime:(NSString *)time isRealtime:(BOOL)isRealtime tags:(NSArray<NSString *> *)tags tripId:(NSString * _Nullable)tripId destination:(NSString * _Nullable)destination disruption:(SharedExactDepartureDisruption * _Nullable)disruption __attribute__((swift_name("init(time:isRealtime:tags:tripId:destination:disruption:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSString *> *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedExactDepartureDisruption * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedExactDeparture *)doCopyTime:(NSString *)time isRealtime:(BOOL)isRealtime tags:(NSArray<NSString *> *)tags tripId:(NSString * _Nullable)tripId destination:(NSString * _Nullable)destination disruption:(SharedExactDepartureDisruption * _Nullable)disruption __attribute__((swift_name("doCopy(time:isRealtime:tags:tripId:destination:disruption:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable destination __attribute__((swift_name("destination")));
@property (readonly) SharedExactDepartureDisruption * _Nullable disruption __attribute__((swift_name("disruption")));
@property (readonly) BOOL isRealtime __attribute__((swift_name("isRealtime")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString *time __attribute__((swift_name("time")));
@property (readonly) NSString * _Nullable tripId __attribute__((swift_name("tripId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExactDeparture.Companion")))
@interface SharedExactDepartureCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExactDepartureDisruption")))
@interface SharedExactDepartureDisruption : SharedBase
- (instancetype)initWithSeverity:(SharedExactDepartureDisruptionSeverity *)severity __attribute__((swift_name("init(severity:)"))) __attribute__((objc_designated_initializer));
- (SharedExactDepartureDisruptionSeverity *)component1 __attribute__((swift_name("component1()")));
- (SharedExactDepartureDisruption *)doCopySeverity:(SharedExactDepartureDisruptionSeverity *)severity __attribute__((swift_name("doCopy(severity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedExactDepartureDisruptionSeverity *severity __attribute__((swift_name("severity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExactDepartureDisruption.Companion")))
@interface SharedExactDepartureDisruptionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExactDepartureDisruption.Severity")))
@interface SharedExactDepartureDisruptionSeverity : SharedKotlinEnum<SharedExactDepartureDisruptionSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedExactDepartureDisruptionSeverity *notAffected __attribute__((swift_name("notAffected")));
@property (class, readonly) SharedExactDepartureDisruptionSeverity *information __attribute__((swift_name("information")));
@property (class, readonly) SharedExactDepartureDisruptionSeverity *warning __attribute__((swift_name("warning")));
@property (class, readonly) SharedExactDepartureDisruptionSeverity *alert __attribute__((swift_name("alert")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExactDepartureDisruption.SeveritySerializer")))
@interface SharedExactDepartureDisruptionSeveritySerializer : SharedCommonEnumSerializer<SharedExactDepartureDisruptionSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExactTime")))
@interface SharedExactTime : SharedBase
- (instancetype)initWithTags:(NSArray<NSString *> *)tags secondsAfterMidnight:(int32_t)secondsAfterMidnight tripId:(NSString * _Nullable)tripId destination:(NSString * _Nullable)destination timeLabel:(NSString * _Nullable)timeLabel __attribute__((swift_name("init(tags:secondsAfterMidnight:tripId:destination:timeLabel:)"))) __attribute__((objc_designated_initializer));
- (NSArray<NSString *> *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedExactTime *)doCopyTags:(NSArray<NSString *> *)tags secondsAfterMidnight:(int32_t)secondsAfterMidnight tripId:(NSString * _Nullable)tripId destination:(NSString * _Nullable)destination timeLabel:(NSString * _Nullable)timeLabel __attribute__((swift_name("doCopy(tags:secondsAfterMidnight:tripId:destination:timeLabel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable destination __attribute__((swift_name("destination")));
@property (readonly) int32_t secondsAfterMidnight __attribute__((swift_name("secondsAfterMidnight")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable timeLabel __attribute__((swift_name("timeLabel")));
@property (readonly) NSString * _Nullable tripId __attribute__((swift_name("tripId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExactTime.Companion")))
@interface SharedExactTimeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtendedExactDeparture")))
@interface SharedExtendedExactDeparture : SharedBase
- (instancetype)initWithRealtimeDepartures:(NSArray<SharedExactDeparture *> *)realtimeDepartures scheduledDepartureStatus:(SharedExtendedExactDepartureScheduledDepartureStatus *)scheduledDepartureStatus scheduledDeparture:(SharedExactDeparture * _Nullable)scheduledDeparture __attribute__((swift_name("init(realtimeDepartures:scheduledDepartureStatus:scheduledDeparture:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedExactDeparture *> *)component1 __attribute__((swift_name("component1()")));
- (SharedExtendedExactDepartureScheduledDepartureStatus *)component2 __attribute__((swift_name("component2()")));
- (SharedExactDeparture * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedExtendedExactDeparture *)doCopyRealtimeDepartures:(NSArray<SharedExactDeparture *> *)realtimeDepartures scheduledDepartureStatus:(SharedExtendedExactDepartureScheduledDepartureStatus *)scheduledDepartureStatus scheduledDeparture:(SharedExactDeparture * _Nullable)scheduledDeparture __attribute__((swift_name("doCopy(realtimeDepartures:scheduledDepartureStatus:scheduledDeparture:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedExactDeparture *> *realtimeDepartures __attribute__((swift_name("realtimeDepartures")));
@property (readonly) SharedExactDeparture * _Nullable scheduledDeparture __attribute__((swift_name("scheduledDeparture")));
@property (readonly) SharedExtendedExactDepartureScheduledDepartureStatus *scheduledDepartureStatus __attribute__((swift_name("scheduledDepartureStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtendedExactDeparture.Companion")))
@interface SharedExtendedExactDepartureCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtendedExactDeparture.ScheduledDepartureStatus")))
@interface SharedExtendedExactDepartureScheduledDepartureStatus : SharedKotlinEnum<SharedExtendedExactDepartureScheduledDepartureStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedExtendedExactDepartureScheduledDepartureStatus *canceled __attribute__((swift_name("canceled")));
@property (class, readonly) SharedExtendedExactDepartureScheduledDepartureStatus *replacedByRealtime __attribute__((swift_name("replacedByRealtime")));
@property (class, readonly) SharedExtendedExactDepartureScheduledDepartureStatus *coveredByRealtime __attribute__((swift_name("coveredByRealtime")));
@property (class, readonly) SharedExtendedExactDepartureScheduledDepartureStatus *unchanged __attribute__((swift_name("unchanged")));
@property (class, readonly) SharedExtendedExactDepartureScheduledDepartureStatus *unmapped __attribute__((swift_name("unmapped")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtendedExactDeparture.ScheduledDepartureStatusSerializer")))
@interface SharedExtendedExactDepartureScheduledDepartureStatusSerializer : SharedCommonEnumSerializer<SharedExtendedExactDepartureScheduledDepartureStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtendedIntervalDeparture")))
@interface SharedExtendedIntervalDeparture : SharedBase
- (instancetype)initWithRealtimeDepartures:(NSArray<SharedExactDeparture *> *)realtimeDepartures scheduledDepartureStatus:(SharedExtendedIntervalDepartureScheduledDepartureStatus *)scheduledDepartureStatus scheduledDeparture:(SharedIntervalDeparture * _Nullable)scheduledDeparture __attribute__((swift_name("init(realtimeDepartures:scheduledDepartureStatus:scheduledDeparture:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedExactDeparture *> *)component1 __attribute__((swift_name("component1()")));
- (SharedExtendedIntervalDepartureScheduledDepartureStatus *)component2 __attribute__((swift_name("component2()")));
- (SharedIntervalDeparture * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedExtendedIntervalDeparture *)doCopyRealtimeDepartures:(NSArray<SharedExactDeparture *> *)realtimeDepartures scheduledDepartureStatus:(SharedExtendedIntervalDepartureScheduledDepartureStatus *)scheduledDepartureStatus scheduledDeparture:(SharedIntervalDeparture * _Nullable)scheduledDeparture __attribute__((swift_name("doCopy(realtimeDepartures:scheduledDepartureStatus:scheduledDeparture:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedExactDeparture *> *realtimeDepartures __attribute__((swift_name("realtimeDepartures")));
@property (readonly) SharedIntervalDeparture * _Nullable scheduledDeparture __attribute__((swift_name("scheduledDeparture")));
@property (readonly) SharedExtendedIntervalDepartureScheduledDepartureStatus *scheduledDepartureStatus __attribute__((swift_name("scheduledDepartureStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtendedIntervalDeparture.Companion")))
@interface SharedExtendedIntervalDepartureCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtendedIntervalDeparture.ScheduledDepartureStatus")))
@interface SharedExtendedIntervalDepartureScheduledDepartureStatus : SharedKotlinEnum<SharedExtendedIntervalDepartureScheduledDepartureStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedExtendedIntervalDepartureScheduledDepartureStatus *canceled __attribute__((swift_name("canceled")));
@property (class, readonly) SharedExtendedIntervalDepartureScheduledDepartureStatus *replacedByRealtime __attribute__((swift_name("replacedByRealtime")));
@property (class, readonly) SharedExtendedIntervalDepartureScheduledDepartureStatus *coveredByRealtime __attribute__((swift_name("coveredByRealtime")));
@property (class, readonly) SharedExtendedIntervalDepartureScheduledDepartureStatus *unchanged __attribute__((swift_name("unchanged")));
@property (class, readonly) SharedExtendedIntervalDepartureScheduledDepartureStatus *unmapped __attribute__((swift_name("unmapped")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtendedIntervalDeparture.ScheduledDepartureStatusSerializer")))
@interface SharedExtendedIntervalDepartureScheduledDepartureStatusSerializer : SharedCommonEnumSerializer<SharedExtendedIntervalDepartureScheduledDepartureStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Faq")))
@interface SharedFaq : SharedBase
- (instancetype)initWithLocalizedFaqs:(NSArray<SharedLocalizedFaq *> *)localizedFaqs __attribute__((swift_name("init(localizedFaqs:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedLocalizedFaq *> *)component1 __attribute__((swift_name("component1()")));
- (SharedFaq *)doCopyLocalizedFaqs:(NSArray<SharedLocalizedFaq *> *)localizedFaqs __attribute__((swift_name("doCopy(localizedFaqs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedLocalizedFaq *> *localizedFaqs __attribute__((swift_name("localizedFaqs")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Faq.Companion")))
@interface SharedFaqCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fare")))
@interface SharedFare : SharedBase
- (instancetype)initWithId:(NSString *)id price:(SharedMoney *)price transit:(NSString * _Nullable)transit rideHailing:(SharedRideHailingFare * _Nullable)rideHailing sharing:(NSString * _Nullable)sharing __attribute__((swift_name("init(id:price:transit:rideHailing:sharing:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedMoney *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedRideHailingFare * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedFare *)doCopyId:(NSString *)id price:(SharedMoney *)price transit:(NSString * _Nullable)transit rideHailing:(SharedRideHailingFare * _Nullable)rideHailing sharing:(NSString * _Nullable)sharing __attribute__((swift_name("doCopy(id:price:transit:rideHailing:sharing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedMoney *price __attribute__((swift_name("price")));
@property (readonly) SharedRideHailingFare * _Nullable rideHailing __attribute__((swift_name("rideHailing")));
@property (readonly) NSString * _Nullable sharing __attribute__((swift_name("sharing")));
@property (readonly) NSString * _Nullable transit __attribute__((swift_name("transit")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fare.Companion")))
@interface SharedFareCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FareBreakdownItem")))
@interface SharedFareBreakdownItem : SharedBase
- (instancetype)initWithName:(NSString *)name value:(NSString * _Nullable)value price:(SharedPrice * _Nullable)price __attribute__((swift_name("init(name:value:price:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedPrice * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedFareBreakdownItem *)doCopyName:(NSString *)name value:(NSString * _Nullable)value price:(SharedPrice * _Nullable)price __attribute__((swift_name("doCopy(name:value:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) SharedPrice * _Nullable price __attribute__((swift_name("price")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FareBreakdownItem.Companion")))
@interface SharedFareBreakdownItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FareEstimate")))
@interface SharedFareEstimate : SharedBase
- (instancetype)initWithCurrency:(NSString *)currency price:(SharedPrice *)price fareBreakdown:(NSArray<SharedFareBreakdownItem *> *)fareBreakdown displayPrice:(NSString * _Nullable)displayPrice surgeInfo:(SharedSurgeInfo * _Nullable)surgeInfo discountInfo:(SharedDiscountInfo * _Nullable)discountInfo __attribute__((swift_name("init(currency:price:fareBreakdown:displayPrice:surgeInfo:discountInfo:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedPrice *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedFareBreakdownItem *> *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedSurgeInfo * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedDiscountInfo * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedFareEstimate *)doCopyCurrency:(NSString *)currency price:(SharedPrice *)price fareBreakdown:(NSArray<SharedFareBreakdownItem *> *)fareBreakdown displayPrice:(NSString * _Nullable)displayPrice surgeInfo:(SharedSurgeInfo * _Nullable)surgeInfo discountInfo:(SharedDiscountInfo * _Nullable)discountInfo __attribute__((swift_name("doCopy(currency:price:fareBreakdown:displayPrice:surgeInfo:discountInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@property (readonly) SharedDiscountInfo * _Nullable discountInfo __attribute__((swift_name("discountInfo")));
@property (readonly) NSString * _Nullable displayPrice __attribute__((swift_name("displayPrice")));
@property (readonly) NSArray<SharedFareBreakdownItem *> *fareBreakdown __attribute__((swift_name("fareBreakdown")));
@property (readonly) SharedPrice *price __attribute__((swift_name("price")));
@property (readonly) SharedSurgeInfo * _Nullable surgeInfo __attribute__((swift_name("surgeInfo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FareEstimate.Companion")))
@interface SharedFareEstimateCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fee")))
@interface SharedFee : SharedBase
- (instancetype)initWithType:(SharedFeeType * _Nullable)type amount:(SharedDouble * _Nullable)amount __attribute__((swift_name("init(type:amount:)"))) __attribute__((objc_designated_initializer));
- (SharedFeeType * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedFee *)doCopyType:(SharedFeeType * _Nullable)type amount:(SharedDouble * _Nullable)amount __attribute__((swift_name("doCopy(type:amount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) SharedFeeType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fee.Companion")))
@interface SharedFeeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fee.Type_")))
@interface SharedFeeType : SharedKotlinEnum<SharedFeeType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedFeeType *returnInZoneNotInStation __attribute__((swift_name("returnInZoneNotInStation")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fee.Type_Serializer")))
@interface SharedFeeTypeSerializer : SharedCommonEnumSerializer<SharedFeeType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeeInfo")))
@interface SharedFeeInfo : SharedBase
- (instancetype)initWithTranslationKey:(NSString * _Nullable)translationKey amount:(SharedDouble * _Nullable)amount __attribute__((swift_name("init(translationKey:amount:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedFeeInfo *)doCopyTranslationKey:(NSString * _Nullable)translationKey amount:(SharedDouble * _Nullable)amount __attribute__((swift_name("doCopy(translationKey:amount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable translationKey __attribute__((swift_name("translationKey")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FeeInfo.Companion")))
@interface SharedFeeInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fuel")))
@interface SharedFuel : SharedBase
- (instancetype)initWithFraction:(SharedDouble * _Nullable)fraction __attribute__((swift_name("init(fraction:)"))) __attribute__((objc_designated_initializer));
- (SharedDouble * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedFuel *)doCopyFraction:(SharedDouble * _Nullable)fraction __attribute__((swift_name("doCopy(fraction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable fraction __attribute__((swift_name("fraction")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Fuel.Companion")))
@interface SharedFuelCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuelCard")))
@interface SharedFuelCard : SharedBase
- (instancetype)initWithCode:(NSString *)code title:(NSString * _Nullable)title __attribute__((swift_name("init(code:title:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedFuelCard *)doCopyCode:(NSString *)code title:(NSString * _Nullable)title __attribute__((swift_name("doCopy(code:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FuelCard.Companion")))
@interface SharedFuelCardCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTicketPriceRequest")))
@interface SharedGetTicketPriceRequest : SharedBase
- (instancetype)initWithTicketNumber:(NSString *)ticketNumber parkingZoneCode:(NSString *)parkingZoneCode __attribute__((swift_name("init(ticketNumber:parkingZoneCode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedGetTicketPriceRequest *)doCopyTicketNumber:(NSString *)ticketNumber parkingZoneCode:(NSString *)parkingZoneCode __attribute__((swift_name("doCopy(ticketNumber:parkingZoneCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *parkingZoneCode __attribute__((swift_name("parkingZoneCode")));
@property (readonly) NSString *ticketNumber __attribute__((swift_name("ticketNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTicketPriceRequest.Companion")))
@interface SharedGetTicketPriceRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTicketPriceResponse")))
@interface SharedGetTicketPriceResponse : SharedBase
- (instancetype)initWithFareToken:(NSString *)fareToken price:(SharedParkingPrice *)price __attribute__((swift_name("init(fareToken:price:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedParkingPrice *)component2 __attribute__((swift_name("component2()")));
- (SharedGetTicketPriceResponse *)doCopyFareToken:(NSString *)fareToken price:(SharedParkingPrice *)price __attribute__((swift_name("doCopy(fareToken:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fareToken __attribute__((swift_name("fareToken")));
@property (readonly) SharedParkingPrice *price __attribute__((swift_name("price")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GetTicketPriceResponse.Companion")))
@interface SharedGetTicketPriceResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Group")))
@interface SharedGroup : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id emptyMessageTranslationKey:(NSString * _Nullable)emptyMessageTranslationKey __attribute__((swift_name("init(id:emptyMessageTranslationKey:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedGroup *)doCopyId:(NSString * _Nullable)id emptyMessageTranslationKey:(NSString * _Nullable)emptyMessageTranslationKey __attribute__((swift_name("doCopy(id:emptyMessageTranslationKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable emptyMessageTranslationKey __attribute__((swift_name("emptyMessageTranslationKey")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Group.Companion")))
@interface SharedGroupCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryAllowanceParts")))
@interface SharedHistoryAllowanceParts : SharedBase
- (instancetype)initWithSharing:(NSArray<SharedHistorySharingPart *> *)sharing __attribute__((swift_name("init(sharing:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedHistorySharingPart *> *)component1 __attribute__((swift_name("component1()")));
- (SharedHistoryAllowanceParts *)doCopySharing:(NSArray<SharedHistorySharingPart *> *)sharing __attribute__((swift_name("doCopy(sharing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedHistorySharingPart *> *sharing __attribute__((swift_name("sharing")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryAllowanceParts.Companion")))
@interface SharedHistoryAllowancePartsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryBalanceDuration")))
@interface SharedHistoryBalanceDuration : SharedBase
- (instancetype)initWithTotal:(NSString *)total available:(NSString *)available __attribute__((swift_name("init(total:available:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedHistoryBalanceDuration *)doCopyTotal:(NSString *)total available:(NSString *)available __attribute__((swift_name("doCopy(total:available:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *available __attribute__((swift_name("available")));
@property (readonly) NSString *total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryBalanceDuration.Companion")))
@interface SharedHistoryBalanceDurationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryBalanceMeters")))
@interface SharedHistoryBalanceMeters : SharedBase
- (instancetype)initWithTotal:(int32_t)total available:(int32_t)available __attribute__((swift_name("init(total:available:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (SharedHistoryBalanceMeters *)doCopyTotal:(int32_t)total available:(int32_t)available __attribute__((swift_name("doCopy(total:available:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t available __attribute__((swift_name("available")));
@property (readonly) int32_t total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryBalanceMeters.Companion")))
@interface SharedHistoryBalanceMetersCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryBreakdownItem")))
@interface SharedHistoryBreakdownItem : SharedBase
- (instancetype)initWithType:(SharedHistoryBreakdownItemType *)type amount:(double)amount __attribute__((swift_name("init(type:amount:)"))) __attribute__((objc_designated_initializer));
- (SharedHistoryBreakdownItemType *)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (SharedHistoryBreakdownItem *)doCopyType:(SharedHistoryBreakdownItemType *)type amount:(double)amount __attribute__((swift_name("doCopy(type:amount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double amount __attribute__((swift_name("amount")));
@property (readonly) SharedHistoryBreakdownItemType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryBreakdownItem.Companion")))
@interface SharedHistoryBreakdownItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryBreakdownItem.Type_")))
@interface SharedHistoryBreakdownItemType : SharedKotlinEnum<SharedHistoryBreakdownItemType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedHistoryBreakdownItemType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedHistoryBreakdownItemType *ridePrice __attribute__((swift_name("ridePrice")));
@property (class, readonly) SharedHistoryBreakdownItemType *outerZoneParkingFee __attribute__((swift_name("outerZoneParkingFee")));
@property (class, readonly) SharedHistoryBreakdownItemType *unlockFee __attribute__((swift_name("unlockFee")));
@property (class, readonly) SharedHistoryBreakdownItemType *userRegistrationFee __attribute__((swift_name("userRegistrationFee")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryBreakdownItem.Type_Serializer")))
@interface SharedHistoryBreakdownItemTypeSerializer : SharedCommonEnumSerializer<SharedHistoryBreakdownItemType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryCar")))
@interface SharedHistoryCar : SharedBase
- (instancetype)initWithBrandAndModel:(NSString *)brandAndModel plateNumber:(NSString *)plateNumber imageUrl:(NSString * _Nullable)imageUrl __attribute__((swift_name("init(brandAndModel:plateNumber:imageUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedHistoryCar *)doCopyBrandAndModel:(NSString *)brandAndModel plateNumber:(NSString *)plateNumber imageUrl:(NSString * _Nullable)imageUrl __attribute__((swift_name("doCopy(brandAndModel:plateNumber:imageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *brandAndModel __attribute__((swift_name("brandAndModel")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *plateNumber __attribute__((swift_name("plateNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryCar.Companion")))
@interface SharedHistoryCarCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryDriver")))
@interface SharedHistoryDriver : SharedBase
- (instancetype)initWithName:(NSString *)name phoneNumber:(NSString *)phoneNumber imageUrl:(NSString * _Nullable)imageUrl __attribute__((swift_name("init(name:phoneNumber:imageUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedHistoryDriver *)doCopyName:(NSString *)name phoneNumber:(NSString *)phoneNumber imageUrl:(NSString * _Nullable)imageUrl __attribute__((swift_name("doCopy(name:phoneNumber:imageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryDriver.Companion")))
@interface SharedHistoryDriverCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMoney")))
@interface SharedHistoryMoney : SharedBase
- (instancetype)initWithAmount:(double)amount currency:(NSString *)currency __attribute__((swift_name("init(amount:currency:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedHistoryMoney *)doCopyAmount:(double)amount currency:(NSString *)currency __attribute__((swift_name("doCopy(amount:currency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double amount __attribute__((swift_name("amount")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryMoney.Companion")))
@interface SharedHistoryMoneyCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryPaymentMethod")))
@interface SharedHistoryPaymentMethod : SharedBase
- (instancetype)initWithType:(SharedHistoryPaymentMethodType *)type creditCard:(SharedCreditCardInfo * _Nullable)creditCard directDebit:(SharedDirectDebitInfo * _Nullable)directDebit __attribute__((swift_name("init(type:creditCard:directDebit:)"))) __attribute__((objc_designated_initializer));
- (SharedHistoryPaymentMethodType *)component1 __attribute__((swift_name("component1()")));
- (SharedCreditCardInfo * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedDirectDebitInfo * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedHistoryPaymentMethod *)doCopyType:(SharedHistoryPaymentMethodType *)type creditCard:(SharedCreditCardInfo * _Nullable)creditCard directDebit:(SharedDirectDebitInfo * _Nullable)directDebit __attribute__((swift_name("doCopy(type:creditCard:directDebit:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedCreditCardInfo * _Nullable creditCard __attribute__((swift_name("creditCard")));
@property (readonly) SharedDirectDebitInfo * _Nullable directDebit __attribute__((swift_name("directDebit")));
@property (readonly) SharedHistoryPaymentMethodType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryPaymentMethod.Companion")))
@interface SharedHistoryPaymentMethodCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryPaymentMethod.Type_")))
@interface SharedHistoryPaymentMethodType : SharedKotlinEnum<SharedHistoryPaymentMethodType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedHistoryPaymentMethodType *none __attribute__((swift_name("none")));
@property (class, readonly) SharedHistoryPaymentMethodType *creditCard __attribute__((swift_name("creditCard")));
@property (class, readonly) SharedHistoryPaymentMethodType *directDebit __attribute__((swift_name("directDebit")));
@property (class, readonly) SharedHistoryPaymentMethodType *payPal __attribute__((swift_name("payPal")));
@property (class, readonly) SharedHistoryPaymentMethodType *prepay __attribute__((swift_name("prepay")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryPaymentMethod.Type_Serializer")))
@interface SharedHistoryPaymentMethodTypeSerializer : SharedCommonEnumSerializer<SharedHistoryPaymentMethodType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryPaymentPurchaseBreakdownItem")))
@interface SharedHistoryPaymentPurchaseBreakdownItem : SharedBase
- (instancetype)initWithAmount:(SharedDouble * _Nullable)amount vatRatePercent:(SharedDouble * _Nullable)vatRatePercent vatAmount:(SharedDouble * _Nullable)vatAmount sharing:(SharedHistorySharingPurchaseBreakdownInfo * _Nullable)sharing __attribute__((swift_name("init(amount:vatRatePercent:vatAmount:sharing:)"))) __attribute__((objc_designated_initializer));
- (SharedDouble * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedHistorySharingPurchaseBreakdownInfo * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedHistoryPaymentPurchaseBreakdownItem *)doCopyAmount:(SharedDouble * _Nullable)amount vatRatePercent:(SharedDouble * _Nullable)vatRatePercent vatAmount:(SharedDouble * _Nullable)vatAmount sharing:(SharedHistorySharingPurchaseBreakdownInfo * _Nullable)sharing __attribute__((swift_name("doCopy(amount:vatRatePercent:vatAmount:sharing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) SharedHistorySharingPurchaseBreakdownInfo * _Nullable sharing __attribute__((swift_name("sharing")));
@property (readonly) SharedDouble * _Nullable vatAmount __attribute__((swift_name("vatAmount")));
@property (readonly) SharedDouble * _Nullable vatRatePercent __attribute__((swift_name("vatRatePercent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryPaymentPurchaseBreakdownItem.Companion")))
@interface SharedHistoryPaymentPurchaseBreakdownItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryPriceBreakdown")))
@interface SharedHistoryPriceBreakdown : SharedBase
- (instancetype)initWithItems:(NSArray<SharedHistoryBreakdownItem *> *)items __attribute__((swift_name("init(items:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedHistoryBreakdownItem *> *)component1 __attribute__((swift_name("component1()")));
- (SharedHistoryPriceBreakdown *)doCopyItems:(NSArray<SharedHistoryBreakdownItem *> *)items __attribute__((swift_name("doCopy(items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedHistoryBreakdownItem *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryPriceBreakdown.Companion")))
@interface SharedHistoryPriceBreakdownCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryPurchaseBreakdown")))
@interface SharedHistoryPurchaseBreakdown : SharedBase
- (instancetype)initWithPayment:(SharedHistoryPaymentPurchaseBreakdownItem * _Nullable)payment subscription:(SharedHistorySubscriptionPurchaseBreakdownItem * _Nullable)subscription __attribute__((swift_name("init(payment:subscription:)"))) __attribute__((objc_designated_initializer));
- (SharedHistoryPaymentPurchaseBreakdownItem * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedHistorySubscriptionPurchaseBreakdownItem * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedHistoryPurchaseBreakdown *)doCopyPayment:(SharedHistoryPaymentPurchaseBreakdownItem * _Nullable)payment subscription:(SharedHistorySubscriptionPurchaseBreakdownItem * _Nullable)subscription __attribute__((swift_name("doCopy(payment:subscription:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedHistoryPaymentPurchaseBreakdownItem * _Nullable payment __attribute__((swift_name("payment")));
@property (readonly) SharedHistorySubscriptionPurchaseBreakdownItem * _Nullable subscription __attribute__((swift_name("subscription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryPurchaseBreakdown.Companion")))
@interface SharedHistoryPurchaseBreakdownCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistorySharingPart")))
@interface SharedHistorySharingPart : SharedBase
- (instancetype)initWithId:(NSString *)id providers:(NSArray<SharedHistorySharingProvider *> *)providers duration:(SharedHistoryBalanceDuration * _Nullable)duration meters:(SharedHistoryBalanceMeters * _Nullable)meters __attribute__((swift_name("init(id:providers:duration:meters:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedHistorySharingProvider *> *)component2 __attribute__((swift_name("component2()")));
- (SharedHistoryBalanceDuration * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedHistoryBalanceMeters * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedHistorySharingPart *)doCopyId:(NSString *)id providers:(NSArray<SharedHistorySharingProvider *> *)providers duration:(SharedHistoryBalanceDuration * _Nullable)duration meters:(SharedHistoryBalanceMeters * _Nullable)meters __attribute__((swift_name("doCopy(id:providers:duration:meters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedHistoryBalanceDuration * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedHistoryBalanceMeters * _Nullable meters __attribute__((swift_name("meters")));
@property (readonly) NSArray<SharedHistorySharingProvider *> *providers __attribute__((swift_name("providers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistorySharingPart.Companion")))
@interface SharedHistorySharingPartCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistorySharingProvider")))
@interface SharedHistorySharingProvider : SharedBase
- (instancetype)initWithProviderId:(NSString *)providerId vehicleType:(SharedHistorySharingProviderVehicleType *)vehicleType __attribute__((swift_name("init(providerId:vehicleType:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedHistorySharingProviderVehicleType *)component2 __attribute__((swift_name("component2()")));
- (SharedHistorySharingProvider *)doCopyProviderId:(NSString *)providerId vehicleType:(SharedHistorySharingProviderVehicleType *)vehicleType __attribute__((swift_name("doCopy(providerId:vehicleType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedHistorySharingProviderVehicleType *vehicleType __attribute__((swift_name("vehicleType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistorySharingProvider.Companion")))
@interface SharedHistorySharingProviderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistorySharingProvider.VehicleType")))
@interface SharedHistorySharingProviderVehicleType : SharedKotlinEnum<SharedHistorySharingProviderVehicleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedHistorySharingProviderVehicleType *car __attribute__((swift_name("car")));
@property (class, readonly) SharedHistorySharingProviderVehicleType *bicycle __attribute__((swift_name("bicycle")));
@property (class, readonly) SharedHistorySharingProviderVehicleType *scooter __attribute__((swift_name("scooter")));
@property (class, readonly) SharedHistorySharingProviderVehicleType *kickScooter __attribute__((swift_name("kickScooter")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistorySharingProvider.VehicleTypeSerializer")))
@interface SharedHistorySharingProviderVehicleTypeSerializer : SharedCommonEnumSerializer<SharedHistorySharingProviderVehicleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistorySharingPurchaseBreakdownInfo")))
@interface SharedHistorySharingPurchaseBreakdownInfo : SharedBase
- (instancetype)initWithTripDuration:(NSString * _Nullable)tripDuration distanceMeters:(SharedInt * _Nullable)distanceMeters __attribute__((swift_name("init(tripDuration:distanceMeters:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedHistorySharingPurchaseBreakdownInfo *)doCopyTripDuration:(NSString * _Nullable)tripDuration distanceMeters:(SharedInt * _Nullable)distanceMeters __attribute__((swift_name("doCopy(tripDuration:distanceMeters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedInt * _Nullable distanceMeters __attribute__((swift_name("distanceMeters")));
@property (readonly) NSString * _Nullable tripDuration __attribute__((swift_name("tripDuration")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistorySharingPurchaseBreakdownInfo.Companion")))
@interface SharedHistorySharingPurchaseBreakdownInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistorySubscriptionPurchaseBreakdownItem")))
@interface SharedHistorySubscriptionPurchaseBreakdownItem : SharedBase
- (instancetype)initWithSharing:(SharedHistorySharingPurchaseBreakdownInfo * _Nullable)sharing __attribute__((swift_name("init(sharing:)"))) __attribute__((objc_designated_initializer));
- (SharedHistorySharingPurchaseBreakdownInfo * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedHistorySubscriptionPurchaseBreakdownItem *)doCopySharing:(SharedHistorySharingPurchaseBreakdownInfo * _Nullable)sharing __attribute__((swift_name("doCopy(sharing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedHistorySharingPurchaseBreakdownInfo * _Nullable sharing __attribute__((swift_name("sharing")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistorySubscriptionPurchaseBreakdownItem.Companion")))
@interface SharedHistorySubscriptionPurchaseBreakdownItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryTicket")))
@interface SharedHistoryTicket : SharedBase
- (instancetype)initWithId:(NSString *)id productId:(NSString *)productId purchasedAt:(NSString *)purchasedAt count:(int32_t)count price:(SharedHistoryMoney *)price properties:(NSArray<SharedPropertyValue *> *)properties textResources:(NSArray<SharedLocalizedPropertyValues *> *)textResources productName:(NSString * _Nullable)productName description:(NSString * _Nullable)description departureStopName:(NSString * _Nullable)departureStopName __attribute__((swift_name("init(id:productId:purchasedAt:count:price:properties:textResources:productName:description:departureStopName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (SharedHistoryMoney *)component5 __attribute__((swift_name("component5()")));
- (NSArray<SharedPropertyValue *> *)component6 __attribute__((swift_name("component6()")));
- (NSArray<SharedLocalizedPropertyValues *> *)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedHistoryTicket *)doCopyId:(NSString *)id productId:(NSString *)productId purchasedAt:(NSString *)purchasedAt count:(int32_t)count price:(SharedHistoryMoney *)price properties:(NSArray<SharedPropertyValue *> *)properties textResources:(NSArray<SharedLocalizedPropertyValues *> *)textResources productName:(NSString * _Nullable)productName description:(NSString * _Nullable)description departureStopName:(NSString * _Nullable)departureStopName __attribute__((swift_name("doCopy(id:productId:purchasedAt:count:price:properties:textResources:productName:description:departureStopName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t count __attribute__((swift_name("count")));
@property (readonly) NSString * _Nullable departureStopName __attribute__((swift_name("departureStopName")));
@property (readonly, getter=description_) NSString * _Nullable description __attribute__((swift_name("description")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedHistoryMoney *price __attribute__((swift_name("price")));
@property (readonly) NSString *productId __attribute__((swift_name("productId")));
@property (readonly) NSString * _Nullable productName __attribute__((swift_name("productName")));
@property (readonly) NSArray<SharedPropertyValue *> *properties __attribute__((swift_name("properties")));
@property (readonly) NSString *purchasedAt __attribute__((swift_name("purchasedAt")));
@property (readonly) NSArray<SharedLocalizedPropertyValues *> *textResources __attribute__((swift_name("textResources")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryTicket.Companion")))
@interface SharedHistoryTicketCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryZone")))
@interface SharedHistoryZone : SharedBase
- (instancetype)initWithAddress:(NSString * _Nullable)address category:(NSString * _Nullable)category name:(NSString * _Nullable)name __attribute__((swift_name("init(address:category:name:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedHistoryZone *)doCopyAddress:(NSString * _Nullable)address category:(NSString * _Nullable)category name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(address:category:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));
@property (readonly) NSString * _Nullable category __attribute__((swift_name("category")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HistoryZone.Companion")))
@interface SharedHistoryZoneCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HoursOfControl")))
@interface SharedHoursOfControl : SharedBase
- (instancetype)initWithFromWeekday:(NSString *)fromWeekday fromWeekdayId:(int32_t)fromWeekdayId toWeekday:(NSString *)toWeekday toWeekdayId:(int32_t)toWeekdayId fromLocalDayTimeSeconds:(int32_t)fromLocalDayTimeSeconds toLocalDayTimeSeconds:(int32_t)toLocalDayTimeSeconds maxParkingTimeSeconds:(SharedInt * _Nullable)maxParkingTimeSeconds __attribute__((swift_name("init(fromWeekday:fromWeekdayId:toWeekday:toWeekdayId:fromLocalDayTimeSeconds:toLocalDayTimeSeconds:maxParkingTimeSeconds:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (SharedInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedHoursOfControl *)doCopyFromWeekday:(NSString *)fromWeekday fromWeekdayId:(int32_t)fromWeekdayId toWeekday:(NSString *)toWeekday toWeekdayId:(int32_t)toWeekdayId fromLocalDayTimeSeconds:(int32_t)fromLocalDayTimeSeconds toLocalDayTimeSeconds:(int32_t)toLocalDayTimeSeconds maxParkingTimeSeconds:(SharedInt * _Nullable)maxParkingTimeSeconds __attribute__((swift_name("doCopy(fromWeekday:fromWeekdayId:toWeekday:toWeekdayId:fromLocalDayTimeSeconds:toLocalDayTimeSeconds:maxParkingTimeSeconds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t fromLocalDayTimeSeconds __attribute__((swift_name("fromLocalDayTimeSeconds")));
@property (readonly) NSString *fromWeekday __attribute__((swift_name("fromWeekday")));
@property (readonly) int32_t fromWeekdayId __attribute__((swift_name("fromWeekdayId")));
@property (readonly) SharedInt * _Nullable maxParkingTimeSeconds __attribute__((swift_name("maxParkingTimeSeconds")));
@property (readonly) int32_t toLocalDayTimeSeconds __attribute__((swift_name("toLocalDayTimeSeconds")));
@property (readonly) NSString *toWeekday __attribute__((swift_name("toWeekday")));
@property (readonly) int32_t toWeekdayId __attribute__((swift_name("toWeekdayId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HoursOfControl.Companion")))
@interface SharedHoursOfControlCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Identity")))
@interface SharedIdentity : SharedBase
- (instancetype)initWithVerificationStatus:(SharedIdentityVerificationStatus *)verificationStatus verificationMessageKey:(NSString * _Nullable)verificationMessageKey verificationFallbackMessage:(NSString * _Nullable)verificationFallbackMessage __attribute__((swift_name("init(verificationStatus:verificationMessageKey:verificationFallbackMessage:)"))) __attribute__((objc_designated_initializer));
- (SharedIdentityVerificationStatus *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedIdentity *)doCopyVerificationStatus:(SharedIdentityVerificationStatus *)verificationStatus verificationMessageKey:(NSString * _Nullable)verificationMessageKey verificationFallbackMessage:(NSString * _Nullable)verificationFallbackMessage __attribute__((swift_name("doCopy(verificationStatus:verificationMessageKey:verificationFallbackMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable verificationFallbackMessage __attribute__((swift_name("verificationFallbackMessage")));
@property (readonly) NSString * _Nullable verificationMessageKey __attribute__((swift_name("verificationMessageKey")));
@property (readonly) SharedIdentityVerificationStatus *verificationStatus __attribute__((swift_name("verificationStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Identity.Companion")))
@interface SharedIdentityCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Identity.VerificationStatus")))
@interface SharedIdentityVerificationStatus : SharedKotlinEnum<SharedIdentityVerificationStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedIdentityVerificationStatus *notVerified __attribute__((swift_name("notVerified")));
@property (class, readonly) SharedIdentityVerificationStatus *verified __attribute__((swift_name("verified")));
@property (class, readonly) SharedIdentityVerificationStatus *pending __attribute__((swift_name("pending")));
@property (class, readonly) SharedIdentityVerificationStatus *failed __attribute__((swift_name("failed")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Identity.VerificationStatusSerializer")))
@interface SharedIdentityVerificationStatusSerializer : SharedCommonEnumSerializer<SharedIdentityVerificationStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityVerificationDocument")))
@interface SharedIdentityVerificationDocument : SharedBase
- (instancetype)initWithNumber:(NSString * _Nullable)number country:(NSString * _Nullable)country type:(SharedIdentityVerificationDocumentType * _Nullable)type __attribute__((swift_name("init(number:country:type:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedIdentityVerificationDocumentType * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedIdentityVerificationDocument *)doCopyNumber:(NSString * _Nullable)number country:(NSString * _Nullable)country type:(SharedIdentityVerificationDocumentType * _Nullable)type __attribute__((swift_name("doCopy(number:country:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable country __attribute__((swift_name("country")));
@property (readonly) NSString * _Nullable number __attribute__((swift_name("number")));
@property (readonly) SharedIdentityVerificationDocumentType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityVerificationDocument.Companion")))
@interface SharedIdentityVerificationDocumentCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityVerificationDocument.Type_")))
@interface SharedIdentityVerificationDocumentType : SharedKotlinEnum<SharedIdentityVerificationDocumentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedIdentityVerificationDocumentType *passport __attribute__((swift_name("passport")));
@property (class, readonly) SharedIdentityVerificationDocumentType *idCard __attribute__((swift_name("idCard")));
@property (class, readonly) SharedIdentityVerificationDocumentType *drivingLicence __attribute__((swift_name("drivingLicence")));
@property (class, readonly) SharedIdentityVerificationDocumentType *residencePermit __attribute__((swift_name("residencePermit")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IdentityVerificationDocument.Type_Serializer")))
@interface SharedIdentityVerificationDocumentTypeSerializer : SharedCommonEnumSerializer<SharedIdentityVerificationDocumentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitiateAddPaymentMethodRequest")))
@interface SharedInitiateAddPaymentMethodRequest : SharedBase
- (instancetype)initWithRedirectUrlCancel:(NSString *)redirectUrlCancel redirectUrlSuccess:(NSString *)redirectUrlSuccess redirectUrlPending:(NSString * _Nullable)redirectUrlPending redirectUrlFailure:(NSString * _Nullable)redirectUrlFailure __attribute__((swift_name("init(redirectUrlCancel:redirectUrlSuccess:redirectUrlPending:redirectUrlFailure:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedInitiateAddPaymentMethodRequest *)doCopyRedirectUrlCancel:(NSString *)redirectUrlCancel redirectUrlSuccess:(NSString *)redirectUrlSuccess redirectUrlPending:(NSString * _Nullable)redirectUrlPending redirectUrlFailure:(NSString * _Nullable)redirectUrlFailure __attribute__((swift_name("doCopy(redirectUrlCancel:redirectUrlSuccess:redirectUrlPending:redirectUrlFailure:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *redirectUrlCancel __attribute__((swift_name("redirectUrlCancel")));
@property (readonly) NSString * _Nullable redirectUrlFailure __attribute__((swift_name("redirectUrlFailure")));
@property (readonly) NSString * _Nullable redirectUrlPending __attribute__((swift_name("redirectUrlPending")));
@property (readonly) NSString *redirectUrlSuccess __attribute__((swift_name("redirectUrlSuccess")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitiateAddPaymentMethodRequest.Companion")))
@interface SharedInitiateAddPaymentMethodRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitiateAddPaymentMethodResponse")))
@interface SharedInitiateAddPaymentMethodResponse : SharedBase
- (instancetype)initWithPspUrl:(NSString *)pspUrl __attribute__((swift_name("init(pspUrl:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedInitiateAddPaymentMethodResponse *)doCopyPspUrl:(NSString *)pspUrl __attribute__((swift_name("doCopy(pspUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *pspUrl __attribute__((swift_name("pspUrl")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InitiateAddPaymentMethodResponse.Companion")))
@interface SharedInitiateAddPaymentMethodResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntervalDeparture")))
@interface SharedIntervalDeparture : SharedBase
- (instancetype)initWithFrequencySeconds:(int32_t)frequencySeconds fromTime:(NSString *)fromTime toTime:(NSString *)toTime tripId:(NSString * _Nullable)tripId destination:(NSString * _Nullable)destination __attribute__((swift_name("init(frequencySeconds:fromTime:toTime:tripId:destination:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedIntervalDeparture *)doCopyFrequencySeconds:(int32_t)frequencySeconds fromTime:(NSString *)fromTime toTime:(NSString *)toTime tripId:(NSString * _Nullable)tripId destination:(NSString * _Nullable)destination __attribute__((swift_name("doCopy(frequencySeconds:fromTime:toTime:tripId:destination:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable destination __attribute__((swift_name("destination")));
@property (readonly) int32_t frequencySeconds __attribute__((swift_name("frequencySeconds")));
@property (readonly) NSString *fromTime __attribute__((swift_name("fromTime")));
@property (readonly) NSString *toTime __attribute__((swift_name("toTime")));
@property (readonly) NSString * _Nullable tripId __attribute__((swift_name("tripId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntervalDeparture.Companion")))
@interface SharedIntervalDepartureCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntervalTime")))
@interface SharedIntervalTime : SharedBase
- (instancetype)initWithFromSecondsAfterMidnight:(int32_t)fromSecondsAfterMidnight toSecondsAfterMidnight:(int32_t)toSecondsAfterMidnight frequencySeconds:(int32_t)frequencySeconds tripId:(NSString * _Nullable)tripId destination:(NSString * _Nullable)destination timeLabel:(NSString * _Nullable)timeLabel __attribute__((swift_name("init(fromSecondsAfterMidnight:toSecondsAfterMidnight:frequencySeconds:tripId:destination:timeLabel:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedIntervalTime *)doCopyFromSecondsAfterMidnight:(int32_t)fromSecondsAfterMidnight toSecondsAfterMidnight:(int32_t)toSecondsAfterMidnight frequencySeconds:(int32_t)frequencySeconds tripId:(NSString * _Nullable)tripId destination:(NSString * _Nullable)destination timeLabel:(NSString * _Nullable)timeLabel __attribute__((swift_name("doCopy(fromSecondsAfterMidnight:toSecondsAfterMidnight:frequencySeconds:tripId:destination:timeLabel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable destination __attribute__((swift_name("destination")));
@property (readonly) int32_t frequencySeconds __attribute__((swift_name("frequencySeconds")));
@property (readonly) int32_t fromSecondsAfterMidnight __attribute__((swift_name("fromSecondsAfterMidnight")));
@property (readonly) NSString * _Nullable timeLabel __attribute__((swift_name("timeLabel")));
@property (readonly) int32_t toSecondsAfterMidnight __attribute__((swift_name("toSecondsAfterMidnight")));
@property (readonly) NSString * _Nullable tripId __attribute__((swift_name("tripId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntervalTime.Companion")))
@interface SharedIntervalTimeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatLng")))
@interface SharedLatLng : SharedBase
- (instancetype)initWithLat:(double)lat lng:(double)lng __attribute__((swift_name("init(lat:lng:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (SharedLatLng *)doCopyLat:(double)lat lng:(double)lng __attribute__((swift_name("doCopy(lat:lng:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double lat __attribute__((swift_name("lat")));
@property (readonly) double lng __attribute__((swift_name("lng")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatLng.Companion")))
@interface SharedLatLngCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatLngBounds")))
@interface SharedLatLngBounds : SharedBase
- (instancetype)initWithSouthLat:(double)southLat northLat:(double)northLat westLng:(double)westLng eastLng:(double)eastLng __attribute__((swift_name("init(southLat:northLat:westLng:eastLng:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (double)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (SharedLatLngBounds *)doCopySouthLat:(double)southLat northLat:(double)northLat westLng:(double)westLng eastLng:(double)eastLng __attribute__((swift_name("doCopy(southLat:northLat:westLng:eastLng:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double eastLng __attribute__((swift_name("eastLng")));
@property (readonly) double northLat __attribute__((swift_name("northLat")));
@property (readonly) double southLat __attribute__((swift_name("southLat")));
@property (readonly) double westLng __attribute__((swift_name("westLng")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LatLngBounds.Companion")))
@interface SharedLatLngBoundsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalizedDeepLink")))
@interface SharedLocalizedDeepLink : SharedBase
- (instancetype)initWithAndroid:(SharedDeepLink *)android ios:(SharedDeepLink *)ios languageCode:(NSString * _Nullable)languageCode __attribute__((swift_name("init(android:ios:languageCode:)"))) __attribute__((objc_designated_initializer));
- (SharedDeepLink *)component1 __attribute__((swift_name("component1()")));
- (SharedDeepLink *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedLocalizedDeepLink *)doCopyAndroid:(SharedDeepLink *)android ios:(SharedDeepLink *)ios languageCode:(NSString * _Nullable)languageCode __attribute__((swift_name("doCopy(android:ios:languageCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDeepLink *android __attribute__((swift_name("android")));
@property (readonly) SharedDeepLink *ios __attribute__((swift_name("ios")));
@property (readonly) NSString * _Nullable languageCode __attribute__((swift_name("languageCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalizedDeepLink.Companion")))
@interface SharedLocalizedDeepLinkCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalizedFaq")))
@interface SharedLocalizedFaq : SharedBase
- (instancetype)initWithLanguageCode:(NSString *)languageCode url:(NSString *)url __attribute__((swift_name("init(languageCode:url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedLocalizedFaq *)doCopyLanguageCode:(NSString *)languageCode url:(NSString *)url __attribute__((swift_name("doCopy(languageCode:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *languageCode __attribute__((swift_name("languageCode")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalizedFaq.Companion")))
@interface SharedLocalizedFaqCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalizedPropertyValue")))
@interface SharedLocalizedPropertyValue : SharedBase
- (instancetype)initWithLanguage:(NSString *)language value:(NSString *)value __attribute__((swift_name("init(language:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedLocalizedPropertyValue *)doCopyLanguage:(NSString *)language value:(NSString *)value __attribute__((swift_name("doCopy(language:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *language __attribute__((swift_name("language")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalizedPropertyValue.Companion")))
@interface SharedLocalizedPropertyValueCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalizedPropertyValues")))
@interface SharedLocalizedPropertyValues : SharedBase
- (instancetype)initWithPropertyId:(NSString *)propertyId key:(NSString *)key localizedValues:(NSArray<SharedLocalizedPropertyValue *> *)localizedValues __attribute__((swift_name("init(propertyId:key:localizedValues:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedLocalizedPropertyValue *> *)component3 __attribute__((swift_name("component3()")));
- (SharedLocalizedPropertyValues *)doCopyPropertyId:(NSString *)propertyId key:(NSString *)key localizedValues:(NSArray<SharedLocalizedPropertyValue *> *)localizedValues __attribute__((swift_name("doCopy(propertyId:key:localizedValues:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSArray<SharedLocalizedPropertyValue *> *localizedValues __attribute__((swift_name("localizedValues")));
@property (readonly) NSString *propertyId __attribute__((swift_name("propertyId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalizedPropertyValues.Companion")))
@interface SharedLocalizedPropertyValuesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalizedTerms")))
@interface SharedLocalizedTerms : SharedBase
- (instancetype)initWithLanguageCode:(NSString *)languageCode url:(NSString *)url __attribute__((swift_name("init(languageCode:url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedLocalizedTerms *)doCopyLanguageCode:(NSString *)languageCode url:(NSString *)url __attribute__((swift_name("doCopy(languageCode:url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *languageCode __attribute__((swift_name("languageCode")));
@property (readonly) NSString *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocalizedTerms.Companion")))
@interface SharedLocalizedTermsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location")))
@interface SharedLocation : SharedBase
- (instancetype)initWithCoordinate:(SharedLatLng *)coordinate name:(NSString * _Nullable)name address:(NSString * _Nullable)address __attribute__((swift_name("init(coordinate:name:address:)"))) __attribute__((objc_designated_initializer));
- (SharedLatLng *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedLocation *)doCopyCoordinate:(SharedLatLng *)coordinate name:(NSString * _Nullable)name address:(NSString * _Nullable)address __attribute__((swift_name("doCopy(coordinate:name:address:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));
@property (readonly) SharedLatLng *coordinate __attribute__((swift_name("coordinate")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Location.Companion")))
@interface SharedLocationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Membership")))
@interface SharedMembership : SharedBase
- (instancetype)initWithType:(SharedMembershipType *)type number:(NSString *)number pin:(NSString * _Nullable)pin __attribute__((swift_name("init(type:number:pin:)"))) __attribute__((objc_designated_initializer));
- (SharedMembershipType *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedMembership *)doCopyType:(SharedMembershipType *)type number:(NSString *)number pin:(NSString * _Nullable)pin __attribute__((swift_name("doCopy(type:number:pin:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *number __attribute__((swift_name("number")));
@property (readonly) NSString * _Nullable pin __attribute__((swift_name("pin")));
@property (readonly) SharedMembershipType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Membership.Companion")))
@interface SharedMembershipCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Membership.Type_")))
@interface SharedMembershipType : SharedKotlinEnum<SharedMembershipType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedMembershipType *swissPass __attribute__((swift_name("swissPass")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Membership.Type_Serializer")))
@interface SharedMembershipTypeSerializer : SharedCommonEnumSerializer<SharedMembershipType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Money")))
@interface SharedMoney : SharedBase
- (instancetype)initWithAmount:(double)amount currency:(NSString *)currency text:(NSString * _Nullable)text __attribute__((swift_name("init(amount:currency:text:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedMoney *)doCopyAmount:(double)amount currency:(NSString *)currency text:(NSString * _Nullable)text __attribute__((swift_name("doCopy(amount:currency:text:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double amount __attribute__((swift_name("amount")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@property (readonly) NSString * _Nullable text __attribute__((swift_name("text")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Money.Companion")))
@interface SharedMoneyCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MspRequirements")))
@interface SharedMspRequirements : SharedBase
- (instancetype)initWithResourceSpecifier:(SharedResourceSpecifier * _Nullable)resourceSpecifier requirementStatuses:(NSDictionary<NSString *, SharedRequirementStatus *> * _Nullable)requirementStatuses __attribute__((swift_name("init(resourceSpecifier:requirementStatuses:)"))) __attribute__((objc_designated_initializer));
- (SharedResourceSpecifier * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSDictionary<NSString *, SharedRequirementStatus *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedMspRequirements *)doCopyResourceSpecifier:(SharedResourceSpecifier * _Nullable)resourceSpecifier requirementStatuses:(NSDictionary<NSString *, SharedRequirementStatus *> * _Nullable)requirementStatuses __attribute__((swift_name("doCopy(resourceSpecifier:requirementStatuses:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, SharedRequirementStatus *> * _Nullable requirementStatuses __attribute__((swift_name("requirementStatuses")));
@property (readonly) SharedResourceSpecifier * _Nullable resourceSpecifier __attribute__((swift_name("resourceSpecifier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MspRequirements.Companion")))
@interface SharedMspRequirementsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationSettings")))
@interface SharedNotificationSettings : SharedBase
- (instancetype)initWithHandlerSettings:(NSString * _Nullable)handlerSettings __attribute__((swift_name("init(handlerSettings:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedNotificationSettings *)doCopyHandlerSettings:(NSString * _Nullable)handlerSettings __attribute__((swift_name("doCopy(handlerSettings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable handlerSettings __attribute__((swift_name("handlerSettings")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NotificationSettings.Companion")))
@interface SharedNotificationSettingsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationRestrictions")))
@interface SharedOperationRestrictions : SharedBase
- (instancetype)initWithOperationTime:(SharedOperationTime * _Nullable)operationTime operationArea:(NSString * _Nullable)operationArea __attribute__((swift_name("init(operationTime:operationArea:)"))) __attribute__((objc_designated_initializer));
- (SharedOperationTime * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedOperationRestrictions *)doCopyOperationTime:(SharedOperationTime * _Nullable)operationTime operationArea:(NSString * _Nullable)operationArea __attribute__((swift_name("doCopy(operationTime:operationArea:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable operationArea __attribute__((swift_name("operationArea")));
@property (readonly) SharedOperationTime * _Nullable operationTime __attribute__((swift_name("operationTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationRestrictions.Companion")))
@interface SharedOperationRestrictionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationTime")))
@interface SharedOperationTime : SharedBase
- (instancetype)initWithStartMinutesLocal:(int32_t)startMinutesLocal endMinutesLocal:(int32_t)endMinutesLocal __attribute__((swift_name("init(startMinutesLocal:endMinutesLocal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (SharedOperationTime *)doCopyStartMinutesLocal:(int32_t)startMinutesLocal endMinutesLocal:(int32_t)endMinutesLocal __attribute__((swift_name("doCopy(startMinutesLocal:endMinutesLocal:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t endMinutesLocal __attribute__((swift_name("endMinutesLocal")));
@property (readonly) int32_t startMinutesLocal __attribute__((swift_name("startMinutesLocal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OperationTime.Companion")))
@interface SharedOperationTimeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingOption")))
@interface SharedParkingOption : SharedBase
- (instancetype)initWithPriceId:(NSString *)priceId durationMinutes:(int32_t)durationMinutes fromTime:(NSString *)fromTime toTime:(NSString *)toTime price:(SharedParkingPrice *)price __attribute__((swift_name("init(priceId:durationMinutes:fromTime:toTime:price:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (SharedParkingPrice *)component5 __attribute__((swift_name("component5()")));
- (SharedParkingOption *)doCopyPriceId:(NSString *)priceId durationMinutes:(int32_t)durationMinutes fromTime:(NSString *)fromTime toTime:(NSString *)toTime price:(SharedParkingPrice *)price __attribute__((swift_name("doCopy(priceId:durationMinutes:fromTime:toTime:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t durationMinutes __attribute__((swift_name("durationMinutes")));
@property (readonly) NSString *fromTime __attribute__((swift_name("fromTime")));
@property (readonly) SharedParkingPrice *price __attribute__((swift_name("price")));
@property (readonly) NSString *priceId __attribute__((swift_name("priceId")));
@property (readonly) NSString *toTime __attribute__((swift_name("toTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingOption.Companion")))
@interface SharedParkingOptionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingPrice")))
@interface SharedParkingPrice : SharedBase
- (instancetype)initWithAmount:(double)amount currency:(NSString *)currency __attribute__((swift_name("init(amount:currency:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedParkingPrice *)doCopyAmount:(double)amount currency:(NSString *)currency __attribute__((swift_name("doCopy(amount:currency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double amount __attribute__((swift_name("amount")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingPrice.Companion")))
@interface SharedParkingPriceCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingPricing")))
@interface SharedParkingPricing : SharedBase
- (instancetype)initWithCurrency:(NSString *)currency hourlyRate:(SharedDouble * _Nullable)hourlyRate dailyRate:(SharedDouble * _Nullable)dailyRate monthlyRate:(SharedDouble * _Nullable)monthlyRate timeIntervalPrices:(NSArray<SharedParkingTimeIntervalPricing *> * _Nullable)timeIntervalPrices __attribute__((swift_name("init(currency:hourlyRate:dailyRate:monthlyRate:timeIntervalPrices:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSArray<SharedParkingTimeIntervalPricing *> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedParkingPricing *)doCopyCurrency:(NSString *)currency hourlyRate:(SharedDouble * _Nullable)hourlyRate dailyRate:(SharedDouble * _Nullable)dailyRate monthlyRate:(SharedDouble * _Nullable)monthlyRate timeIntervalPrices:(NSArray<SharedParkingTimeIntervalPricing *> * _Nullable)timeIntervalPrices __attribute__((swift_name("doCopy(currency:hourlyRate:dailyRate:monthlyRate:timeIntervalPrices:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@property (readonly) SharedDouble * _Nullable dailyRate __attribute__((swift_name("dailyRate")));
@property (readonly) SharedDouble * _Nullable hourlyRate __attribute__((swift_name("hourlyRate")));
@property (readonly) SharedDouble * _Nullable monthlyRate __attribute__((swift_name("monthlyRate")));
@property (readonly) NSArray<SharedParkingTimeIntervalPricing *> * _Nullable timeIntervalPrices __attribute__((swift_name("timeIntervalPrices")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingPricing.Companion")))
@interface SharedParkingPricingCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingRecord")))
@interface SharedParkingRecord : SharedBase
- (instancetype)initWithBookingId:(NSString *)bookingId providerId:(NSString *)providerId fromTime:(NSString *)fromTime toTime:(NSString *)toTime plateNumber:(NSString *)plateNumber zoneCode:(NSString * _Nullable)zoneCode zone:(SharedHistoryZone * _Nullable)zone payment:(SharedPayment * _Nullable)payment __attribute__((swift_name("init(bookingId:providerId:fromTime:toTime:plateNumber:zoneCode:zone:payment:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedHistoryZone * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedPayment * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedParkingRecord *)doCopyBookingId:(NSString *)bookingId providerId:(NSString *)providerId fromTime:(NSString *)fromTime toTime:(NSString *)toTime plateNumber:(NSString *)plateNumber zoneCode:(NSString * _Nullable)zoneCode zone:(SharedHistoryZone * _Nullable)zone payment:(SharedPayment * _Nullable)payment __attribute__((swift_name("doCopy(bookingId:providerId:fromTime:toTime:plateNumber:zoneCode:zone:payment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bookingId __attribute__((swift_name("bookingId")));
@property (readonly) NSString *fromTime __attribute__((swift_name("fromTime")));
@property (readonly) SharedPayment * _Nullable payment __attribute__((swift_name("payment")));
@property (readonly) NSString *plateNumber __attribute__((swift_name("plateNumber")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) NSString *toTime __attribute__((swift_name("toTime")));
@property (readonly) SharedHistoryZone * _Nullable zone __attribute__((swift_name("zone")));
@property (readonly) NSString * _Nullable zoneCode __attribute__((swift_name("zoneCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingRecord.Companion")))
@interface SharedParkingRecordCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingSession")))
@interface SharedParkingSession : SharedBase
- (instancetype)initWithSessionId:(NSString *)sessionId status:(SharedParkingSessionStatus *)status created:(NSString *)created plateNumber:(NSString *)plateNumber parkingZoneCode:(NSString *)parkingZoneCode fromTime:(NSString *)fromTime toTime:(NSString *)toTime price:(SharedParkingPrice *)price statusInfo:(SharedSessionStatusInfo * _Nullable)statusInfo __attribute__((swift_name("init(sessionId:status:created:plateNumber:parkingZoneCode:fromTime:toTime:price:statusInfo:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedParkingSessionStatus *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (SharedParkingPrice *)component8 __attribute__((swift_name("component8()")));
- (SharedSessionStatusInfo * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedParkingSession *)doCopySessionId:(NSString *)sessionId status:(SharedParkingSessionStatus *)status created:(NSString *)created plateNumber:(NSString *)plateNumber parkingZoneCode:(NSString *)parkingZoneCode fromTime:(NSString *)fromTime toTime:(NSString *)toTime price:(SharedParkingPrice *)price statusInfo:(SharedSessionStatusInfo * _Nullable)statusInfo __attribute__((swift_name("doCopy(sessionId:status:created:plateNumber:parkingZoneCode:fromTime:toTime:price:statusInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *created __attribute__((swift_name("created")));
@property (readonly) NSString *fromTime __attribute__((swift_name("fromTime")));
@property (readonly) NSString *parkingZoneCode __attribute__((swift_name("parkingZoneCode")));
@property (readonly) NSString *plateNumber __attribute__((swift_name("plateNumber")));
@property (readonly) SharedParkingPrice *price __attribute__((swift_name("price")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) SharedParkingSessionStatus *status __attribute__((swift_name("status")));
@property (readonly) SharedSessionStatusInfo * _Nullable statusInfo __attribute__((swift_name("statusInfo")));
@property (readonly) NSString *toTime __attribute__((swift_name("toTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingSession.Companion")))
@interface SharedParkingSessionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingSession.Status")))
@interface SharedParkingSessionStatus : SharedKotlinEnum<SharedParkingSessionStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedParkingSessionStatus *failed __attribute__((swift_name("failed")));
@property (class, readonly) SharedParkingSessionStatus *confirmed __attribute__((swift_name("confirmed")));
@property (class, readonly) SharedParkingSessionStatus *pending __attribute__((swift_name("pending")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingSession.StatusSerializer")))
@interface SharedParkingSessionStatusSerializer : SharedCommonEnumSerializer<SharedParkingSessionStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingSessionsResponse")))
@interface SharedParkingSessionsResponse : SharedBase
- (instancetype)initWithUserId:(NSString *)userId providerId:(NSString *)providerId sessions:(NSArray<SharedParkingSession *> *)sessions __attribute__((swift_name("init(userId:providerId:sessions:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedParkingSession *> *)component3 __attribute__((swift_name("component3()")));
- (SharedParkingSessionsResponse *)doCopyUserId:(NSString *)userId providerId:(NSString *)providerId sessions:(NSArray<SharedParkingSession *> *)sessions __attribute__((swift_name("doCopy(userId:providerId:sessions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) NSArray<SharedParkingSession *> *sessions __attribute__((swift_name("sessions")));
@property (readonly) NSString *userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingSessionsResponse.Companion")))
@interface SharedParkingSessionsResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingSpot")))
@interface SharedParkingSpot : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id providerId:(NSString * _Nullable)providerId vehicleType:(SharedParkingSpotVehicleType * _Nullable)vehicleType location:(SharedLocation * _Nullable)location __attribute__((swift_name("init(id:providerId:vehicleType:location:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedParkingSpotVehicleType * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedLocation * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedParkingSpot *)doCopyId:(NSString * _Nullable)id providerId:(NSString * _Nullable)providerId vehicleType:(SharedParkingSpotVehicleType * _Nullable)vehicleType location:(SharedLocation * _Nullable)location __attribute__((swift_name("doCopy(id:providerId:vehicleType:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) SharedLocation * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSString * _Nullable providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedParkingSpotVehicleType * _Nullable vehicleType __attribute__((swift_name("vehicleType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingSpot.Companion")))
@interface SharedParkingSpotCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingSpot.VehicleType")))
@interface SharedParkingSpotVehicleType : SharedKotlinEnum<SharedParkingSpotVehicleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedParkingSpotVehicleType *car __attribute__((swift_name("car")));
@property (class, readonly) SharedParkingSpotVehicleType *bicycle __attribute__((swift_name("bicycle")));
@property (class, readonly) SharedParkingSpotVehicleType *scooter __attribute__((swift_name("scooter")));
@property (class, readonly) SharedParkingSpotVehicleType *kickScooter __attribute__((swift_name("kickScooter")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingSpot.VehicleTypeSerializer")))
@interface SharedParkingSpotVehicleTypeSerializer : SharedCommonEnumSerializer<SharedParkingSpotVehicleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingTimeIntervalPricing")))
@interface SharedParkingTimeIntervalPricing : SharedBase
- (instancetype)initWithSequence:(SharedInt * _Nullable)sequence intervalMinutes:(SharedInt * _Nullable)intervalMinutes price:(SharedDouble * _Nullable)price __attribute__((swift_name("init(sequence:intervalMinutes:price:)"))) __attribute__((objc_designated_initializer));
- (SharedInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedParkingTimeIntervalPricing *)doCopySequence:(SharedInt * _Nullable)sequence intervalMinutes:(SharedInt * _Nullable)intervalMinutes price:(SharedDouble * _Nullable)price __attribute__((swift_name("doCopy(sequence:intervalMinutes:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedInt * _Nullable intervalMinutes __attribute__((swift_name("intervalMinutes")));
@property (readonly) SharedDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) SharedInt * _Nullable sequence __attribute__((swift_name("sequence")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingTimeIntervalPricing.Companion")))
@interface SharedParkingTimeIntervalPricingCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingZone")))
@interface SharedParkingZone : SharedBase
- (instancetype)initWithId:(NSString *)id code:(NSString *)code category:(NSString *)category encodedPolygons:(NSArray<NSString *> *)encodedPolygons tariff:(NSArray<SharedTariff *> *)tariff supportsPayment:(BOOL)supportsPayment ext:(NSDictionary<NSString *, NSString *> *)ext name:(NSString * _Nullable)name position:(SharedLatLng * _Nullable)position capacity:(SharedCapacity * _Nullable)capacity address:(NSString * _Nullable)address features:(NSArray<NSString *> * _Nullable)features __attribute__((swift_name("init(id:code:category:encodedPolygons:tariff:supportsPayment:ext:name:position:capacity:address:features:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedCapacity * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSArray<NSString *> * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> *)component4 __attribute__((swift_name("component4()")));
- (NSArray<SharedTariff *> *)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (NSDictionary<NSString *, NSString *> *)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedLatLng * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedParkingZone *)doCopyId:(NSString *)id code:(NSString *)code category:(NSString *)category encodedPolygons:(NSArray<NSString *> *)encodedPolygons tariff:(NSArray<SharedTariff *> *)tariff supportsPayment:(BOOL)supportsPayment ext:(NSDictionary<NSString *, NSString *> *)ext name:(NSString * _Nullable)name position:(SharedLatLng * _Nullable)position capacity:(SharedCapacity * _Nullable)capacity address:(NSString * _Nullable)address features:(NSArray<NSString *> * _Nullable)features __attribute__((swift_name("doCopy(id:code:category:encodedPolygons:tariff:supportsPayment:ext:name:position:capacity:address:features:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));
@property (readonly) SharedCapacity * _Nullable capacity __attribute__((swift_name("capacity")));
@property (readonly) NSString *category __attribute__((swift_name("category")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) NSArray<NSString *> *encodedPolygons __attribute__((swift_name("encodedPolygons")));
@property (readonly) NSDictionary<NSString *, NSString *> *ext __attribute__((swift_name("ext")));
@property (readonly) NSArray<NSString *> * _Nullable features __attribute__((swift_name("features")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) SharedLatLng * _Nullable position __attribute__((swift_name("position")));
@property (readonly) BOOL supportsPayment __attribute__((swift_name("supportsPayment")));
@property (readonly) NSArray<SharedTariff *> *tariff __attribute__((swift_name("tariff")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingZone.Companion")))
@interface SharedParkingZoneCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingZonesResponse")))
@interface SharedParkingZonesResponse : SharedBase
- (instancetype)initWithZones:(NSArray<SharedParkingZone *> *)zones __attribute__((swift_name("init(zones:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedParkingZone *> *)component1 __attribute__((swift_name("component1()")));
- (SharedParkingZonesResponse *)doCopyZones:(NSArray<SharedParkingZone *> *)zones __attribute__((swift_name("doCopy(zones:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedParkingZone *> *zones __attribute__((swift_name("zones")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ParkingZonesResponse.Companion")))
@interface SharedParkingZonesResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Path")))
@interface SharedPath : SharedBase
- (instancetype)initWithShape:(NSString *)shape duration:(SharedDuration *)duration distance:(SharedDistance *)distance __attribute__((swift_name("init(shape:duration:distance:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedDuration *)component2 __attribute__((swift_name("component2()")));
- (SharedDistance *)component3 __attribute__((swift_name("component3()")));
- (SharedPath *)doCopyShape:(NSString *)shape duration:(SharedDuration *)duration distance:(SharedDistance *)distance __attribute__((swift_name("doCopy(shape:duration:distance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDistance *distance __attribute__((swift_name("distance")));
@property (readonly) SharedDuration *duration __attribute__((swift_name("duration")));
@property (readonly) NSString *shape __attribute__((swift_name("shape")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Path.Companion")))
@interface SharedPathCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayForParkingRequest")))
@interface SharedPayForParkingRequest : SharedBase
- (instancetype)initWithFareToken:(NSString *)fareToken priceId:(NSString * _Nullable)priceId __attribute__((swift_name("init(fareToken:priceId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedPayForParkingRequest *)doCopyFareToken:(NSString *)fareToken priceId:(NSString * _Nullable)priceId __attribute__((swift_name("doCopy(fareToken:priceId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *fareToken __attribute__((swift_name("fareToken")));
@property (readonly) NSString * _Nullable priceId __attribute__((swift_name("priceId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayForParkingRequest.Companion")))
@interface SharedPayForParkingRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayPalInfo")))
@interface SharedPayPalInfo : SharedBase
- (instancetype)initWithEmail:(NSString *)email __attribute__((swift_name("init(email:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedPayPalInfo *)doCopyEmail:(NSString *)email __attribute__((swift_name("doCopy(email:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PayPalInfo.Companion")))
@interface SharedPayPalInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payment")))
@interface SharedPayment : SharedBase
- (instancetype)initWithPrice:(SharedHistoryMoney *)price priceBreakdown:(SharedHistoryPriceBreakdown * _Nullable)priceBreakdown purchaseBreakdown:(SharedHistoryPurchaseBreakdown * _Nullable)purchaseBreakdown method:(SharedHistoryPaymentMethod * _Nullable)method invoiceUrls:(NSArray<NSString *> * _Nullable)invoiceUrls isInvoiceAvailable:(SharedBoolean * _Nullable)isInvoiceAvailable __attribute__((swift_name("init(price:priceBreakdown:purchaseBreakdown:method:invoiceUrls:isInvoiceAvailable:)"))) __attribute__((objc_designated_initializer));
- (SharedHistoryMoney *)component1 __attribute__((swift_name("component1()")));
- (SharedHistoryPriceBreakdown * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedHistoryPurchaseBreakdown * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedHistoryPaymentMethod * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSArray<NSString *> * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedPayment *)doCopyPrice:(SharedHistoryMoney *)price priceBreakdown:(SharedHistoryPriceBreakdown * _Nullable)priceBreakdown purchaseBreakdown:(SharedHistoryPurchaseBreakdown * _Nullable)purchaseBreakdown method:(SharedHistoryPaymentMethod * _Nullable)method invoiceUrls:(NSArray<NSString *> * _Nullable)invoiceUrls isInvoiceAvailable:(SharedBoolean * _Nullable)isInvoiceAvailable __attribute__((swift_name("doCopy(price:priceBreakdown:purchaseBreakdown:method:invoiceUrls:isInvoiceAvailable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> * _Nullable invoiceUrls __attribute__((swift_name("invoiceUrls")));
@property (readonly) SharedBoolean * _Nullable isInvoiceAvailable __attribute__((swift_name("isInvoiceAvailable")));
@property (readonly) SharedHistoryPaymentMethod * _Nullable method __attribute__((swift_name("method")));
@property (readonly) SharedHistoryMoney *price __attribute__((swift_name("price")));
@property (readonly) SharedHistoryPriceBreakdown * _Nullable priceBreakdown __attribute__((swift_name("priceBreakdown")));
@property (readonly) SharedHistoryPurchaseBreakdown * _Nullable purchaseBreakdown __attribute__((swift_name("purchaseBreakdown")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Payment.Companion")))
@interface SharedPaymentCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentBreakdownItem")))
@interface SharedPaymentBreakdownItem : SharedBase
- (instancetype)initWithOrderId:(NSString * _Nullable)orderId amount:(SharedDouble * _Nullable)amount vatRatePercent:(SharedDouble * _Nullable)vatRatePercent vatAmount:(SharedDouble * _Nullable)vatAmount sharing:(SharedSharingBreakdownItem * _Nullable)sharing __attribute__((swift_name("init(orderId:amount:vatRatePercent:vatAmount:sharing:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedSharingBreakdownItem * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedPaymentBreakdownItem *)doCopyOrderId:(NSString * _Nullable)orderId amount:(SharedDouble * _Nullable)amount vatRatePercent:(SharedDouble * _Nullable)vatRatePercent vatAmount:(SharedDouble * _Nullable)vatAmount sharing:(SharedSharingBreakdownItem * _Nullable)sharing __attribute__((swift_name("doCopy(orderId:amount:vatRatePercent:vatAmount:sharing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable orderId __attribute__((swift_name("orderId")));
@property (readonly) SharedSharingBreakdownItem * _Nullable sharing __attribute__((swift_name("sharing")));
@property (readonly) SharedDouble * _Nullable vatAmount __attribute__((swift_name("vatAmount")));
@property (readonly) SharedDouble * _Nullable vatRatePercent __attribute__((swift_name("vatRatePercent")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentBreakdownItem.Companion")))
@interface SharedPaymentBreakdownItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentConfirmation")))
@interface SharedPaymentConfirmation : SharedBase
- (instancetype)initWithPaymentId:(NSString * _Nullable)paymentId amount:(SharedDouble * _Nullable)amount currency:(NSString * _Nullable)currency __attribute__((swift_name("init(paymentId:amount:currency:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedPaymentConfirmation *)doCopyPaymentId:(NSString * _Nullable)paymentId amount:(SharedDouble * _Nullable)amount currency:(NSString * _Nullable)currency __attribute__((swift_name("doCopy(paymentId:amount:currency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable amount __attribute__((swift_name("amount")));
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));
@property (readonly) NSString * _Nullable paymentId __attribute__((swift_name("paymentId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentConfirmation.Companion")))
@interface SharedPaymentConfirmationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethod")))
@interface SharedPaymentMethod : SharedBase
- (instancetype)initWithId:(NSString *)id type:(SharedPaymentMethodType *)type creditCard:(SharedCreditCardInfo * _Nullable)creditCard directDebit:(SharedDirectDebitInfo * _Nullable)directDebit payPal:(SharedPayPalInfo * _Nullable)payPal __attribute__((swift_name("init(id:type:creditCard:directDebit:payPal:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedPaymentMethodType *)component2 __attribute__((swift_name("component2()")));
- (SharedCreditCardInfo * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedDirectDebitInfo * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedPayPalInfo * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedPaymentMethod *)doCopyId:(NSString *)id type:(SharedPaymentMethodType *)type creditCard:(SharedCreditCardInfo * _Nullable)creditCard directDebit:(SharedDirectDebitInfo * _Nullable)directDebit payPal:(SharedPayPalInfo * _Nullable)payPal __attribute__((swift_name("doCopy(id:type:creditCard:directDebit:payPal:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedCreditCardInfo * _Nullable creditCard __attribute__((swift_name("creditCard")));
@property (readonly) SharedDirectDebitInfo * _Nullable directDebit __attribute__((swift_name("directDebit")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedPayPalInfo * _Nullable payPal __attribute__((swift_name("payPal")));
@property (readonly) SharedPaymentMethodType *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethod.Companion")))
@interface SharedPaymentMethodCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethod.Type_")))
@interface SharedPaymentMethodType : SharedKotlinEnum<SharedPaymentMethodType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedPaymentMethodType *none __attribute__((swift_name("none")));
@property (class, readonly) SharedPaymentMethodType *creditCard __attribute__((swift_name("creditCard")));
@property (class, readonly) SharedPaymentMethodType *directDebit __attribute__((swift_name("directDebit")));
@property (class, readonly) SharedPaymentMethodType *payPal __attribute__((swift_name("payPal")));
@property (class, readonly) SharedPaymentMethodType *prepay __attribute__((swift_name("prepay")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethod.Type_Serializer")))
@interface SharedPaymentMethodTypeSerializer : SharedCommonEnumSerializer<SharedPaymentMethodType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethods")))
@interface SharedPaymentMethods : SharedBase
- (instancetype)initWithDefaultMethodId:(NSString *)defaultMethodId methods:(NSArray<SharedPaymentMethod *> *)methods __attribute__((swift_name("init(defaultMethodId:methods:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedPaymentMethod *> *)component2 __attribute__((swift_name("component2()")));
- (SharedPaymentMethods *)doCopyDefaultMethodId:(NSString *)defaultMethodId methods:(NSArray<SharedPaymentMethod *> *)methods __attribute__((swift_name("doCopy(defaultMethodId:methods:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *defaultMethodId __attribute__((swift_name("defaultMethodId")));
@property (readonly) NSArray<SharedPaymentMethod *> *methods __attribute__((swift_name("methods")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentMethods.Companion")))
@interface SharedPaymentMethodsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumber")))
@interface SharedPhoneNumber : SharedBase
- (instancetype)initWithVerificationStatus:(SharedPhoneNumberVerificationStatus *)verificationStatus number:(NSString * _Nullable)number verificationMessageKey:(NSString * _Nullable)verificationMessageKey verificationFallbackMessage:(NSString * _Nullable)verificationFallbackMessage __attribute__((swift_name("init(verificationStatus:number:verificationMessageKey:verificationFallbackMessage:)"))) __attribute__((objc_designated_initializer));
- (SharedPhoneNumberVerificationStatus *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedPhoneNumber *)doCopyVerificationStatus:(SharedPhoneNumberVerificationStatus *)verificationStatus number:(NSString * _Nullable)number verificationMessageKey:(NSString * _Nullable)verificationMessageKey verificationFallbackMessage:(NSString * _Nullable)verificationFallbackMessage __attribute__((swift_name("doCopy(verificationStatus:number:verificationMessageKey:verificationFallbackMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable number __attribute__((swift_name("number")));
@property (readonly) NSString * _Nullable verificationFallbackMessage __attribute__((swift_name("verificationFallbackMessage")));
@property (readonly) NSString * _Nullable verificationMessageKey __attribute__((swift_name("verificationMessageKey")));
@property (readonly) SharedPhoneNumberVerificationStatus *verificationStatus __attribute__((swift_name("verificationStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumber.Companion")))
@interface SharedPhoneNumberCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumber.VerificationStatus")))
@interface SharedPhoneNumberVerificationStatus : SharedKotlinEnum<SharedPhoneNumberVerificationStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedPhoneNumberVerificationStatus *notVerified __attribute__((swift_name("notVerified")));
@property (class, readonly) SharedPhoneNumberVerificationStatus *verified __attribute__((swift_name("verified")));
@property (class, readonly) SharedPhoneNumberVerificationStatus *pending __attribute__((swift_name("pending")));
@property (class, readonly) SharedPhoneNumberVerificationStatus *failed __attribute__((swift_name("failed")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhoneNumber.VerificationStatusSerializer")))
@interface SharedPhoneNumberVerificationStatusSerializer : SharedCommonEnumSerializer<SharedPhoneNumberVerificationStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformTerms")))
@interface SharedPlatformTerms : SharedBase
- (instancetype)initWithKey:(NSString *)key titleTranslationKey:(NSString *)titleTranslationKey version:(NSString *)version localizedTerms:(NSArray<SharedLocalizedTerms *> *)localizedTerms isRequired:(BOOL)isRequired agreedByDefault:(BOOL)agreedByDefault type:(SharedPlatformTermsType *)type __attribute__((swift_name("init(key:titleTranslationKey:version:localizedTerms:isRequired:agreedByDefault:type:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedLocalizedTerms *> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (SharedPlatformTermsType *)component7 __attribute__((swift_name("component7()")));
- (SharedPlatformTerms *)doCopyKey:(NSString *)key titleTranslationKey:(NSString *)titleTranslationKey version:(NSString *)version localizedTerms:(NSArray<SharedLocalizedTerms *> *)localizedTerms isRequired:(BOOL)isRequired agreedByDefault:(BOOL)agreedByDefault type:(SharedPlatformTermsType *)type __attribute__((swift_name("doCopy(key:titleTranslationKey:version:localizedTerms:isRequired:agreedByDefault:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL agreedByDefault __attribute__((swift_name("agreedByDefault")));
@property (readonly) BOOL isRequired __attribute__((swift_name("isRequired")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSArray<SharedLocalizedTerms *> *localizedTerms __attribute__((swift_name("localizedTerms")));
@property (readonly) NSString *titleTranslationKey __attribute__((swift_name("titleTranslationKey")));
@property (readonly) SharedPlatformTermsType *type __attribute__((swift_name("type")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformTerms.Companion")))
@interface SharedPlatformTermsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformTerms.Type_")))
@interface SharedPlatformTermsType : SharedKotlinEnum<SharedPlatformTermsType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedPlatformTermsType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedPlatformTermsType *analyticsOptOut __attribute__((swift_name("analyticsOptOut")));
@property (class, readonly) SharedPlatformTermsType *promotion __attribute__((swift_name("promotion")));
@property (class, readonly) SharedPlatformTermsType *analysis __attribute__((swift_name("analysis")));
@property (class, readonly) SharedPlatformTermsType *advertising __attribute__((swift_name("advertising")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformTerms.Type_Serializer")))
@interface SharedPlatformTermsTypeSerializer : SharedCommonEnumSerializer<SharedPlatformTermsType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Price")))
@interface SharedPrice : SharedBase
- (instancetype)initWithExact:(SharedDouble * _Nullable)exact interval:(SharedPriceInterval * _Nullable)interval __attribute__((swift_name("init(exact:interval:)"))) __attribute__((objc_designated_initializer));
- (SharedDouble * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedPriceInterval * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedPrice *)doCopyExact:(SharedDouble * _Nullable)exact interval:(SharedPriceInterval * _Nullable)interval __attribute__((swift_name("doCopy(exact:interval:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable exact __attribute__((swift_name("exact")));
@property (readonly) SharedPriceInterval * _Nullable interval __attribute__((swift_name("interval")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Price.Companion")))
@interface SharedPriceCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PriceBreakdown")))
@interface SharedPriceBreakdown : SharedBase
- (instancetype)initWithTotal:(SharedDouble * _Nullable)total items:(NSArray<SharedBreakdownItem *> * _Nullable)items __attribute__((swift_name("init(total:items:)"))) __attribute__((objc_designated_initializer));
- (SharedDouble * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedBreakdownItem *> * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedPriceBreakdown *)doCopyTotal:(SharedDouble * _Nullable)total items:(NSArray<SharedBreakdownItem *> * _Nullable)items __attribute__((swift_name("doCopy(total:items:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedBreakdownItem *> * _Nullable items __attribute__((swift_name("items")));
@property (readonly) SharedDouble * _Nullable total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PriceBreakdown.Companion")))
@interface SharedPriceBreakdownCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PriceInterval")))
@interface SharedPriceInterval : SharedBase
- (instancetype)initWithLow:(SharedDouble * _Nullable)low high:(SharedDouble * _Nullable)high __attribute__((swift_name("init(low:high:)"))) __attribute__((objc_designated_initializer));
- (SharedDouble * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedPriceInterval *)doCopyLow:(SharedDouble * _Nullable)low high:(SharedDouble * _Nullable)high __attribute__((swift_name("doCopy(low:high:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable high __attribute__((swift_name("high")));
@property (readonly) SharedDouble * _Nullable low __attribute__((swift_name("low")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PriceInterval.Companion")))
@interface SharedPriceIntervalCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Profile")))
@interface SharedProfile : SharedBase
- (instancetype)initWithGender:(SharedProfileGender *)gender ext:(NSDictionary<NSString *, NSString *> *)ext firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName displayName:(NSString * _Nullable)displayName email:(NSString * _Nullable)email address:(SharedAddress * _Nullable)address birthDate:(NSString * _Nullable)birthDate __attribute__((swift_name("init(gender:ext:firstName:lastName:displayName:email:address:birthDate:)"))) __attribute__((objc_designated_initializer));
- (SharedProfileGender *)component1 __attribute__((swift_name("component1()")));
- (NSDictionary<NSString *, NSString *> *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedAddress * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedProfile *)doCopyGender:(SharedProfileGender *)gender ext:(NSDictionary<NSString *, NSString *> *)ext firstName:(NSString * _Nullable)firstName lastName:(NSString * _Nullable)lastName displayName:(NSString * _Nullable)displayName email:(NSString * _Nullable)email address:(SharedAddress * _Nullable)address birthDate:(NSString * _Nullable)birthDate __attribute__((swift_name("doCopy(gender:ext:firstName:lastName:displayName:email:address:birthDate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedAddress * _Nullable address __attribute__((swift_name("address")));
@property (readonly) NSString * _Nullable birthDate __attribute__((swift_name("birthDate")));
@property (readonly) NSString * _Nullable displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString * _Nullable email __attribute__((swift_name("email")));
@property (readonly) NSDictionary<NSString *, NSString *> *ext __attribute__((swift_name("ext")));
@property (readonly) NSString * _Nullable firstName __attribute__((swift_name("firstName")));
@property (readonly) SharedProfileGender *gender __attribute__((swift_name("gender")));
@property (readonly) NSString * _Nullable lastName __attribute__((swift_name("lastName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Profile.Companion")))
@interface SharedProfileCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Profile.Gender")))
@interface SharedProfileGender : SharedKotlinEnum<SharedProfileGender *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedProfileGender *notSpecified __attribute__((swift_name("notSpecified")));
@property (class, readonly) SharedProfileGender *female __attribute__((swift_name("female")));
@property (class, readonly) SharedProfileGender *male __attribute__((swift_name("male")));
@property (class, readonly) SharedProfileGender *other __attribute__((swift_name("other")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Profile.GenderSerializer")))
@interface SharedProfileGenderSerializer : SharedCommonEnumSerializer<SharedProfileGender *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PropertyValue")))
@interface SharedPropertyValue : SharedBase
- (instancetype)initWithPropertyId:(NSString *)propertyId value:(NSString *)value __attribute__((swift_name("init(propertyId:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedPropertyValue *)doCopyPropertyId:(NSString *)propertyId value:(NSString *)value __attribute__((swift_name("doCopy(propertyId:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *propertyId __attribute__((swift_name("propertyId")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PropertyValue.Companion")))
@interface SharedPropertyValueCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Provider")))
@interface SharedProvider : SharedBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name features:(SharedProviderFeatures *)features sharingOptions:(NSArray<SharedSharingProviderOptions *> *)sharingOptions rideHailingOptions:(NSArray<SharedRideHailingProviderOptions *> *)rideHailingOptions color:(NSString * _Nullable)color icon:(NSString * _Nullable)icon isLevel3:(SharedBoolean * _Nullable)isLevel3 supportPhoneNumber:(NSString * _Nullable)supportPhoneNumber faq:(SharedFaq * _Nullable)faq sharingPricing:(SharedSharingPricingInfo * _Nullable)sharingPricing rideHailingPricing:(SharedRideHailingPricingInfo * _Nullable)rideHailingPricing __attribute__((swift_name("init(id:name:features:sharingOptions:rideHailingOptions:color:icon:isLevel3:supportPhoneNumber:faq:sharingPricing:rideHailingPricing:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedFaq * _Nullable)component10 __attribute__((swift_name("component10()")));
- (SharedSharingPricingInfo * _Nullable)component11 __attribute__((swift_name("component11()")));
- (SharedRideHailingPricingInfo * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedProviderFeatures *)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedSharingProviderOptions *> *)component4 __attribute__((swift_name("component4()")));
- (NSArray<SharedRideHailingProviderOptions *> *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedProvider *)doCopyId:(NSString *)id name:(NSString *)name features:(SharedProviderFeatures *)features sharingOptions:(NSArray<SharedSharingProviderOptions *> *)sharingOptions rideHailingOptions:(NSArray<SharedRideHailingProviderOptions *> *)rideHailingOptions color:(NSString * _Nullable)color icon:(NSString * _Nullable)icon isLevel3:(SharedBoolean * _Nullable)isLevel3 supportPhoneNumber:(NSString * _Nullable)supportPhoneNumber faq:(SharedFaq * _Nullable)faq sharingPricing:(SharedSharingPricingInfo * _Nullable)sharingPricing rideHailingPricing:(SharedRideHailingPricingInfo * _Nullable)rideHailingPricing __attribute__((swift_name("doCopy(id:name:features:sharingOptions:rideHailingOptions:color:icon:isLevel3:supportPhoneNumber:faq:sharingPricing:rideHailingPricing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));
@property (readonly) SharedFaq * _Nullable faq __attribute__((swift_name("faq")));
@property (readonly) SharedProviderFeatures *features __attribute__((swift_name("features")));
@property (readonly) NSString * _Nullable icon __attribute__((swift_name("icon")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedBoolean * _Nullable isLevel3 __attribute__((swift_name("isLevel3")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<SharedRideHailingProviderOptions *> *rideHailingOptions __attribute__((swift_name("rideHailingOptions")));
@property (readonly) SharedRideHailingPricingInfo * _Nullable rideHailingPricing __attribute__((swift_name("rideHailingPricing")));
@property (readonly) NSArray<SharedSharingProviderOptions *> *sharingOptions __attribute__((swift_name("sharingOptions")));
@property (readonly) SharedSharingPricingInfo * _Nullable sharingPricing __attribute__((swift_name("sharingPricing")));
@property (readonly) NSString * _Nullable supportPhoneNumber __attribute__((swift_name("supportPhoneNumber")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Provider.Companion")))
@interface SharedProviderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderAccount")))
@interface SharedProviderAccount : SharedBase
- (instancetype)initWithProviderId:(NSString *)providerId isLevel3:(SharedBoolean * _Nullable)isLevel3 type:(SharedProviderAccountType * _Nullable)type profile:(SharedProfile * _Nullable)profile __attribute__((swift_name("init(providerId:isLevel3:type:profile:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedProviderAccountType * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedProfile * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedProviderAccount *)doCopyProviderId:(NSString *)providerId isLevel3:(SharedBoolean * _Nullable)isLevel3 type:(SharedProviderAccountType * _Nullable)type profile:(SharedProfile * _Nullable)profile __attribute__((swift_name("doCopy(providerId:isLevel3:type:profile:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable isLevel3 __attribute__((swift_name("isLevel3")));
@property (readonly) SharedProfile * _Nullable profile __attribute__((swift_name("profile")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedProviderAccountType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderAccount.Companion")))
@interface SharedProviderAccountCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderAccount.Type_")))
@interface SharedProviderAccountType : SharedKotlinEnum<SharedProviderAccountType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedProviderAccountType *connected __attribute__((swift_name("connected")));
@property (class, readonly) SharedProviderAccountType *registered __attribute__((swift_name("registered")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderAccount.Type_Serializer")))
@interface SharedProviderAccountTypeSerializer : SharedCommonEnumSerializer<SharedProviderAccountType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderFeatures")))
@interface SharedProviderFeatures : SharedBase
- (instancetype)initWithSupportsConnect:(SharedBoolean * _Nullable)supportsConnect supportsRegistration:(SharedBoolean * _Nullable)supportsRegistration requiresPayment:(SharedBoolean * _Nullable)requiresPayment __attribute__((swift_name("init(supportsConnect:supportsRegistration:requiresPayment:)"))) __attribute__((objc_designated_initializer));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedProviderFeatures *)doCopySupportsConnect:(SharedBoolean * _Nullable)supportsConnect supportsRegistration:(SharedBoolean * _Nullable)supportsRegistration requiresPayment:(SharedBoolean * _Nullable)requiresPayment __attribute__((swift_name("doCopy(supportsConnect:supportsRegistration:requiresPayment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBoolean * _Nullable requiresPayment __attribute__((swift_name("requiresPayment")));
@property (readonly) SharedBoolean * _Nullable supportsConnect __attribute__((swift_name("supportsConnect")));
@property (readonly) SharedBoolean * _Nullable supportsRegistration __attribute__((swift_name("supportsRegistration")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderFeatures.Companion")))
@interface SharedProviderFeaturesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderPaymentMethod")))
@interface SharedProviderPaymentMethod : SharedBase
- (instancetype)initWithId:(NSString *)id type:(NSString *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description expiresAt:(NSString * _Nullable)expiresAt __attribute__((swift_name("init(id:type:name:description:expiresAt:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedProviderPaymentMethod *)doCopyId:(NSString *)id type:(NSString *)type name:(NSString * _Nullable)name description:(NSString * _Nullable)description expiresAt:(NSString * _Nullable)expiresAt __attribute__((swift_name("doCopy(id:type:name:description:expiresAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=description_) NSString * _Nullable description __attribute__((swift_name("description")));
@property (readonly) NSString * _Nullable expiresAt __attribute__((swift_name("expiresAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderPaymentMethod.Companion")))
@interface SharedProviderPaymentMethodCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderPaymentMethods")))
@interface SharedProviderPaymentMethods : SharedBase
- (instancetype)initWithDefaultMethodId:(NSString *)defaultMethodId methods:(NSArray<SharedProviderPaymentMethod *> *)methods balance:(SharedUsersMoney * _Nullable)balance __attribute__((swift_name("init(defaultMethodId:methods:balance:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedProviderPaymentMethod *> *)component2 __attribute__((swift_name("component2()")));
- (SharedUsersMoney * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedProviderPaymentMethods *)doCopyDefaultMethodId:(NSString *)defaultMethodId methods:(NSArray<SharedProviderPaymentMethod *> *)methods balance:(SharedUsersMoney * _Nullable)balance __attribute__((swift_name("doCopy(defaultMethodId:methods:balance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedUsersMoney * _Nullable balance __attribute__((swift_name("balance")));
@property (readonly) NSString *defaultMethodId __attribute__((swift_name("defaultMethodId")));
@property (readonly) NSArray<SharedProviderPaymentMethod *> *methods __attribute__((swift_name("methods")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderPaymentMethods.Companion")))
@interface SharedProviderPaymentMethodsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderRequirementStatus")))
@interface SharedProviderRequirementStatus : SharedBase
- (instancetype)initWithProviderId:(NSString *)providerId requirementStatuses:(NSDictionary<NSString *, SharedRequirementStatus *> *)requirementStatuses __attribute__((swift_name("init(providerId:requirementStatuses:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSDictionary<NSString *, SharedRequirementStatus *> *)component2 __attribute__((swift_name("component2()")));
- (SharedProviderRequirementStatus *)doCopyProviderId:(NSString *)providerId requirementStatuses:(NSDictionary<NSString *, SharedRequirementStatus *> *)requirementStatuses __attribute__((swift_name("doCopy(providerId:requirementStatuses:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) NSDictionary<NSString *, SharedRequirementStatus *> *requirementStatuses __attribute__((swift_name("requirementStatuses")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderRequirementStatus.Companion")))
@interface SharedProviderRequirementStatusCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderWithVehicleType")))
@interface SharedProviderWithVehicleType : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id vehicleType:(SharedProviderWithVehicleTypeVehicleType * _Nullable)vehicleType __attribute__((swift_name("init(id:vehicleType:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedProviderWithVehicleTypeVehicleType * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedProviderWithVehicleType *)doCopyId:(NSString * _Nullable)id vehicleType:(SharedProviderWithVehicleTypeVehicleType * _Nullable)vehicleType __attribute__((swift_name("doCopy(id:vehicleType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@property (readonly) SharedProviderWithVehicleTypeVehicleType * _Nullable vehicleType __attribute__((swift_name("vehicleType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderWithVehicleType.Companion")))
@interface SharedProviderWithVehicleTypeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderWithVehicleType.VehicleType")))
@interface SharedProviderWithVehicleTypeVehicleType : SharedKotlinEnum<SharedProviderWithVehicleTypeVehicleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedProviderWithVehicleTypeVehicleType *car __attribute__((swift_name("car")));
@property (class, readonly) SharedProviderWithVehicleTypeVehicleType *bicycle __attribute__((swift_name("bicycle")));
@property (class, readonly) SharedProviderWithVehicleTypeVehicleType *scooter __attribute__((swift_name("scooter")));
@property (class, readonly) SharedProviderWithVehicleTypeVehicleType *kickScooter __attribute__((swift_name("kickScooter")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProviderWithVehicleType.VehicleTypeSerializer")))
@interface SharedProviderWithVehicleTypeVehicleTypeSerializer : SharedCommonEnumSerializer<SharedProviderWithVehicleTypeVehicleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProvidersRequirementStatusResponse")))
@interface SharedProvidersRequirementStatusResponse : SharedBase
- (instancetype)initWithProviders:(NSArray<SharedProviderRequirementStatus *> *)providers user:(SharedUser *)user requirementInterdependence:(NSDictionary<NSString *, NSArray<NSString *> *> *)requirementInterdependence __attribute__((swift_name("init(providers:user:requirementInterdependence:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedProviderRequirementStatus *> *)component1 __attribute__((swift_name("component1()")));
- (SharedUser *)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, NSArray<NSString *> *> *)component3 __attribute__((swift_name("component3()")));
- (SharedProvidersRequirementStatusResponse *)doCopyProviders:(NSArray<SharedProviderRequirementStatus *> *)providers user:(SharedUser *)user requirementInterdependence:(NSDictionary<NSString *, NSArray<NSString *> *> *)requirementInterdependence __attribute__((swift_name("doCopy(providers:user:requirementInterdependence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedProviderRequirementStatus *> *providers __attribute__((swift_name("providers")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *requirementInterdependence __attribute__((swift_name("requirementInterdependence")));
@property (readonly) SharedUser *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ProvidersRequirementStatusResponse.Companion")))
@interface SharedProvidersRequirementStatusResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PurchaseBreakdown")))
@interface SharedPurchaseBreakdown : SharedBase
- (instancetype)initWithPayment:(SharedPaymentBreakdownItem * _Nullable)payment subscription:(SharedSubscriptionBreakdownItem * _Nullable)subscription __attribute__((swift_name("init(payment:subscription:)"))) __attribute__((objc_designated_initializer));
- (SharedPaymentBreakdownItem * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedSubscriptionBreakdownItem * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedPurchaseBreakdown *)doCopyPayment:(SharedPaymentBreakdownItem * _Nullable)payment subscription:(SharedSubscriptionBreakdownItem * _Nullable)subscription __attribute__((swift_name("doCopy(payment:subscription:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedPaymentBreakdownItem * _Nullable payment __attribute__((swift_name("payment")));
@property (readonly) SharedSubscriptionBreakdownItem * _Nullable subscription __attribute__((swift_name("subscription")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PurchaseBreakdown.Companion")))
@interface SharedPurchaseBreakdownCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rating")))
@interface SharedRating : SharedBase
- (instancetype)initWithValue:(double)value max:(double)max __attribute__((swift_name("init(value:max:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (double)component2 __attribute__((swift_name("component2()")));
- (SharedRating *)doCopyValue:(double)value max:(double)max __attribute__((swift_name("doCopy(value:max:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double max __attribute__((swift_name("max")));
@property (readonly) double value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Rating.Companion")))
@interface SharedRatingCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Records")))
@interface SharedRecords : SharedBase
- (instancetype)initWithRideHailing:(NSArray<SharedRideHailingRecord *> *)rideHailing sharing:(NSArray<SharedSharingRecord *> *)sharing tickets:(NSArray<SharedTicketsRecord *> *)tickets ticketActivations:(NSArray<SharedTicketActivationsRecord *> *)ticketActivations parking:(NSArray<SharedParkingRecord *> *)parking subscriptionRenewals:(NSArray<SharedSubscriptionRenewalRecord *> *)subscriptionRenewals __attribute__((swift_name("init(rideHailing:sharing:tickets:ticketActivations:parking:subscriptionRenewals:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedRideHailingRecord *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedSharingRecord *> *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedTicketsRecord *> *)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedTicketActivationsRecord *> *)component4 __attribute__((swift_name("component4()")));
- (NSArray<SharedParkingRecord *> *)component5 __attribute__((swift_name("component5()")));
- (NSArray<SharedSubscriptionRenewalRecord *> *)component6 __attribute__((swift_name("component6()")));
- (SharedRecords *)doCopyRideHailing:(NSArray<SharedRideHailingRecord *> *)rideHailing sharing:(NSArray<SharedSharingRecord *> *)sharing tickets:(NSArray<SharedTicketsRecord *> *)tickets ticketActivations:(NSArray<SharedTicketActivationsRecord *> *)ticketActivations parking:(NSArray<SharedParkingRecord *> *)parking subscriptionRenewals:(NSArray<SharedSubscriptionRenewalRecord *> *)subscriptionRenewals __attribute__((swift_name("doCopy(rideHailing:sharing:tickets:ticketActivations:parking:subscriptionRenewals:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedParkingRecord *> *parking __attribute__((swift_name("parking")));
@property (readonly) NSArray<SharedRideHailingRecord *> *rideHailing __attribute__((swift_name("rideHailing")));
@property (readonly) NSArray<SharedSharingRecord *> *sharing __attribute__((swift_name("sharing")));
@property (readonly) NSArray<SharedSubscriptionRenewalRecord *> *subscriptionRenewals __attribute__((swift_name("subscriptionRenewals")));
@property (readonly) NSArray<SharedTicketActivationsRecord *> *ticketActivations __attribute__((swift_name("ticketActivations")));
@property (readonly) NSArray<SharedTicketsRecord *> *tickets __attribute__((swift_name("tickets")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Records.Companion")))
@interface SharedRecordsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequirementStatus")))
@interface SharedRequirementStatus : SharedBase
- (instancetype)initWithFulfilled:(SharedBoolean * _Nullable)fulfilled details:(NSString * _Nullable)details keys:(NSArray<NSString *> * _Nullable)keys unacceptedTerms:(NSArray<SharedTerms *> * _Nullable)unacceptedTerms __attribute__((swift_name("init(fulfilled:details:keys:unacceptedTerms:)"))) __attribute__((objc_designated_initializer));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSString *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedTerms *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedRequirementStatus *)doCopyFulfilled:(SharedBoolean * _Nullable)fulfilled details:(NSString * _Nullable)details keys:(NSArray<NSString *> * _Nullable)keys unacceptedTerms:(NSArray<SharedTerms *> * _Nullable)unacceptedTerms __attribute__((swift_name("doCopy(fulfilled:details:keys:unacceptedTerms:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable details __attribute__((swift_name("details")));
@property (readonly) SharedBoolean * _Nullable fulfilled __attribute__((swift_name("fulfilled")));
@property (readonly) NSArray<NSString *> * _Nullable keys __attribute__((swift_name("keys")));
@property (readonly) NSArray<SharedTerms *> * _Nullable unacceptedTerms __attribute__((swift_name("unacceptedTerms")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequirementStatus.Companion")))
@interface SharedRequirementStatusCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequirementStatusResponse")))
@interface SharedRequirementStatusResponse : SharedBase
- (instancetype)initWithUser:(SharedUser *)user requirementInterdependence:(NSDictionary<NSString *, NSArray<NSString *> *> *)requirementInterdependence requirementStatuses:(NSDictionary<NSString *, SharedRequirementStatus *> *)requirementStatuses __attribute__((swift_name("init(user:requirementInterdependence:requirementStatuses:)"))) __attribute__((objc_designated_initializer));
- (SharedUser *)component1 __attribute__((swift_name("component1()")));
- (NSDictionary<NSString *, NSArray<NSString *> *> *)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, SharedRequirementStatus *> *)component3 __attribute__((swift_name("component3()")));
- (SharedRequirementStatusResponse *)doCopyUser:(SharedUser *)user requirementInterdependence:(NSDictionary<NSString *, NSArray<NSString *> *> *)requirementInterdependence requirementStatuses:(NSDictionary<NSString *, SharedRequirementStatus *> *)requirementStatuses __attribute__((swift_name("doCopy(user:requirementInterdependence:requirementStatuses:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *requirementInterdependence __attribute__((swift_name("requirementInterdependence")));
@property (readonly) NSDictionary<NSString *, SharedRequirementStatus *> *requirementStatuses __attribute__((swift_name("requirementStatuses")));
@property (readonly) SharedUser *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequirementStatusResponse.Companion")))
@interface SharedRequirementStatusResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceSpecifier")))
@interface SharedResourceSpecifier : SharedBase
- (instancetype)initWithRealm:(NSString * _Nullable)realm msp:(NSString * _Nullable)msp vehicleType:(NSString * _Nullable)vehicleType providerAccountType:(NSString * _Nullable)providerAccountType __attribute__((swift_name("init(realm:msp:vehicleType:providerAccountType:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedResourceSpecifier *)doCopyRealm:(NSString * _Nullable)realm msp:(NSString * _Nullable)msp vehicleType:(NSString * _Nullable)vehicleType providerAccountType:(NSString * _Nullable)providerAccountType __attribute__((swift_name("doCopy(realm:msp:vehicleType:providerAccountType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable msp __attribute__((swift_name("msp")));
@property (readonly) NSString * _Nullable providerAccountType __attribute__((swift_name("providerAccountType")));
@property (readonly) NSString * _Nullable realm __attribute__((swift_name("realm")));
@property (readonly) NSString * _Nullable vehicleType __attribute__((swift_name("vehicleType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ResourceSpecifier.Companion")))
@interface SharedResourceSpecifierCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReturnOptions")))
@interface SharedReturnOptions : SharedBase
- (instancetype)initWithIsReturnAllowed:(BOOL)isReturnAllowed additionalFee:(SharedDouble * _Nullable)additionalFee currency:(NSString * _Nullable)currency __attribute__((swift_name("init(isReturnAllowed:additionalFee:currency:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedReturnOptions *)doCopyIsReturnAllowed:(BOOL)isReturnAllowed additionalFee:(SharedDouble * _Nullable)additionalFee currency:(NSString * _Nullable)currency __attribute__((swift_name("doCopy(isReturnAllowed:additionalFee:currency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable additionalFee __attribute__((swift_name("additionalFee")));
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));
@property (readonly) BOOL isReturnAllowed __attribute__((swift_name("isReturnAllowed")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReturnOptions.Companion")))
@interface SharedReturnOptionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReverseGeocodeResponse")))
@interface SharedReverseGeocodeResponse : SharedBase
- (instancetype)initWithAddress:(NSString * _Nullable)address __attribute__((swift_name("init(address:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedReverseGeocodeResponse *)doCopyAddress:(NSString * _Nullable)address __attribute__((swift_name("doCopy(address:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReverseGeocodeResponse.Companion")))
@interface SharedReverseGeocodeResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideEstimateRequest")))
@interface SharedRideEstimateRequest : SharedBase
- (instancetype)initWithStart:(SharedLocation *)start end:(SharedLocation *)end productId:(NSString *)productId options:(SharedRideOptions * _Nullable)options __attribute__((swift_name("init(start:end:productId:options:)"))) __attribute__((objc_designated_initializer));
- (SharedLocation *)component1 __attribute__((swift_name("component1()")));
- (SharedLocation *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SharedRideOptions * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedRideEstimateRequest *)doCopyStart:(SharedLocation *)start end:(SharedLocation *)end productId:(NSString *)productId options:(SharedRideOptions * _Nullable)options __attribute__((swift_name("doCopy(start:end:productId:options:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLocation *end __attribute__((swift_name("end")));
@property (readonly) SharedRideOptions * _Nullable options __attribute__((swift_name("options")));
@property (readonly) NSString *productId __attribute__((swift_name("productId")));
@property (readonly) SharedLocation *start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideEstimateRequest.Companion")))
@interface SharedRideEstimateRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingAllowedAction")))
@interface SharedRideHailingAllowedAction : SharedBase
- (instancetype)initWithBookingStatus:(SharedRideHailingAllowedActionBookingStatus * _Nullable)bookingStatus action:(SharedRideHailingAllowedActionAction * _Nullable)action __attribute__((swift_name("init(bookingStatus:action:)"))) __attribute__((objc_designated_initializer));
- (SharedRideHailingAllowedActionBookingStatus * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedRideHailingAllowedActionAction * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedRideHailingAllowedAction *)doCopyBookingStatus:(SharedRideHailingAllowedActionBookingStatus * _Nullable)bookingStatus action:(SharedRideHailingAllowedActionAction * _Nullable)action __attribute__((swift_name("doCopy(bookingStatus:action:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRideHailingAllowedActionAction * _Nullable action __attribute__((swift_name("action")));
@property (readonly) SharedRideHailingAllowedActionBookingStatus * _Nullable bookingStatus __attribute__((swift_name("bookingStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingAllowedAction.Action")))
@interface SharedRideHailingAllowedActionAction : SharedKotlinEnum<SharedRideHailingAllowedActionAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedRideHailingAllowedActionAction *create __attribute__((swift_name("create")));
@property (class, readonly) SharedRideHailingAllowedActionAction *cancel __attribute__((swift_name("cancel")));
@property (class, readonly) SharedRideHailingAllowedActionAction *updateDropoff __attribute__((swift_name("updateDropoff")));
@property (class, readonly) SharedRideHailingAllowedActionAction *confirmPayment __attribute__((swift_name("confirmPayment")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingAllowedAction.ActionSerializer")))
@interface SharedRideHailingAllowedActionActionSerializer : SharedCommonEnumSerializer<SharedRideHailingAllowedActionAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingAllowedAction.BookingStatus")))
@interface SharedRideHailingAllowedActionBookingStatus : SharedKotlinEnum<SharedRideHailingAllowedActionBookingStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedRideHailingAllowedActionBookingStatus *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedRideHailingAllowedActionBookingStatus *requesting __attribute__((swift_name("requesting")));
@property (class, readonly) SharedRideHailingAllowedActionBookingStatus *driverArriving __attribute__((swift_name("driverArriving")));
@property (class, readonly) SharedRideHailingAllowedActionBookingStatus *driverArrived __attribute__((swift_name("driverArrived")));
@property (class, readonly) SharedRideHailingAllowedActionBookingStatus *driverCancelled __attribute__((swift_name("driverCancelled")));
@property (class, readonly) SharedRideHailingAllowedActionBookingStatus *riderCancelled __attribute__((swift_name("riderCancelled")));
@property (class, readonly) SharedRideHailingAllowedActionBookingStatus *riding __attribute__((swift_name("riding")));
@property (class, readonly) SharedRideHailingAllowedActionBookingStatus *finished __attribute__((swift_name("finished")));
@property (class, readonly) SharedRideHailingAllowedActionBookingStatus *noDriversAvailable __attribute__((swift_name("noDriversAvailable")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingAllowedAction.BookingStatusSerializer")))
@interface SharedRideHailingAllowedActionBookingStatusSerializer : SharedCommonEnumSerializer<SharedRideHailingAllowedActionBookingStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingAllowedAction.Companion")))
@interface SharedRideHailingAllowedActionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingBooking")))
@interface SharedRideHailingBooking : SharedBase
- (instancetype)initWithId:(NSString *)id providerId:(NSString *)providerId product:(SharedRideHailingProduct *)product status:(SharedRideHailingBookingStatus *)status provider:(SharedProvider * _Nullable)provider price:(SharedDouble * _Nullable)price priceEstimate:(SharedPrice * _Nullable)priceEstimate currency:(NSString * _Nullable)currency polyline:(NSString * _Nullable)polyline pickupEta:(SharedEta * _Nullable)pickupEta destinationEta:(SharedEta * _Nullable)destinationEta pickupEtaSeconds:(SharedInt * _Nullable)pickupEtaSeconds destinationEtaSeconds:(SharedInt * _Nullable)destinationEtaSeconds totalTripTime:(SharedDuration * _Nullable)totalTripTime createdAt:(NSString * _Nullable)createdAt pickupAt:(NSString * _Nullable)pickupAt dropoffAt:(NSString * _Nullable)dropoffAt finishedAt:(NSString * _Nullable)finishedAt start:(SharedLocation * _Nullable)start end:(SharedLocation * _Nullable)end dropoff:(SharedLocation * _Nullable)dropoff pickup:(SharedLocation * _Nullable)pickup driver:(SharedDriver * _Nullable)driver car:(SharedCar * _Nullable)car notificationSettings:(SharedNotificationSettings * _Nullable)notificationSettings __attribute__((swift_name("init(id:providerId:product:status:provider:price:priceEstimate:currency:polyline:pickupEta:destinationEta:pickupEtaSeconds:destinationEtaSeconds:totalTripTime:createdAt:pickupAt:dropoffAt:finishedAt:start:end:dropoff:pickup:driver:car:notificationSettings:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedEta * _Nullable)component10 __attribute__((swift_name("component10()")));
- (SharedEta * _Nullable)component11 __attribute__((swift_name("component11()")));
- (SharedInt * _Nullable)component12 __attribute__((swift_name("component12()")));
- (SharedInt * _Nullable)component13 __attribute__((swift_name("component13()")));
- (SharedDuration * _Nullable)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSString * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (SharedLocation * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedLocation * _Nullable)component20 __attribute__((swift_name("component20()")));
- (SharedLocation * _Nullable)component21 __attribute__((swift_name("component21()")));
- (SharedLocation * _Nullable)component22 __attribute__((swift_name("component22()")));
- (SharedDriver * _Nullable)component23 __attribute__((swift_name("component23()")));
- (SharedCar * _Nullable)component24 __attribute__((swift_name("component24()")));
- (SharedNotificationSettings * _Nullable)component25 __attribute__((swift_name("component25()")));
- (SharedRideHailingProduct *)component3 __attribute__((swift_name("component3()")));
- (SharedRideHailingBookingStatus *)component4 __attribute__((swift_name("component4()")));
- (SharedProvider * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedPrice * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedRideHailingBooking *)doCopyId:(NSString *)id providerId:(NSString *)providerId product:(SharedRideHailingProduct *)product status:(SharedRideHailingBookingStatus *)status provider:(SharedProvider * _Nullable)provider price:(SharedDouble * _Nullable)price priceEstimate:(SharedPrice * _Nullable)priceEstimate currency:(NSString * _Nullable)currency polyline:(NSString * _Nullable)polyline pickupEta:(SharedEta * _Nullable)pickupEta destinationEta:(SharedEta * _Nullable)destinationEta pickupEtaSeconds:(SharedInt * _Nullable)pickupEtaSeconds destinationEtaSeconds:(SharedInt * _Nullable)destinationEtaSeconds totalTripTime:(SharedDuration * _Nullable)totalTripTime createdAt:(NSString * _Nullable)createdAt pickupAt:(NSString * _Nullable)pickupAt dropoffAt:(NSString * _Nullable)dropoffAt finishedAt:(NSString * _Nullable)finishedAt start:(SharedLocation * _Nullable)start end:(SharedLocation * _Nullable)end dropoff:(SharedLocation * _Nullable)dropoff pickup:(SharedLocation * _Nullable)pickup driver:(SharedDriver * _Nullable)driver car:(SharedCar * _Nullable)car notificationSettings:(SharedNotificationSettings * _Nullable)notificationSettings __attribute__((swift_name("doCopy(id:providerId:product:status:provider:price:priceEstimate:currency:polyline:pickupEta:destinationEta:pickupEtaSeconds:destinationEtaSeconds:totalTripTime:createdAt:pickupAt:dropoffAt:finishedAt:start:end:dropoff:pickup:driver:car:notificationSettings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedCar * _Nullable car __attribute__((swift_name("car")));
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));
@property (readonly) SharedEta * _Nullable destinationEta __attribute__((swift_name("destinationEta")));
@property (readonly) SharedInt * _Nullable destinationEtaSeconds __attribute__((swift_name("destinationEtaSeconds")));
@property (readonly) SharedDriver * _Nullable driver __attribute__((swift_name("driver")));
@property (readonly) SharedLocation * _Nullable dropoff __attribute__((swift_name("dropoff")));
@property (readonly) NSString * _Nullable dropoffAt __attribute__((swift_name("dropoffAt")));
@property (readonly) SharedLocation * _Nullable end __attribute__((swift_name("end")));
@property (readonly) NSString * _Nullable finishedAt __attribute__((swift_name("finishedAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedNotificationSettings * _Nullable notificationSettings __attribute__((swift_name("notificationSettings")));
@property (readonly) SharedLocation * _Nullable pickup __attribute__((swift_name("pickup")));
@property (readonly) NSString * _Nullable pickupAt __attribute__((swift_name("pickupAt")));
@property (readonly) SharedEta * _Nullable pickupEta __attribute__((swift_name("pickupEta")));
@property (readonly) SharedInt * _Nullable pickupEtaSeconds __attribute__((swift_name("pickupEtaSeconds")));
@property (readonly) NSString * _Nullable polyline __attribute__((swift_name("polyline")));
@property (readonly) SharedDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) SharedPrice * _Nullable priceEstimate __attribute__((swift_name("priceEstimate")));
@property (readonly) SharedRideHailingProduct *product __attribute__((swift_name("product")));
@property (readonly) SharedProvider * _Nullable provider __attribute__((swift_name("provider")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedLocation * _Nullable start __attribute__((swift_name("start")));
@property (readonly) SharedRideHailingBookingStatus *status __attribute__((swift_name("status")));
@property (readonly) SharedDuration * _Nullable totalTripTime __attribute__((swift_name("totalTripTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingBooking.Companion")))
@interface SharedRideHailingBookingCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingBooking.Status")))
@interface SharedRideHailingBookingStatus : SharedKotlinEnum<SharedRideHailingBookingStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedRideHailingBookingStatus *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedRideHailingBookingStatus *requesting __attribute__((swift_name("requesting")));
@property (class, readonly) SharedRideHailingBookingStatus *driverArriving __attribute__((swift_name("driverArriving")));
@property (class, readonly) SharedRideHailingBookingStatus *driverArrived __attribute__((swift_name("driverArrived")));
@property (class, readonly) SharedRideHailingBookingStatus *driverCancelled __attribute__((swift_name("driverCancelled")));
@property (class, readonly) SharedRideHailingBookingStatus *riderCancelled __attribute__((swift_name("riderCancelled")));
@property (class, readonly) SharedRideHailingBookingStatus *riding __attribute__((swift_name("riding")));
@property (class, readonly) SharedRideHailingBookingStatus *finished __attribute__((swift_name("finished")));
@property (class, readonly) SharedRideHailingBookingStatus *noDriversAvailable __attribute__((swift_name("noDriversAvailable")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingBooking.StatusSerializer")))
@interface SharedRideHailingBookingStatusSerializer : SharedCommonEnumSerializer<SharedRideHailingBookingStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingBookingEstimate")))
@interface SharedRideHailingBookingEstimate : SharedBase
- (instancetype)initWithProduct:(SharedRideHailingProduct *)product requestContext:(NSString *)requestContext start:(SharedLocation *)start end:(SharedLocation *)end pickupEta:(SharedEta *)pickupEta pickup:(SharedLocation * _Nullable)pickup destinationEta:(SharedEta * _Nullable)destinationEta fareEstimate:(SharedFareEstimate * _Nullable)fareEstimate polyline:(NSString * _Nullable)polyline emptyStateMessageKey:(NSString * _Nullable)emptyStateMessageKey offerTimeout:(NSString * _Nullable)offerTimeout __attribute__((swift_name("init(product:requestContext:start:end:pickupEta:pickup:destinationEta:fareEstimate:polyline:emptyStateMessageKey:offerTimeout:)"))) __attribute__((objc_designated_initializer));
- (SharedRideHailingProduct *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedLocation *)component3 __attribute__((swift_name("component3()")));
- (SharedLocation *)component4 __attribute__((swift_name("component4()")));
- (SharedEta *)component5 __attribute__((swift_name("component5()")));
- (SharedLocation * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedEta * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedFareEstimate * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedRideHailingBookingEstimate *)doCopyProduct:(SharedRideHailingProduct *)product requestContext:(NSString *)requestContext start:(SharedLocation *)start end:(SharedLocation *)end pickupEta:(SharedEta *)pickupEta pickup:(SharedLocation * _Nullable)pickup destinationEta:(SharedEta * _Nullable)destinationEta fareEstimate:(SharedFareEstimate * _Nullable)fareEstimate polyline:(NSString * _Nullable)polyline emptyStateMessageKey:(NSString * _Nullable)emptyStateMessageKey offerTimeout:(NSString * _Nullable)offerTimeout __attribute__((swift_name("doCopy(product:requestContext:start:end:pickupEta:pickup:destinationEta:fareEstimate:polyline:emptyStateMessageKey:offerTimeout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedEta * _Nullable destinationEta __attribute__((swift_name("destinationEta")));
@property (readonly) NSString * _Nullable emptyStateMessageKey __attribute__((swift_name("emptyStateMessageKey")));
@property (readonly) SharedLocation *end __attribute__((swift_name("end")));
@property (readonly) SharedFareEstimate * _Nullable fareEstimate __attribute__((swift_name("fareEstimate")));
@property (readonly) NSString * _Nullable offerTimeout __attribute__((swift_name("offerTimeout")));
@property (readonly) SharedLocation * _Nullable pickup __attribute__((swift_name("pickup")));
@property (readonly) SharedEta *pickupEta __attribute__((swift_name("pickupEta")));
@property (readonly) NSString * _Nullable polyline __attribute__((swift_name("polyline")));
@property (readonly) SharedRideHailingProduct *product __attribute__((swift_name("product")));
@property (readonly) NSString *requestContext __attribute__((swift_name("requestContext")));
@property (readonly) SharedLocation *start __attribute__((swift_name("start")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingBookingEstimate.Companion")))
@interface SharedRideHailingBookingEstimateCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingBookingOptions")))
@interface SharedRideHailingBookingOptions : SharedBase
- (instancetype)initWithPassengerCountRequired:(SharedBoolean * _Nullable)passengerCountRequired maxPassengerCount:(SharedInt * _Nullable)maxPassengerCount allowedActions:(NSArray<SharedRideHailingAllowedAction *> * _Nullable)allowedActions supportedTags:(NSArray<NSString *> * _Nullable)supportedTags startAddressRequired:(SharedBoolean * _Nullable)startAddressRequired endAddressRequired:(SharedBoolean * _Nullable)endAddressRequired cancellationFee:(SharedDouble * _Nullable)cancellationFee __attribute__((swift_name("init(passengerCountRequired:maxPassengerCount:allowedActions:supportedTags:startAddressRequired:endAddressRequired:cancellationFee:)"))) __attribute__((objc_designated_initializer));
- (SharedBoolean * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedRideHailingAllowedAction *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedBoolean * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedBoolean * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedDouble * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedRideHailingBookingOptions *)doCopyPassengerCountRequired:(SharedBoolean * _Nullable)passengerCountRequired maxPassengerCount:(SharedInt * _Nullable)maxPassengerCount allowedActions:(NSArray<SharedRideHailingAllowedAction *> * _Nullable)allowedActions supportedTags:(NSArray<NSString *> * _Nullable)supportedTags startAddressRequired:(SharedBoolean * _Nullable)startAddressRequired endAddressRequired:(SharedBoolean * _Nullable)endAddressRequired cancellationFee:(SharedDouble * _Nullable)cancellationFee __attribute__((swift_name("doCopy(passengerCountRequired:maxPassengerCount:allowedActions:supportedTags:startAddressRequired:endAddressRequired:cancellationFee:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedRideHailingAllowedAction *> * _Nullable allowedActions __attribute__((swift_name("allowedActions")));
@property (readonly) SharedDouble * _Nullable cancellationFee __attribute__((swift_name("cancellationFee")));
@property (readonly) SharedBoolean * _Nullable endAddressRequired __attribute__((swift_name("endAddressRequired")));
@property (readonly) SharedInt * _Nullable maxPassengerCount __attribute__((swift_name("maxPassengerCount")));
@property (readonly) SharedBoolean * _Nullable passengerCountRequired __attribute__((swift_name("passengerCountRequired")));
@property (readonly) SharedBoolean * _Nullable startAddressRequired __attribute__((swift_name("startAddressRequired")));
@property (readonly) NSArray<NSString *> * _Nullable supportedTags __attribute__((swift_name("supportedTags")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingBookingOptions.Companion")))
@interface SharedRideHailingBookingOptionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingFare")))
@interface SharedRideHailingFare : SharedBase
- (instancetype)initWithSurgeMultiplier:(SharedDouble * _Nullable)surgeMultiplier ext:(NSString * _Nullable)ext __attribute__((swift_name("init(surgeMultiplier:ext:)"))) __attribute__((objc_designated_initializer));
- (SharedDouble * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedRideHailingFare *)doCopySurgeMultiplier:(SharedDouble * _Nullable)surgeMultiplier ext:(NSString * _Nullable)ext __attribute__((swift_name("doCopy(surgeMultiplier:ext:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable ext __attribute__((swift_name("ext")));
@property (readonly) SharedDouble * _Nullable surgeMultiplier __attribute__((swift_name("surgeMultiplier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingFare.Companion")))
@interface SharedRideHailingFareCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingPricing")))
@interface SharedRideHailingPricing : SharedBase
- (instancetype)initWithAdditionalFees:(NSArray<SharedAdditionalFee *> *)additionalFees minimumKilometers:(SharedDouble * _Nullable)minimumKilometers minimumMinutes:(SharedInt * _Nullable)minimumMinutes base:(SharedDouble * _Nullable)base minimum:(SharedDouble * _Nullable)minimum perKilometer:(SharedDouble * _Nullable)perKilometer waitPerMinute:(SharedDouble * _Nullable)waitPerMinute ridePerMinute:(SharedDouble * _Nullable)ridePerMinute __attribute__((swift_name("init(additionalFees:minimumKilometers:minimumMinutes:base:minimum:perKilometer:waitPerMinute:ridePerMinute:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedAdditionalFee *> *)component1 __attribute__((swift_name("component1()")));
- (SharedDouble * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedDouble * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedRideHailingPricing *)doCopyAdditionalFees:(NSArray<SharedAdditionalFee *> *)additionalFees minimumKilometers:(SharedDouble * _Nullable)minimumKilometers minimumMinutes:(SharedInt * _Nullable)minimumMinutes base:(SharedDouble * _Nullable)base minimum:(SharedDouble * _Nullable)minimum perKilometer:(SharedDouble * _Nullable)perKilometer waitPerMinute:(SharedDouble * _Nullable)waitPerMinute ridePerMinute:(SharedDouble * _Nullable)ridePerMinute __attribute__((swift_name("doCopy(additionalFees:minimumKilometers:minimumMinutes:base:minimum:perKilometer:waitPerMinute:ridePerMinute:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedAdditionalFee *> *additionalFees __attribute__((swift_name("additionalFees")));
@property (readonly) SharedDouble * _Nullable base __attribute__((swift_name("base")));
@property (readonly) SharedDouble * _Nullable minimum __attribute__((swift_name("minimum")));
@property (readonly) SharedDouble * _Nullable minimumKilometers __attribute__((swift_name("minimumKilometers")));
@property (readonly) SharedInt * _Nullable minimumMinutes __attribute__((swift_name("minimumMinutes")));
@property (readonly) SharedDouble * _Nullable perKilometer __attribute__((swift_name("perKilometer")));
@property (readonly) SharedDouble * _Nullable ridePerMinute __attribute__((swift_name("ridePerMinute")));
@property (readonly) SharedDouble * _Nullable waitPerMinute __attribute__((swift_name("waitPerMinute")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingPricing.Companion")))
@interface SharedRideHailingPricingCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingPricingInfo")))
@interface SharedRideHailingPricingInfo : SharedBase
- (instancetype)initWithCurrency:(NSString *)currency pricing:(SharedRideHailingPricing *)pricing __attribute__((swift_name("init(currency:pricing:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedRideHailingPricing *)component2 __attribute__((swift_name("component2()")));
- (SharedRideHailingPricingInfo *)doCopyCurrency:(NSString *)currency pricing:(SharedRideHailingPricing *)pricing __attribute__((swift_name("doCopy(currency:pricing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@property (readonly) SharedRideHailingPricing *pricing __attribute__((swift_name("pricing")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingPricingInfo.Companion")))
@interface SharedRideHailingPricingInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingProduct")))
@interface SharedRideHailingProduct : SharedBase
- (instancetype)initWithProviderId:(NSString *)providerId id:(NSString *)id displayName:(NSString *)displayName rideLaterEnabled:(BOOL)rideLaterEnabled isCashEnabled:(BOOL)isCashEnabled isSharedRide:(BOOL)isSharedRide description:(NSString * _Nullable)description seatCount:(SharedInt * _Nullable)seatCount image:(NSString * _Nullable)image pricingInfo:(SharedRideHailingPricingInfo * _Nullable)pricingInfo operationRestrictions:(SharedOperationRestrictions * _Nullable)operationRestrictions __attribute__((swift_name("init(providerId:id:displayName:rideLaterEnabled:isCashEnabled:isSharedRide:description:seatCount:image:pricingInfo:operationRestrictions:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedRideHailingPricingInfo * _Nullable)component10 __attribute__((swift_name("component10()")));
- (SharedOperationRestrictions * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedInt * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedRideHailingProduct *)doCopyProviderId:(NSString *)providerId id:(NSString *)id displayName:(NSString *)displayName rideLaterEnabled:(BOOL)rideLaterEnabled isCashEnabled:(BOOL)isCashEnabled isSharedRide:(BOOL)isSharedRide description:(NSString * _Nullable)description seatCount:(SharedInt * _Nullable)seatCount image:(NSString * _Nullable)image pricingInfo:(SharedRideHailingPricingInfo * _Nullable)pricingInfo operationRestrictions:(SharedOperationRestrictions * _Nullable)operationRestrictions __attribute__((swift_name("doCopy(providerId:id:displayName:rideLaterEnabled:isCashEnabled:isSharedRide:description:seatCount:image:pricingInfo:operationRestrictions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly, getter=description_) NSString * _Nullable description __attribute__((swift_name("description")));
@property (readonly) NSString *displayName __attribute__((swift_name("displayName")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable image __attribute__((swift_name("image")));
@property (readonly) BOOL isCashEnabled __attribute__((swift_name("isCashEnabled")));
@property (readonly) BOOL isSharedRide __attribute__((swift_name("isSharedRide")));
@property (readonly) SharedOperationRestrictions * _Nullable operationRestrictions __attribute__((swift_name("operationRestrictions")));
@property (readonly) SharedRideHailingPricingInfo * _Nullable pricingInfo __attribute__((swift_name("pricingInfo")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) BOOL rideLaterEnabled __attribute__((swift_name("rideLaterEnabled")));
@property (readonly) SharedInt * _Nullable seatCount __attribute__((swift_name("seatCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingProduct.Companion")))
@interface SharedRideHailingProductCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingProductWithEta")))
@interface SharedRideHailingProductWithEta : SharedBase
- (instancetype)initWithProduct:(SharedRideHailingProduct *)product eta:(SharedEta * _Nullable)eta surgeInfo:(SharedSurgeInfo * _Nullable)surgeInfo discountInfo:(SharedDiscountInfo * _Nullable)discountInfo __attribute__((swift_name("init(product:eta:surgeInfo:discountInfo:)"))) __attribute__((objc_designated_initializer));
- (SharedRideHailingProduct *)component1 __attribute__((swift_name("component1()")));
- (SharedEta * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedSurgeInfo * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedDiscountInfo * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedRideHailingProductWithEta *)doCopyProduct:(SharedRideHailingProduct *)product eta:(SharedEta * _Nullable)eta surgeInfo:(SharedSurgeInfo * _Nullable)surgeInfo discountInfo:(SharedDiscountInfo * _Nullable)discountInfo __attribute__((swift_name("doCopy(product:eta:surgeInfo:discountInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDiscountInfo * _Nullable discountInfo __attribute__((swift_name("discountInfo")));
@property (readonly) SharedEta * _Nullable eta __attribute__((swift_name("eta")));
@property (readonly) SharedRideHailingProduct *product __attribute__((swift_name("product")));
@property (readonly) SharedSurgeInfo * _Nullable surgeInfo __attribute__((swift_name("surgeInfo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingProductWithEta.Companion")))
@interface SharedRideHailingProductWithEtaCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingProductsResponse")))
@interface SharedRideHailingProductsResponse : SharedBase
- (instancetype)initWithProducts:(NSArray<SharedRideHailingProduct *> *)products __attribute__((swift_name("init(products:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedRideHailingProduct *> *)component1 __attribute__((swift_name("component1()")));
- (SharedRideHailingProductsResponse *)doCopyProducts:(NSArray<SharedRideHailingProduct *> *)products __attribute__((swift_name("doCopy(products:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedRideHailingProduct *> *products __attribute__((swift_name("products")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingProductsResponse.Companion")))
@interface SharedRideHailingProductsResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingProductsWithEtaResponse")))
@interface SharedRideHailingProductsWithEtaResponse : SharedBase
- (instancetype)initWithProductsWithEta:(NSArray<SharedRideHailingProductWithEta *> *)productsWithEta __attribute__((swift_name("init(productsWithEta:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedRideHailingProductWithEta *> *)component1 __attribute__((swift_name("component1()")));
- (SharedRideHailingProductsWithEtaResponse *)doCopyProductsWithEta:(NSArray<SharedRideHailingProductWithEta *> *)productsWithEta __attribute__((swift_name("doCopy(productsWithEta:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedRideHailingProductWithEta *> *productsWithEta __attribute__((swift_name("productsWithEta")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingProductsWithEtaResponse.Companion")))
@interface SharedRideHailingProductsWithEtaResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingProviderOptions")))
@interface SharedRideHailingProviderOptions : SharedBase
- (instancetype)initWithBooking:(SharedRideHailingBookingOptions * _Nullable)booking __attribute__((swift_name("init(booking:)"))) __attribute__((objc_designated_initializer));
- (SharedRideHailingBookingOptions * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedRideHailingProviderOptions *)doCopyBooking:(SharedRideHailingBookingOptions * _Nullable)booking __attribute__((swift_name("doCopy(booking:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRideHailingBookingOptions * _Nullable booking __attribute__((swift_name("booking")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingProviderOptions.Companion")))
@interface SharedRideHailingProviderOptionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingRecord")))
@interface SharedRideHailingRecord : SharedBase
- (instancetype)initWithBookingId:(NSString *)bookingId providerId:(NSString *)providerId trip:(SharedTrip * _Nullable)trip cancelledTrip:(SharedCancelledTrip * _Nullable)cancelledTrip driver:(SharedHistoryDriver * _Nullable)driver car:(SharedHistoryCar * _Nullable)car payment:(SharedPayment * _Nullable)payment status:(SharedRideHailingRecordStatus * _Nullable)status __attribute__((swift_name("init(bookingId:providerId:trip:cancelledTrip:driver:car:payment:status:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedTrip * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedCancelledTrip * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedHistoryDriver * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedHistoryCar * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedPayment * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedRideHailingRecordStatus * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedRideHailingRecord *)doCopyBookingId:(NSString *)bookingId providerId:(NSString *)providerId trip:(SharedTrip * _Nullable)trip cancelledTrip:(SharedCancelledTrip * _Nullable)cancelledTrip driver:(SharedHistoryDriver * _Nullable)driver car:(SharedHistoryCar * _Nullable)car payment:(SharedPayment * _Nullable)payment status:(SharedRideHailingRecordStatus * _Nullable)status __attribute__((swift_name("doCopy(bookingId:providerId:trip:cancelledTrip:driver:car:payment:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bookingId __attribute__((swift_name("bookingId")));
@property (readonly) SharedCancelledTrip * _Nullable cancelledTrip __attribute__((swift_name("cancelledTrip")));
@property (readonly) SharedHistoryCar * _Nullable car __attribute__((swift_name("car")));
@property (readonly) SharedHistoryDriver * _Nullable driver __attribute__((swift_name("driver")));
@property (readonly) SharedPayment * _Nullable payment __attribute__((swift_name("payment")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedRideHailingRecordStatus * _Nullable status __attribute__((swift_name("status")));
@property (readonly) SharedTrip * _Nullable trip __attribute__((swift_name("trip")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingRecord.Companion")))
@interface SharedRideHailingRecordCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingRecord.Status")))
@interface SharedRideHailingRecordStatus : SharedKotlinEnum<SharedRideHailingRecordStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedRideHailingRecordStatus *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedRideHailingRecordStatus *requesting __attribute__((swift_name("requesting")));
@property (class, readonly) SharedRideHailingRecordStatus *driverArriving __attribute__((swift_name("driverArriving")));
@property (class, readonly) SharedRideHailingRecordStatus *driverArrived __attribute__((swift_name("driverArrived")));
@property (class, readonly) SharedRideHailingRecordStatus *cancelled __attribute__((swift_name("cancelled")));
@property (class, readonly) SharedRideHailingRecordStatus *riding __attribute__((swift_name("riding")));
@property (class, readonly) SharedRideHailingRecordStatus *finished __attribute__((swift_name("finished")));
@property (class, readonly) SharedRideHailingRecordStatus *noDriversAvailable __attribute__((swift_name("noDriversAvailable")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideHailingRecord.StatusSerializer")))
@interface SharedRideHailingRecordStatusSerializer : SharedCommonEnumSerializer<SharedRideHailingRecordStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideOptions")))
@interface SharedRideOptions : SharedBase
- (instancetype)initWithPassengerCount:(SharedInt * _Nullable)passengerCount wheelchairAccessibleOnly:(SharedBoolean * _Nullable)wheelchairAccessibleOnly tags:(NSArray<NSString *> * _Nullable)tags __attribute__((swift_name("init(passengerCount:wheelchairAccessibleOnly:tags:)"))) __attribute__((objc_designated_initializer));
- (SharedInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSString *> * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedRideOptions *)doCopyPassengerCount:(SharedInt * _Nullable)passengerCount wheelchairAccessibleOnly:(SharedBoolean * _Nullable)wheelchairAccessibleOnly tags:(NSArray<NSString *> * _Nullable)tags __attribute__((swift_name("doCopy(passengerCount:wheelchairAccessibleOnly:tags:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedInt * _Nullable passengerCount __attribute__((swift_name("passengerCount")));
@property (readonly) NSArray<NSString *> * _Nullable tags __attribute__((swift_name("tags")));
@property (readonly) SharedBoolean * _Nullable wheelchairAccessibleOnly __attribute__((swift_name("wheelchairAccessibleOnly")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RideOptions.Companion")))
@interface SharedRideOptionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Route")))
@interface SharedRoute : SharedBase
- (instancetype)initWithId:(NSString *)id segments:(NSArray<SharedRouteSegment *> *)segments startTime:(NSString *)startTime endTime:(NSString *)endTime duration:(SharedDuration *)duration groupId:(NSString * _Nullable)groupId fare:(SharedRouteFare * _Nullable)fare labelKey:(NSString * _Nullable)labelKey disruption:(SharedRouteDisruption * _Nullable)disruption isAvailable:(SharedBoolean * _Nullable)isAvailable __attribute__((swift_name("init(id:segments:startTime:endTime:duration:groupId:fare:labelKey:disruption:isAvailable:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSArray<SharedRouteSegment *> *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (SharedDuration *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedRouteFare * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedRouteDisruption * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedRoute *)doCopyId:(NSString *)id segments:(NSArray<SharedRouteSegment *> *)segments startTime:(NSString *)startTime endTime:(NSString *)endTime duration:(SharedDuration *)duration groupId:(NSString * _Nullable)groupId fare:(SharedRouteFare * _Nullable)fare labelKey:(NSString * _Nullable)labelKey disruption:(SharedRouteDisruption * _Nullable)disruption isAvailable:(SharedBoolean * _Nullable)isAvailable __attribute__((swift_name("doCopy(id:segments:startTime:endTime:duration:groupId:fare:labelKey:disruption:isAvailable:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRouteDisruption * _Nullable disruption __attribute__((swift_name("disruption")));
@property (readonly) SharedDuration *duration __attribute__((swift_name("duration")));
@property (readonly) NSString *endTime __attribute__((swift_name("endTime")));
@property (readonly) SharedRouteFare * _Nullable fare __attribute__((swift_name("fare")));
@property (readonly) NSString * _Nullable groupId __attribute__((swift_name("groupId")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedBoolean * _Nullable isAvailable __attribute__((swift_name("isAvailable")));
@property (readonly) NSString * _Nullable labelKey __attribute__((swift_name("labelKey")));
@property (readonly) NSArray<SharedRouteSegment *> *segments __attribute__((swift_name("segments")));
@property (readonly) NSString *startTime __attribute__((swift_name("startTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Route.Companion")))
@interface SharedRouteCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteDisruption")))
@interface SharedRouteDisruption : SharedBase
- (instancetype)initWithSeverity:(SharedRouteDisruptionSeverity *)severity disruptions:(NSArray<SharedDisruption *> *)disruptions title:(NSString * _Nullable)title __attribute__((swift_name("init(severity:disruptions:title:)"))) __attribute__((objc_designated_initializer));
- (SharedRouteDisruptionSeverity *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedDisruption *> *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedRouteDisruption *)doCopySeverity:(SharedRouteDisruptionSeverity *)severity disruptions:(NSArray<SharedDisruption *> *)disruptions title:(NSString * _Nullable)title __attribute__((swift_name("doCopy(severity:disruptions:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedDisruption *> *disruptions __attribute__((swift_name("disruptions")));
@property (readonly) SharedRouteDisruptionSeverity *severity __attribute__((swift_name("severity")));
@property (readonly) NSString * _Nullable title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteDisruption.Companion")))
@interface SharedRouteDisruptionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteDisruption.Severity")))
@interface SharedRouteDisruptionSeverity : SharedKotlinEnum<SharedRouteDisruptionSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedRouteDisruptionSeverity *notAffected __attribute__((swift_name("notAffected")));
@property (class, readonly) SharedRouteDisruptionSeverity *information __attribute__((swift_name("information")));
@property (class, readonly) SharedRouteDisruptionSeverity *warning __attribute__((swift_name("warning")));
@property (class, readonly) SharedRouteDisruptionSeverity *alert __attribute__((swift_name("alert")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteDisruption.SeveritySerializer")))
@interface SharedRouteDisruptionSeveritySerializer : SharedCommonEnumSerializer<SharedRouteDisruptionSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteExactDeparture")))
@interface SharedRouteExactDeparture : SharedBase
- (instancetype)initWithTime:(NSString *)time isRealtime:(BOOL)isRealtime vehicleId:(NSString * _Nullable)vehicleId __attribute__((swift_name("init(time:isRealtime:vehicleId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedRouteExactDeparture *)doCopyTime:(NSString *)time isRealtime:(BOOL)isRealtime vehicleId:(NSString * _Nullable)vehicleId __attribute__((swift_name("doCopy(time:isRealtime:vehicleId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRealtime __attribute__((swift_name("isRealtime")));
@property (readonly) NSString *time __attribute__((swift_name("time")));
@property (readonly) NSString * _Nullable vehicleId __attribute__((swift_name("vehicleId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteExactDeparture.Companion")))
@interface SharedRouteExactDepartureCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteFare")))
@interface SharedRouteFare : SharedBase
- (instancetype)initWithTotal:(SharedMoney *)total fares:(NSArray<SharedFare *> *)fares __attribute__((swift_name("init(total:fares:)"))) __attribute__((objc_designated_initializer));
- (SharedMoney *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedFare *> *)component2 __attribute__((swift_name("component2()")));
- (SharedRouteFare *)doCopyTotal:(SharedMoney *)total fares:(NSArray<SharedFare *> *)fares __attribute__((swift_name("doCopy(total:fares:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedFare *> *fares __attribute__((swift_name("fares")));
@property (readonly) SharedMoney *total __attribute__((swift_name("total")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteFare.Companion")))
@interface SharedRouteFareCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteIntervalDeparture")))
@interface SharedRouteIntervalDeparture : SharedBase
- (instancetype)initWithFrequencySeconds:(int32_t)frequencySeconds fromTime:(NSString *)fromTime toTime:(NSString *)toTime __attribute__((swift_name("init(frequencySeconds:fromTime:toTime:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SharedRouteIntervalDeparture *)doCopyFrequencySeconds:(int32_t)frequencySeconds fromTime:(NSString *)fromTime toTime:(NSString *)toTime __attribute__((swift_name("doCopy(frequencySeconds:fromTime:toTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t frequencySeconds __attribute__((swift_name("frequencySeconds")));
@property (readonly) NSString *fromTime __attribute__((swift_name("fromTime")));
@property (readonly) NSString *toTime __attribute__((swift_name("toTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteIntervalDeparture.Companion")))
@interface SharedRouteIntervalDepartureCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegment")))
@interface SharedRouteSegment : SharedBase
- (instancetype)initWithId:(NSString *)id mode:(SharedRouteSegmentMode *)mode start:(SharedLocation *)start end:(SharedLocation *)end startTime:(NSString *)startTime endTime:(NSString *)endTime shape:(NSString *)shape transit:(SharedRouteSegmentTransit * _Nullable)transit walking:(SharedRouteSegmentWalking * _Nullable)walking sharing:(SharedRouteSegmentSharing * _Nullable)sharing rideHailing:(SharedRouteSegmentRideHailing * _Nullable)rideHailing fareId:(NSString * _Nullable)fareId transportGroup:(NSString * _Nullable)transportGroup disruption:(SharedRouteSegmentDisruption * _Nullable)disruption __attribute__((swift_name("init(id:mode:start:end:startTime:endTime:shape:transit:walking:sharing:rideHailing:fareId:transportGroup:disruption:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedRouteSegmentSharing * _Nullable)component10 __attribute__((swift_name("component10()")));
- (SharedRouteSegmentRideHailing * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (SharedRouteSegmentDisruption * _Nullable)component14 __attribute__((swift_name("component14()")));
- (SharedRouteSegmentMode *)component2 __attribute__((swift_name("component2()")));
- (SharedLocation *)component3 __attribute__((swift_name("component3()")));
- (SharedLocation *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (SharedRouteSegmentTransit * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedRouteSegmentWalking * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedRouteSegment *)doCopyId:(NSString *)id mode:(SharedRouteSegmentMode *)mode start:(SharedLocation *)start end:(SharedLocation *)end startTime:(NSString *)startTime endTime:(NSString *)endTime shape:(NSString *)shape transit:(SharedRouteSegmentTransit * _Nullable)transit walking:(SharedRouteSegmentWalking * _Nullable)walking sharing:(SharedRouteSegmentSharing * _Nullable)sharing rideHailing:(SharedRouteSegmentRideHailing * _Nullable)rideHailing fareId:(NSString * _Nullable)fareId transportGroup:(NSString * _Nullable)transportGroup disruption:(SharedRouteSegmentDisruption * _Nullable)disruption __attribute__((swift_name("doCopy(id:mode:start:end:startTime:endTime:shape:transit:walking:sharing:rideHailing:fareId:transportGroup:disruption:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRouteSegmentDisruption * _Nullable disruption __attribute__((swift_name("disruption")));
@property (readonly) SharedLocation *end __attribute__((swift_name("end")));
@property (readonly) NSString *endTime __attribute__((swift_name("endTime")));
@property (readonly) NSString * _Nullable fareId __attribute__((swift_name("fareId")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedRouteSegmentMode *mode __attribute__((swift_name("mode")));
@property (readonly) SharedRouteSegmentRideHailing * _Nullable rideHailing __attribute__((swift_name("rideHailing")));
@property (readonly) NSString *shape __attribute__((swift_name("shape")));
@property (readonly) SharedRouteSegmentSharing * _Nullable sharing __attribute__((swift_name("sharing")));
@property (readonly) SharedLocation *start __attribute__((swift_name("start")));
@property (readonly) NSString *startTime __attribute__((swift_name("startTime")));
@property (readonly) SharedRouteSegmentTransit * _Nullable transit __attribute__((swift_name("transit")));
@property (readonly) NSString * _Nullable transportGroup __attribute__((swift_name("transportGroup")));
@property (readonly) SharedRouteSegmentWalking * _Nullable walking __attribute__((swift_name("walking")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegment.Companion")))
@interface SharedRouteSegmentCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegment.Mode")))
@interface SharedRouteSegmentMode : SharedKotlinEnum<SharedRouteSegmentMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedRouteSegmentMode *transit __attribute__((swift_name("transit")));
@property (class, readonly) SharedRouteSegmentMode *rideHailing __attribute__((swift_name("rideHailing")));
@property (class, readonly) SharedRouteSegmentMode *sharing __attribute__((swift_name("sharing")));
@property (class, readonly) SharedRouteSegmentMode *walking __attribute__((swift_name("walking")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegment.ModeSerializer")))
@interface SharedRouteSegmentModeSerializer : SharedCommonEnumSerializer<SharedRouteSegmentMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegmentDisruption")))
@interface SharedRouteSegmentDisruption : SharedBase
- (instancetype)initWithSeverity:(SharedRouteSegmentDisruptionSeverity *)severity __attribute__((swift_name("init(severity:)"))) __attribute__((objc_designated_initializer));
- (SharedRouteSegmentDisruptionSeverity *)component1 __attribute__((swift_name("component1()")));
- (SharedRouteSegmentDisruption *)doCopySeverity:(SharedRouteSegmentDisruptionSeverity *)severity __attribute__((swift_name("doCopy(severity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedRouteSegmentDisruptionSeverity *severity __attribute__((swift_name("severity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegmentDisruption.Companion")))
@interface SharedRouteSegmentDisruptionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegmentDisruption.Severity")))
@interface SharedRouteSegmentDisruptionSeverity : SharedKotlinEnum<SharedRouteSegmentDisruptionSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedRouteSegmentDisruptionSeverity *notAffected __attribute__((swift_name("notAffected")));
@property (class, readonly) SharedRouteSegmentDisruptionSeverity *information __attribute__((swift_name("information")));
@property (class, readonly) SharedRouteSegmentDisruptionSeverity *warning __attribute__((swift_name("warning")));
@property (class, readonly) SharedRouteSegmentDisruptionSeverity *alert __attribute__((swift_name("alert")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegmentDisruption.SeveritySerializer")))
@interface SharedRouteSegmentDisruptionSeveritySerializer : SharedCommonEnumSerializer<SharedRouteSegmentDisruptionSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegmentRideHailing")))
@interface SharedRouteSegmentRideHailing : SharedBase
- (instancetype)initWithPickupTime:(NSString *)pickupTime product:(SharedRideHailingProduct * _Nullable)product provider:(SharedProvider * _Nullable)provider drivingInfo:(SharedDrivingInfo * _Nullable)drivingInfo __attribute__((swift_name("init(pickupTime:product:provider:drivingInfo:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedRideHailingProduct * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedProvider * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedDrivingInfo * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedRouteSegmentRideHailing *)doCopyPickupTime:(NSString *)pickupTime product:(SharedRideHailingProduct * _Nullable)product provider:(SharedProvider * _Nullable)provider drivingInfo:(SharedDrivingInfo * _Nullable)drivingInfo __attribute__((swift_name("doCopy(pickupTime:product:provider:drivingInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDrivingInfo * _Nullable drivingInfo __attribute__((swift_name("drivingInfo")));
@property (readonly) NSString *pickupTime __attribute__((swift_name("pickupTime")));
@property (readonly) SharedRideHailingProduct * _Nullable product __attribute__((swift_name("product")));
@property (readonly) SharedProvider * _Nullable provider __attribute__((swift_name("provider")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegmentRideHailing.Companion")))
@interface SharedRouteSegmentRideHailingCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegmentSharing")))
@interface SharedRouteSegmentSharing : SharedBase
- (instancetype)initWithDistance:(SharedDistance *)distance startStation:(SharedStation * _Nullable)startStation vehicle:(SharedSharedVehicle * _Nullable)vehicle endParkingSpot:(SharedParkingSpot * _Nullable)endParkingSpot endStation:(SharedStation * _Nullable)endStation provider:(SharedProvider * _Nullable)provider drivingInfo:(SharedDrivingInfo * _Nullable)drivingInfo __attribute__((swift_name("init(distance:startStation:vehicle:endParkingSpot:endStation:provider:drivingInfo:)"))) __attribute__((objc_designated_initializer));
- (SharedDistance *)component1 __attribute__((swift_name("component1()")));
- (SharedStation * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedSharedVehicle * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedParkingSpot * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedStation * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedProvider * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedDrivingInfo * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedRouteSegmentSharing *)doCopyDistance:(SharedDistance *)distance startStation:(SharedStation * _Nullable)startStation vehicle:(SharedSharedVehicle * _Nullable)vehicle endParkingSpot:(SharedParkingSpot * _Nullable)endParkingSpot endStation:(SharedStation * _Nullable)endStation provider:(SharedProvider * _Nullable)provider drivingInfo:(SharedDrivingInfo * _Nullable)drivingInfo __attribute__((swift_name("doCopy(distance:startStation:vehicle:endParkingSpot:endStation:provider:drivingInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDistance *distance __attribute__((swift_name("distance")));
@property (readonly) SharedDrivingInfo * _Nullable drivingInfo __attribute__((swift_name("drivingInfo")));
@property (readonly) SharedParkingSpot * _Nullable endParkingSpot __attribute__((swift_name("endParkingSpot")));
@property (readonly) SharedStation * _Nullable endStation __attribute__((swift_name("endStation")));
@property (readonly) SharedProvider * _Nullable provider __attribute__((swift_name("provider")));
@property (readonly) SharedStation * _Nullable startStation __attribute__((swift_name("startStation")));
@property (readonly) SharedSharedVehicle * _Nullable vehicle __attribute__((swift_name("vehicle")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegmentSharing.Companion")))
@interface SharedRouteSegmentSharingCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegmentStop")))
@interface SharedRouteSegmentStop : SharedBase
- (instancetype)initWithStop:(SharedStop *)stop __attribute__((swift_name("init(stop:)"))) __attribute__((objc_designated_initializer));
- (SharedStop *)component1 __attribute__((swift_name("component1()")));
- (SharedRouteSegmentStop *)doCopyStop:(SharedStop *)stop __attribute__((swift_name("doCopy(stop:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedStop *stop __attribute__((swift_name("stop")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegmentStop.Companion")))
@interface SharedRouteSegmentStopCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegmentTransit")))
@interface SharedRouteSegmentTransit : SharedBase
- (instancetype)initWithSchedule:(SharedSchedule *)schedule track:(SharedTrack *)track stops:(NSArray<SharedRouteSegmentStop *> *)stops exactAlternativeDepartures:(NSArray<SharedRouteExactDeparture *> *)exactAlternativeDepartures alternatives:(NSArray<SharedTransitAlternative *> *)alternatives exactDeparture:(SharedRouteExactDeparture * _Nullable)exactDeparture intervalDeparture:(SharedRouteIntervalDeparture * _Nullable)intervalDeparture __attribute__((swift_name("init(schedule:track:stops:exactAlternativeDepartures:alternatives:exactDeparture:intervalDeparture:)"))) __attribute__((objc_designated_initializer));
- (SharedSchedule *)component1 __attribute__((swift_name("component1()")));
- (SharedTrack *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedRouteSegmentStop *> *)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedRouteExactDeparture *> *)component4 __attribute__((swift_name("component4()")));
- (NSArray<SharedTransitAlternative *> *)component5 __attribute__((swift_name("component5()")));
- (SharedRouteExactDeparture * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedRouteIntervalDeparture * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedRouteSegmentTransit *)doCopySchedule:(SharedSchedule *)schedule track:(SharedTrack *)track stops:(NSArray<SharedRouteSegmentStop *> *)stops exactAlternativeDepartures:(NSArray<SharedRouteExactDeparture *> *)exactAlternativeDepartures alternatives:(NSArray<SharedTransitAlternative *> *)alternatives exactDeparture:(SharedRouteExactDeparture * _Nullable)exactDeparture intervalDeparture:(SharedRouteIntervalDeparture * _Nullable)intervalDeparture __attribute__((swift_name("doCopy(schedule:track:stops:exactAlternativeDepartures:alternatives:exactDeparture:intervalDeparture:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedTransitAlternative *> *alternatives __attribute__((swift_name("alternatives")));
@property (readonly) NSArray<SharedRouteExactDeparture *> *exactAlternativeDepartures __attribute__((swift_name("exactAlternativeDepartures")));
@property (readonly) SharedRouteExactDeparture * _Nullable exactDeparture __attribute__((swift_name("exactDeparture")));
@property (readonly) SharedRouteIntervalDeparture * _Nullable intervalDeparture __attribute__((swift_name("intervalDeparture")));
@property (readonly) SharedSchedule *schedule __attribute__((swift_name("schedule")));
@property (readonly) NSArray<SharedRouteSegmentStop *> *stops __attribute__((swift_name("stops")));
@property (readonly) SharedTrack *track __attribute__((swift_name("track")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegmentTransit.Companion")))
@interface SharedRouteSegmentTransitCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegmentWalking")))
@interface SharedRouteSegmentWalking : SharedBase
- (instancetype)initWithDistance:(SharedDistance *)distance paths:(NSArray<SharedWalkingPath *> *)paths __attribute__((swift_name("init(distance:paths:)"))) __attribute__((objc_designated_initializer));
- (SharedDistance *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedWalkingPath *> *)component2 __attribute__((swift_name("component2()")));
- (SharedRouteSegmentWalking *)doCopyDistance:(SharedDistance *)distance paths:(NSArray<SharedWalkingPath *> *)paths __attribute__((swift_name("doCopy(distance:paths:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDistance *distance __attribute__((swift_name("distance")));
@property (readonly) NSArray<SharedWalkingPath *> *paths __attribute__((swift_name("paths")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RouteSegmentWalking.Companion")))
@interface SharedRouteSegmentWalkingCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoutesResult")))
@interface SharedRoutesResult : SharedBase
- (instancetype)initWithId:(NSString *)id now:(NSString *)now routes:(NSArray<SharedRoute *> *)routes groups:(NSArray<SharedGroup *> * _Nullable)groups __attribute__((swift_name("init(id:now:routes:groups:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedRoute *> *)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedGroup *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedRoutesResult *)doCopyId:(NSString *)id now:(NSString *)now routes:(NSArray<SharedRoute *> *)routes groups:(NSArray<SharedGroup *> * _Nullable)groups __attribute__((swift_name("doCopy(id:now:routes:groups:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedGroup *> * _Nullable groups __attribute__((swift_name("groups")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *now __attribute__((swift_name("now")));
@property (readonly) NSArray<SharedRoute *> *routes __attribute__((swift_name("routes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoutesResult.Companion")))
@interface SharedRoutesResultCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Schedule")))
@interface SharedSchedule : SharedBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name color:(NSString *)color transportId:(NSString *)transportId longName:(NSString * _Nullable)longName textColor:(NSString * _Nullable)textColor transportType:(NSString * _Nullable)transportType __attribute__((swift_name("init(id:name:color:transportId:longName:textColor:transportType:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedSchedule *)doCopyId:(NSString *)id name:(NSString *)name color:(NSString *)color transportId:(NSString *)transportId longName:(NSString * _Nullable)longName textColor:(NSString * _Nullable)textColor transportType:(NSString * _Nullable)transportType __attribute__((swift_name("doCopy(id:name:color:transportId:longName:textColor:transportType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *color __attribute__((swift_name("color")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable longName __attribute__((swift_name("longName")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable textColor __attribute__((swift_name("textColor")));
@property (readonly) NSString *transportId __attribute__((swift_name("transportId")));
@property (readonly) NSString * _Nullable transportType __attribute__((swift_name("transportType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Schedule.Companion")))
@interface SharedScheduleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleAtStop")))
@interface SharedScheduleAtStop : SharedBase
- (instancetype)initWithTransportId:(NSString *)transportId name:(NSString *)name color:(NSString *)color textColor:(NSString * _Nullable)textColor __attribute__((swift_name("init(transportId:name:color:textColor:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedScheduleAtStop *)doCopyTransportId:(NSString *)transportId name:(NSString *)name color:(NSString *)color textColor:(NSString * _Nullable)textColor __attribute__((swift_name("doCopy(transportId:name:color:textColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *color __attribute__((swift_name("color")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable textColor __attribute__((swift_name("textColor")));
@property (readonly) NSString *transportId __attribute__((swift_name("transportId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleAtStop.Companion")))
@interface SharedScheduleAtStopCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleWithDepartures")))
@interface SharedScheduleWithDepartures : SharedBase
- (instancetype)initWithSchedule:(SharedSchedule *)schedule trackDepartures:(NSArray<SharedTrackWithDepartures *> *)trackDepartures __attribute__((swift_name("init(schedule:trackDepartures:)"))) __attribute__((objc_designated_initializer));
- (SharedSchedule *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedTrackWithDepartures *> *)component2 __attribute__((swift_name("component2()")));
- (SharedScheduleWithDepartures *)doCopySchedule:(SharedSchedule *)schedule trackDepartures:(NSArray<SharedTrackWithDepartures *> *)trackDepartures __attribute__((swift_name("doCopy(schedule:trackDepartures:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedSchedule *schedule __attribute__((swift_name("schedule")));
@property (readonly) NSArray<SharedTrackWithDepartures *> *trackDepartures __attribute__((swift_name("trackDepartures")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleWithDepartures.Companion")))
@interface SharedScheduleWithDeparturesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleWithDeparturesByDestination")))
@interface SharedScheduleWithDeparturesByDestination : SharedBase
- (instancetype)initWithSchedule:(SharedSchedule *)schedule destinationDepartures:(NSArray<SharedDestinationWithDepartures *> *)destinationDepartures __attribute__((swift_name("init(schedule:destinationDepartures:)"))) __attribute__((objc_designated_initializer));
- (SharedSchedule *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedDestinationWithDepartures *> *)component2 __attribute__((swift_name("component2()")));
- (SharedScheduleWithDeparturesByDestination *)doCopySchedule:(SharedSchedule *)schedule destinationDepartures:(NSArray<SharedDestinationWithDepartures *> *)destinationDepartures __attribute__((swift_name("doCopy(schedule:destinationDepartures:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedDestinationWithDepartures *> *destinationDepartures __attribute__((swift_name("destinationDepartures")));
@property (readonly) SharedSchedule *schedule __attribute__((swift_name("schedule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleWithDeparturesByDestination.Companion")))
@interface SharedScheduleWithDeparturesByDestinationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleWithStopWithDepartures")))
@interface SharedScheduleWithStopWithDepartures : SharedBase
- (instancetype)initWithSchedule:(SharedSchedule *)schedule stop:(SharedStop *)stop now:(NSString *)now extendedExactDepartures:(NSArray<SharedExtendedExactDeparture *> *)extendedExactDepartures extendedIntervalDepartures:(NSArray<SharedExtendedIntervalDeparture *> *)extendedIntervalDepartures track:(SharedTrack * _Nullable)track __attribute__((swift_name("init(schedule:stop:now:extendedExactDepartures:extendedIntervalDepartures:track:)"))) __attribute__((objc_designated_initializer));
- (SharedSchedule *)component1 __attribute__((swift_name("component1()")));
- (SharedStop *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedExtendedExactDeparture *> *)component4 __attribute__((swift_name("component4()")));
- (NSArray<SharedExtendedIntervalDeparture *> *)component5 __attribute__((swift_name("component5()")));
- (SharedTrack * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedScheduleWithStopWithDepartures *)doCopySchedule:(SharedSchedule *)schedule stop:(SharedStop *)stop now:(NSString *)now extendedExactDepartures:(NSArray<SharedExtendedExactDeparture *> *)extendedExactDepartures extendedIntervalDepartures:(NSArray<SharedExtendedIntervalDeparture *> *)extendedIntervalDepartures track:(SharedTrack * _Nullable)track __attribute__((swift_name("doCopy(schedule:stop:now:extendedExactDepartures:extendedIntervalDepartures:track:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedExtendedExactDeparture *> *extendedExactDepartures __attribute__((swift_name("extendedExactDepartures")));
@property (readonly) NSArray<SharedExtendedIntervalDeparture *> *extendedIntervalDepartures __attribute__((swift_name("extendedIntervalDepartures")));
@property (readonly) NSString *now __attribute__((swift_name("now")));
@property (readonly) SharedSchedule *schedule __attribute__((swift_name("schedule")));
@property (readonly) SharedStop *stop __attribute__((swift_name("stop")));
@property (readonly) SharedTrack * _Nullable track __attribute__((swift_name("track")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleWithStopWithDepartures.Companion")))
@interface SharedScheduleWithStopWithDeparturesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleWithStopWithTimes")))
@interface SharedScheduleWithStopWithTimes : SharedBase
- (instancetype)initWithSchedule:(SharedSchedule *)schedule stop:(SharedStop *)stop timetable:(NSArray<SharedTimes *> *)timetable track:(SharedTrack * _Nullable)track __attribute__((swift_name("init(schedule:stop:timetable:track:)"))) __attribute__((objc_designated_initializer));
- (SharedSchedule *)component1 __attribute__((swift_name("component1()")));
- (SharedStop *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedTimes *> *)component3 __attribute__((swift_name("component3()")));
- (SharedTrack * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedScheduleWithStopWithTimes *)doCopySchedule:(SharedSchedule *)schedule stop:(SharedStop *)stop timetable:(NSArray<SharedTimes *> *)timetable track:(SharedTrack * _Nullable)track __attribute__((swift_name("doCopy(schedule:stop:timetable:track:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedSchedule *schedule __attribute__((swift_name("schedule")));
@property (readonly) SharedStop *stop __attribute__((swift_name("stop")));
@property (readonly) NSArray<SharedTimes *> *timetable __attribute__((swift_name("timetable")));
@property (readonly) SharedTrack * _Nullable track __attribute__((swift_name("track")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleWithStopWithTimes.Companion")))
@interface SharedScheduleWithStopWithTimesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleWithStops")))
@interface SharedScheduleWithStops : SharedBase
- (instancetype)initWithSchedule:(SharedSchedule *)schedule tracks:(NSArray<SharedTrackWithStops *> *)tracks __attribute__((swift_name("init(schedule:tracks:)"))) __attribute__((objc_designated_initializer));
- (SharedSchedule *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedTrackWithStops *> *)component2 __attribute__((swift_name("component2()")));
- (SharedScheduleWithStops *)doCopySchedule:(SharedSchedule *)schedule tracks:(NSArray<SharedTrackWithStops *> *)tracks __attribute__((swift_name("doCopy(schedule:tracks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedSchedule *schedule __attribute__((swift_name("schedule")));
@property (readonly) NSArray<SharedTrackWithStops *> *tracks __attribute__((swift_name("tracks")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleWithStops.Companion")))
@interface SharedScheduleWithStopsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleWithTracks")))
@interface SharedScheduleWithTracks : SharedBase
- (instancetype)initWithSchedule:(SharedSchedule *)schedule tracks:(NSArray<SharedTrack *> *)tracks __attribute__((swift_name("init(schedule:tracks:)"))) __attribute__((objc_designated_initializer));
- (SharedSchedule *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedTrack *> *)component2 __attribute__((swift_name("component2()")));
- (SharedScheduleWithTracks *)doCopySchedule:(SharedSchedule *)schedule tracks:(NSArray<SharedTrack *> *)tracks __attribute__((swift_name("doCopy(schedule:tracks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedSchedule *schedule __attribute__((swift_name("schedule")));
@property (readonly) NSArray<SharedTrack *> *tracks __attribute__((swift_name("tracks")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScheduleWithTracks.Companion")))
@interface SharedScheduleWithTracksCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SchedulesAndStops")))
@interface SharedSchedulesAndStops : SharedBase
- (instancetype)initWithSchedules:(NSArray<SharedSchedule *> *)schedules stopsWithSchedules:(NSArray<SharedStopWithSchedules *> *)stopsWithSchedules __attribute__((swift_name("init(schedules:stopsWithSchedules:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedSchedule *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedStopWithSchedules *> *)component2 __attribute__((swift_name("component2()")));
- (SharedSchedulesAndStops *)doCopySchedules:(NSArray<SharedSchedule *> *)schedules stopsWithSchedules:(NSArray<SharedStopWithSchedules *> *)stopsWithSchedules __attribute__((swift_name("doCopy(schedules:stopsWithSchedules:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedSchedule *> *schedules __attribute__((swift_name("schedules")));
@property (readonly) NSArray<SharedStopWithSchedules *> *stopsWithSchedules __attribute__((swift_name("stopsWithSchedules")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SchedulesAndStops.Companion")))
@interface SharedSchedulesAndStopsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionStatusInfo")))
@interface SharedSessionStatusInfo : SharedBase
- (instancetype)initWithFailReason:(NSString * _Nullable)failReason failReasonTranslationKey:(NSString * _Nullable)failReasonTranslationKey __attribute__((swift_name("init(failReason:failReasonTranslationKey:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedSessionStatusInfo *)doCopyFailReason:(NSString * _Nullable)failReason failReasonTranslationKey:(NSString * _Nullable)failReasonTranslationKey __attribute__((swift_name("doCopy(failReason:failReasonTranslationKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable failReason __attribute__((swift_name("failReason")));
@property (readonly) NSString * _Nullable failReasonTranslationKey __attribute__((swift_name("failReasonTranslationKey")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SessionStatusInfo.Companion")))
@interface SharedSessionStatusInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedVehicle")))
@interface SharedSharedVehicle : SharedBase
- (instancetype)initWithId:(NSString *)id providerId:(NSString *)providerId location:(SharedLocation *)location imageUrls:(NSArray<NSString *> *)imageUrls tags:(NSArray<NSString *> *)tags deepLinks:(NSArray<SharedLocalizedDeepLink *> *)deepLinks name:(NSString * _Nullable)name vehicleType:(SharedSharedVehicleVehicleType * _Nullable)vehicleType vehicleSubtype:(NSString * _Nullable)vehicleSubtype licencePlate:(NSString * _Nullable)licencePlate pricing:(SharedSharingPricingInfo * _Nullable)pricing iconUrl:(NSString * _Nullable)iconUrl battery:(SharedBattery * _Nullable)battery fuel:(SharedFuel * _Nullable)fuel rangeRemaining:(SharedInt * _Nullable)rangeRemaining stationId:(NSString * _Nullable)stationId ext:(NSDictionary<NSString *, NSString *> * _Nullable)ext __attribute__((swift_name("init(id:providerId:location:imageUrls:tags:deepLinks:name:vehicleType:vehicleSubtype:licencePlate:pricing:iconUrl:battery:fuel:rangeRemaining:stationId:ext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (SharedSharingPricingInfo * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (SharedBattery * _Nullable)component13 __attribute__((swift_name("component13()")));
- (SharedFuel * _Nullable)component14 __attribute__((swift_name("component14()")));
- (SharedInt * _Nullable)component15 __attribute__((swift_name("component15()")));
- (NSString * _Nullable)component16 __attribute__((swift_name("component16()")));
- (NSDictionary<NSString *, NSString *> * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedLocation *)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> *)component4 __attribute__((swift_name("component4()")));
- (NSArray<NSString *> *)component5 __attribute__((swift_name("component5()")));
- (NSArray<SharedLocalizedDeepLink *> *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedSharedVehicleVehicleType * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedSharedVehicle *)doCopyId:(NSString *)id providerId:(NSString *)providerId location:(SharedLocation *)location imageUrls:(NSArray<NSString *> *)imageUrls tags:(NSArray<NSString *> *)tags deepLinks:(NSArray<SharedLocalizedDeepLink *> *)deepLinks name:(NSString * _Nullable)name vehicleType:(SharedSharedVehicleVehicleType * _Nullable)vehicleType vehicleSubtype:(NSString * _Nullable)vehicleSubtype licencePlate:(NSString * _Nullable)licencePlate pricing:(SharedSharingPricingInfo * _Nullable)pricing iconUrl:(NSString * _Nullable)iconUrl battery:(SharedBattery * _Nullable)battery fuel:(SharedFuel * _Nullable)fuel rangeRemaining:(SharedInt * _Nullable)rangeRemaining stationId:(NSString * _Nullable)stationId ext:(NSDictionary<NSString *, NSString *> * _Nullable)ext __attribute__((swift_name("doCopy(id:providerId:location:imageUrls:tags:deepLinks:name:vehicleType:vehicleSubtype:licencePlate:pricing:iconUrl:battery:fuel:rangeRemaining:stationId:ext:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedBattery * _Nullable battery __attribute__((swift_name("battery")));
@property (readonly) NSArray<SharedLocalizedDeepLink *> *deepLinks __attribute__((swift_name("deepLinks")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable ext __attribute__((swift_name("ext")));
@property (readonly) SharedFuel * _Nullable fuel __attribute__((swift_name("fuel")));
@property (readonly) NSString * _Nullable iconUrl __attribute__((swift_name("iconUrl")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSArray<NSString *> *imageUrls __attribute__((swift_name("imageUrls")));
@property (readonly) NSString * _Nullable licencePlate __attribute__((swift_name("licencePlate")));
@property (readonly) SharedLocation *location __attribute__((swift_name("location")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) SharedSharingPricingInfo * _Nullable pricing __attribute__((swift_name("pricing")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedInt * _Nullable rangeRemaining __attribute__((swift_name("rangeRemaining")));
@property (readonly) NSString * _Nullable stationId __attribute__((swift_name("stationId")));
@property (readonly) NSArray<NSString *> *tags __attribute__((swift_name("tags")));
@property (readonly) NSString * _Nullable vehicleSubtype __attribute__((swift_name("vehicleSubtype")));
@property (readonly) SharedSharedVehicleVehicleType * _Nullable vehicleType __attribute__((swift_name("vehicleType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedVehicle.Companion")))
@interface SharedSharedVehicleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedVehicle.VehicleType")))
@interface SharedSharedVehicleVehicleType : SharedKotlinEnum<SharedSharedVehicleVehicleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSharedVehicleVehicleType *car __attribute__((swift_name("car")));
@property (class, readonly) SharedSharedVehicleVehicleType *bicycle __attribute__((swift_name("bicycle")));
@property (class, readonly) SharedSharedVehicleVehicleType *scooter __attribute__((swift_name("scooter")));
@property (class, readonly) SharedSharedVehicleVehicleType *kickScooter __attribute__((swift_name("kickScooter")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedVehicle.VehicleTypeSerializer")))
@interface SharedSharedVehicleVehicleTypeSerializer : SharedCommonEnumSerializer<SharedSharedVehicleVehicleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedVehicleWithDirections")))
@interface SharedSharedVehicleWithDirections : SharedBase
- (instancetype)initWithVehicle:(SharedSharedVehicle *)vehicle directions:(SharedPath *)directions __attribute__((swift_name("init(vehicle:directions:)"))) __attribute__((objc_designated_initializer));
- (SharedSharedVehicle *)component1 __attribute__((swift_name("component1()")));
- (SharedPath *)component2 __attribute__((swift_name("component2()")));
- (SharedSharedVehicleWithDirections *)doCopyVehicle:(SharedSharedVehicle *)vehicle directions:(SharedPath *)directions __attribute__((swift_name("doCopy(vehicle:directions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedPath *directions __attribute__((swift_name("directions")));
@property (readonly) SharedSharedVehicle *vehicle __attribute__((swift_name("vehicle")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedVehicleWithDirections.Companion")))
@interface SharedSharedVehicleWithDirectionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedVehiclesAndDirectionsResponse")))
@interface SharedSharedVehiclesAndDirectionsResponse : SharedBase
- (instancetype)initWithVehicles:(NSArray<SharedSharedVehicleWithDirections *> *)vehicles __attribute__((swift_name("init(vehicles:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedSharedVehicleWithDirections *> *)component1 __attribute__((swift_name("component1()")));
- (SharedSharedVehiclesAndDirectionsResponse *)doCopyVehicles:(NSArray<SharedSharedVehicleWithDirections *> *)vehicles __attribute__((swift_name("doCopy(vehicles:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedSharedVehicleWithDirections *> *vehicles __attribute__((swift_name("vehicles")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedVehiclesAndDirectionsResponse.Companion")))
@interface SharedSharedVehiclesAndDirectionsResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedVehiclesResponse")))
@interface SharedSharedVehiclesResponse : SharedBase
- (instancetype)initWithVehicles:(NSArray<SharedSharedVehicle *> *)vehicles __attribute__((swift_name("init(vehicles:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedSharedVehicle *> *)component1 __attribute__((swift_name("component1()")));
- (SharedSharedVehiclesResponse *)doCopyVehicles:(NSArray<SharedSharedVehicle *> *)vehicles __attribute__((swift_name("doCopy(vehicles:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedSharedVehicle *> *vehicles __attribute__((swift_name("vehicles")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharedVehiclesResponse.Companion")))
@interface SharedSharedVehiclesResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingAllowedAction")))
@interface SharedSharingAllowedAction : SharedBase
- (instancetype)initWithAction:(SharedSharingAllowedActionAction *)action bookingStatus:(SharedSharingAllowedActionBookingStatus * _Nullable)bookingStatus __attribute__((swift_name("init(action:bookingStatus:)"))) __attribute__((objc_designated_initializer));
- (SharedSharingAllowedActionAction *)component1 __attribute__((swift_name("component1()")));
- (SharedSharingAllowedActionBookingStatus * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedSharingAllowedAction *)doCopyAction:(SharedSharingAllowedActionAction *)action bookingStatus:(SharedSharingAllowedActionBookingStatus * _Nullable)bookingStatus __attribute__((swift_name("doCopy(action:bookingStatus:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedSharingAllowedActionAction *action __attribute__((swift_name("action")));
@property (readonly) SharedSharingAllowedActionBookingStatus * _Nullable bookingStatus __attribute__((swift_name("bookingStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingAllowedAction.Action")))
@interface SharedSharingAllowedActionAction : SharedKotlinEnum<SharedSharingAllowedActionAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSharingAllowedActionAction *reserve __attribute__((swift_name("reserve")));
@property (class, readonly) SharedSharingAllowedActionAction *lease __attribute__((swift_name("lease")));
@property (class, readonly) SharedSharingAllowedActionAction *finish __attribute__((swift_name("finish")));
@property (class, readonly) SharedSharingAllowedActionAction *cancel __attribute__((swift_name("cancel")));
@property (class, readonly) SharedSharingAllowedActionAction *pause __attribute__((swift_name("pause")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingAllowedAction.ActionSerializer")))
@interface SharedSharingAllowedActionActionSerializer : SharedCommonEnumSerializer<SharedSharingAllowedActionAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingAllowedAction.BookingStatus")))
@interface SharedSharingAllowedActionBookingStatus : SharedKotlinEnum<SharedSharingAllowedActionBookingStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSharingAllowedActionBookingStatus *reserved __attribute__((swift_name("reserved")));
@property (class, readonly) SharedSharingAllowedActionBookingStatus *leased __attribute__((swift_name("leased")));
@property (class, readonly) SharedSharingAllowedActionBookingStatus *finished __attribute__((swift_name("finished")));
@property (class, readonly) SharedSharingAllowedActionBookingStatus *canceled __attribute__((swift_name("canceled")));
@property (class, readonly) SharedSharingAllowedActionBookingStatus *paused __attribute__((swift_name("paused")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingAllowedAction.BookingStatusSerializer")))
@interface SharedSharingAllowedActionBookingStatusSerializer : SharedCommonEnumSerializer<SharedSharingAllowedActionBookingStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingAllowedAction.Companion")))
@interface SharedSharingAllowedActionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingBooking")))
@interface SharedSharingBooking : SharedBase
- (instancetype)initWithId:(NSString *)id providerId:(NSString *)providerId status:(SharedSharingBookingStatus *)status price:(double)price currency:(NSString *)currency fuelCards:(NSArray<SharedFuelCard *> *)fuelCards provider:(SharedProvider * _Nullable)provider timeRemaining:(SharedDuration * _Nullable)timeRemaining timeElapsed:(SharedDuration * _Nullable)timeElapsed timePaused:(SharedDuration * _Nullable)timePaused createdAt:(NSString * _Nullable)createdAt leasedAt:(NSString * _Nullable)leasedAt finishedAt:(NSString * _Nullable)finishedAt start:(SharedLocation * _Nullable)start end:(SharedLocation * _Nullable)end vehicle:(SharedSharedVehicle * _Nullable)vehicle unlockInfo:(SharedUnlockInfo * _Nullable)unlockInfo notificationSettings:(SharedNotificationSettings * _Nullable)notificationSettings priceBreakdown:(SharedPriceBreakdown * _Nullable)priceBreakdown purchaseBreakdown:(SharedPurchaseBreakdown * _Nullable)purchaseBreakdown distanceMeters:(SharedInt * _Nullable)distanceMeters ext:(NSDictionary<NSString *, NSString *> * _Nullable)ext __attribute__((swift_name("init(id:providerId:status:price:currency:fuelCards:provider:timeRemaining:timeElapsed:timePaused:createdAt:leasedAt:finishedAt:start:end:vehicle:unlockInfo:notificationSettings:priceBreakdown:purchaseBreakdown:distanceMeters:ext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedDuration * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (SharedLocation * _Nullable)component14 __attribute__((swift_name("component14()")));
- (SharedLocation * _Nullable)component15 __attribute__((swift_name("component15()")));
- (SharedSharedVehicle * _Nullable)component16 __attribute__((swift_name("component16()")));
- (SharedUnlockInfo * _Nullable)component17 __attribute__((swift_name("component17()")));
- (SharedNotificationSettings * _Nullable)component18 __attribute__((swift_name("component18()")));
- (SharedPriceBreakdown * _Nullable)component19 __attribute__((swift_name("component19()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedPurchaseBreakdown * _Nullable)component20 __attribute__((swift_name("component20()")));
- (SharedInt * _Nullable)component21 __attribute__((swift_name("component21()")));
- (NSDictionary<NSString *, NSString *> * _Nullable)component22 __attribute__((swift_name("component22()")));
- (SharedSharingBookingStatus *)component3 __attribute__((swift_name("component3()")));
- (double)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSArray<SharedFuelCard *> *)component6 __attribute__((swift_name("component6()")));
- (SharedProvider * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedDuration * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedDuration * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedSharingBooking *)doCopyId:(NSString *)id providerId:(NSString *)providerId status:(SharedSharingBookingStatus *)status price:(double)price currency:(NSString *)currency fuelCards:(NSArray<SharedFuelCard *> *)fuelCards provider:(SharedProvider * _Nullable)provider timeRemaining:(SharedDuration * _Nullable)timeRemaining timeElapsed:(SharedDuration * _Nullable)timeElapsed timePaused:(SharedDuration * _Nullable)timePaused createdAt:(NSString * _Nullable)createdAt leasedAt:(NSString * _Nullable)leasedAt finishedAt:(NSString * _Nullable)finishedAt start:(SharedLocation * _Nullable)start end:(SharedLocation * _Nullable)end vehicle:(SharedSharedVehicle * _Nullable)vehicle unlockInfo:(SharedUnlockInfo * _Nullable)unlockInfo notificationSettings:(SharedNotificationSettings * _Nullable)notificationSettings priceBreakdown:(SharedPriceBreakdown * _Nullable)priceBreakdown purchaseBreakdown:(SharedPurchaseBreakdown * _Nullable)purchaseBreakdown distanceMeters:(SharedInt * _Nullable)distanceMeters ext:(NSDictionary<NSString *, NSString *> * _Nullable)ext __attribute__((swift_name("doCopy(id:providerId:status:price:currency:fuelCards:provider:timeRemaining:timeElapsed:timePaused:createdAt:leasedAt:finishedAt:start:end:vehicle:unlockInfo:notificationSettings:priceBreakdown:purchaseBreakdown:distanceMeters:ext:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable createdAt __attribute__((swift_name("createdAt")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@property (readonly) SharedInt * _Nullable distanceMeters __attribute__((swift_name("distanceMeters")));
@property (readonly) SharedLocation * _Nullable end __attribute__((swift_name("end")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable ext __attribute__((swift_name("ext")));
@property (readonly) NSString * _Nullable finishedAt __attribute__((swift_name("finishedAt")));
@property (readonly) NSArray<SharedFuelCard *> *fuelCards __attribute__((swift_name("fuelCards")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable leasedAt __attribute__((swift_name("leasedAt")));
@property (readonly) SharedNotificationSettings * _Nullable notificationSettings __attribute__((swift_name("notificationSettings")));
@property (readonly) double price __attribute__((swift_name("price")));
@property (readonly) SharedPriceBreakdown * _Nullable priceBreakdown __attribute__((swift_name("priceBreakdown")));
@property (readonly) SharedProvider * _Nullable provider __attribute__((swift_name("provider")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedPurchaseBreakdown * _Nullable purchaseBreakdown __attribute__((swift_name("purchaseBreakdown")));
@property (readonly) SharedLocation * _Nullable start __attribute__((swift_name("start")));
@property (readonly) SharedSharingBookingStatus *status __attribute__((swift_name("status")));
@property (readonly) SharedDuration * _Nullable timeElapsed __attribute__((swift_name("timeElapsed")));
@property (readonly) SharedDuration * _Nullable timePaused __attribute__((swift_name("timePaused")));
@property (readonly) SharedDuration * _Nullable timeRemaining __attribute__((swift_name("timeRemaining")));
@property (readonly) SharedUnlockInfo * _Nullable unlockInfo __attribute__((swift_name("unlockInfo")));
@property (readonly) SharedSharedVehicle * _Nullable vehicle __attribute__((swift_name("vehicle")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingBooking.Companion")))
@interface SharedSharingBookingCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingBooking.Status")))
@interface SharedSharingBookingStatus : SharedKotlinEnum<SharedSharingBookingStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSharingBookingStatus *reserved __attribute__((swift_name("reserved")));
@property (class, readonly) SharedSharingBookingStatus *leased __attribute__((swift_name("leased")));
@property (class, readonly) SharedSharingBookingStatus *finished __attribute__((swift_name("finished")));
@property (class, readonly) SharedSharingBookingStatus *canceled __attribute__((swift_name("canceled")));
@property (class, readonly) SharedSharingBookingStatus *paused __attribute__((swift_name("paused")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingBooking.StatusSerializer")))
@interface SharedSharingBookingStatusSerializer : SharedCommonEnumSerializer<SharedSharingBookingStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingBookingOptions")))
@interface SharedSharingBookingOptions : SharedBase
- (instancetype)initWithAllowedActions:(NSArray<SharedSharingAllowedAction *> *)allowedActions requiresLocationOnCreateBooking:(SharedBoolean * _Nullable)requiresLocationOnCreateBooking requiresLocationOnFinishBooking:(SharedBoolean * _Nullable)requiresLocationOnFinishBooking __attribute__((swift_name("init(allowedActions:requiresLocationOnCreateBooking:requiresLocationOnFinishBooking:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedSharingAllowedAction *> *)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedBoolean * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedSharingBookingOptions *)doCopyAllowedActions:(NSArray<SharedSharingAllowedAction *> *)allowedActions requiresLocationOnCreateBooking:(SharedBoolean * _Nullable)requiresLocationOnCreateBooking requiresLocationOnFinishBooking:(SharedBoolean * _Nullable)requiresLocationOnFinishBooking __attribute__((swift_name("doCopy(allowedActions:requiresLocationOnCreateBooking:requiresLocationOnFinishBooking:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedSharingAllowedAction *> *allowedActions __attribute__((swift_name("allowedActions")));
@property (readonly) SharedBoolean * _Nullable requiresLocationOnCreateBooking __attribute__((swift_name("requiresLocationOnCreateBooking")));
@property (readonly) SharedBoolean * _Nullable requiresLocationOnFinishBooking __attribute__((swift_name("requiresLocationOnFinishBooking")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingBookingOptions.Companion")))
@interface SharedSharingBookingOptionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingBreakdownItem")))
@interface SharedSharingBreakdownItem : SharedBase
- (instancetype)initWithTripDuration:(NSString * _Nullable)tripDuration distanceMeters:(SharedInt * _Nullable)distanceMeters __attribute__((swift_name("init(tripDuration:distanceMeters:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedSharingBreakdownItem *)doCopyTripDuration:(NSString * _Nullable)tripDuration distanceMeters:(SharedInt * _Nullable)distanceMeters __attribute__((swift_name("doCopy(tripDuration:distanceMeters:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedInt * _Nullable distanceMeters __attribute__((swift_name("distanceMeters")));
@property (readonly) NSString * _Nullable tripDuration __attribute__((swift_name("tripDuration")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingBreakdownItem.Companion")))
@interface SharedSharingBreakdownItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingPricing")))
@interface SharedSharingPricing : SharedBase
- (instancetype)initWithMinimum:(SharedDouble * _Nullable)minimum minimumMinutes:(SharedInt * _Nullable)minimumMinutes base:(SharedDouble * _Nullable)base minute:(SharedDouble * _Nullable)minute hour:(SharedDouble * _Nullable)hour day:(SharedDouble * _Nullable)day week:(SharedDouble * _Nullable)week perKilometer:(SharedDouble * _Nullable)perKilometer freeKilometers:(SharedDouble * _Nullable)freeKilometers timeIntervalPrices:(NSArray<SharedTimeIntervalPricing *> * _Nullable)timeIntervalPrices fees:(NSArray<SharedFee *> * _Nullable)fees __attribute__((swift_name("init(minimum:minimumMinutes:base:minute:hour:day:week:perKilometer:freeKilometers:timeIntervalPrices:fees:)"))) __attribute__((objc_designated_initializer));
- (SharedDouble * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedTimeIntervalPricing *> * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSArray<SharedFee *> * _Nullable)component11 __attribute__((swift_name("component11()")));
- (SharedInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedDouble * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedDouble * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedDouble * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedSharingPricing *)doCopyMinimum:(SharedDouble * _Nullable)minimum minimumMinutes:(SharedInt * _Nullable)minimumMinutes base:(SharedDouble * _Nullable)base minute:(SharedDouble * _Nullable)minute hour:(SharedDouble * _Nullable)hour day:(SharedDouble * _Nullable)day week:(SharedDouble * _Nullable)week perKilometer:(SharedDouble * _Nullable)perKilometer freeKilometers:(SharedDouble * _Nullable)freeKilometers timeIntervalPrices:(NSArray<SharedTimeIntervalPricing *> * _Nullable)timeIntervalPrices fees:(NSArray<SharedFee *> * _Nullable)fees __attribute__((swift_name("doCopy(minimum:minimumMinutes:base:minute:hour:day:week:perKilometer:freeKilometers:timeIntervalPrices:fees:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable base __attribute__((swift_name("base")));
@property (readonly) SharedDouble * _Nullable day __attribute__((swift_name("day")));
@property (readonly) NSArray<SharedFee *> * _Nullable fees __attribute__((swift_name("fees")));
@property (readonly) SharedDouble * _Nullable freeKilometers __attribute__((swift_name("freeKilometers")));
@property (readonly) SharedDouble * _Nullable hour __attribute__((swift_name("hour")));
@property (readonly) SharedDouble * _Nullable minimum __attribute__((swift_name("minimum")));
@property (readonly) SharedInt * _Nullable minimumMinutes __attribute__((swift_name("minimumMinutes")));
@property (readonly) SharedDouble * _Nullable minute __attribute__((swift_name("minute")));
@property (readonly) SharedDouble * _Nullable perKilometer __attribute__((swift_name("perKilometer")));
@property (readonly) NSArray<SharedTimeIntervalPricing *> * _Nullable timeIntervalPrices __attribute__((swift_name("timeIntervalPrices")));
@property (readonly) SharedDouble * _Nullable week __attribute__((swift_name("week")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingPricing.Companion")))
@interface SharedSharingPricingCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingPricingInfo")))
@interface SharedSharingPricingInfo : SharedBase
- (instancetype)initWithCurrency:(NSString * _Nullable)currency current:(SharedSharingPricing * _Nullable)current workday:(SharedSharingPricing * _Nullable)workday weekend:(SharedSharingPricing * _Nullable)weekend parking:(SharedSharingPricing * _Nullable)parking feeInfo:(NSArray<SharedFeeInfo *> * _Nullable)feeInfo __attribute__((swift_name("init(currency:current:workday:weekend:parking:feeInfo:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedSharingPricing * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedSharingPricing * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedSharingPricing * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedSharingPricing * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<SharedFeeInfo *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedSharingPricingInfo *)doCopyCurrency:(NSString * _Nullable)currency current:(SharedSharingPricing * _Nullable)current workday:(SharedSharingPricing * _Nullable)workday weekend:(SharedSharingPricing * _Nullable)weekend parking:(SharedSharingPricing * _Nullable)parking feeInfo:(NSArray<SharedFeeInfo *> * _Nullable)feeInfo __attribute__((swift_name("doCopy(currency:current:workday:weekend:parking:feeInfo:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));
@property (readonly) SharedSharingPricing * _Nullable current __attribute__((swift_name("current")));
@property (readonly) NSArray<SharedFeeInfo *> * _Nullable feeInfo __attribute__((swift_name("feeInfo")));
@property (readonly) SharedSharingPricing * _Nullable parking __attribute__((swift_name("parking")));
@property (readonly) SharedSharingPricing * _Nullable weekend __attribute__((swift_name("weekend")));
@property (readonly) SharedSharingPricing * _Nullable workday __attribute__((swift_name("workday")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingPricingInfo.Companion")))
@interface SharedSharingPricingInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingProviderOptions")))
@interface SharedSharingProviderOptions : SharedBase
- (instancetype)initWithVehicleType:(SharedSharingProviderOptionsVehicleType *)vehicleType hasStations:(BOOL)hasStations vehicleSubtype:(NSString * _Nullable)vehicleSubtype booking:(SharedSharingBookingOptions * _Nullable)booking routing:(SharedSharingRoutingOptions * _Nullable)routing vehicleSelection:(SharedSharingVehicleSelectionOptions * _Nullable)vehicleSelection __attribute__((swift_name("init(vehicleType:hasStations:vehicleSubtype:booking:routing:vehicleSelection:)"))) __attribute__((objc_designated_initializer));
- (SharedSharingProviderOptionsVehicleType *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedSharingBookingOptions * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedSharingRoutingOptions * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedSharingVehicleSelectionOptions * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedSharingProviderOptions *)doCopyVehicleType:(SharedSharingProviderOptionsVehicleType *)vehicleType hasStations:(BOOL)hasStations vehicleSubtype:(NSString * _Nullable)vehicleSubtype booking:(SharedSharingBookingOptions * _Nullable)booking routing:(SharedSharingRoutingOptions * _Nullable)routing vehicleSelection:(SharedSharingVehicleSelectionOptions * _Nullable)vehicleSelection __attribute__((swift_name("doCopy(vehicleType:hasStations:vehicleSubtype:booking:routing:vehicleSelection:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedSharingBookingOptions * _Nullable booking __attribute__((swift_name("booking")));
@property (readonly) BOOL hasStations __attribute__((swift_name("hasStations")));
@property (readonly) SharedSharingRoutingOptions * _Nullable routing __attribute__((swift_name("routing")));
@property (readonly) SharedSharingVehicleSelectionOptions * _Nullable vehicleSelection __attribute__((swift_name("vehicleSelection")));
@property (readonly) NSString * _Nullable vehicleSubtype __attribute__((swift_name("vehicleSubtype")));
@property (readonly) SharedSharingProviderOptionsVehicleType *vehicleType __attribute__((swift_name("vehicleType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingProviderOptions.Companion")))
@interface SharedSharingProviderOptionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingProviderOptions.VehicleType")))
@interface SharedSharingProviderOptionsVehicleType : SharedKotlinEnum<SharedSharingProviderOptionsVehicleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSharingProviderOptionsVehicleType *car __attribute__((swift_name("car")));
@property (class, readonly) SharedSharingProviderOptionsVehicleType *bicycle __attribute__((swift_name("bicycle")));
@property (class, readonly) SharedSharingProviderOptionsVehicleType *scooter __attribute__((swift_name("scooter")));
@property (class, readonly) SharedSharingProviderOptionsVehicleType *kickScooter __attribute__((swift_name("kickScooter")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingProviderOptions.VehicleTypeSerializer")))
@interface SharedSharingProviderOptionsVehicleTypeSerializer : SharedCommonEnumSerializer<SharedSharingProviderOptionsVehicleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingRecord")))
@interface SharedSharingRecord : SharedBase
- (instancetype)initWithBookingId:(NSString *)bookingId providerId:(NSString *)providerId trip:(SharedTrip *)trip vehicle:(SharedVehicle *)vehicle payment:(SharedPayment * _Nullable)payment ext:(NSDictionary<NSString *, NSString *> * _Nullable)ext __attribute__((swift_name("init(bookingId:providerId:trip:vehicle:payment:ext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedTrip *)component3 __attribute__((swift_name("component3()")));
- (SharedVehicle *)component4 __attribute__((swift_name("component4()")));
- (SharedPayment * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSDictionary<NSString *, NSString *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedSharingRecord *)doCopyBookingId:(NSString *)bookingId providerId:(NSString *)providerId trip:(SharedTrip *)trip vehicle:(SharedVehicle *)vehicle payment:(SharedPayment * _Nullable)payment ext:(NSDictionary<NSString *, NSString *> * _Nullable)ext __attribute__((swift_name("doCopy(bookingId:providerId:trip:vehicle:payment:ext:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bookingId __attribute__((swift_name("bookingId")));
@property (readonly) NSDictionary<NSString *, NSString *> * _Nullable ext __attribute__((swift_name("ext")));
@property (readonly) SharedPayment * _Nullable payment __attribute__((swift_name("payment")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedTrip *trip __attribute__((swift_name("trip")));
@property (readonly) SharedVehicle *vehicle __attribute__((swift_name("vehicle")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingRecord.Companion")))
@interface SharedSharingRecordCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingRoutingOptions")))
@interface SharedSharingRoutingOptions : SharedBase
- (instancetype)initWithShouldRouteFromStations:(BOOL)shouldRouteFromStations baseDuration:(NSString * _Nullable)baseDuration __attribute__((swift_name("init(shouldRouteFromStations:baseDuration:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedSharingRoutingOptions *)doCopyShouldRouteFromStations:(BOOL)shouldRouteFromStations baseDuration:(NSString * _Nullable)baseDuration __attribute__((swift_name("doCopy(shouldRouteFromStations:baseDuration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable baseDuration __attribute__((swift_name("baseDuration")));
@property (readonly) BOOL shouldRouteFromStations __attribute__((swift_name("shouldRouteFromStations")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingRoutingOptions.Companion")))
@interface SharedSharingRoutingOptionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingVehicleSelectionOptions")))
@interface SharedSharingVehicleSelectionOptions : SharedBase
- (instancetype)initWithByQrCode:(BOOL)byQrCode byManualCodeEntry:(BOOL)byManualCodeEntry __attribute__((swift_name("init(byQrCode:byManualCodeEntry:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (SharedSharingVehicleSelectionOptions *)doCopyByQrCode:(BOOL)byQrCode byManualCodeEntry:(BOOL)byManualCodeEntry __attribute__((swift_name("doCopy(byQrCode:byManualCodeEntry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL byManualCodeEntry __attribute__((swift_name("byManualCodeEntry")));
@property (readonly) BOOL byQrCode __attribute__((swift_name("byQrCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SharingVehicleSelectionOptions.Companion")))
@interface SharedSharingVehicleSelectionOptionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpaceTime")))
@interface SharedSpaceTime : SharedBase
- (instancetype)initWithTime:(NSString *)time location:(SharedLocation * _Nullable)location __attribute__((swift_name("init(time:location:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedLocation * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedSpaceTime *)doCopyTime:(NSString *)time location:(SharedLocation * _Nullable)location __attribute__((swift_name("doCopy(time:location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLocation * _Nullable location __attribute__((swift_name("location")));
@property (readonly) NSString *time __attribute__((swift_name("time")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SpaceTime.Companion")))
@interface SharedSpaceTimeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Station")))
@interface SharedStation : SharedBase
- (instancetype)initWithId:(NSString *)id providerId:(NSString *)providerId location:(SharedLocation *)location vehicleType:(SharedStationVehicleType * _Nullable)vehicleType name:(NSString * _Nullable)name availableVehicles:(SharedInt * _Nullable)availableVehicles freeSpots:(SharedInt * _Nullable)freeSpots isOpen:(SharedBoolean * _Nullable)isOpen __attribute__((swift_name("init(id:providerId:location:vehicleType:name:availableVehicles:freeSpots:isOpen:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedLocation *)component3 __attribute__((swift_name("component3()")));
- (SharedStationVehicleType * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedInt * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedBoolean * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedStation *)doCopyId:(NSString *)id providerId:(NSString *)providerId location:(SharedLocation *)location vehicleType:(SharedStationVehicleType * _Nullable)vehicleType name:(NSString * _Nullable)name availableVehicles:(SharedInt * _Nullable)availableVehicles freeSpots:(SharedInt * _Nullable)freeSpots isOpen:(SharedBoolean * _Nullable)isOpen __attribute__((swift_name("doCopy(id:providerId:location:vehicleType:name:availableVehicles:freeSpots:isOpen:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedInt * _Nullable availableVehicles __attribute__((swift_name("availableVehicles")));
@property (readonly) SharedInt * _Nullable freeSpots __attribute__((swift_name("freeSpots")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedBoolean * _Nullable isOpen __attribute__((swift_name("isOpen")));
@property (readonly) SharedLocation *location __attribute__((swift_name("location")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedStationVehicleType * _Nullable vehicleType __attribute__((swift_name("vehicleType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Station.Companion")))
@interface SharedStationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Station.VehicleType")))
@interface SharedStationVehicleType : SharedKotlinEnum<SharedStationVehicleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedStationVehicleType *car __attribute__((swift_name("car")));
@property (class, readonly) SharedStationVehicleType *bicycle __attribute__((swift_name("bicycle")));
@property (class, readonly) SharedStationVehicleType *scooter __attribute__((swift_name("scooter")));
@property (class, readonly) SharedStationVehicleType *kickScooter __attribute__((swift_name("kickScooter")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Station.VehicleTypeSerializer")))
@interface SharedStationVehicleTypeSerializer : SharedCommonEnumSerializer<SharedStationVehicleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StationWithDirections")))
@interface SharedStationWithDirections : SharedBase
- (instancetype)initWithStation:(SharedStation *)station directions:(SharedPath *)directions __attribute__((swift_name("init(station:directions:)"))) __attribute__((objc_designated_initializer));
- (SharedStation *)component1 __attribute__((swift_name("component1()")));
- (SharedPath *)component2 __attribute__((swift_name("component2()")));
- (SharedStationWithDirections *)doCopyStation:(SharedStation *)station directions:(SharedPath *)directions __attribute__((swift_name("doCopy(station:directions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedPath *directions __attribute__((swift_name("directions")));
@property (readonly) SharedStation *station __attribute__((swift_name("station")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StationWithDirections.Companion")))
@interface SharedStationWithDirectionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StationsResponse")))
@interface SharedStationsResponse : SharedBase
- (instancetype)initWithStations:(NSArray<SharedStation *> *)stations __attribute__((swift_name("init(stations:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedStation *> *)component1 __attribute__((swift_name("component1()")));
- (SharedStationsResponse *)doCopyStations:(NSArray<SharedStation *> *)stations __attribute__((swift_name("doCopy(stations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedStation *> *stations __attribute__((swift_name("stations")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StationsResponse.Companion")))
@interface SharedStationsResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StationsWithDirectionsResponse")))
@interface SharedStationsWithDirectionsResponse : SharedBase
- (instancetype)initWithStations:(NSArray<SharedStationWithDirections *> *)stations __attribute__((swift_name("init(stations:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedStationWithDirections *> *)component1 __attribute__((swift_name("component1()")));
- (SharedStationsWithDirectionsResponse *)doCopyStations:(NSArray<SharedStationWithDirections *> *)stations __attribute__((swift_name("doCopy(stations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedStationWithDirections *> *stations __attribute__((swift_name("stations")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StationsWithDirectionsResponse.Companion")))
@interface SharedStationsWithDirectionsResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Stop")))
@interface SharedStop : SharedBase
- (instancetype)initWithId:(NSString *)id name:(NSString *)name regionId:(NSString *)regionId location:(SharedLatLng *)location type:(SharedStopType *)type exits:(NSArray<SharedStop *> *)exits transportIds:(NSArray<NSString *> *)transportIds address:(NSString * _Nullable)address direction:(NSString * _Nullable)direction parentId:(NSString * _Nullable)parentId zoneId:(NSString * _Nullable)zoneId platformCode:(NSString * _Nullable)platformCode __attribute__((swift_name("init(id:name:regionId:location:type:exits:transportIds:address:direction:parentId:zoneId:platformCode:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (NSString * _Nullable)component11 __attribute__((swift_name("component11()")));
- (NSString * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SharedLatLng *)component4 __attribute__((swift_name("component4()")));
- (SharedStopType *)component5 __attribute__((swift_name("component5()")));
- (NSArray<SharedStop *> *)component6 __attribute__((swift_name("component6()")));
- (NSArray<NSString *> *)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedStop *)doCopyId:(NSString *)id name:(NSString *)name regionId:(NSString *)regionId location:(SharedLatLng *)location type:(SharedStopType *)type exits:(NSArray<SharedStop *> *)exits transportIds:(NSArray<NSString *> *)transportIds address:(NSString * _Nullable)address direction:(NSString * _Nullable)direction parentId:(NSString * _Nullable)parentId zoneId:(NSString * _Nullable)zoneId platformCode:(NSString * _Nullable)platformCode __attribute__((swift_name("doCopy(id:name:regionId:location:type:exits:transportIds:address:direction:parentId:zoneId:platformCode:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable address __attribute__((swift_name("address")));
@property (readonly) NSString * _Nullable direction __attribute__((swift_name("direction")));
@property (readonly) NSArray<SharedStop *> *exits __attribute__((swift_name("exits")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedLatLng *location __attribute__((swift_name("location")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable parentId __attribute__((swift_name("parentId")));
@property (readonly) NSString * _Nullable platformCode __attribute__((swift_name("platformCode")));
@property (readonly) NSString *regionId __attribute__((swift_name("regionId")));
@property (readonly) NSArray<NSString *> *transportIds __attribute__((swift_name("transportIds")));
@property (readonly) SharedStopType *type __attribute__((swift_name("type")));
@property (readonly) NSString * _Nullable zoneId __attribute__((swift_name("zoneId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Stop.Companion")))
@interface SharedStopCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Stop.Type_")))
@interface SharedStopType : SharedKotlinEnum<SharedStopType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedStopType *regular __attribute__((swift_name("regular")));
@property (class, readonly) SharedStopType *exit __attribute__((swift_name("exit")));
@property (class, readonly) SharedStopType *platform __attribute__((swift_name("platform")));
@property (class, readonly) SharedStopType *genericNode __attribute__((swift_name("genericNode")));
@property (class, readonly) SharedStopType *boardingArea __attribute__((swift_name("boardingArea")));
@property (class, readonly) SharedStopType *station __attribute__((swift_name("station")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Stop.Type_Serializer")))
@interface SharedStopTypeSerializer : SharedCommonEnumSerializer<SharedStopType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopWithSchedules")))
@interface SharedStopWithSchedules : SharedBase
- (instancetype)initWithStop:(SharedStop *)stop schedules:(NSArray<SharedSchedule *> *)schedules __attribute__((swift_name("init(stop:schedules:)"))) __attribute__((objc_designated_initializer));
- (SharedStop *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedSchedule *> *)component2 __attribute__((swift_name("component2()")));
- (SharedStopWithSchedules *)doCopyStop:(SharedStop *)stop schedules:(NSArray<SharedSchedule *> *)schedules __attribute__((swift_name("doCopy(stop:schedules:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedSchedule *> *schedules __attribute__((swift_name("schedules")));
@property (readonly) SharedStop *stop __attribute__((swift_name("stop")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopWithSchedules.Companion")))
@interface SharedStopWithSchedulesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopWithSchedulesWithDepartures")))
@interface SharedStopWithSchedulesWithDepartures : SharedBase
- (instancetype)initWithStop:(SharedStop *)stop now:(NSString *)now scheduleDepartures:(NSArray<SharedScheduleWithDepartures *> *)scheduleDepartures __attribute__((swift_name("init(stop:now:scheduleDepartures:)"))) __attribute__((objc_designated_initializer));
- (SharedStop *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedScheduleWithDepartures *> *)component3 __attribute__((swift_name("component3()")));
- (SharedStopWithSchedulesWithDepartures *)doCopyStop:(SharedStop *)stop now:(NSString *)now scheduleDepartures:(NSArray<SharedScheduleWithDepartures *> *)scheduleDepartures __attribute__((swift_name("doCopy(stop:now:scheduleDepartures:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *now __attribute__((swift_name("now")));
@property (readonly) NSArray<SharedScheduleWithDepartures *> *scheduleDepartures __attribute__((swift_name("scheduleDepartures")));
@property (readonly) SharedStop *stop __attribute__((swift_name("stop")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopWithSchedulesWithDepartures.Companion")))
@interface SharedStopWithSchedulesWithDeparturesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopWithSchedulesWithDeparturesByDestination")))
@interface SharedStopWithSchedulesWithDeparturesByDestination : SharedBase
- (instancetype)initWithStop:(SharedStop *)stop now:(NSString *)now scheduleDepartures:(NSArray<SharedScheduleWithDeparturesByDestination *> *)scheduleDepartures __attribute__((swift_name("init(stop:now:scheduleDepartures:)"))) __attribute__((objc_designated_initializer));
- (SharedStop *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedScheduleWithDeparturesByDestination *> *)component3 __attribute__((swift_name("component3()")));
- (SharedStopWithSchedulesWithDeparturesByDestination *)doCopyStop:(SharedStop *)stop now:(NSString *)now scheduleDepartures:(NSArray<SharedScheduleWithDeparturesByDestination *> *)scheduleDepartures __attribute__((swift_name("doCopy(stop:now:scheduleDepartures:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *now __attribute__((swift_name("now")));
@property (readonly) NSArray<SharedScheduleWithDeparturesByDestination *> *scheduleDepartures __attribute__((swift_name("scheduleDepartures")));
@property (readonly) SharedStop *stop __attribute__((swift_name("stop")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopWithSchedulesWithDeparturesByDestination.Companion")))
@interface SharedStopWithSchedulesWithDeparturesByDestinationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopWithSchedulesWithDeparturesByDestinationWithDirections")))
@interface SharedStopWithSchedulesWithDeparturesByDestinationWithDirections : SharedBase
- (instancetype)initWithStop:(SharedStopWithSchedulesWithDeparturesByDestination *)stop directions:(SharedPath *)directions __attribute__((swift_name("init(stop:directions:)"))) __attribute__((objc_designated_initializer));
- (SharedStopWithSchedulesWithDeparturesByDestination *)component1 __attribute__((swift_name("component1()")));
- (SharedPath *)component2 __attribute__((swift_name("component2()")));
- (SharedStopWithSchedulesWithDeparturesByDestinationWithDirections *)doCopyStop:(SharedStopWithSchedulesWithDeparturesByDestination *)stop directions:(SharedPath *)directions __attribute__((swift_name("doCopy(stop:directions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedPath *directions __attribute__((swift_name("directions")));
@property (readonly) SharedStopWithSchedulesWithDeparturesByDestination *stop __attribute__((swift_name("stop")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopWithSchedulesWithDeparturesByDestinationWithDirections.Companion")))
@interface SharedStopWithSchedulesWithDeparturesByDestinationWithDirectionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopWithSchedulesWithDeparturesWithDirections")))
@interface SharedStopWithSchedulesWithDeparturesWithDirections : SharedBase
- (instancetype)initWithStop:(SharedStopWithSchedulesWithDepartures *)stop directions:(SharedPath *)directions __attribute__((swift_name("init(stop:directions:)"))) __attribute__((objc_designated_initializer));
- (SharedStopWithSchedulesWithDepartures *)component1 __attribute__((swift_name("component1()")));
- (SharedPath *)component2 __attribute__((swift_name("component2()")));
- (SharedStopWithSchedulesWithDeparturesWithDirections *)doCopyStop:(SharedStopWithSchedulesWithDepartures *)stop directions:(SharedPath *)directions __attribute__((swift_name("doCopy(stop:directions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedPath *directions __attribute__((swift_name("directions")));
@property (readonly) SharedStopWithSchedulesWithDepartures *stop __attribute__((swift_name("stop")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("StopWithSchedulesWithDeparturesWithDirections.Companion")))
@interface SharedStopWithSchedulesWithDeparturesWithDirectionsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Subregion")))
@interface SharedSubregion : SharedBase
- (instancetype)initWithKey:(NSString *)key name:(NSString *)name centerCoordinate:(SharedLatLng *)centerCoordinate bounds:(SharedLatLngBounds *)bounds transportIds:(NSArray<NSString *> *)transportIds __attribute__((swift_name("init(key:name:centerCoordinate:bounds:transportIds:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedLatLng *)component3 __attribute__((swift_name("component3()")));
- (SharedLatLngBounds *)component4 __attribute__((swift_name("component4()")));
- (NSArray<NSString *> *)component5 __attribute__((swift_name("component5()")));
- (SharedSubregion *)doCopyKey:(NSString *)key name:(NSString *)name centerCoordinate:(SharedLatLng *)centerCoordinate bounds:(SharedLatLngBounds *)bounds transportIds:(NSArray<NSString *> *)transportIds __attribute__((swift_name("doCopy(key:name:centerCoordinate:bounds:transportIds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLatLngBounds *bounds __attribute__((swift_name("bounds")));
@property (readonly) SharedLatLng *centerCoordinate __attribute__((swift_name("centerCoordinate")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSArray<NSString *> *transportIds __attribute__((swift_name("transportIds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Subregion.Companion")))
@interface SharedSubregionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionBreakdownItem")))
@interface SharedSubscriptionBreakdownItem : SharedBase
- (instancetype)initWithSubscriptionAllowanceTransactionId:(SharedInt * _Nullable)subscriptionAllowanceTransactionId sharing:(SharedSharingBreakdownItem * _Nullable)sharing __attribute__((swift_name("init(subscriptionAllowanceTransactionId:sharing:)"))) __attribute__((objc_designated_initializer));
- (SharedInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedSharingBreakdownItem * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedSubscriptionBreakdownItem *)doCopySubscriptionAllowanceTransactionId:(SharedInt * _Nullable)subscriptionAllowanceTransactionId sharing:(SharedSharingBreakdownItem * _Nullable)sharing __attribute__((swift_name("doCopy(subscriptionAllowanceTransactionId:sharing:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedSharingBreakdownItem * _Nullable sharing __attribute__((swift_name("sharing")));
@property (readonly) SharedInt * _Nullable subscriptionAllowanceTransactionId __attribute__((swift_name("subscriptionAllowanceTransactionId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionBreakdownItem.Companion")))
@interface SharedSubscriptionBreakdownItemCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionRenewalRecord")))
@interface SharedSubscriptionRenewalRecord : SharedBase
- (instancetype)initWithBookingId:(NSString *)bookingId renewalType:(SharedSubscriptionRenewalRecordRenewalType *)renewalType renewedAt:(NSString *)renewedAt allowanceParts:(SharedHistoryAllowanceParts *)allowanceParts payment:(SharedPayment *)payment purchaseId:(NSString *)purchaseId __attribute__((swift_name("init(bookingId:renewalType:renewedAt:allowanceParts:payment:purchaseId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedSubscriptionRenewalRecordRenewalType *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (SharedHistoryAllowanceParts *)component4 __attribute__((swift_name("component4()")));
- (SharedPayment *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (SharedSubscriptionRenewalRecord *)doCopyBookingId:(NSString *)bookingId renewalType:(SharedSubscriptionRenewalRecordRenewalType *)renewalType renewedAt:(NSString *)renewedAt allowanceParts:(SharedHistoryAllowanceParts *)allowanceParts payment:(SharedPayment *)payment purchaseId:(NSString *)purchaseId __attribute__((swift_name("doCopy(bookingId:renewalType:renewedAt:allowanceParts:payment:purchaseId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedHistoryAllowanceParts *allowanceParts __attribute__((swift_name("allowanceParts")));
@property (readonly) NSString *bookingId __attribute__((swift_name("bookingId")));
@property (readonly) SharedPayment *payment __attribute__((swift_name("payment")));
@property (readonly) NSString *purchaseId __attribute__((swift_name("purchaseId")));
@property (readonly) SharedSubscriptionRenewalRecordRenewalType *renewalType __attribute__((swift_name("renewalType")));
@property (readonly) NSString *renewedAt __attribute__((swift_name("renewedAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionRenewalRecord.Companion")))
@interface SharedSubscriptionRenewalRecordCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionRenewalRecord.RenewalType")))
@interface SharedSubscriptionRenewalRecordRenewalType : SharedKotlinEnum<SharedSubscriptionRenewalRecordRenewalType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedSubscriptionRenewalRecordRenewalType *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedSubscriptionRenewalRecordRenewalType *theNewSubscription __attribute__((swift_name("theNewSubscription")));
@property (class, readonly) SharedSubscriptionRenewalRecordRenewalType *renewal __attribute__((swift_name("renewal")));
@property (class, readonly) SharedSubscriptionRenewalRecordRenewalType *switch_ __attribute__((swift_name("switch_")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SubscriptionRenewalRecord.RenewalTypeSerializer")))
@interface SharedSubscriptionRenewalRecordRenewalTypeSerializer : SharedCommonEnumSerializer<SharedSubscriptionRenewalRecordRenewalType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SurgeInfo")))
@interface SharedSurgeInfo : SharedBase
- (instancetype)initWithMultiplier:(double)multiplier confirmationUrl:(NSString * _Nullable)confirmationUrl __attribute__((swift_name("init(multiplier:confirmationUrl:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedSurgeInfo *)doCopyMultiplier:(double)multiplier confirmationUrl:(NSString * _Nullable)confirmationUrl __attribute__((swift_name("doCopy(multiplier:confirmationUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable confirmationUrl __attribute__((swift_name("confirmationUrl")));
@property (readonly) double multiplier __attribute__((swift_name("multiplier")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SurgeInfo.Companion")))
@interface SharedSurgeInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tariff")))
@interface SharedTariff : SharedBase
- (instancetype)initWithPricing:(SharedParkingPricing *)pricing hoursOfControl:(SharedHoursOfControl *)hoursOfControl __attribute__((swift_name("init(pricing:hoursOfControl:)"))) __attribute__((objc_designated_initializer));
- (SharedParkingPricing *)component1 __attribute__((swift_name("component1()")));
- (SharedHoursOfControl *)component2 __attribute__((swift_name("component2()")));
- (SharedTariff *)doCopyPricing:(SharedParkingPricing *)pricing hoursOfControl:(SharedHoursOfControl *)hoursOfControl __attribute__((swift_name("doCopy(pricing:hoursOfControl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedHoursOfControl *hoursOfControl __attribute__((swift_name("hoursOfControl")));
@property (readonly) SharedParkingPricing *pricing __attribute__((swift_name("pricing")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Tariff.Companion")))
@interface SharedTariffCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Terms")))
@interface SharedTerms : SharedBase
- (instancetype)initWithKey:(NSString * _Nullable)key version:(NSString * _Nullable)version providerId:(NSString * _Nullable)providerId localizedTerms:(NSArray<SharedLocalizedTerms *> * _Nullable)localizedTerms validFrom:(SharedLong * _Nullable)validFrom __attribute__((swift_name("init(key:version:providerId:localizedTerms:validFrom:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedLocalizedTerms *> * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedLong * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedTerms *)doCopyKey:(NSString * _Nullable)key version:(NSString * _Nullable)version providerId:(NSString * _Nullable)providerId localizedTerms:(NSArray<SharedLocalizedTerms *> * _Nullable)localizedTerms validFrom:(SharedLong * _Nullable)validFrom __attribute__((swift_name("doCopy(key:version:providerId:localizedTerms:validFrom:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable key __attribute__((swift_name("key")));
@property (readonly) NSArray<SharedLocalizedTerms *> * _Nullable localizedTerms __attribute__((swift_name("localizedTerms")));
@property (readonly) NSString * _Nullable providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedLong * _Nullable validFrom __attribute__((swift_name("validFrom")));
@property (readonly) NSString * _Nullable version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Terms.Companion")))
@interface SharedTermsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TermsResponse")))
@interface SharedTermsResponse : SharedBase
- (instancetype)initWithTerms:(NSArray<SharedPlatformTerms *> *)terms __attribute__((swift_name("init(terms:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedPlatformTerms *> *)component1 __attribute__((swift_name("component1()")));
- (SharedTermsResponse *)doCopyTerms:(NSArray<SharedPlatformTerms *> *)terms __attribute__((swift_name("doCopy(terms:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedPlatformTerms *> *terms __attribute__((swift_name("terms")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TermsResponse.Companion")))
@interface SharedTermsResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TicketActivationsRecord")))
@interface SharedTicketActivationsRecord : SharedBase
- (instancetype)initWithProviderId:(NSString *)providerId ticket:(SharedHistoryTicket *)ticket activatedCount:(int32_t)activatedCount validFrom:(NSString *)validFrom validTo:(NSString *)validTo departureStopName:(NSString * _Nullable)departureStopName __attribute__((swift_name("init(providerId:ticket:activatedCount:validFrom:validTo:departureStopName:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedHistoryTicket *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedTicketActivationsRecord *)doCopyProviderId:(NSString *)providerId ticket:(SharedHistoryTicket *)ticket activatedCount:(int32_t)activatedCount validFrom:(NSString *)validFrom validTo:(NSString *)validTo departureStopName:(NSString * _Nullable)departureStopName __attribute__((swift_name("doCopy(providerId:ticket:activatedCount:validFrom:validTo:departureStopName:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t activatedCount __attribute__((swift_name("activatedCount")));
@property (readonly) NSString * _Nullable departureStopName __attribute__((swift_name("departureStopName")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedHistoryTicket *ticket __attribute__((swift_name("ticket")));
@property (readonly) NSString *validFrom __attribute__((swift_name("validFrom")));
@property (readonly) NSString *validTo __attribute__((swift_name("validTo")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TicketActivationsRecord.Companion")))
@interface SharedTicketActivationsRecordCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TicketsRecord")))
@interface SharedTicketsRecord : SharedBase
- (instancetype)initWithBookingId:(NSString *)bookingId providerId:(NSString *)providerId tickets:(NSArray<SharedHistoryTicket *> *)tickets shoppingCartId:(NSString * _Nullable)shoppingCartId payment:(SharedPayment * _Nullable)payment __attribute__((swift_name("init(bookingId:providerId:tickets:shoppingCartId:payment:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedHistoryTicket *> *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedPayment * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedTicketsRecord *)doCopyBookingId:(NSString *)bookingId providerId:(NSString *)providerId tickets:(NSArray<SharedHistoryTicket *> *)tickets shoppingCartId:(NSString * _Nullable)shoppingCartId payment:(SharedPayment * _Nullable)payment __attribute__((swift_name("doCopy(bookingId:providerId:tickets:shoppingCartId:payment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *bookingId __attribute__((swift_name("bookingId")));
@property (readonly) SharedPayment * _Nullable payment __attribute__((swift_name("payment")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) NSString * _Nullable shoppingCartId __attribute__((swift_name("shoppingCartId")));
@property (readonly) NSArray<SharedHistoryTicket *> *tickets __attribute__((swift_name("tickets")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TicketsRecord.Companion")))
@interface SharedTicketsRecordCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeIntervalPricing")))
@interface SharedTimeIntervalPricing : SharedBase
- (instancetype)initWithSequence:(SharedInt * _Nullable)sequence intervalMinutes:(SharedInt * _Nullable)intervalMinutes price:(SharedDouble * _Nullable)price __attribute__((swift_name("init(sequence:intervalMinutes:price:)"))) __attribute__((objc_designated_initializer));
- (SharedInt * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedInt * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedTimeIntervalPricing *)doCopySequence:(SharedInt * _Nullable)sequence intervalMinutes:(SharedInt * _Nullable)intervalMinutes price:(SharedDouble * _Nullable)price __attribute__((swift_name("doCopy(sequence:intervalMinutes:price:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedInt * _Nullable intervalMinutes __attribute__((swift_name("intervalMinutes")));
@property (readonly) SharedDouble * _Nullable price __attribute__((swift_name("price")));
@property (readonly) SharedInt * _Nullable sequence __attribute__((swift_name("sequence")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TimeIntervalPricing.Companion")))
@interface SharedTimeIntervalPricingCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Times")))
@interface SharedTimes : SharedBase
- (instancetype)initWithWeekdaysId:(int32_t)weekdaysId weekdays:(NSArray<NSString *> *)weekdays exactTimes:(NSArray<SharedExactTime *> *)exactTimes intervalTimes:(NSArray<SharedIntervalTime *> *)intervalTimes __attribute__((swift_name("init(weekdaysId:weekdays:exactTimes:intervalTimes:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<NSString *> *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedExactTime *> *)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedIntervalTime *> *)component4 __attribute__((swift_name("component4()")));
- (SharedTimes *)doCopyWeekdaysId:(int32_t)weekdaysId weekdays:(NSArray<NSString *> *)weekdays exactTimes:(NSArray<SharedExactTime *> *)exactTimes intervalTimes:(NSArray<SharedIntervalTime *> *)intervalTimes __attribute__((swift_name("doCopy(weekdaysId:weekdays:exactTimes:intervalTimes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedExactTime *> *exactTimes __attribute__((swift_name("exactTimes")));
@property (readonly) NSArray<SharedIntervalTime *> *intervalTimes __attribute__((swift_name("intervalTimes")));
@property (readonly) NSArray<NSString *> *weekdays __attribute__((swift_name("weekdays")));
@property (readonly) int32_t weekdaysId __attribute__((swift_name("weekdaysId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Times.Companion")))
@interface SharedTimesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Track")))
@interface SharedTrack : SharedBase
- (instancetype)initWithId:(NSString *)id destination:(NSString *)destination name:(NSString *)name shape:(NSString *)shape direction:(SharedTrackDirection *)direction visible:(BOOL)visible __attribute__((swift_name("init(id:destination:name:shape:direction:visible:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (SharedTrackDirection *)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (SharedTrack *)doCopyId:(NSString *)id destination:(NSString *)destination name:(NSString *)name shape:(NSString *)shape direction:(SharedTrackDirection *)direction visible:(BOOL)visible __attribute__((swift_name("doCopy(id:destination:name:shape:direction:visible:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *destination __attribute__((swift_name("destination")));
@property (readonly) SharedTrackDirection *direction __attribute__((swift_name("direction")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *shape __attribute__((swift_name("shape")));
@property (readonly) BOOL visible __attribute__((swift_name("visible")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Track.Companion")))
@interface SharedTrackCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Track.Direction")))
@interface SharedTrackDirection : SharedKotlinEnum<SharedTrackDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTrackDirection *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedTrackDirection *forward __attribute__((swift_name("forward")));
@property (class, readonly) SharedTrackDirection *backward __attribute__((swift_name("backward")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Track.DirectionSerializer")))
@interface SharedTrackDirectionSerializer : SharedCommonEnumSerializer<SharedTrackDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackWithDepartures")))
@interface SharedTrackWithDepartures : SharedBase
- (instancetype)initWithTrack:(SharedTrack *)track exactDepartures:(NSArray<SharedExactDeparture *> *)exactDepartures disruption:(SharedTrackWithDeparturesDisruption * _Nullable)disruption __attribute__((swift_name("init(track:exactDepartures:disruption:)"))) __attribute__((objc_designated_initializer));
- (SharedTrack *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedExactDeparture *> *)component2 __attribute__((swift_name("component2()")));
- (SharedTrackWithDeparturesDisruption * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedTrackWithDepartures *)doCopyTrack:(SharedTrack *)track exactDepartures:(NSArray<SharedExactDeparture *> *)exactDepartures disruption:(SharedTrackWithDeparturesDisruption * _Nullable)disruption __attribute__((swift_name("doCopy(track:exactDepartures:disruption:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedTrackWithDeparturesDisruption * _Nullable disruption __attribute__((swift_name("disruption")));
@property (readonly) NSArray<SharedExactDeparture *> *exactDepartures __attribute__((swift_name("exactDepartures")));
@property (readonly) SharedTrack *track __attribute__((swift_name("track")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackWithDepartures.Companion")))
@interface SharedTrackWithDeparturesCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackWithDeparturesDisruption")))
@interface SharedTrackWithDeparturesDisruption : SharedBase
- (instancetype)initWithSeverity:(SharedTrackWithDeparturesDisruptionSeverity *)severity __attribute__((swift_name("init(severity:)"))) __attribute__((objc_designated_initializer));
- (SharedTrackWithDeparturesDisruptionSeverity *)component1 __attribute__((swift_name("component1()")));
- (SharedTrackWithDeparturesDisruption *)doCopySeverity:(SharedTrackWithDeparturesDisruptionSeverity *)severity __attribute__((swift_name("doCopy(severity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedTrackWithDeparturesDisruptionSeverity *severity __attribute__((swift_name("severity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackWithDeparturesDisruption.Companion")))
@interface SharedTrackWithDeparturesDisruptionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackWithDeparturesDisruption.Severity")))
@interface SharedTrackWithDeparturesDisruptionSeverity : SharedKotlinEnum<SharedTrackWithDeparturesDisruptionSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedTrackWithDeparturesDisruptionSeverity *notAffected __attribute__((swift_name("notAffected")));
@property (class, readonly) SharedTrackWithDeparturesDisruptionSeverity *information __attribute__((swift_name("information")));
@property (class, readonly) SharedTrackWithDeparturesDisruptionSeverity *warning __attribute__((swift_name("warning")));
@property (class, readonly) SharedTrackWithDeparturesDisruptionSeverity *alert __attribute__((swift_name("alert")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackWithDeparturesDisruption.SeveritySerializer")))
@interface SharedTrackWithDeparturesDisruptionSeveritySerializer : SharedCommonEnumSerializer<SharedTrackWithDeparturesDisruptionSeverity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackWithStops")))
@interface SharedTrackWithStops : SharedBase
- (instancetype)initWithTrack:(SharedTrack *)track stops:(NSArray<SharedStop *> *)stops __attribute__((swift_name("init(track:stops:)"))) __attribute__((objc_designated_initializer));
- (SharedTrack *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedStop *> *)component2 __attribute__((swift_name("component2()")));
- (SharedTrackWithStops *)doCopyTrack:(SharedTrack *)track stops:(NSArray<SharedStop *> *)stops __attribute__((swift_name("doCopy(track:stops:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedStop *> *stops __attribute__((swift_name("stops")));
@property (readonly) SharedTrack *track __attribute__((swift_name("track")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackWithStops.Companion")))
@interface SharedTrackWithStopsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitAlternative")))
@interface SharedTransitAlternative : SharedBase
- (instancetype)initWithSchedule:(SharedSchedule *)schedule exactAlternativeDepartures:(NSArray<SharedRouteExactDeparture *> *)exactAlternativeDepartures track:(SharedTrack * _Nullable)track __attribute__((swift_name("init(schedule:exactAlternativeDepartures:track:)"))) __attribute__((objc_designated_initializer));
- (SharedSchedule *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedRouteExactDeparture *> *)component2 __attribute__((swift_name("component2()")));
- (SharedTrack * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedTransitAlternative *)doCopySchedule:(SharedSchedule *)schedule exactAlternativeDepartures:(NSArray<SharedRouteExactDeparture *> *)exactAlternativeDepartures track:(SharedTrack * _Nullable)track __attribute__((swift_name("doCopy(schedule:exactAlternativeDepartures:track:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedRouteExactDeparture *> *exactAlternativeDepartures __attribute__((swift_name("exactAlternativeDepartures")));
@property (readonly) SharedSchedule *schedule __attribute__((swift_name("schedule")));
@property (readonly) SharedTrack * _Nullable track __attribute__((swift_name("track")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitAlternative.Companion")))
@interface SharedTransitAlternativeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitConfig")))
@interface SharedTransitConfig : SharedBase
- (instancetype)initWithRegionConfigs:(NSDictionary<NSString *, SharedTransitRegionConfig *> * _Nullable)regionConfigs __attribute__((swift_name("init(regionConfigs:)"))) __attribute__((objc_designated_initializer));
- (NSDictionary<NSString *, SharedTransitRegionConfig *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedTransitConfig *)doCopyRegionConfigs:(NSDictionary<NSString *, SharedTransitRegionConfig *> * _Nullable)regionConfigs __attribute__((swift_name("doCopy(regionConfigs:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, SharedTransitRegionConfig *> * _Nullable regionConfigs __attribute__((swift_name("regionConfigs")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitConfig.Companion")))
@interface SharedTransitConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitRegionConfig")))
@interface SharedTransitRegionConfig : SharedBase
- (instancetype)initWithRegionId:(NSString *)regionId transports:(NSArray<SharedTransport *> *)transports subregions:(NSArray<SharedSubregion *> *)subregions __attribute__((swift_name("init(regionId:transports:subregions:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedTransport *> *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedSubregion *> *)component3 __attribute__((swift_name("component3()")));
- (SharedTransitRegionConfig *)doCopyRegionId:(NSString *)regionId transports:(NSArray<SharedTransport *> *)transports subregions:(NSArray<SharedSubregion *> *)subregions __attribute__((swift_name("doCopy(regionId:transports:subregions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *regionId __attribute__((swift_name("regionId")));
@property (readonly) NSArray<SharedSubregion *> *subregions __attribute__((swift_name("subregions")));
@property (readonly) NSArray<SharedTransport *> *transports __attribute__((swift_name("transports")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitRegionConfig.Companion")))
@interface SharedTransitRegionConfigCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitTrip")))
@interface SharedTransitTrip : SharedBase
- (instancetype)initWithSchedule:(SharedSchedule *)schedule trackWithStops:(SharedTrackWithStops *)trackWithStops isRealtime:(BOOL)isRealtime exactTimes:(NSArray<SharedTransitTripExactTime *> *)exactTimes intervalDurations:(NSArray<SharedTransitTripIntervalDuration *> *)intervalDurations currentStopIdx:(SharedInt * _Nullable)currentStopIdx vehiclePosition:(SharedTransitVehiclePosition * _Nullable)vehiclePosition disruption:(SharedTransitTripDisruption * _Nullable)disruption __attribute__((swift_name("init(schedule:trackWithStops:isRealtime:exactTimes:intervalDurations:currentStopIdx:vehiclePosition:disruption:)"))) __attribute__((objc_designated_initializer));
- (SharedSchedule *)component1 __attribute__((swift_name("component1()")));
- (SharedTrackWithStops *)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedTransitTripExactTime *> *)component4 __attribute__((swift_name("component4()")));
- (NSArray<SharedTransitTripIntervalDuration *> *)component5 __attribute__((swift_name("component5()")));
- (SharedInt * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedTransitVehiclePosition * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedTransitTripDisruption * _Nullable)component8 __attribute__((swift_name("component8()")));
- (SharedTransitTrip *)doCopySchedule:(SharedSchedule *)schedule trackWithStops:(SharedTrackWithStops *)trackWithStops isRealtime:(BOOL)isRealtime exactTimes:(NSArray<SharedTransitTripExactTime *> *)exactTimes intervalDurations:(NSArray<SharedTransitTripIntervalDuration *> *)intervalDurations currentStopIdx:(SharedInt * _Nullable)currentStopIdx vehiclePosition:(SharedTransitVehiclePosition * _Nullable)vehiclePosition disruption:(SharedTransitTripDisruption * _Nullable)disruption __attribute__((swift_name("doCopy(schedule:trackWithStops:isRealtime:exactTimes:intervalDurations:currentStopIdx:vehiclePosition:disruption:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedInt * _Nullable currentStopIdx __attribute__((swift_name("currentStopIdx")));
@property (readonly) SharedTransitTripDisruption * _Nullable disruption __attribute__((swift_name("disruption")));
@property (readonly) NSArray<SharedTransitTripExactTime *> *exactTimes __attribute__((swift_name("exactTimes")));
@property (readonly) NSArray<SharedTransitTripIntervalDuration *> *intervalDurations __attribute__((swift_name("intervalDurations")));
@property (readonly) BOOL isRealtime __attribute__((swift_name("isRealtime")));
@property (readonly) SharedSchedule *schedule __attribute__((swift_name("schedule")));
@property (readonly) SharedTrackWithStops *trackWithStops __attribute__((swift_name("trackWithStops")));
@property (readonly) SharedTransitVehiclePosition * _Nullable vehiclePosition __attribute__((swift_name("vehiclePosition")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitTrip.Companion")))
@interface SharedTransitTripCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitTripDisruption")))
@interface SharedTransitTripDisruption : SharedBase
- (instancetype)initWithDisruptions:(NSArray<SharedDisruption *> *)disruptions __attribute__((swift_name("init(disruptions:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedDisruption *> *)component1 __attribute__((swift_name("component1()")));
- (SharedTransitTripDisruption *)doCopyDisruptions:(NSArray<SharedDisruption *> *)disruptions __attribute__((swift_name("doCopy(disruptions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedDisruption *> *disruptions __attribute__((swift_name("disruptions")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitTripDisruption.Companion")))
@interface SharedTransitTripDisruptionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitTripExactTime")))
@interface SharedTransitTripExactTime : SharedBase
- (instancetype)initWithSecondsAfterMidnight:(int32_t)secondsAfterMidnight isRealtime:(BOOL)isRealtime timeLabel:(NSString * _Nullable)timeLabel __attribute__((swift_name("init(secondsAfterMidnight:isRealtime:timeLabel:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedTransitTripExactTime *)doCopySecondsAfterMidnight:(int32_t)secondsAfterMidnight isRealtime:(BOOL)isRealtime timeLabel:(NSString * _Nullable)timeLabel __attribute__((swift_name("doCopy(secondsAfterMidnight:isRealtime:timeLabel:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRealtime __attribute__((swift_name("isRealtime")));
@property (readonly) int32_t secondsAfterMidnight __attribute__((swift_name("secondsAfterMidnight")));
@property (readonly) NSString * _Nullable timeLabel __attribute__((swift_name("timeLabel")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitTripExactTime.Companion")))
@interface SharedTransitTripExactTimeCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitTripIntervalDuration")))
@interface SharedTransitTripIntervalDuration : SharedBase
- (instancetype)initWithDurationSeconds:(int32_t)durationSeconds __attribute__((swift_name("init(durationSeconds:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (SharedTransitTripIntervalDuration *)doCopyDurationSeconds:(int32_t)durationSeconds __attribute__((swift_name("doCopy(durationSeconds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t durationSeconds __attribute__((swift_name("durationSeconds")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitTripIntervalDuration.Companion")))
@interface SharedTransitTripIntervalDurationCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitVehiclePosition")))
@interface SharedTransitVehiclePosition : SharedBase
- (instancetype)initWithVehicleId:(NSString *)vehicleId location:(SharedLatLng *)location trackStopFraction:(SharedDouble * _Nullable)trackStopFraction angle:(SharedDouble * _Nullable)angle trackShape:(NSString * _Nullable)trackShape trackShapeMovementFractionalIndices:(NSArray<SharedFloat *> * _Nullable)trackShapeMovementFractionalIndices timestamp:(SharedLong * _Nullable)timestamp __attribute__((swift_name("init(vehicleId:location:trackStopFraction:angle:trackShape:trackShapeMovementFractionalIndices:timestamp:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedLatLng *)component2 __attribute__((swift_name("component2()")));
- (SharedDouble * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedDouble * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSArray<SharedFloat *> * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedLong * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedTransitVehiclePosition *)doCopyVehicleId:(NSString *)vehicleId location:(SharedLatLng *)location trackStopFraction:(SharedDouble * _Nullable)trackStopFraction angle:(SharedDouble * _Nullable)angle trackShape:(NSString * _Nullable)trackShape trackShapeMovementFractionalIndices:(NSArray<SharedFloat *> * _Nullable)trackShapeMovementFractionalIndices timestamp:(SharedLong * _Nullable)timestamp __attribute__((swift_name("doCopy(vehicleId:location:trackStopFraction:angle:trackShape:trackShapeMovementFractionalIndices:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDouble * _Nullable angle __attribute__((swift_name("angle")));
@property (readonly) SharedLatLng *location __attribute__((swift_name("location")));
@property (readonly) SharedLong * _Nullable timestamp __attribute__((swift_name("timestamp")));
@property (readonly) NSString * _Nullable trackShape __attribute__((swift_name("trackShape")));
@property (readonly) NSArray<SharedFloat *> * _Nullable trackShapeMovementFractionalIndices __attribute__((swift_name("trackShapeMovementFractionalIndices")));
@property (readonly) SharedDouble * _Nullable trackStopFraction __attribute__((swift_name("trackStopFraction")));
@property (readonly) NSString *vehicleId __attribute__((swift_name("vehicleId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitVehiclePosition.Companion")))
@interface SharedTransitVehiclePositionCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitVehiclePositionWithScheduleAndTrack")))
@interface SharedTransitVehiclePositionWithScheduleAndTrack : SharedBase
- (instancetype)initWithPosition:(SharedTransitVehiclePosition *)position schedule:(SharedSchedule *)schedule track:(SharedTrack *)track __attribute__((swift_name("init(position:schedule:track:)"))) __attribute__((objc_designated_initializer));
- (SharedTransitVehiclePosition *)component1 __attribute__((swift_name("component1()")));
- (SharedSchedule *)component2 __attribute__((swift_name("component2()")));
- (SharedTrack *)component3 __attribute__((swift_name("component3()")));
- (SharedTransitVehiclePositionWithScheduleAndTrack *)doCopyPosition:(SharedTransitVehiclePosition *)position schedule:(SharedSchedule *)schedule track:(SharedTrack *)track __attribute__((swift_name("doCopy(position:schedule:track:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedTransitVehiclePosition *position __attribute__((swift_name("position")));
@property (readonly) SharedSchedule *schedule __attribute__((swift_name("schedule")));
@property (readonly) SharedTrack *track __attribute__((swift_name("track")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitVehiclePositionWithScheduleAndTrack.Companion")))
@interface SharedTransitVehiclePositionWithScheduleAndTrackCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitVehiclePositionsWithSchedule")))
@interface SharedTransitVehiclePositionsWithSchedule : SharedBase
- (instancetype)initWithPositions:(NSArray<SharedTransitVehiclePosition *> *)positions schedule:(SharedSchedule *)schedule __attribute__((swift_name("init(positions:schedule:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedTransitVehiclePosition *> *)component1 __attribute__((swift_name("component1()")));
- (SharedSchedule *)component2 __attribute__((swift_name("component2()")));
- (SharedTransitVehiclePositionsWithSchedule *)doCopyPositions:(NSArray<SharedTransitVehiclePosition *> *)positions schedule:(SharedSchedule *)schedule __attribute__((swift_name("doCopy(positions:schedule:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedTransitVehiclePosition *> *positions __attribute__((swift_name("positions")));
@property (readonly) SharedSchedule *schedule __attribute__((swift_name("schedule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransitVehiclePositionsWithSchedule.Companion")))
@interface SharedTransitVehiclePositionsWithScheduleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transport")))
@interface SharedTransport : SharedBase
- (instancetype)initWithTransportType:(NSString *)transportType transportId:(NSString *)transportId __attribute__((swift_name("init(transportType:transportId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedTransport *)doCopyTransportType:(NSString *)transportType transportId:(NSString *)transportId __attribute__((swift_name("doCopy(transportType:transportId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *transportId __attribute__((swift_name("transportId")));
@property (readonly) NSString *transportType __attribute__((swift_name("transportType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Transport.Companion")))
@interface SharedTransportCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trip")))
@interface SharedTrip : SharedBase
- (instancetype)initWithStart:(SharedSpaceTime *)start end:(SharedSpaceTime *)end timePaused:(NSString * _Nullable)timePaused polyline:(NSString * _Nullable)polyline distance:(SharedDistance * _Nullable)distance originalPrice:(SharedDouble * _Nullable)originalPrice __attribute__((swift_name("init(start:end:timePaused:polyline:distance:originalPrice:)"))) __attribute__((objc_designated_initializer));
- (SharedSpaceTime *)component1 __attribute__((swift_name("component1()")));
- (SharedSpaceTime *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedDistance * _Nullable)component5 __attribute__((swift_name("component5()")));
- (SharedDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedTrip *)doCopyStart:(SharedSpaceTime *)start end:(SharedSpaceTime *)end timePaused:(NSString * _Nullable)timePaused polyline:(NSString * _Nullable)polyline distance:(SharedDistance * _Nullable)distance originalPrice:(SharedDouble * _Nullable)originalPrice __attribute__((swift_name("doCopy(start:end:timePaused:polyline:distance:originalPrice:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDistance * _Nullable distance __attribute__((swift_name("distance")));
@property (readonly) SharedSpaceTime *end __attribute__((swift_name("end")));
@property (readonly) SharedDouble * _Nullable originalPrice __attribute__((swift_name("originalPrice")));
@property (readonly) NSString * _Nullable polyline __attribute__((swift_name("polyline")));
@property (readonly) SharedSpaceTime *start __attribute__((swift_name("start")));
@property (readonly) NSString * _Nullable timePaused __attribute__((swift_name("timePaused")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Trip.Companion")))
@interface SharedTripCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UiError")))
@interface SharedUiError : SharedBase
- (instancetype)initWithLocalizationKey:(NSString * _Nullable)localizationKey localizedMessage:(NSString * _Nullable)localizedMessage fallbackMessage:(NSString * _Nullable)fallbackMessage __attribute__((swift_name("init(localizationKey:localizedMessage:fallbackMessage:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedUiError *)doCopyLocalizationKey:(NSString * _Nullable)localizationKey localizedMessage:(NSString * _Nullable)localizedMessage fallbackMessage:(NSString * _Nullable)fallbackMessage __attribute__((swift_name("doCopy(localizationKey:localizedMessage:fallbackMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable fallbackMessage __attribute__((swift_name("fallbackMessage")));
@property (readonly) NSString * _Nullable localizationKey __attribute__((swift_name("localizationKey")));
@property (readonly) NSString * _Nullable localizedMessage __attribute__((swift_name("localizedMessage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UiError.Companion")))
@interface SharedUiErrorCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnlockInfo")))
@interface SharedUnlockInfo : SharedBase
- (instancetype)initWithCode:(NSString * _Nullable)code __attribute__((swift_name("init(code:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedUnlockInfo *)doCopyCode:(NSString * _Nullable)code __attribute__((swift_name("doCopy(code:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable code __attribute__((swift_name("code")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnlockInfo.Companion")))
@interface SharedUnlockInfoCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdatePaymentMethodRequest")))
@interface SharedUpdatePaymentMethodRequest : SharedBase
- (instancetype)initWithDefaultMethodId:(NSString *)defaultMethodId __attribute__((swift_name("init(defaultMethodId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedUpdatePaymentMethodRequest *)doCopyDefaultMethodId:(NSString *)defaultMethodId __attribute__((swift_name("doCopy(defaultMethodId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *defaultMethodId __attribute__((swift_name("defaultMethodId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdatePaymentMethodRequest.Companion")))
@interface SharedUpdatePaymentMethodRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdatePlatformTerms")))
@interface SharedUpdatePlatformTerms : SharedBase
- (instancetype)initWithKey:(NSString *)key version:(NSString *)version action:(SharedUpdatePlatformTermsAction *)action receivedAt:(NSString * _Nullable)receivedAt __attribute__((swift_name("init(key:version:action:receivedAt:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedUpdatePlatformTermsAction *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedUpdatePlatformTerms *)doCopyKey:(NSString *)key version:(NSString *)version action:(SharedUpdatePlatformTermsAction *)action receivedAt:(NSString * _Nullable)receivedAt __attribute__((swift_name("doCopy(key:version:action:receivedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedUpdatePlatformTermsAction *action __attribute__((swift_name("action")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString * _Nullable receivedAt __attribute__((swift_name("receivedAt")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdatePlatformTerms.Action")))
@interface SharedUpdatePlatformTermsAction : SharedKotlinEnum<SharedUpdatePlatformTermsAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedUpdatePlatformTermsAction *decline __attribute__((swift_name("decline")));
@property (class, readonly) SharedUpdatePlatformTermsAction *accept __attribute__((swift_name("accept")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdatePlatformTerms.ActionSerializer")))
@interface SharedUpdatePlatformTermsActionSerializer : SharedCommonEnumSerializer<SharedUpdatePlatformTermsAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdatePlatformTerms.Companion")))
@interface SharedUpdatePlatformTermsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdatePlatformTermsRequest")))
@interface SharedUpdatePlatformTermsRequest : SharedBase
- (instancetype)initWithTerms:(NSArray<SharedUpdatePlatformTerms *> *)terms __attribute__((swift_name("init(terms:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedUpdatePlatformTerms *> *)component1 __attribute__((swift_name("component1()")));
- (SharedUpdatePlatformTermsRequest *)doCopyTerms:(NSArray<SharedUpdatePlatformTerms *> *)terms __attribute__((swift_name("doCopy(terms:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedUpdatePlatformTerms *> *terms __attribute__((swift_name("terms")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdatePlatformTermsRequest.Companion")))
@interface SharedUpdatePlatformTermsRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateProfileParameters")))
@interface SharedUpdateProfileParameters : SharedBase
- (instancetype)initWithProfile:(SharedProfile * _Nullable)profile __attribute__((swift_name("init(profile:)"))) __attribute__((objc_designated_initializer));
- (SharedProfile * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedUpdateProfileParameters *)doCopyProfile:(SharedProfile * _Nullable)profile __attribute__((swift_name("doCopy(profile:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedProfile * _Nullable profile __attribute__((swift_name("profile")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateProfileParameters.Companion")))
@interface SharedUpdateProfileParametersCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateProviderTerms")))
@interface SharedUpdateProviderTerms : SharedBase
- (instancetype)initWithKey:(NSString *)key version:(NSString *)version action:(SharedUpdateProviderTermsAction *)action receivedAt:(NSString * _Nullable)receivedAt __attribute__((swift_name("init(key:version:action:receivedAt:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedUpdateProviderTermsAction *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedUpdateProviderTerms *)doCopyKey:(NSString *)key version:(NSString *)version action:(SharedUpdateProviderTermsAction *)action receivedAt:(NSString * _Nullable)receivedAt __attribute__((swift_name("doCopy(key:version:action:receivedAt:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedUpdateProviderTermsAction *action __attribute__((swift_name("action")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSString * _Nullable receivedAt __attribute__((swift_name("receivedAt")));
@property (readonly) NSString *version __attribute__((swift_name("version")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateProviderTerms.Action")))
@interface SharedUpdateProviderTermsAction : SharedKotlinEnum<SharedUpdateProviderTermsAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedUpdateProviderTermsAction *decline __attribute__((swift_name("decline")));
@property (class, readonly) SharedUpdateProviderTermsAction *accept __attribute__((swift_name("accept")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateProviderTerms.ActionSerializer")))
@interface SharedUpdateProviderTermsActionSerializer : SharedCommonEnumSerializer<SharedUpdateProviderTermsAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateProviderTerms.Companion")))
@interface SharedUpdateProviderTermsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateProviderTermsRequest")))
@interface SharedUpdateProviderTermsRequest : SharedBase
- (instancetype)initWithTerms:(NSArray<SharedUpdateProviderTerms *> *)terms __attribute__((swift_name("init(terms:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedUpdateProviderTerms *> *)component1 __attribute__((swift_name("component1()")));
- (SharedUpdateProviderTermsRequest *)doCopyTerms:(NSArray<SharedUpdateProviderTerms *> *)terms __attribute__((swift_name("doCopy(terms:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedUpdateProviderTerms *> *terms __attribute__((swift_name("terms")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateProviderTermsRequest.Companion")))
@interface SharedUpdateProviderTermsRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateRideHailingBookingRequest")))
@interface SharedUpdateRideHailingBookingRequest : SharedBase
- (instancetype)initWithEnd:(SharedLocation * _Nullable)end paymentConfirmation:(SharedPaymentConfirmation * _Nullable)paymentConfirmation __attribute__((swift_name("init(end:paymentConfirmation:)"))) __attribute__((objc_designated_initializer));
- (SharedLocation * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedPaymentConfirmation * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedUpdateRideHailingBookingRequest *)doCopyEnd:(SharedLocation * _Nullable)end paymentConfirmation:(SharedPaymentConfirmation * _Nullable)paymentConfirmation __attribute__((swift_name("doCopy(end:paymentConfirmation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLocation * _Nullable end __attribute__((swift_name("end")));
@property (readonly) SharedPaymentConfirmation * _Nullable paymentConfirmation __attribute__((swift_name("paymentConfirmation")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateRideHailingBookingRequest.Companion")))
@interface SharedUpdateRideHailingBookingRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateSharingBookingRequest")))
@interface SharedUpdateSharingBookingRequest : SharedBase
- (instancetype)initWithSharingBookingStatus:(SharedUpdateSharingBookingRequestSharingBookingStatus *)sharingBookingStatus coordinates:(SharedLatLng * _Nullable)coordinates __attribute__((swift_name("init(sharingBookingStatus:coordinates:)"))) __attribute__((objc_designated_initializer));
- (SharedUpdateSharingBookingRequestSharingBookingStatus *)component1 __attribute__((swift_name("component1()")));
- (SharedLatLng * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedUpdateSharingBookingRequest *)doCopySharingBookingStatus:(SharedUpdateSharingBookingRequestSharingBookingStatus *)sharingBookingStatus coordinates:(SharedLatLng * _Nullable)coordinates __attribute__((swift_name("doCopy(sharingBookingStatus:coordinates:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedLatLng * _Nullable coordinates __attribute__((swift_name("coordinates")));
@property (readonly) SharedUpdateSharingBookingRequestSharingBookingStatus *sharingBookingStatus __attribute__((swift_name("sharingBookingStatus")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateSharingBookingRequest.Companion")))
@interface SharedUpdateSharingBookingRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateSharingBookingRequest.SharingBookingStatus")))
@interface SharedUpdateSharingBookingRequestSharingBookingStatus : SharedKotlinEnum<SharedUpdateSharingBookingRequestSharingBookingStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedUpdateSharingBookingRequestSharingBookingStatus *reserved __attribute__((swift_name("reserved")));
@property (class, readonly) SharedUpdateSharingBookingRequestSharingBookingStatus *leased __attribute__((swift_name("leased")));
@property (class, readonly) SharedUpdateSharingBookingRequestSharingBookingStatus *finished __attribute__((swift_name("finished")));
@property (class, readonly) SharedUpdateSharingBookingRequestSharingBookingStatus *canceled __attribute__((swift_name("canceled")));
@property (class, readonly) SharedUpdateSharingBookingRequestSharingBookingStatus *paused __attribute__((swift_name("paused")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateSharingBookingRequest.SharingBookingStatusSerializer")))
@interface SharedUpdateSharingBookingRequestSharingBookingStatusSerializer : SharedCommonEnumSerializer<SharedUpdateSharingBookingRequestSharingBookingStatus *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateVerificationSessionRequest")))
@interface SharedUpdateVerificationSessionRequest : SharedBase
- (instancetype)initWithSessionId:(NSString *)sessionId verificationContentSubmitted:(SharedBoolean * _Nullable)verificationContentSubmitted __attribute__((swift_name("init(sessionId:verificationContentSubmitted:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedBoolean * _Nullable)component2 __attribute__((swift_name("component2()")));
- (SharedUpdateVerificationSessionRequest *)doCopySessionId:(NSString *)sessionId verificationContentSubmitted:(SharedBoolean * _Nullable)verificationContentSubmitted __attribute__((swift_name("doCopy(sessionId:verificationContentSubmitted:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *sessionId __attribute__((swift_name("sessionId")));
@property (readonly) SharedBoolean * _Nullable verificationContentSubmitted __attribute__((swift_name("verificationContentSubmitted")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UpdateVerificationSessionRequest.Companion")))
@interface SharedUpdateVerificationSessionRequestCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User")))
@interface SharedUser : SharedBase
- (instancetype)initWithId:(NSString *)id identity:(SharedIdentity *)identity profile:(SharedProfile *)profile phoneNumber:(SharedPhoneNumber *)phoneNumber providerAccounts:(NSArray<SharedProviderAccount *> *)providerAccounts drivingLicence:(SharedDrivingLicence *)drivingLicence terms:(SharedUserTerms *)terms paymentMethods:(SharedPaymentMethods * _Nullable)paymentMethods memberships:(NSArray<SharedMembership *> * _Nullable)memberships __attribute__((swift_name("init(id:identity:profile:phoneNumber:providerAccounts:drivingLicence:terms:paymentMethods:memberships:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedIdentity *)component2 __attribute__((swift_name("component2()")));
- (SharedProfile *)component3 __attribute__((swift_name("component3()")));
- (SharedPhoneNumber *)component4 __attribute__((swift_name("component4()")));
- (NSArray<SharedProviderAccount *> *)component5 __attribute__((swift_name("component5()")));
- (SharedDrivingLicence *)component6 __attribute__((swift_name("component6()")));
- (SharedUserTerms *)component7 __attribute__((swift_name("component7()")));
- (SharedPaymentMethods * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSArray<SharedMembership *> * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedUser *)doCopyId:(NSString *)id identity:(SharedIdentity *)identity profile:(SharedProfile *)profile phoneNumber:(SharedPhoneNumber *)phoneNumber providerAccounts:(NSArray<SharedProviderAccount *> *)providerAccounts drivingLicence:(SharedDrivingLicence *)drivingLicence terms:(SharedUserTerms *)terms paymentMethods:(SharedPaymentMethods * _Nullable)paymentMethods memberships:(NSArray<SharedMembership *> * _Nullable)memberships __attribute__((swift_name("doCopy(id:identity:profile:phoneNumber:providerAccounts:drivingLicence:terms:paymentMethods:memberships:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDrivingLicence *drivingLicence __attribute__((swift_name("drivingLicence")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) SharedIdentity *identity __attribute__((swift_name("identity")));
@property (readonly) NSArray<SharedMembership *> * _Nullable memberships __attribute__((swift_name("memberships")));
@property (readonly) SharedPaymentMethods * _Nullable paymentMethods __attribute__((swift_name("paymentMethods")));
@property (readonly) SharedPhoneNumber *phoneNumber __attribute__((swift_name("phoneNumber")));
@property (readonly) SharedProfile *profile __attribute__((swift_name("profile")));
@property (readonly) NSArray<SharedProviderAccount *> *providerAccounts __attribute__((swift_name("providerAccounts")));
@property (readonly) SharedUserTerms *terms __attribute__((swift_name("terms")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("User.Companion")))
@interface SharedUserCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserImportResponse")))
@interface SharedUserImportResponse : SharedBase
- (instancetype)initWithResult:(SharedUserImportResponseResult * _Nullable)result __attribute__((swift_name("init(result:)"))) __attribute__((objc_designated_initializer));
- (SharedUserImportResponseResult * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedUserImportResponse *)doCopyResult:(SharedUserImportResponseResult * _Nullable)result __attribute__((swift_name("doCopy(result:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedUserImportResponseResult * _Nullable result __attribute__((swift_name("result")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserImportResponse.Companion")))
@interface SharedUserImportResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserImportResponse.Result")))
@interface SharedUserImportResponseResult : SharedKotlinEnum<SharedUserImportResponseResult *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedUserImportResponseResult *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedUserImportResponseResult *userNotFound __attribute__((swift_name("userNotFound")));
@property (class, readonly) SharedUserImportResponseResult *executed __attribute__((swift_name("executed")));
@property (class, readonly) SharedUserImportResponseResult *alreadyImported __attribute__((swift_name("alreadyImported")));
@property (class, readonly) SharedUserImportResponseResult *executionFailed __attribute__((swift_name("executionFailed")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserImportResponse.ResultSerializer")))
@interface SharedUserImportResponseResultSerializer : SharedCommonEnumSerializer<SharedUserImportResponseResult *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserImportStatusResponse")))
@interface SharedUserImportStatusResponse : SharedBase
- (instancetype)initWithState:(SharedUserImportStatusResponseState * _Nullable)state __attribute__((swift_name("init(state:)"))) __attribute__((objc_designated_initializer));
- (SharedUserImportStatusResponseState * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedUserImportStatusResponse *)doCopyState:(SharedUserImportStatusResponseState * _Nullable)state __attribute__((swift_name("doCopy(state:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedUserImportStatusResponseState * _Nullable state __attribute__((swift_name("state")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserImportStatusResponse.Companion")))
@interface SharedUserImportStatusResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserImportStatusResponse.State")))
@interface SharedUserImportStatusResponseState : SharedKotlinEnum<SharedUserImportStatusResponseState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedUserImportStatusResponseState *unknown __attribute__((swift_name("unknown")));
@property (class, readonly) SharedUserImportStatusResponseState *notAvailable __attribute__((swift_name("notAvailable")));
@property (class, readonly) SharedUserImportStatusResponseState *available __attribute__((swift_name("available")));
@property (class, readonly) SharedUserImportStatusResponseState *executed __attribute__((swift_name("executed")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserImportStatusResponse.StateSerializer")))
@interface SharedUserImportStatusResponseStateSerializer : SharedCommonEnumSerializer<SharedUserImportStatusResponseState *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserTerms")))
@interface SharedUserTerms : SharedBase
- (instancetype)initWithPlatformTerms:(NSArray<SharedAcceptedPlatformTerms *> *)platformTerms providerTerms:(NSArray<SharedAcceptedProviderTerms *> *)providerTerms declinedPlatformTerms:(NSArray<SharedDeclinedPlatformTerms *> *)declinedPlatformTerms declinedProviderTerms:(NSArray<SharedDeclinedProviderTerms *> *)declinedProviderTerms __attribute__((swift_name("init(platformTerms:providerTerms:declinedPlatformTerms:declinedProviderTerms:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedAcceptedPlatformTerms *> *)component1 __attribute__((swift_name("component1()")));
- (NSArray<SharedAcceptedProviderTerms *> *)component2 __attribute__((swift_name("component2()")));
- (NSArray<SharedDeclinedPlatformTerms *> *)component3 __attribute__((swift_name("component3()")));
- (NSArray<SharedDeclinedProviderTerms *> *)component4 __attribute__((swift_name("component4()")));
- (SharedUserTerms *)doCopyPlatformTerms:(NSArray<SharedAcceptedPlatformTerms *> *)platformTerms providerTerms:(NSArray<SharedAcceptedProviderTerms *> *)providerTerms declinedPlatformTerms:(NSArray<SharedDeclinedPlatformTerms *> *)declinedPlatformTerms declinedProviderTerms:(NSArray<SharedDeclinedProviderTerms *> *)declinedProviderTerms __attribute__((swift_name("doCopy(platformTerms:providerTerms:declinedPlatformTerms:declinedProviderTerms:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedDeclinedPlatformTerms *> *declinedPlatformTerms __attribute__((swift_name("declinedPlatformTerms")));
@property (readonly) NSArray<SharedDeclinedProviderTerms *> *declinedProviderTerms __attribute__((swift_name("declinedProviderTerms")));
@property (readonly) NSArray<SharedAcceptedPlatformTerms *> *platformTerms __attribute__((swift_name("platformTerms")));
@property (readonly) NSArray<SharedAcceptedProviderTerms *> *providerTerms __attribute__((swift_name("providerTerms")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UserTerms.Companion")))
@interface SharedUserTermsCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UsersMoney")))
@interface SharedUsersMoney : SharedBase
- (instancetype)initWithAmount:(double)amount currency:(NSString *)currency __attribute__((swift_name("init(amount:currency:)"))) __attribute__((objc_designated_initializer));
- (double)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (SharedUsersMoney *)doCopyAmount:(double)amount currency:(NSString *)currency __attribute__((swift_name("doCopy(amount:currency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double amount __attribute__((swift_name("amount")));
@property (readonly) NSString *currency __attribute__((swift_name("currency")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UsersMoney.Companion")))
@interface SharedUsersMoneyCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Vehicle")))
@interface SharedVehicle : SharedBase
- (instancetype)initWithId:(NSString *)id vehicleType:(SharedVehicleVehicleType *)vehicleType name:(NSString * _Nullable)name licencePlate:(NSString * _Nullable)licencePlate __attribute__((swift_name("init(id:vehicleType:name:licencePlate:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SharedVehicleVehicleType *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (SharedVehicle *)doCopyId:(NSString *)id vehicleType:(SharedVehicleVehicleType *)vehicleType name:(NSString * _Nullable)name licencePlate:(NSString * _Nullable)licencePlate __attribute__((swift_name("doCopy(id:vehicleType:name:licencePlate:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable licencePlate __attribute__((swift_name("licencePlate")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) SharedVehicleVehicleType *vehicleType __attribute__((swift_name("vehicleType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Vehicle.Companion")))
@interface SharedVehicleCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Vehicle.VehicleType")))
@interface SharedVehicleVehicleType : SharedKotlinEnum<SharedVehicleVehicleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedVehicleVehicleType *car __attribute__((swift_name("car")));
@property (class, readonly) SharedVehicleVehicleType *bicycle __attribute__((swift_name("bicycle")));
@property (class, readonly) SharedVehicleVehicleType *scooter __attribute__((swift_name("scooter")));
@property (class, readonly) SharedVehicleVehicleType *kickScooter __attribute__((swift_name("kickScooter")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Vehicle.VehicleTypeSerializer")))
@interface SharedVehicleVehicleTypeSerializer : SharedCommonEnumSerializer<SharedVehicleVehicleType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerificationProvider")))
@interface SharedVerificationProvider : SharedBase
- (instancetype)initWithId:(NSString * _Nullable)id __attribute__((swift_name("init(id:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedVerificationProvider *)doCopyId:(NSString * _Nullable)id __attribute__((swift_name("doCopy(id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable id __attribute__((swift_name("id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerificationProvider.Companion")))
@interface SharedVerificationProviderCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerificationProvidersResponse")))
@interface SharedVerificationProvidersResponse : SharedBase
- (instancetype)initWithProviders:(NSArray<SharedVerificationProvider *> * _Nullable)providers __attribute__((swift_name("init(providers:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedVerificationProvider *> * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SharedVerificationProvidersResponse *)doCopyProviders:(NSArray<SharedVerificationProvider *> * _Nullable)providers __attribute__((swift_name("doCopy(providers:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedVerificationProvider *> * _Nullable providers __attribute__((swift_name("providers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerificationProvidersResponse.Companion")))
@interface SharedVerificationProvidersResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyPhoneNumberParameters")))
@interface SharedVerifyPhoneNumberParameters : SharedBase
- (instancetype)initWithPhoneNumber:(NSString *)phoneNumber verificationCode:(NSString * _Nullable)verificationCode template:(NSString * _Nullable)template_ __attribute__((swift_name("init(phoneNumber:verificationCode:template:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (SharedVerifyPhoneNumberParameters *)doCopyPhoneNumber:(NSString *)phoneNumber verificationCode:(NSString * _Nullable)verificationCode template:(NSString * _Nullable)template_ __attribute__((swift_name("doCopy(phoneNumber:verificationCode:template:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *phoneNumber __attribute__((swift_name("phoneNumber")));
@property (readonly, getter=template) NSString * _Nullable template_ __attribute__((swift_name("template_")));
@property (readonly) NSString * _Nullable verificationCode __attribute__((swift_name("verificationCode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyPhoneNumberParameters.Companion")))
@interface SharedVerifyPhoneNumberParametersCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyProviderRequirementsResponse")))
@interface SharedVerifyProviderRequirementsResponse : SharedBase
- (instancetype)initWithRequirements:(NSArray<SharedMspRequirements *> *)requirements user:(SharedUser *)user requirementInterdependence:(NSDictionary<NSString *, NSArray<NSString *> *> *)requirementInterdependence __attribute__((swift_name("init(requirements:user:requirementInterdependence:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedMspRequirements *> *)component1 __attribute__((swift_name("component1()")));
- (SharedUser *)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, NSArray<NSString *> *> *)component3 __attribute__((swift_name("component3()")));
- (SharedVerifyProviderRequirementsResponse *)doCopyRequirements:(NSArray<SharedMspRequirements *> *)requirements user:(SharedUser *)user requirementInterdependence:(NSDictionary<NSString *, NSArray<NSString *> *> *)requirementInterdependence __attribute__((swift_name("doCopy(requirements:user:requirementInterdependence:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, NSArray<NSString *> *> *requirementInterdependence __attribute__((swift_name("requirementInterdependence")));
@property (readonly) NSArray<SharedMspRequirements *> *requirements __attribute__((swift_name("requirements")));
@property (readonly) SharedUser *user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerifyProviderRequirementsResponse.Companion")))
@interface SharedVerifyProviderRequirementsResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WalkingPath")))
@interface SharedWalkingPath : SharedBase
- (instancetype)initWithDistance:(SharedDistance *)distance start:(SharedLocation *)start end:(SharedLocation *)end startTime:(NSString *)startTime endTime:(NSString *)endTime shape:(NSString *)shape walkType:(SharedWalkingPathWalkType *)walkType __attribute__((swift_name("init(distance:start:end:startTime:endTime:shape:walkType:)"))) __attribute__((objc_designated_initializer));
- (SharedDistance *)component1 __attribute__((swift_name("component1()")));
- (SharedLocation *)component2 __attribute__((swift_name("component2()")));
- (SharedLocation *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (SharedWalkingPathWalkType *)component7 __attribute__((swift_name("component7()")));
- (SharedWalkingPath *)doCopyDistance:(SharedDistance *)distance start:(SharedLocation *)start end:(SharedLocation *)end startTime:(NSString *)startTime endTime:(NSString *)endTime shape:(NSString *)shape walkType:(SharedWalkingPathWalkType *)walkType __attribute__((swift_name("doCopy(distance:start:end:startTime:endTime:shape:walkType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SharedDistance *distance __attribute__((swift_name("distance")));
@property (readonly) SharedLocation *end __attribute__((swift_name("end")));
@property (readonly) NSString *endTime __attribute__((swift_name("endTime")));
@property (readonly) NSString *shape __attribute__((swift_name("shape")));
@property (readonly) SharedLocation *start __attribute__((swift_name("start")));
@property (readonly) NSString *startTime __attribute__((swift_name("startTime")));
@property (readonly) SharedWalkingPathWalkType *walkType __attribute__((swift_name("walkType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WalkingPath.Companion")))
@interface SharedWalkingPathCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WalkingPath.WalkType")))
@interface SharedWalkingPathWalkType : SharedKotlinEnum<SharedWalkingPathWalkType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedWalkingPathWalkType *regular __attribute__((swift_name("regular")));
@property (class, readonly) SharedWalkingPathWalkType *platform __attribute__((swift_name("platform")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("WalkingPath.WalkTypeSerializer")))
@interface SharedWalkingPathWalkTypeSerializer : SharedCommonEnumSerializer<SharedWalkingPathWalkType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithSerialName:(NSString *)serialName choices:(SharedKotlinArray<id> *)choices choicesNames:(SharedKotlinArray<NSString *> *)choicesNames __attribute__((swift_name("init(serialName:choices:choicesNames:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)serializer __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Zone")))
@interface SharedZone : SharedBase
- (instancetype)initWithId:(NSString *)id providerId:(NSString *)providerId shape:(NSString *)shape holes:(NSArray<NSString *> *)holes isReturnAllowed:(BOOL)isReturnAllowed name:(NSString * _Nullable)name priority:(SharedInt * _Nullable)priority returnFee:(SharedDouble * _Nullable)returnFee currency:(NSString * _Nullable)currency __attribute__((swift_name("init(id:providerId:shape:holes:isReturnAllowed:name:priority:returnFee:currency:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSArray<NSString *> *)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (SharedInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (SharedDouble * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (SharedZone *)doCopyId:(NSString *)id providerId:(NSString *)providerId shape:(NSString *)shape holes:(NSArray<NSString *> *)holes isReturnAllowed:(BOOL)isReturnAllowed name:(NSString * _Nullable)name priority:(SharedInt * _Nullable)priority returnFee:(SharedDouble * _Nullable)returnFee currency:(NSString * _Nullable)currency __attribute__((swift_name("doCopy(id:providerId:shape:holes:isReturnAllowed:name:priority:returnFee:currency:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable currency __attribute__((swift_name("currency")));
@property (readonly) NSArray<NSString *> *holes __attribute__((swift_name("holes")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) BOOL isReturnAllowed __attribute__((swift_name("isReturnAllowed")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) SharedInt * _Nullable priority __attribute__((swift_name("priority")));
@property (readonly) NSString *providerId __attribute__((swift_name("providerId")));
@property (readonly) SharedDouble * _Nullable returnFee __attribute__((swift_name("returnFee")));
@property (readonly) NSString *shape __attribute__((swift_name("shape")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Zone.Companion")))
@interface SharedZoneCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ZonesResponse")))
@interface SharedZonesResponse : SharedBase
- (instancetype)initWithZones:(NSArray<SharedZone *> *)zones __attribute__((swift_name("init(zones:)"))) __attribute__((objc_designated_initializer));
- (NSArray<SharedZone *> *)component1 __attribute__((swift_name("component1()")));
- (SharedZonesResponse *)doCopyZones:(NSArray<SharedZone *> *)zones __attribute__((swift_name("doCopy(zones:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SharedZone *> *zones __attribute__((swift_name("zones")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ZonesResponse.Companion")))
@interface SharedZonesResponseCompanion : SharedBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Greeting")))
@interface SharedGreeting : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)greeting __attribute__((swift_name("greeting()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface SharedPlatform : SharedBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MockRouteKt")))
@interface SharedMockRouteKt : SharedBase
@property (class, readonly) SharedRoutesResult *mockResult __attribute__((swift_name("mockResult")));
@property (class, readonly) SharedRoute *mockRoute __attribute__((swift_name("mockRoute")));
@property (class, readonly) SharedRouteSegment *mockSegment1 __attribute__((swift_name("mockSegment1")));
@property (class, readonly) SharedRouteSegment *mockSegment2 __attribute__((swift_name("mockSegment2")));
@property (class, readonly) SharedRouteSegment *mockSegment3 __attribute__((swift_name("mockSegment3")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SharedKotlinx_serialization_coreEncoder
@required
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize typeSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginCollection(descriptor:collectionSize:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginCollection method with two arguments.")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<SharedKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor typeSerializers:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeSerializers __attribute__((swift_name("beginStructure(descriptor:typeSerializers:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SharedKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<SharedKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SharedKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<SharedKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SharedKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SharedKotlinx_serialization_coreDecoder
@required
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (id<SharedKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor typeParams:(SharedKotlinArray<id<SharedKotlinx_serialization_coreKSerializer>> *)typeParams __attribute__((swift_name("beginStructure(descriptor:typeParams:)"))) __attribute__((unavailable("Parameter typeSerializers is deprecated for removal. Please migrate to beginStructure method with one argument.")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SharedKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
- (id _Nullable)updateSerializableValueDeserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Updating elements that are outside of structure is an unsupported operation.")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) SharedKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SharedKotlinArray<T> : SharedBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SharedInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SharedKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SharedKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (void)encodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNonSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(descriptor:index:value:)"))) __attribute__((unavailable("This method is deprecated for removal. Please remove it from your implementation and delegate to default method instead")));
- (void)encodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SharedKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SharedKotlinx_serialization_coreSerializersModule : SharedBase
- (void)dumpToCollector:(id<SharedKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<SharedKotlinx_serialization_coreKSerializer> _Nullable)getContextualKclass:(id<SharedKotlinKClass>)kclass __attribute__((swift_name("getContextual(kclass:)")));
- (id<SharedKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SharedKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SharedKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SharedKotlinx_serialization_coreSerialKind : SharedBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SharedKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor i:(int32_t)i deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(descriptor:i:deserializer:)"))) __attribute__((unavailable("Please migrate to decodeElement method which accepts old value.Feel free to ignore it if your format does not support updates.")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (id _Nullable)updateNullableSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
- (id _Nullable)updateSerializableElementDescriptor:(id<SharedKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SharedKotlinx_serialization_coreDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(descriptor:index:deserializer:old:)"))) __attribute__((unavailable("Update* methods are deprecated for removal. Update behaviour is now considered an implementation detail of the format.Pass the old value to decodeSerializable*, so formats that support update could use it.")));
@property (readonly) SharedKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@property (readonly) SharedKotlinx_serialization_coreUpdateMode *updateMode __attribute__((swift_name("updateMode"))) __attribute__((unavailable("Update mode in Decoder is deprecated for removal. Update behaviour is now considered an implementation detail of the format that should not concern serializer.")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SharedKotlinNothing : SharedBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_coreUpdateMode")))
@interface SharedKotlinx_serialization_coreUpdateMode : SharedKotlinEnum<SharedKotlinx_serialization_coreUpdateMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) SharedKotlinx_serialization_coreUpdateMode *banned __attribute__((swift_name("banned")));
@property (class, readonly) SharedKotlinx_serialization_coreUpdateMode *overwrite __attribute__((swift_name("overwrite")));
@property (class, readonly) SharedKotlinx_serialization_coreUpdateMode *update __attribute__((swift_name("update")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SharedKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SharedKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SharedKotlinKClass>)kClass serializer:(id<SharedKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SharedKotlinKClass>)baseClass actualClass:(id<SharedKotlinKClass>)actualClass actualSerializer:(id<SharedKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SharedKotlinKClass>)baseClass defaultSerializerProvider:(id<SharedKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SharedKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SharedKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SharedKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SharedKotlinKClass <SharedKotlinKDeclarationContainer, SharedKotlinKAnnotatedElement, SharedKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
