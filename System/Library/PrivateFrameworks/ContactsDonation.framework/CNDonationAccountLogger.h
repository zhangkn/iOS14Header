/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNDonationAccountLogger <NSObject>
@required
-(void)accountAdded:(id)arg1;
-(void)accountChanged:(id)arg1;
-(void)accountRemoved:(id)arg1;
-(void)pluginLoaded;
-(void)pluginUnloaded;
-(void)accountsDidNotChange;
-(void)donating:(id)arg1;
-(void)removing:(id)arg1;
-(void)donationFailedWithError:(id)arg1;
-(void)removalFailedWithError:(id)arg1;

@end

