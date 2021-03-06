/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKSyncCommonClass <_DKSyncRemoteStorage>
@required
-(void)setDeviceID:(id)arg1;
-(BOOL)isTransportActiveForPeer:(id)arg1;
-(void)handshakeWithDuetSyncPeer:(id)arg1 orError:(id)arg2;
-(id)myDeviceID;
-(id)client;
-(void)sendRequestID:(id)arg1 request:(id)arg2 peer:(id)arg3 highPriority:(BOOL)arg4 options:(id)arg5 responseHandler:(/*^block*/id)arg6;
-(id)transformCaughtObject:(id)arg1 existingError:(id)arg2;
-(void)handleAvailabilityFailureWithPeer:(id)arg1 completion:(/*^block*/id)arg2;
-(id)transformResponseError:(id)arg1;

@end

