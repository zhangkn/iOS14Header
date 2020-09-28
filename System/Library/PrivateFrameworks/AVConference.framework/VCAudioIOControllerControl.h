/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCAudioIOControllerControl <VCBasebandCodecNotifications>
@optional
-(void)refreshRemoteCodecType:(unsigned)arg1 sampleRate:(double)arg2;
-(void)refreshInputMetering;
-(void)refreshOutputMetering;

@required
-(void)stopClient:(id)arg1;
-(void)startClient:(id)arg1;
-(void)updateClient:(id)arg1;

@end
