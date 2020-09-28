/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDRoadAccessInfo, GEOPDAddressObject, GEOPDAddress, GEOPDAmenities, GEOPDAnnotatedItemList, GEOPDAssociatedApp, GEOPDBounds, GEOPDBrowseCategories, GEOPDBusinessClaim, GEOPDBusinessHours, GEOPDCaptionedPhoto, GEOPDCollectionIds, GEOPDContainedPlace, GEOPDEntity, GEOPDETA, GEOPDExternalAction, GEOPDFactoid, GEOPDFlyover, GEOPDGroundViewLabel, GEOPDHours, GEOPDIcon, GEOPDISO3166Code, GEOPDLinkedService, GEOPDLocationEvent, GEOPDMessageLink, GEOPDMiniBrowseCategories, GEOPDPhoto, GEOPDPlaceCollectionItem, GEOPDPlaceCollection, GEOPDPlaceInfo, GEOPDPlaceQuestionnaireResult, GEOPDPlacecardLayoutConfiguration, GEOPDPlacecardURL, GEOPDPoiEvent, GEOPDPriceDescription, GEOPDPrototypeContainer, GEOPDPublisher, GEOPDQuickLink, GEOPDRap, GEOPDRating, GEOPDRawAttribute, GEOPDRelatedPlace, GEOPDRestaurantReservationLink, GEOPDResultSnippet, GEOPDReview, GEOPDSimpleRestaurantMenuText, GEOPDSpatialLookupResult, GEOPDStorefrontPresentation, GEOPDStorefront, GEOStyleAttributes, GEOPDTextBlock, GEOPDTip, GEOPDTransitAttribution, GEOPDTransitIncident, GEOPDTransitInfoSnippet, GEOPDTransitInfo, GEOPDTransitSchedule, GEOPDTransitTripGeometry, GEOPDTransitTripStopTime, GEOPDTransitTripStop, GEOPBTransitVehiclePosition, GEOPDVenueInfo, GEOPDWifiFingerprint;

@interface GEOPDComponentValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDRoadAccessInfo* _accessInfo;
	GEOPDAddressObject* _addressObject;
	GEOPDAddress* _address;
	GEOPDAmenities* _amenities;
	GEOPDAnnotatedItemList* _annotatedItemList;
	GEOPDAssociatedApp* _associatedApp;
	GEOPDBounds* _bounds;
	GEOPDBrowseCategories* _browseCategories;
	GEOPDBusinessClaim* _businessClaim;
	GEOPDBusinessHours* _businessHours;
	GEOPDCaptionedPhoto* _captionedPhoto;
	GEOPDCollectionIds* _collectionIds;
	GEOPDContainedPlace* _containedPlace;
	GEOPDEntity* _entity;
	GEOPDETA* _eta;
	GEOPDExternalAction* _externalAction;
	GEOPDFactoid* _factoid;
	GEOPDFlyover* _flyover;
	GEOPDGroundViewLabel* _groundViewLabel;
	GEOPDHours* _hours;
	GEOPDIcon* _icon;
	GEOPDISO3166Code* _iso3166Code;
	GEOPDLinkedService* _linkedService;
	GEOPDLocationEvent* _locationEvent;
	GEOPDMessageLink* _messageLink;
	GEOPDMiniBrowseCategories* _miniPlaceBrowseCategories;
	GEOPDPhoto* _photo;
	GEOPDBrowseCategories* _placeBrowseCategories;
	GEOPDPlaceCollectionItem* _placeCollectionItem;
	GEOPDPlaceCollection* _placeCollection;
	GEOPDPlaceInfo* _placeInfo;
	GEOPDPlaceQuestionnaireResult* _placeQuestionnaire;
	GEOPDPlacecardLayoutConfiguration* _placecardLayoutConfiguration;
	GEOPDPlacecardURL* _placecardUrl;
	GEOPDPoiEvent* _poiEvent;
	GEOPDPriceDescription* _priceDescription;
	GEOPDPrototypeContainer* _prototypeContainer;
	GEOPDPublisher* _publisher;
	GEOPDQuickLink* _quickLink;
	GEOPDRap* _rap;
	GEOPDRating* _rating;
	GEOPDRawAttribute* _rawAttribute;
	GEOPDRelatedPlace* _relatedPlace;
	GEOPDRestaurantReservationLink* _restaurantReservationLink;
	GEOPDResultSnippet* _resultSnippet;
	GEOPDReview* _review;
	GEOPDSimpleRestaurantMenuText* _simpleRestaurantMenuText;
	GEOPDSpatialLookupResult* _spatialLookupResult;
	GEOPDStorefrontPresentation* _storefrontPresentation;
	GEOPDStorefront* _storefront;
	GEOStyleAttributes* _styleAttributes;
	GEOPDTextBlock* _textBlock;
	GEOPDTip* _tip;
	GEOPDTransitAttribution* _transitAttribution;
	GEOPDTransitIncident* _transitIncident;
	GEOPDTransitInfoSnippet* _transitInfoSnippet;
	GEOPDTransitInfo* _transitInfo;
	GEOPDTransitSchedule* _transitSchedule;
	GEOPDTransitTripGeometry* _transitTripGeometry;
	GEOPDTransitTripStopTime* _transitTripStopTime;
	GEOPDTransitTripStop* _transitTripStop;
	GEOPBTransitVehiclePosition* _transitVehiclePosition;
	GEOPDAmenities* _vendorAmenities;
	GEOPDVenueInfo* _venueInfo;
	GEOPDWifiFingerprint* _wifiFingerprint;

}

