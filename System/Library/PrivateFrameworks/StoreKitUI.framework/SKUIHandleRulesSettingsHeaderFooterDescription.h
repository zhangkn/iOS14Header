/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUISettingsHeaderFooterDescription.h>

@class SKUIClientContext;

@interface SKUIHandleRulesSettingsHeaderFooterDescription : SKUISettingsHeaderFooterDescription {

	SKUIClientContext* _clientContext;
	BOOL _showInvalid;

}

@property (assign,nonatomic) BOOL showInvalid;              //@synthesize showInvalid=_showInvalid - In the implementation block
-(id)text;
-(id)initWithClientContext:(id)arg1 ;
-(Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1 ;
-(BOOL)showInvalid;
-(void)setShowInvalid:(BOOL)arg1 ;
@end
