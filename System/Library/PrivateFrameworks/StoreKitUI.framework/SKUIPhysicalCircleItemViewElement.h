/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIImageViewElement, SKUILabelViewElement;

@interface SKUIPhysicalCircleItemViewElement : SKUIViewElement {

	long long _circleSize;
	NSString* _itemIdentifier;

}

@property (nonatomic,readonly) long long circleSize;                             //@synthesize circleSize=_circleSize - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;                        //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) SKUIImageViewElement * imageElement; 
@property (nonatomic,readonly) SKUILabelViewElement * titleElement; 
-(NSString *)itemIdentifier;
-(long long)circleSize;
-(SKUIImageViewElement *)imageElement;
-(SKUILabelViewElement *)titleElement;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
@end

