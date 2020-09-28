/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXBlueprintAnalyzer.h>

@protocol SXBlueprintAnalyzer <NSObject>
@required
-(void)analyzeBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 onMarkerFound:(/*^block*/id)arg3 then:(/*^block*/id)arg4 onEndReached:(/*^block*/id)arg5;

@end


@class NSString;

@interface SXBlueprintAnalyzer : NSObject <SXBlueprintAnalyzer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)componentPlacedAboveComponentBlueprint:(id)arg1 blueprint:(id)arg2 ;
-(void)analyzeBlueprint:(id)arg1 DOMObjectProvider:(id)arg2 onMarkerFound:(/*^block*/id)arg3 then:(/*^block*/id)arg4 onEndReached:(/*^block*/id)arg5 ;
-(void)iterateMarkers:(id)arg1 onMarkerFound:(/*^block*/id)arg2 then:(/*^block*/id)arg3 onEndReached:(/*^block*/id)arg4 ;
-(id)markersFromBlueprint:(id)arg1 components:(id)arg2 DOMObjectProvider:(id)arg3 cursor:(id)arg4 ;
@end
