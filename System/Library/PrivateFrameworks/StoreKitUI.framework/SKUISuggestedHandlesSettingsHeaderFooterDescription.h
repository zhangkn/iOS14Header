/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUISettingsHeaderFooterDescription.h>

@protocol SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate;
@class SKUIClientContext, NSArray;

@interface SKUISuggestedHandlesSettingsHeaderFooterDescription : SKUISettingsHeaderFooterDescription {

	SKUIClientContext* _clientContext;
	NSArray* _suggestedHandles;
	id<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate>)arg1 ;
-(id<SKUISuggestedHandlesSettingsHeaderFooterDescriptionDelegate>)delegate;
-(id)helpText;
-(Class)_viewClassForSettingsHeaderFooterDescription:(id)arg1 ;
-(id)initWithSuggestedHandles:(id)arg1 clientContext:(id)arg2 delegate:(id)arg3 ;
-(void)selectedHandleAtIndex:(unsigned long long)arg1 ;
-(id)suggestedHandles;
@end