@property (nonatomic,readonly) BOOL hasEntity; 
@property (nonatomic,retain) GEOPDEntity * entity; 
@property (nonatomic,readonly) BOOL hasPlaceInfo; 
@property (nonatomic,retain) GEOPDPlaceInfo * placeInfo; 
@property (nonatomic,readonly) BOOL hasAccessInfo; 
@property (nonatomic,retain) GEOPDRoadAccessInfo * accessInfo; 
@property (nonatomic,readonly) BOOL hasBounds; 
@property (nonatomic,retain) GEOPDBounds * bounds; 
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOPDAddress * address; 
@property (nonatomic,readonly) BOOL hasRating; 
@property (nonatomic,retain) GEOPDRating * rating; 
@property (nonatomic,readonly) BOOL hasReview; 
@property (nonatomic,retain) GEOPDReview * review; 
@property (nonatomic,readonly) BOOL hasPhoto; 
@property (nonatomic,retain) GEOPDPhoto * photo; 
@property (nonatomic,readonly) BOOL hasHours; 
@property (nonatomic,retain) GEOPDHours * hours; 
@property (nonatomic,readonly) BOOL hasTransitInfo; 
@property (nonatomic,retain) GEOPDTransitInfo * transitInfo; 
@property (nonatomic,readonly) BOOL hasTransitSchedule; 
@property (nonatomic,retain) GEOPDTransitSchedule * transitSchedule; 
@property (nonatomic,readonly) BOOL hasEta; 
@property (nonatomic,retain) GEOPDETA * eta; 
@property (nonatomic,readonly) BOOL hasFlyover; 
@property (nonatomic,retain) GEOPDFlyover * flyover; 
@property (nonatomic,readonly) BOOL hasRawAttribute; 
@property (nonatomic,retain) GEOPDRawAttribute * rawAttribute; 
@property (nonatomic,readonly) BOOL hasAmenities; 
@property (nonatomic,retain) GEOPDAmenities * amenities; 
@property (nonatomic,readonly) BOOL hasStyleAttributes; 
@property (nonatomic,retain) GEOStyleAttributes * styleAttributes; 
@property (nonatomic,readonly) BOOL hasTransitIncident; 
@property (nonatomic,retain) GEOPDTransitIncident * transitIncident; 
@property (nonatomic,readonly) BOOL hasTextBlock; 
@property (nonatomic,retain) GEOPDTextBlock * textBlock; 
@property (nonatomic,readonly) BOOL hasFactoid; 
@property (nonatomic,retain) GEOPDFactoid * factoid; 
@property (nonatomic,readonly) BOOL hasTransitAttribution; 
@property (nonatomic,retain) GEOPDTransitAttribution * transitAttribution; 
@property (nonatomic,readonly) BOOL hasBusinessClaim; 
@property (nonatomic,retain) GEOPDBusinessClaim * businessClaim; 
@property (nonatomic,readonly) BOOL hasCaptionedPhoto; 
@property (nonatomic,retain) GEOPDCaptionedPhoto * captionedPhoto; 
@property (nonatomic,readonly) BOOL hasTransitInfoSnippet; 
@property (nonatomic,retain) GEOPDTransitInfoSnippet * transitInfoSnippet; 
@property (nonatomic,readonly) BOOL hasExternalAction; 
@property (nonatomic,retain) GEOPDExternalAction * externalAction; 
@property (nonatomic,readonly) BOOL hasResultSnippet; 
@property (nonatomic,retain) GEOPDResultSnippet * resultSnippet; 
@property (nonatomic,readonly) BOOL hasAddressObject; 
@property (nonatomic,retain) GEOPDAddressObject * addressObject; 
@property (nonatomic,readonly) BOOL hasSimpleRestaurantMenuText; 
@property (nonatomic,retain) GEOPDSimpleRestaurantMenuText * simpleRestaurantMenuText; 
@property (nonatomic,readonly) BOOL hasRestaurantReservationLink; 
@property (nonatomic,retain) GEOPDRestaurantReservationLink * restaurantReservationLink; 
@property (nonatomic,readonly) BOOL hasSpatialLookupResult; 
@property (nonatomic,retain) GEOPDSpatialLookupResult * spatialLookupResult; 
@property (nonatomic,readonly) BOOL hasTip; 
@property (nonatomic,retain) GEOPDTip * tip; 
@property (nonatomic,readonly) BOOL hasPlacecardUrl; 
@property (nonatomic,retain) GEOPDPlacecardURL * placecardUrl; 
@property (nonatomic,readonly) BOOL hasAssociatedApp; 
@property (nonatomic,retain) GEOPDAssociatedApp * associatedApp; 
@property (nonatomic,readonly) BOOL hasMessageLink; 
@property (nonatomic,retain) GEOPDMessageLink * messageLink; 
@property (nonatomic,readonly) BOOL hasQuickLink; 
@property (nonatomic,retain) GEOPDQuickLink * quickLink; 
@property (nonatomic,readonly) BOOL hasRap; 
@property (nonatomic,retain) GEOPDRap * rap; 
@property (nonatomic,readonly) BOOL hasLocationEvent; 
@property (nonatomic,retain) GEOPDLocationEvent * locationEvent; 
@property (nonatomic,readonly) BOOL hasVenueInfo; 
@property (nonatomic,retain) GEOPDVenueInfo * venueInfo; 
@property (nonatomic,readonly) BOOL hasContainedPlace; 
@property (nonatomic,retain) GEOPDContainedPlace * containedPlace; 
@property (nonatomic,readonly) BOOL hasWifiFingerprint; 
@property (nonatomic,retain) GEOPDWifiFingerprint * wifiFingerprint; 
@property (nonatomic,readonly) BOOL hasIcon; 
@property (nonatomic,retain) GEOPDIcon * icon; 
@property (nonatomic,readonly) BOOL hasPriceDescription; 
@property (nonatomic,retain) GEOPDPriceDescription * priceDescription; 
@property (nonatomic,readonly) BOOL hasBrowseCategories; 
@property (nonatomic,retain) GEOPDBrowseCategories * browseCategories; 
@property (nonatomic,readonly) BOOL hasStorefront; 
@property (nonatomic,retain) GEOPDStorefront * storefront; 
@property (nonatomic,readonly) BOOL hasGroundViewLabel; 
@property (nonatomic,retain) GEOPDGroundViewLabel * groundViewLabel; 
@property (nonatomic,readonly) BOOL hasAnnotatedItemList; 
@property (nonatomic,retain) GEOPDAnnotatedItemList * annotatedItemList; 
@property (nonatomic,readonly) BOOL hasPoiEvent; 
@property (nonatomic,retain) GEOPDPoiEvent * poiEvent; 
@property (nonatomic,readonly) BOOL hasStorefrontPresentation; 
@property (nonatomic,retain) GEOPDStorefrontPresentation * storefrontPresentation; 
@property (nonatomic,readonly) BOOL hasPlacecardLayoutConfiguration; 
@property (nonatomic,retain) GEOPDPlacecardLayoutConfiguration * placecardLayoutConfiguration; 
@property (nonatomic,readonly) BOOL hasPrototypeContainer; 
@property (nonatomic,retain) GEOPDPrototypeContainer * prototypeContainer; 
@property (nonatomic,readonly) BOOL hasTransitVehiclePosition; 
@property (nonatomic,retain) GEOPBTransitVehiclePosition * transitVehiclePosition; 
@property (nonatomic,readonly) BOOL hasLinkedService; 
@property (nonatomic,retain) GEOPDLinkedService * linkedService; 
@property (nonatomic,readonly) BOOL hasBusinessHours; 
@property (nonatomic,retain) GEOPDBusinessHours * businessHours; 
@property (nonatomic,readonly) BOOL hasPlaceCollection; 
@property (nonatomic,retain) GEOPDPlaceCollection * placeCollection; 
@property (nonatomic,readonly) BOOL hasRelatedPlace; 
@property (nonatomic,retain) GEOPDRelatedPlace * relatedPlace; 
@property (nonatomic,readonly) BOOL hasTransitTripStop; 
@property (nonatomic,retain) GEOPDTransitTripStop * transitTripStop; 
@property (nonatomic,readonly) BOOL hasTransitTripStopTime; 
@property (nonatomic,retain) GEOPDTransitTripStopTime * transitTripStopTime; 
@property (nonatomic,readonly) BOOL hasTransitTripGeometry; 
@property (nonatomic,retain) GEOPDTransitTripGeometry * transitTripGeometry; 
@property (nonatomic,readonly) BOOL hasPlaceBrowseCategories; 
@property (nonatomic,retain) GEOPDBrowseCategories * placeBrowseCategories; 
@property (nonatomic,readonly) BOOL hasPublisher; 
@property (nonatomic,retain) GEOPDPublisher * publisher; 
@property (nonatomic,readonly) BOOL hasMiniPlaceBrowseCategories; 
@property (nonatomic,retain) GEOPDMiniBrowseCategories * miniPlaceBrowseCategories; 
@property (nonatomic,readonly) BOOL hasPlaceQuestionnaire; 
@property (nonatomic,retain) GEOPDPlaceQuestionnaireResult * placeQuestionnaire; 
@property (nonatomic,readonly) BOOL hasPlaceCollectionItem; 
@property (nonatomic,retain) GEOPDPlaceCollectionItem * placeCollectionItem; 
@property (nonatomic,readonly) BOOL hasCollectionIds; 
@property (nonatomic,retain) GEOPDCollectionIds * collectionIds; 
@property (nonatomic,readonly) BOOL hasIso3166Code; 
@property (nonatomic,retain) GEOPDISO3166Code * iso3166Code; 
@property (nonatomic,readonly) BOOL hasVendorAmenities; 
@property (nonatomic,retain) GEOPDAmenities * vendorAmenities; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(GEOPDVenueInfo *)venueInfo;
-(BOOL)hasAddressObject;
-(BOOL)hasRap;
-(GEOPDBrowseCategories *)browseCategories;
-(GEOPDAmenities *)amenities;
-(GEOPDBusinessClaim *)businessClaim;
-(void)setTransitTripGeometry:(GEOPDTransitTripGeometry *)arg1 ;
-(GEOPDQuickLink *)quickLink;
-(BOOL)hasRawAttribute;
-(GEOPDResultSnippet *)resultSnippet;
-(BOOL)hasPlaceCollection;
-(GEOPDPublisher *)publisher;
-(void)setStyleAttributes:(GEOStyleAttributes *)arg1 ;
-(GEOPDTransitIncident *)transitIncident;
-(GEOPDStorefrontPresentation *)storefrontPresentation;
-(GEOPDTransitSchedule *)transitSchedule;
-(void)setTransitAttribution:(GEOPDTransitAttribution *)arg1 ;
-(void)setPublisher:(GEOPDPublisher *)arg1 ;
-(void)setTransitSchedule:(GEOPDTransitSchedule *)arg1 ;
-(void)setStorefront:(GEOPDStorefront *)arg1 ;
-(GEOPDHours *)hours;
-(BOOL)hasIcon;
-(GEOPDAmenities *)vendorAmenities;
-(GEOPDMiniBrowseCategories *)miniPlaceBrowseCategories;
-(GEOPDPlaceInfo *)placeInfo;
-(BOOL)hasStyleAttributes;
-(GEOPDAddressObject *)addressObject;
-(void)setCaptionedPhoto:(GEOPDCaptionedPhoto *)arg1 ;
-(void)setEntity:(GEOPDEntity *)arg1 ;
-(BOOL)hasAmenities;
-(void)setAddressObject:(GEOPDAddressObject *)arg1 ;
-(void)setHours:(GEOPDHours *)arg1 ;
-(BOOL)hasContainedPlace;
-(GEOPDStorefront *)storefront;
-(BOOL)hasTip;
-(BOOL)hasAddress;
-(GEOPDPlaceCollection *)placeCollection;
-(void)setRap:(GEOPDRap *)arg1 ;
-(GEOPDEntity *)entity;
-(BOOL)hasSimpleRestaurantMenuText;
-(GEOPDPlaceQuestionnaireResult *)placeQuestionnaire;
-(GEOPDRelatedPlace *)relatedPlace;
-(GEOPDBounds *)bounds;
-(BOOL)hasIso3166Code;
-(void)setPriceDescription:(GEOPDPriceDescription *)arg1 ;
-(void)setCollectionIds:(GEOPDCollectionIds *)arg1 ;
-(void)setFlyover:(GEOPDFlyover *)arg1 ;
-(GEOPDRap *)rap;
-(BOOL)hasPlacecardLayoutConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVenueInfo:(GEOPDVenueInfo *)arg1 ;
-(GEOPDPhoto *)photo;
-(void)setSpatialLookupResult:(GEOPDSpatialLookupResult *)arg1 ;
-(BOOL)hasTransitAttribution;
-(BOOL)hasGroundViewLabel;
-(void)setWifiFingerprint:(GEOPDWifiFingerprint *)arg1 ;
-(GEOPDETA *)eta;
-(void)setBrowseCategories:(GEOPDBrowseCategories *)arg1 ;
-(void)setGroundViewLabel:(GEOPDGroundViewLabel *)arg1 ;
-(BOOL)hasPhoto;
-(void)setPhoto:(GEOPDPhoto *)arg1 ;
-(BOOL)hasTransitTripStop;
-(void)writeTo:(id)arg1 ;
-(void)setTransitIncident:(GEOPDTransitIncident *)arg1 ;
-(BOOL)hasTransitTripGeometry;
-(BOOL)hasAccessInfo;
-(BOOL)hasLocationEvent;
-(BOOL)hasStorefrontPresentation;
-(void)setEta:(GEOPDETA *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(GEOPDSpatialLookupResult *)spatialLookupResult;
-(GEOPDRoadAccessInfo *)accessInfo;
-(BOOL)hasBrowseCategories;
-(GEOPDPriceDescription *)priceDescription;
-(void)setAnnotatedItemList:(GEOPDAnnotatedItemList *)arg1 ;
-(void)setPlaceBrowseCategories:(GEOPDBrowseCategories *)arg1 ;
-(BOOL)hasRelatedPlace;
-(void)setTransitTripStopTime:(GEOPDTransitTripStopTime *)arg1 ;
-(void)setBounds:(GEOPDBounds *)arg1 ;
-(void)setTransitInfo:(GEOPDTransitInfo *)arg1 ;
-(BOOL)hasTransitSchedule;
-(GEOPDExternalAction *)externalAction;
-(void)setPoiEvent:(GEOPDPoiEvent *)arg1 ;
-(void)setAssociatedApp:(GEOPDAssociatedApp *)arg1 ;
-(GEOPDLocationEvent *)locationEvent;
-(BOOL)hasTransitInfo;
-(BOOL)hasTransitInfoSnippet;
-(void)setTransitVehiclePosition:(GEOPBTransitVehiclePosition *)arg1 ;
-(BOOL)hasPlaceInfo;
-(BOOL)hasPlacecardUrl;
-(void)setSimpleRestaurantMenuText:(GEOPDSimpleRestaurantMenuText *)arg1 ;
-(BOOL)hasRestaurantReservationLink;
-(void)setBusinessClaim:(GEOPDBusinessClaim *)arg1 ;
-(GEOPDGroundViewLabel *)groundViewLabel;
-(id)jsonRepresentation;
-(BOOL)hasPoiEvent;
-(void)setContainedPlace:(GEOPDContainedPlace *)arg1 ;
-(void)setTransitTripStop:(GEOPDTransitTripStop *)arg1 ;
-(BOOL)hasHours;
-(void)setTextBlock:(GEOPDTextBlock *)arg1 ;
-(GEOPDRestaurantReservationLink *)restaurantReservationLink;
-(GEOPDIcon *)icon;
-(void)setPlaceCollectionItem:(GEOPDPlaceCollectionItem *)arg1 ;
-(BOOL)hasPlaceBrowseCategories;
-(BOOL)hasBusinessHours;
-(GEOPDISO3166Code *)iso3166Code;
-(GEOPDContainedPlace *)containedPlace;
-(BOOL)hasTransitVehiclePosition;
-(void)setPlacecardLayoutConfiguration:(GEOPDPlacecardLayoutConfiguration *)arg1 ;
-(void)setExternalAction:(GEOPDExternalAction *)arg1 ;
-(GEOPDTransitTripGeometry *)transitTripGeometry;
-(BOOL)hasTransitTripStopTime;
-(BOOL)hasPlaceCollectionItem;
-(BOOL)hasFlyover;
-(GEOPDMessageLink *)messageLink;
-(void)setStorefrontPresentation:(GEOPDStorefrontPresentation *)arg1 ;
-(GEOPDFlyover *)flyover;
-(BOOL)hasPriceDescription;
-(GEOPDAddress *)address;
-(BOOL)hasQuickLink;
-(GEOStyleAttributes *)styleAttributes;
-(BOOL)hasEntity;
-(GEOPDCollectionIds *)collectionIds;
-(BOOL)hasBounds;
-(void)setPlaceQuestionnaire:(GEOPDPlaceQuestionnaireResult *)arg1 ;
-(BOOL)hasRating;
-(GEOPDTransitInfoSnippet *)transitInfoSnippet;
-(void)setMiniPlaceBrowseCategories:(GEOPDMiniBrowseCategories *)arg1 ;
-(void)setAddress:(GEOPDAddress *)arg1 ;
-(void)setTip:(GEOPDTip *)arg1 ;
-(BOOL)hasWifiFingerprint;
-(void)setPlacecardUrl:(GEOPDPlacecardURL *)arg1 ;
-(GEOPDBrowseCategories *)placeBrowseCategories;
-(GEOPDPrototypeContainer *)prototypeContainer;
-(void)mergeFrom:(id)arg1 ;
-(void)setTransitInfoSnippet:(GEOPDTransitInfoSnippet *)arg1 ;
-(BOOL)hasResultSnippet;
-(GEOPDFactoid *)factoid;
-(void)setAccessInfo:(GEOPDRoadAccessInfo *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(GEOPDCaptionedPhoto *)captionedPhoto;
-(GEOPDPlacecardURL *)placecardUrl;
-(BOOL)hasMiniPlaceBrowseCategories;
-(void)setRestaurantReservationLink:(GEOPDRestaurantReservationLink *)arg1 ;
-(BOOL)hasPublisher;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLinkedService:(GEOPDLinkedService *)arg1 ;
-(BOOL)hasCaptionedPhoto;
-(GEOPDPlaceCollectionItem *)placeCollectionItem;
-(GEOPDAssociatedApp *)associatedApp;
-(void)setIso3166Code:(GEOPDISO3166Code *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(void)setPlaceCollection:(GEOPDPlaceCollection *)arg1 ;
-(BOOL)hasVendorAmenities;
-(GEOPDTransitTripStop *)transitTripStop;
-(GEOPDTransitAttribution *)transitAttribution;
-(GEOPDRating *)rating;
-(BOOL)hasExternalAction;
-(void)setResultSnippet:(GEOPDResultSnippet *)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setBusinessHours:(GEOPDBusinessHours *)arg1 ;
-(BOOL)hasFactoid;
-(GEOPDWifiFingerprint *)wifiFingerprint;
-(BOOL)hasTextBlock;
-(void)setReview:(GEOPDReview *)arg1 ;
-(void)setRelatedPlace:(GEOPDRelatedPlace *)arg1 ;
-(GEOPDPlacecardLayoutConfiguration *)placecardLayoutConfiguration;
-(BOOL)hasLinkedService;
-(void)setVendorAmenities:(GEOPDAmenities *)arg1 ;
-(void)setQuickLink:(GEOPDQuickLink *)arg1 ;
-(void)setPrototypeContainer:(GEOPDPrototypeContainer *)arg1 ;
-(void)setMessageLink:(GEOPDMessageLink *)arg1 ;
-(BOOL)hasSpatialLookupResult;
-(void)setFactoid:(GEOPDFactoid *)arg1 ;
-(GEOPDPoiEvent *)poiEvent;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)hasTransitIncident;
-(unsigned long long)hash;
-(GEOPDAnnotatedItemList *)annotatedItemList;
-(GEOPDTransitInfo *)transitInfo;
-(void)setPlaceInfo:(GEOPDPlaceInfo *)arg1 ;
-(BOOL)hasPrototypeContainer;
-(BOOL)hasMessageLink;
-(GEOPDRawAttribute *)rawAttribute;
-(void)setAmenities:(GEOPDAmenities *)arg1 ;
-(void)setRating:(GEOPDRating *)arg1 ;
-(GEOPDLinkedService *)linkedService;
-(BOOL)hasAnnotatedItemList;
-(BOOL)hasReview;
-(BOOL)hasBusinessClaim;
-(void)setIcon:(GEOPDIcon *)arg1 ;
-(GEOPDBusinessHours *)businessHours;
-(GEOPDTextBlock *)textBlock;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(GEOPDTransitTripStopTime *)transitTripStopTime;
-(void)setLocationEvent:(GEOPDLocationEvent *)arg1 ;
-(GEOPDReview *)review;
-(id)description;
-(BOOL)hasAssociatedApp;
-(void)setRawAttribute:(GEOPDRawAttribute *)arg1 ;
-(BOOL)hasPlaceQuestionnaire;
-(BOOL)hasVenueInfo;
-(BOOL)hasCollectionIds;
-(GEOPDTip *)tip;
-(id)dictionaryRepresentation;
-(BOOL)hasEta;
-(GEOPDSimpleRestaurantMenuText *)simpleRestaurantMenuText;
-(GEOPBTransitVehiclePosition *)transitVehiclePosition;
-(BOOL)hasStorefront;
@end
