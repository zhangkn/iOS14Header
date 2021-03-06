/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOCategorySuggestionsManagerServerProxy.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>

@class NSString;

@interface _GEOCategorySuggestionsManagerLocalProxy : NSObject <GEOCategorySuggestionsManagerServerProxy, GEOResourceManifestTileGroupObserver> {

	id _urlsChangedListener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)updateCachedSpotlightCategorySuggestions:(/*^block*/id)arg1 ;
-(void)_updateIfNecessary;
@end

