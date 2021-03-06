/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRPlaybackSessionRequest, MRPlayerPath;

@interface MRPlaybackSessionMigrateBeginMessage : MRProtocolMessage

@property (nonatomic,readonly) MRPlaybackSessionRequest * request; 
@property (nonatomic,readonly) MRPlayerPath * playerPath; 
-(MRPlayerPath *)playerPath;
-(unsigned long long)type;
-(MRPlaybackSessionRequest *)request;
-(id)initWithRequest:(id)arg1 playerPath:(id)arg2 ;
@end

