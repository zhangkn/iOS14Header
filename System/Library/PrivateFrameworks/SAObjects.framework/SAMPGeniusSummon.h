/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray, SAMPMediaItem, NSNumber, NSString;

@interface SAMPGeniusSummon : SADomainCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,retain) SAMPMediaItem * mediaItem; 
@property (nonatomic,copy) NSNumber * startPlaying; 
@property (nonatomic,copy) NSString * upNextQueueInsertLocation; 
+(id)geniusSummon;
+(id)geniusSummonWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(void)setMediaItem:(SAMPMediaItem *)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;
-(NSNumber *)startPlaying;
-(void)setStartPlaying:(NSNumber *)arg1 ;
-(NSString *)upNextQueueInsertLocation;
-(void)setUpNextQueueInsertLocation:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(SAMPMediaItem *)mediaItem;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
@end

