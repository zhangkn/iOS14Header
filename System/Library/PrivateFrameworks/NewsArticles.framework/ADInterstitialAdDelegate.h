/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ADInterstitialAdDelegate <NSObject>
@optional
-(void)interstitialAdDidLoad:(id)arg1;
-(BOOL)interstitialAdActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2;
-(void)interstitialAdWillLoad:(id)arg1;
-(void)interstitialAdActionDidFinish:(id)arg1;

@required
-(void)interstitialAdDidUnload:(id)arg1;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2;

@end
