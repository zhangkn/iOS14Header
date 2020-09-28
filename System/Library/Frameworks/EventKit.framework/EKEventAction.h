/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EKObject.h>

@class NSString, NSData;

@interface EKEventAction : EKObject

@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalFolderID; 
@property (nonatomic,copy) NSString * externalScheduleID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,copy) NSData * externalRepresentation; 
+(id)knownIdentityKeysForComparison;
+(Class)frozenClass;
-(NSData *)externalRepresentation;
-(void)setExternalRepresentation:(NSData *)arg1 ;
-(NSString *)externalID;
-(NSString *)externalScheduleID;
-(void)setExternalID:(NSString *)arg1 ;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(NSString *)externalFolderID;
-(void)setExternalFolderID:(NSString *)arg1 ;
-(NSString *)externalModificationTag;
-(void)setExternalScheduleID:(NSString *)arg1 ;
@end
