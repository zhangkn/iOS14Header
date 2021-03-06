/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSData, GEOMapRegion, GEOAddress, NSDictionary, NSArray, NSTimeZone, NSDate, GEOAssociatedApp, GEOMapItemClientAttributes, GEOPlace, GEOPlaceResult, GEOPDPlace, GEOPDFlyover, GEOMuninViewState, GEOStorefrontInfo, GEOStorefrontPresentationInfo, GEOMapItemIdentifier, GEOPriceDescription, NSURL, GEOMapItemPlaceAttribution, GEOMapItemPhotosAttribution, GEOMapItemReviewsAttribution, GEOFeatureStyleAttributes, GEOPDBusinessClaim, GEORestaurantFeaturesLink, GEOMessageLink, GEORelatedPlaceList, GEOPlacecardLayoutConfiguration, GEOMapItemDetourInfo, GEOMapItemContainedPlace, GEOStyleAttributes, GEOAppleRating, GEOPlaceQuestionnaire;


@protocol GEOMapItem <NSObject>
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * secondaryName; 
@property (nonatomic,readonly) NSString * secondarySpokenName; 
@property (nonatomic,readonly) NSData * encodedData; 
@property (getter=isDisputed,nonatomic,readonly) BOOL disputed; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng coordinate; 
@property (nonatomic,readonly) GEOCoarseLocationLatLng centerCoordinate; 
@property (nonatomic,readonly) int referenceFrame; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegion; 
@property (nonatomic,readonly) BOOL hasDisplayMinZoom; 
@property (nonatomic,readonly) float displayMinZoom; 
@property (nonatomic,readonly) BOOL hasDisplayMaxZoom; 
@property (nonatomic,readonly) float displayMaxZoom; 
@property (nonatomic,readonly) GEOMapRegion * geoFenceMapRegion; 
@property (nonatomic,readonly) GEOAddress * geoAddress; 
@property (nonatomic,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,readonly) NSArray * areasOfInterest; 
@property (nonatomic,readonly) NSTimeZone * timezone; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegionOrNil; 
@property (nonatomic,readonly) GEOMapRegion * geoFenceMapRegionOrNil; 
@property (nonatomic,readonly) int contactAddressType; 
@property (nonatomic,readonly) NSString * contactName; 
@property (nonatomic,readonly) NSString * contactSpokenName; 
@property (nonatomic,readonly) BOOL contactIsMe; 
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) BOOL isEventAllDay; 
@property (getter=_reviews,nonatomic,readonly) NSArray * reviews; 
@property (getter=_tips,nonatomic,readonly) NSArray * tips; 
@property (getter=_photos,nonatomic,readonly) NSArray * photos; 
@property (getter=_associatedApp,nonatomic,readonly) GEOAssociatedApp * associatedApp; 
@property (getter=_clientAttributes,nonatomic,readonly) GEOMapItemClientAttributes * clientAttributes; 
@property (getter=_place,nonatomic,readonly) GEOPlace * place; 
@property (getter=_placeResult,nonatomic,readonly) GEOPlaceResult * placeResult; 
@property (getter=_placeData,nonatomic,readonly) GEOPDPlace * placeData; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) BOOL hasResolvablePartialInformation; 
@property (getter=_addressGeocodeAccuracy,nonatomic,readonly) int addressGeocodeAccuracy; 
@property (getter=_responseStatusIsIncomplete,nonatomic,readonly) BOOL responseStatusIncomplete; 
@property (getter=_roadAccessPoints,nonatomic,readonly) NSArray * roadAccessPoints; 
@property (getter=_hasResultProviderID,nonatomic,readonly) BOOL hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_isTransitDisplayFeature,nonatomic,readonly) BOOL isTransitDisplayFeature; 
@property (getter=_hasTransit,nonatomic,readonly) BOOL hasTransit; 
@property (getter=_transitInfo,nonatomic,readonly) id<GEOMapItemTransitInfo> transitInfo; 
@property (getter=_transitAttribution,nonatomic,readonly) id<GEOTransitAttribution> transitAttribution; 
@property (getter=_transitVehiclePosition,nonatomic,readonly) id<GEOTransitVehiclePosition> transitVehiclePosition; 
@property (getter=_hasFlyover,nonatomic,readonly) BOOL hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncementMessage; 
@property (getter=_muninViewState,nonatomic,readonly) GEOMuninViewState * muninViewState; 
@property (getter=_storefrontInfo,nonatomic,readonly) GEOStorefrontInfo * storefrontInfo; 
@property (getter=_storefrontPresentationInfo,nonatomic,readonly) GEOStorefrontPresentationInfo * storefrontPresentationInfo; 
@property (getter=_hasMUID,nonatomic,readonly) BOOL hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_identifier,nonatomic,readonly) GEOMapItemIdentifier * identifier; 
@property (getter=_placeDisplayType,nonatomic,readonly) int placeDisplayType; 
@property (getter=_hasAreaInMeters,nonatomic,readonly) BOOL hasAreaInMeters; 
@property (getter=_areaInMeters,nonatomic,readonly) double areaInMeters; 
@property (getter=_businessURL,nonatomic,readonly) NSString * businessURL; 
@property (getter=_priceDescription,nonatomic,readonly) GEOPriceDescription * priceDescription; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) BOOL hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceRange,nonatomic,readonly) BOOL hasPriceRange; 
@property (getter=_priceRange,nonatomic,readonly) unsigned priceRange; 
@property (getter=_resultSnippetLocationString,nonatomic,readonly) NSString * resultSnippetLocationString; 
@property (getter=_resultSnippetDistanceDisplayThreshold,nonatomic,readonly) unsigned resultSnippetDistanceDisplayThreshold; 
@property (getter=_childItems,nonatomic,readonly) NSArray * childItems; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) BOOL hasAnyAmenities; 
@property (getter=_amenities,nonatomic,readonly) NSArray * amenities; 
@property (getter=_hasEncyclopedicInfo,nonatomic,readonly) BOOL hasEncyclopedicInfo; 
@property (getter=_encyclopedicInfo,nonatomic,readonly) id<GEOEncyclopedicInfo> encyclopedicInfo; 
@property (getter=_hasTelephone,nonatomic,readonly) BOOL hasTelephone; 
@property (getter=_telephone,nonatomic,readonly) NSString * telephone; 
@property (getter=_optsOutOfTelephoneAds,nonatomic,readonly) BOOL optsOutOfTelephoneAds; 
@property (getter=_disambiguationName,nonatomic,readonly) NSString * disambiguationName; 
@property (getter=_openingHoursOptions,nonatomic,readonly) unsigned long long openingHoursOptions; 
@property (getter=_needsAttribution,nonatomic,readonly) BOOL needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_poiPinpointURLString,nonatomic,readonly) NSString * poiPinpointURLString; 
@property (getter=_attribution,nonatomic,readonly) GEOMapItemPlaceAttribution * attribution; 
@property (getter=_photosAttribution,nonatomic,readonly) GEOMapItemPhotosAttribution * photosAttribution; 
@property (getter=_reviewsAttribution,nonatomic,readonly) GEOMapItemReviewsAttribution * reviewsAttribution; 
@property (getter=_poiCategory,nonatomic,readonly) NSString * poiCategory; 
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_mapsCategoryId,nonatomic,readonly) NSString * mapsCategoryId; 
@property (getter=_additionalPlaceInfos,nonatomic,readonly) NSArray * additionalPlaceInfos; 
@property (getter=_hasBusinessClaim,nonatomic,readonly) BOOL hasBusinessClaim; 
@property (getter=_businessClaim,nonatomic,readonly) GEOPDBusinessClaim * businessClaim; 
@property (nonatomic,readonly) NSArray * spatialMappedCategories; 
@property (nonatomic,readonly) NSArray * spatialMappedPlaceCategories; 
@property (nonatomic,readonly) BOOL hasVenueCapacity; 
@property (nonatomic,readonly) long long venueCapacity; 
@property (getter=_hasFeatureLink,nonatomic,readonly) BOOL hasFeatureLink; 
@property (getter=_featureLink,nonatomic,readonly) GEORestaurantFeaturesLink * featureLink; 
@property (getter=_parsecSectionType,nonatomic,readonly) int parsecSectionType; 
@property (getter=_isStandaloneBrand,nonatomic,readonly) BOOL isStandAloneBrand; 
@property (getter=_messageLink,nonatomic,readonly) GEOMessageLink * messageLink; 
@property (getter=_quickLinks,nonatomic,readonly) NSArray * quickLinks; 
@property (getter=_secondaryQuickLinks,nonatomic,readonly) NSArray * secondaryQuickLinks; 
@property (getter=_placeCollections,nonatomic,readonly) NSArray * placeCollections; 
@property (getter=_placeCollectionsIds,nonatomic,readonly) NSArray * placeCollectionsIds; 
@property (getter=_relatedPlaceList,nonatomic,readonly) GEORelatedPlaceList * relatedPlaceList; 
@property (getter=_placecardLayoutConfiguration,nonatomic,readonly) GEOPlacecardLayoutConfiguration * placecardLayoutConfiguration; 
@property (getter=_hasBrandMUID,nonatomic,readonly) BOOL hasBrandMUID; 
@property (getter=_brandMUID,nonatomic,readonly) unsigned long long brandMUID; 
@property (nonatomic,readonly) GEOMapItemDetourInfo * detourInfo; 
@property (nonatomic,readonly) BOOL hasExpiredComponents; 
@property (getter=_hasVenueFeatureType,nonatomic,readonly) BOOL hasVenueFeatureType; 
@property (getter=_venueFeatureType,nonatomic,readonly) int venueFeatureType; 
@property (getter=_venueInfo,nonatomic,readonly) id<GEOMapItemVenueInfo> venueInfo; 
@property (getter=_browseCategories,nonatomic,readonly) NSArray * browseCategories; 
@property (getter=_placeDisplayStyle,nonatomic,readonly) int placeDisplayStyle; 
@property (getter=_annotatedItemList,nonatomic,readonly) id<GEOAnnotatedItemList> annotatedItemList; 
@property (getter=_hasOperatingHours,nonatomic,readonly) BOOL hasOperatingHours; 
@property (getter=_hasCurrentOperatingHours,nonatomic,readonly) BOOL hasCurrentOperatingHours; 
@property (getter=_hasBusinessHours,nonatomic,readonly) BOOL hasBusinessHours; 
@property (getter=_businessHours,nonatomic,readonly) NSArray * businessHours; 
@property (getter=_hasLinkedServices,nonatomic,readonly) BOOL hasLinkedServices; 
@property (getter=_linkedServices,nonatomic,readonly) NSArray * linkedServices; 
@property (nonatomic,readonly) NSData * externalTransitStationCode; 
@property (getter=_hasWifiFingerprintLabelType,nonatomic,readonly) BOOL hasWifiFingerprintLabelType; 
@property (getter=_wifiFingerprintLabelType,nonatomic,readonly) int wifiFingerprintLabelType; 
@property (getter=_hasWifiFingerprintConfidence,nonatomic,readonly) BOOL hasWifiFingerprintConfidence; 
@property (getter=_wifiFingerprintConfidence,nonatomic,readonly) unsigned wifiFingerprintConfidence; 
@property (getter=_hasWifiFingerprintLabelStatusCode,nonatomic,readonly) BOOL hasWifiFingerprintLabelStatusCode; 
@property (getter=_wifiFingerprintLabelStatusCode,nonatomic,readonly) int wifiFingerprintLabelStatusCode; 
@property (getter=_containedPlace,nonatomic,readonly) GEOMapItemContainedPlace * containedPlace; 
@property (getter=_isInLinkedPlaceRelationship,nonatomic,readonly) BOOL inLinkedPlaceRelationship; 
@property (getter=_hasGroundViewLocationId,nonatomic,readonly) BOOL hasGroundViewLocationId; 
@property (getter=_groundViewLocationId,nonatomic,readonly) unsigned long long groundViewLocationId; 
@property (getter=_walletPlaceStyling,nonatomic,readonly) GEOStyleAttributes * walletPlaceStyling; 
@property (getter=_walletPlaceLocalizedString,nonatomic,readonly) NSString * walletPlaceLocalizedString; 
@property (getter=_walletPlaceLocalizedStringLocale,nonatomic,readonly) NSString * walletPlaceLocalizedStringLocale; 
@property (getter=_walletCategoryStyling,nonatomic,readonly) GEOStyleAttributes * walletCategoryStyling; 
@property (getter=_walletCategoryLocalizedString,nonatomic,readonly) NSString * walletCategoryLocalizedString; 
@property (getter=_walletCategoryLocalizedStringLocale,nonatomic,readonly) NSString * walletCategoryLocalizedStringLocale; 
@property (getter=_walletMapsCategoryIdentifier,nonatomic,readonly) NSString * walletMapsCategoryIdentifier; 
@property (getter=_walletCategoryIdentifier,nonatomic,readonly) NSString * walletCategoryIdentifier; 
@property (getter=_enableRAPLightweightFeedback,nonatomic,readonly) BOOL enableRAPLightweightFeedback; 
@property (getter=_showSuggestAnEditButton,nonatomic,readonly) BOOL showSuggestAnEditButton; 
@property (getter=_supportsAppleRatings,nonatomic,readonly) BOOL supportsAppleRatings; 
@property (getter=_appleRatings,nonatomic,readonly) NSArray * appleRatings; 
@property (getter=_overallAppleRating,nonatomic,readonly) GEOAppleRating * overallRating; 
@property (getter=_hasPlaceQuestionnaire,nonatomic,readonly) BOOL hasPlaceQuestionnaire; 
@property (getter=_placeQuestionnaire,nonatomic,readonly) GEOPlaceQuestionnaire * placeQuestionnaire; 
@property (getter=_identifierHistory,nonatomic,readonly) NSArray * identifierHistory; 
@property (getter=_canDownloadMorePhotos,nonatomic,readonly) BOOL canDownloadMorePhotos; 
@property (getter=_totalPhotoCount,nonatomic,readonly) unsigned long long totalPhotoCount; 
@property (getter=_alternateSearchableNames,nonatomic,readonly) NSArray * alternateSearchableNames; 
@property (getter=_iso3166CountryCode,nonatomic,readonly) NSString * iso3166CountryCode; 
@property (getter=_iso3166SubdivisionCode,nonatomic,readonly) NSString * iso3166SubdivisionCode; 
@optional
-(id)_mapItemBySettingIsTransitDisplayFeature:(BOOL)arg1;
-(id)_iso3166SubdivisionCode;
-(id)_iso3166CountryCode;

