/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MCPeerIDInternal : NSObject {

	NSString* _idString;
	unsigned long long _pid64;
	NSString* _displayName;

}

@property (nonatomic,readonly) NSString * idString;                   //@synthesize idString=_idString - In the implementation block
@property (nonatomic,readonly) unsigned long long pid64;              //@synthesize pid64=_pid64 - In the implementation block
@property (nonatomic,readonly) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
-(NSString *)displayName;
-(unsigned long long)pid64;
-(void)dealloc;
-(NSString *)idString;
-(id)initWithIDString:(id)arg1 pid64:(unsigned long long)arg2 displayName:(id)arg3 ;
@end
