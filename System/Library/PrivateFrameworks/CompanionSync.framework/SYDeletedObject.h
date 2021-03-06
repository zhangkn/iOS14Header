/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SYChange.h>

@class NSString;

@interface SYDeletedObject : NSObject <SYChange> {

	NSString* _sequencer;
	NSString* _syncId;

}

@property (nonatomic,retain) NSString * syncId;                          //@synthesize syncId=_syncId - In the implementation block
@property (nonatomic,readonly) NSString * objectIdentifier; 
@property (nonatomic,readonly) NSString * sequencer;                     //@synthesize sequencer=_sequencer - In the implementation block
@property (nonatomic,readonly) long long changeType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)sequencer;
-(NSString *)syncId;
-(long long)changeType;
-(NSString *)objectIdentifier;
-(void)setSyncId:(NSString *)arg1 ;
-(id)initWithSyncId:(id)arg1 ;
-(id)initWithObjectID:(id)arg1 sequencer:(id)arg2 ;
@end

