/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class AKCalloutBar;

@interface AKCalloutButton : UIButton {

	int _position;
	AKCalloutBar* _bar;

}

@property (assign,nonatomic) int position;                           //@synthesize position=_position - In the implementation block
@property (assign,nonatomic,__weak) AKCalloutBar * bar;              //@synthesize bar=_bar - In the implementation block
-(AKCalloutBar *)bar;
-(void)setPosition:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(int)position;
-(void)setBar:(AKCalloutBar *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

