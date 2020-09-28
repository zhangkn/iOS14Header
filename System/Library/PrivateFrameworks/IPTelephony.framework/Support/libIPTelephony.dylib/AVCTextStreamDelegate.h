/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IPTelephony.framework/Support/libIPTelephony.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCTextStreamDelegate <NSObject>
@optional
-(void)stream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3;
-(void)stream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3;
-(void)streamDidRTPTimeOut:(id)arg1;
-(void)streamDidRTCPTimeOut:(id)arg1;
-(void)stream:(id)arg1 didReceiveRTCPPackets:(id)arg2;

@required
-(void)streamDidStop:(id)arg1;
-(void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;
-(void)streamDidServerDie:(id)arg1;

@end
