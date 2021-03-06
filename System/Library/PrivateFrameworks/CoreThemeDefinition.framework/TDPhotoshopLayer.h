/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, TDPhotoshopRenditionSpec;

@interface TDPhotoshopLayer : NSManagedObject

@property (nonatomic,retain) NSString * name; 
@property (nonatomic,retain) TDPhotoshopLayer * childLayer; 
@property (nonatomic,retain) TDPhotoshopLayer * parentLayer; 
@property (nonatomic,retain) TDPhotoshopRenditionSpec * rendition; 
-(id)hierarchicalLayerNames;
@end

