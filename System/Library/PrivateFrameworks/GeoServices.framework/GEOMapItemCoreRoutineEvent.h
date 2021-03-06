/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOBaseMapItem.h>

@class NSDictionary, GEOMapItemClientAttributes, GEOPlace, NSString, NSDate, GEOAddressObject;

@interface GEOMapItemCoreRoutineEvent : GEOBaseMapItem {

	NSDictionary* _addressDictionary;
	GEOMapItemClientAttributes* _clientAttributes;
	GEOPlace* _place;
	NSString* _eventName;
	NSString* _eventTitle;
	NSDate* _eventDate;
	BOOL _eventIsAllDay;
	GEOCoarseLocationLatLng _coordinate;
	GEOAddressObject* _addressObject;

}
-(id)_place;
-(id)weatherDisplayName;
-(id)addressObject;
-(id)_clientAttributes;
-(GEOCoarseLocationLatLng)coordinate;
-(id)geoAddress;
-(BOOL)_hasResolvablePartialInformation;
-(id)initWithAddressDictionary:(id)arg1 eventName:(id)arg2 eventTitle:(id)arg3 eventDate:(id)arg4 eventIsAllDay:(BOOL)arg5 coordinate:(GEOCoarseLocationLatLng)arg6 clientAttributes:(id)arg7 ;
-(id)addressDictionary;
-(BOOL)_responseStatusIsIncomplete;
-(id)eventDate;
-(BOOL)isEventAllDay;
-(id)eventName;
-(BOOL)isValid;
-(id)name;
-(id)description;
@end

