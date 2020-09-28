/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOSearchAttributionServerProxy.h>

@protocol OS_dispatch_queue;
@class NSObject, GEOSearchAttributionManifest, NSString;

@interface GEOSearchAttributionServerRemoteProxy : NSObject <GEOSearchAttributionServerProxy> {

	NSObject*<OS_dispatch_queue> _attributionQueue;
	GEOSearchAttributionManifest* _attributionManifest;
	os_unfair_lock_s _attributionManifestLock;
	int _attributionManifestUpdatedToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(id)_attributionManifest;
@end
