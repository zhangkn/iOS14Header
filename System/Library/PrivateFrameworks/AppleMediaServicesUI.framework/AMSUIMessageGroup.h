/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InAppMessages/IAMMessageGroup.h>

@protocol AMSBagProtocol;
@class NSDictionary;

@interface AMSUIMessageGroup : IAMMessageGroup {

	NSDictionary* _clientData;
	NSDictionary* _clientMetricsOverlay;
	id<AMSBagProtocol> _bag;

}

@property (nonatomic,retain) id<AMSBagProtocol> bag;                           //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) NSDictionary * clientData;                        //@synthesize clientData=_clientData - In the implementation block
@property (nonatomic,retain) NSDictionary * clientMetricsOverlay;              //@synthesize clientMetricsOverlay=_clientMetricsOverlay - In the implementation block
-(void)setBag:(id<AMSBagProtocol>)arg1 ;
-(NSDictionary *)clientMetricsOverlay;
-(id<AMSBagProtocol>)bag;
-(id)initWithBag:(id)arg1 ;
-(id)init;
-(void)setClientData:(NSDictionary *)arg1 ;
-(id)_viewControllerForType:(long long)arg1 account:(id)arg2 URL:(id)arg3 sidepack:(id)arg4 metrics:(id)arg5 ;
-(void)setClientMetricsOverlay:(NSDictionary *)arg1 ;
-(NSDictionary *)clientData;
-(void)viewControllerForModalMessagePresentation:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
