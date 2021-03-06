/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCMultiAccessChecker.h>

@protocol FCPaidAccessCheckerType;
@class FCPrivateChannelMembershipController;

@interface FCIssueAccessChecker : FCMultiAccessChecker {

	id<FCPaidAccessCheckerType> _paidAccessChecker;
	FCPrivateChannelMembershipController* _privateChannelMembershipController;

}

@property (nonatomic,readonly) id<FCPaidAccessCheckerType> paidAccessChecker;                                          //@synthesize paidAccessChecker=_paidAccessChecker - In the implementation block
@property (nonatomic,readonly) FCPrivateChannelMembershipController * privateChannelMembershipController;              //@synthesize privateChannelMembershipController=_privateChannelMembershipController - In the implementation block
-(id<FCPaidAccessCheckerType>)paidAccessChecker;
-(id)initWithPaidAccessChecker:(id)arg1 privateChannelMembershipController:(id)arg2 ;
-(id)init;
-(id)initWithAccessCheckers:(id)arg1 ;
-(FCPrivateChannelMembershipController *)privateChannelMembershipController;
@end

