/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventAuthenticationMessage.h>

@interface BKSMutableHIDEventAuthenticationMessage : BKSHIDEventAuthenticationMessage

@property (assign,nonatomic) long long versionedPID; 
@property (assign,nonatomic) unsigned eventType; 
@property (assign,nonatomic) unsigned long long originIdentifier; 
@property (assign,nonatomic) unsigned long long context; 
-(void)setEventType:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContext:(unsigned long long)arg1 ;
-(void)setDestinationAuditToken:(id)arg1 ;
-(void)setOriginIdentifier:(unsigned long long)arg1 ;
-(void)setVersionedPID:(long long)arg1 ;
@end

