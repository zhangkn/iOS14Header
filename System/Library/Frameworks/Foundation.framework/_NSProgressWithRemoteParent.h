/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSProgress.h>

@class NSXPCConnection;

@interface _NSProgressWithRemoteParent : NSProgress {

	NSXPCConnection* _parentConnection;
	unsigned long long _sequence;

}

@property (retain) NSXPCConnection * parentConnection;              //@synthesize parentConnection=_parentConnection - In the implementation block
@property (assign) unsigned long long sequence;                     //@synthesize sequence=_sequence - In the implementation block
-(void)dealloc;
-(NSXPCConnection *)parentConnection;
-(void)setParentConnection:(NSXPCConnection *)arg1 ;
-(void)_updateFractionCompleted:(NSProgressFractionTuple)arg1 ;
-(void)setSequence:(unsigned long long)arg1 ;
-(unsigned long long)sequence;
-(void)_setUserInfoValue:(id)arg1 forKey:(id)arg2 fromChild:(BOOL)arg3 ;
@end
