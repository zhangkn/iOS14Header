/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCMediaStreamProtocol <NSObject>
@optional
-(void)setRtpTimeOutEnabled:(BOOL)arg1;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1;
-(void)setRtcpEnabled:(BOOL)arg1;
-(void)setRtcpSendInterval:(double)arg1;
-(void)setRtpTimeOutInterval:(double)arg1;
-(void)setRtcpTimeOutInterval:(double)arg1;
-(id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id*)arg3;
-(void)setStreamDirection:(long long)arg1;
-(id)setupRTPWithIDSDestination:(id)arg1 error:(id*)arg2;
-(id)setupRTPWithSocketDictionary:(id)arg1 error:(id*)arg2;
-(long long)streamDirection;
-(void)setDecryptionTimeOutEnabled:(BOOL)arg1;
-(void)setDecryptionTimeOutInterval:(double)arg1;

@required
-(void)start;
-(void)stop;
-(void)setPause:(BOOL)arg1;
-(BOOL)setStreamConfig:(id)arg1 withError:(id*)arg2;

@end

