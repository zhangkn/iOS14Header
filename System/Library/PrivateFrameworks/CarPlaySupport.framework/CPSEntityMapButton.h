/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CarPlaySupport/CarPlaySupport-Structs.h>
#import <CarPlaySupport/CPSActionButton.h>
#import <libobjc.A.dylib/CPSActionButtonLayoutDelegate.h>

@class NSString;

@interface CPSEntityMapButton : CPSActionButton <CPSActionButtonLayoutDelegate> {

	unsigned long long _entityMapButtonType;

}

@property (assign,nonatomic) unsigned long long entityMapButtonType;              //@synthesize entityMapButtonType=_entityMapButtonType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)buttonWithEntityMapButtonType:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)buttonSize;
-(void)layoutSubviews;
-(id)buttonBackgroundColor;
-(void)setNeedsLayout;
-(id)buttonAttributes;
-(CGSize)buttonGlyphSize;
-(id)buttonImageTintColor;
-(void)setEntityMapButtonType:(unsigned long long)arg1 ;
-(unsigned long long)entityMapButtonType;
@end

