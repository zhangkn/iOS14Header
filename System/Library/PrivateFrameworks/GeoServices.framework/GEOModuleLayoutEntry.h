/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOPDModuleLayoutEntry, NSString, NSArray;

@interface GEOModuleLayoutEntry : NSObject {

	GEOPDModuleLayoutEntry* _moduleLayoutEntry;

}

@property (nonatomic,readonly) NSString * debugName; 
@property (nonatomic,readonly) NSArray * modules; 
+(id)moduleLayoutEntryFromArray:(id)arg1 ;
-(NSArray *)modules;
-(NSString *)debugName;
-(id)initWithModuleLayoutEntry:(id)arg1 ;
@end