@required
-(id)_asPlaceInfo;
-(id)_providerURL;
-(unsigned)_resultSnippetDistanceDisplayThreshold;
-(id)shortAddress;
-(id)_vendorID;
-(NSString *)secondaryName;
-(id)_secondaryQuickLinks;
-(BOOL)_hasTelephone;
-(id)_place;
-(id)_transitInfo;
-(id)_childItems;
-(id)_featureLink;
-(id)_flyoverAnnouncementMessage;
-(NSString *)contactName;
-(BOOL)_hasAnyAmenities;
-(int)contactAddressType;
-(unsigned long long)_totalPhotoCount;
-(int)_placeDisplayType;
-(id)_reviewsAttribution;
-(BOOL)_hasResultProviderID;
-(unsigned)_sampleSizeForUserRatingScore;
-(NSTimeZone *)timezone;
-(int)referenceFrame;
-(id)_businessURL;
-(int)_parsecSectionType;
-(float)_normalizedUserRatingScore;
-(id)_roadAccessPoints;
-(id)_additionalPlaceInfos;
-(NSArray *)areasOfInterest;
-(id)_styleAttributes;
-(NSData *)externalTransitStationCode;
-(NSArray *)spatialMappedCategories;
-(int)_addressGeocodeAccuracy;
-(BOOL)_hasCurrentOperatingHours;
-(id)_resultSnippetLocationString;
-(BOOL)_hasLocalizedCategoryNamesForType:(unsigned)arg1;
-(id)_disambiguationName;
-(BOOL)_isTransitDisplayFeature;
-(GEOCoarseLocationLatLng)centerCoordinate;
-(id)_priceDescription;
-(id)weatherDisplayName;
-(NSString *)secondarySpokenName;
-(id)_associatedApp;
-(id)_businessClaim;
-(double)_areaInMeters;
-(id)_telephone;
-(id)addressObject;
-(id)_transitAttribution;
-(id)_amenities;
-(id)_clientAttributes;
-(id)_tips;
-(id)_photosAttribution;
-(BOOL)_hasTransit;
-(id)_placeCollections;
-(BOOL)_hasBusinessClaim;
-(id)_attribution;
-(id)_poiPinpointURLString;
-(id)_photos;
-(id)_placeDataAsData;
-(id)_webURL;
-(GEOCoarseLocationLatLng)coordinate;
-(BOOL)contactIsMe;
-(GEOAddress *)geoAddress;
-(GEOMapRegion *)displayMapRegionOrNil;
-(id)_localizedCategoryNamesForType:(unsigned)arg1;
-(id)_transitVehiclePosition;
-(BOOL)_hasFeatureLink;
-(BOOL)hasAmenityType:(int)arg1;
-(BOOL)_hasResolvablePartialInformation;
-(NSString *)contactSpokenName;
-(BOOL)_hasAreaInMeters;
-(id)_placecardLayoutConfiguration;
-(BOOL)_needsAttribution;
-(BOOL)_hasUserRatingScore;
-(id)_encyclopedicInfo;
-(id)_poiSurveyURLString;
-(unsigned long long)_customIconID;
-(GEOMapItemDetourInfo *)detourInfo;
-(BOOL)_hasPriceRange;
-(unsigned)_priceRange;
-(BOOL)isDisputed;
-(id)spokenNameForLocale:(id)arg1;
-(id)_arrivalMapRegionForTransportType:(int)arg1;
-(id)_messageLink;
-(BOOL)_hasFlyover;
-(id)_mapItemByStrippingOptionalData;
-(BOOL)hasExpiredComponents;
-(id)_flyover;
-(int)_resultProviderID;
-(BOOL)_hasOperatingHours;
-(BOOL)_hasEncyclopedicInfo;
-(id)_placeData;
-(BOOL)valueForAmenityType:(int)arg1;
-(id)_relatedPlaceList;
-(id)_walletCategoryLocalizedString;
-(id)_quickLinks;
-(BOOL)isEqualToMapItem:(id)arg1;
-(unsigned long long)_muid;
-(BOOL)_optsOutOfTelephoneAds;
-(unsigned long long)_openingHoursOptions;
-(id)_placeResult;
-(NSDictionary *)addressDictionary;
-(id)_reviews;
-(BOOL)_responseStatusIsIncomplete;
-(id)_spokenAddressForLocale:(id)arg1;
-(int)_venueFeatureType;
-(GEOMapRegion *)geoFenceMapRegionOrNil;
-(GEOMapRegion *)geoFenceMapRegion;
-(BOOL)_hasMUID;
-(int)_placeType;
-(id)_walletCategoryLocalizedStringLocale;
-(unsigned)_wifiFingerprintConfidence;
-(id)_poiCategory;
-(NSArray *)spatialMappedPlaceCategories;
-(BOOL)_hasWifiFingerprintConfidence;
-(BOOL)_hasWifiFingerprintLabelType;
-(id)_mapsCategoryId;
-(NSDate *)eventDate;
-(float)displayMinZoom;
-(BOOL)_hasBrandMUID;
-(id)_walletCategoryIdentifier;
-(int)_wifiFingerprintLabelStatusCode;
-(BOOL)_isInLinkedPlaceRelationship;
-(id)_walletMapsCategoryIdentifier;
-(BOOL)_hasWifiFingerprintLabelStatusCode;
-(id)_venueInfo;
-(GEOMapRegion *)displayMapRegion;
-(id)_identifier;
-(NSData *)encodedData;
-(BOOL)hasDisplayMinZoom;
-(BOOL)_hasGroundViewLocationId;
-(BOOL)isEventAllDay;
-(id)_annotatedItemList;
-(unsigned long long)_groundViewLocationId;
-(id)_appleRatings;
-(BOOL)_hasVenueFeatureType;
-(BOOL)_hasPlaceQuestionnaire;
-(id)_identifierHistory;
-(NSString *)eventName;
-(BOOL)_isStandaloneBrand;
-(id)_linkedServices;
-(BOOL)_canDownloadMorePhotos;
-(int)_placeDisplayStyle;
-(id)_bestAvatarBrandIconURLForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2;
-(BOOL)hasVenueCapacity;
-(int)_wifiFingerprintLabelType;
-(id)_walletCategoryStyling;
-(id)_bestNavbarBrandIconURLForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2;
-(void)iterateGroundViewsWithBlock:(/*^block*/id)arg1;
-(id)_walletPlaceLocalizedString;
-(BOOL)_hasBusinessHours;
-(id)_storefrontPresentationInfo;
-(float)displayMaxZoom;
-(BOOL)isValid;
-(BOOL)_supportsAppleRatings;
-(id)_placeCollectionsIds;
-(BOOL)_enableRAPLightweightFeedback;
-(id)_storefrontInfo;
-(id)_placeQuestionnaire;
-(BOOL)_hasLinkedServices;
-(unsigned long long)_brandMUID;
-(id)_walletPlaceLocalizedStringLocale;
-(id)_alternateSearchableNames;
-(long long)venueCapacity;
-(id)_overallAppleRating;
-(id)_browseCategories;
-(id)_businessHours;
-(NSString *)name;
-(id)_muninViewState;
-(id)_walletPlaceStyling;
-(id)_bestHeroBrandIconURLForSize:(CGSize)arg1 allowSmaller:(BOOL)arg2;
-(id)_containedPlace;
-(BOOL)hasDisplayMaxZoom;
-(BOOL)_showSuggestAnEditButton;

@end

