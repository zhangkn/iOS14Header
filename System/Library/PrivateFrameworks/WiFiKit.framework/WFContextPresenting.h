/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:07 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFContextPresenting <WFProviderContext>
@property (assign,nonatomic,__weak) UIViewController*<WFNetworkView> provider; 
@property (nonatomic,readonly) BOOL needsDismissal; 
@required
-(UIViewController*<WFNetworkView>)provider;
-(void)setProvider:(id)arg1;
-(BOOL)needsDismissal;

@end
