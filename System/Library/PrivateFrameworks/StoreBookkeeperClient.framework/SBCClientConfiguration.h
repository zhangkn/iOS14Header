/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:31 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SBCPlaybackPositionDomain;

@interface SBCClientConfiguration : NSObject <NSSecureCoding> {

	SBCPlaybackPositionDomain* _playbackPositionDomain;

}

@property (nonatomic,readonly) SBCPlaybackPositionDomain * playbackPositionDomain;              //@synthesize playbackPositionDomain=_playbackPositionDomain - In the implementation block
+(BOOL)supportsSecureCoding;
-(SBCPlaybackPositionDomain *)playbackPositionDomain;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithPlaybackPositionDomain:(id)arg1 ;
@end

