/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRNowPlayingApplicationStateProtobuf, NSString, NSData;

@interface NMRNowPlayingApplicationInfo : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRNowPlayingApplicationStateProtobuf* _protobuf;
	int _processID;

}

@property (nonatomic,copy) NSString * companionBundleIdentifier; 
@property (nonatomic,copy) NSString * watchBundleIdentifier; 
@property (nonatomic,copy) NSString * localizedDisplayName; 
@property (assign,nonatomic) unsigned playbackState; 
@property (nonatomic,copy) NSData * iconDigest; 
@property (assign,nonatomic) int processID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)_getNextPlaceholderProcessID;
-(void)setPlaybackState:(unsigned)arg1 ;
-(int)processID;
-(void)setProcessID:(int)arg1 ;
-(NSString *)companionBundleIdentifier;
-(NSString *)localizedDisplayName;
-(id)initWithProtobufData:(id)arg1 ;
-(id)init;
-(id)protobufData;
-(unsigned)playbackState;
-(void)setLocalizedDisplayName:(NSString *)arg1 ;
-(void)setCompanionBundleIdentifier:(NSString *)arg1 ;
-(NSString *)watchBundleIdentifier;
-(void)setWatchBundleIdentifier:(NSString *)arg1 ;
-(NSData *)iconDigest;
-(void)setIconDigest:(NSData *)arg1 ;
@end

