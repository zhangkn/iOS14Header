/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFLeaseControlling.h>

@class MPCMediaFoundationTranslator, _MPCLeaseManager;

@interface MPCLeaseController : NSObject <MFLeaseControlling> {

	MPCMediaFoundationTranslator* _translator;
	_MPCLeaseManager* _leaseManager;

}

@property (nonatomic,readonly) MPCMediaFoundationTranslator * translator;              //@synthesize translator=_translator - In the implementation block
@property (nonatomic,readonly) _MPCLeaseManager * leaseManager;                        //@synthesize leaseManager=_leaseManager - In the implementation block
-(_MPCLeaseManager *)leaseManager;
-(MPCMediaFoundationTranslator *)translator;
-(id)initWithTranslator:(id)arg1 leaseManager:(id)arg2 ;
-(void)requestLeaseForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)relinquishLeaseForItem:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

