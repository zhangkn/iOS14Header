/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOAbstractTicket.h>

@class GEOPDPlaceRequest, GEOPDPlaceResponse;

@interface GEOAbstractRequestResponseTicket : GEOAbstractTicket {

	GEOPDPlaceRequest* _request;
	GEOPDPlaceResponse* _response;

}
-(id)initWithTraits:(id)arg1 ;
-(void)cancel;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
-(SCD_Struct_GE91)dataRequestKind;
-(void)performSubmitWithHandler:(/*^block*/id)arg1 auditToken:(id)arg2 timeout:(double)arg3 networkActivity:(/*^block*/id)arg4 ;
-(void)performSubmitWithHandler:(/*^block*/id)arg1 timeout:(double)arg2 networkActivity:(/*^block*/id)arg3 ;
@end

