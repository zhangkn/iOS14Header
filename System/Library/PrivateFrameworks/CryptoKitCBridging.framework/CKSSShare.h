/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CryptoKitCBridging.framework/CryptoKitCBridging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CryptoKitCBridging/CryptoKitCBridging-Structs.h>
@interface CKSSShare : NSObject {

	cczp* _field;
	ccss_shamir_share* _share;
	unsigned long long _share_size;

}
-(id)y;
-(void)dealloc;
-(unsigned)x;
-(id)initWithParams:(ccss_shamir_parameters*)arg1 x:(unsigned)arg2 y:(id)arg3 ;
-(id)initWithParams:(ccss_shamir_parameters*)arg1 share:(ccss_shamir_share*)arg2 ;
-(void)loadInitializedccShare:(ccss_shamir_share*)arg1 ;
@end

