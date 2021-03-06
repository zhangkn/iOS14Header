/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RBJetsamBandProviding.h>

@protocol RBEntitlementManaging;
@class NSString;

@interface RBJetsamBandProvider : NSObject <RBJetsamBandProviding> {

	id<RBEntitlementManaging> _entitlementManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(int)defaultPriorityForProcess:(id)arg1 inBand:(unsigned char)arg2 ;
-(id)initWithEntitlementManager:(id)arg1 ;
-(int)jetsamPriorityForProcess:(id)arg1 withState:(id)arg2 ;
@end

