/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMFPairingIdentity;


@protocol HMDAccessoryUserManagement <NSObject>
@property (readonly) BOOL supportsUserManagement; 
@property (copy,readonly) HMFPairingIdentity * pairingIdentity; 
@required
-(void)removeUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(HMFPairingIdentity *)pairingIdentity;
-(BOOL)supportsUserManagement;
-(void)addUser:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)pairingsWithCompletionHandler:(/*^block*/id)arg1;

@end

