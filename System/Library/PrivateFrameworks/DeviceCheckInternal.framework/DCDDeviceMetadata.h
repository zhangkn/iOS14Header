/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DCCryptoProxy;
@class DCContext;

@interface DCDDeviceMetadata : NSObject {

	id<DCCryptoProxy> _cryptoProxy;
	DCContext* _context;

}
-(id)initWithContext:(id)arg1 cryptoProxy:(id)arg2 ;
-(void)generateEncryptedBlobWithCompletion:(/*^block*/id)arg1 ;
@end
