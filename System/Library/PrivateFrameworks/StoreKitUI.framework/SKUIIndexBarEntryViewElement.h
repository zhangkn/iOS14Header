/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIViewElement;

@interface SKUIIndexBarEntryViewElement : SKUIViewElement {

	NSString* _targetIndexBarEntryID;
	long long _visibilityPriority;

}

@property (nonatomic,readonly) SKUIViewElement * childElement; 
@property (nonatomic,copy,readonly) NSString * targetIndexBarEntryID;              //@synthesize targetIndexBarEntryID=_targetIndexBarEntryID - In the implementation block
@property (nonatomic,readonly) long long visibilityPriority;                       //@synthesize visibilityPriority=_visibilityPriority - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)visibilityPriority;
-(SKUIViewElement *)childElement;
-(NSString *)targetIndexBarEntryID;
@end

