/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOMapBuilding.h>

@class NSArray, NSString;

@interface GEOMapAccessBuilding : NSObject <GEOMapBuilding> {

	SCD_Struct_GE112* _buildingFeature;
	NSArray* _sections;

}

@property (nonatomic,readonly) NSArray * sections;                  //@synthesize sections=_sections - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithBuildingFeature:(SCD_Struct_GE112*)arg1 ;
-(void)dealloc;
-(NSArray *)sections;
@end
