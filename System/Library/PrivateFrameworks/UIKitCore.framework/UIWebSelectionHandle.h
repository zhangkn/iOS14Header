/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UITouch, UIWebSelectionView;

@interface UIWebSelectionHandle : UIView {

	UITouch* _touch;
	int _position;
	int _textPosition;
	UIWebSelectionView* _selectionView;
	CGSize _touchToCenterOffset;
	CGSize _centerToSelectionPointOffset;

}

@property (nonatomic,retain) UITouch * touch;                                  //@synthesize touch=_touch - In the implementation block
@property (assign,nonatomic) int position;                                     //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) int textPosition; 
@property (nonatomic,readonly) BOOL hasTextPosition; 
@property (nonatomic,readonly) CGSize touchToCenterOffset;                     //@synthesize touchToCenterOffset=_touchToCenterOffset - In the implementation block
@property (assign,nonatomic) CGSize centerToSelectionPointOffset;              //@synthesize centerToSelectionPointOffset=_centerToSelectionPointOffset - In the implementation block
-(UITouch *)touch;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setPosition:(int)arg1 ;
-(void)dealloc;
-(int)position;
-(int)textPosition;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithPosition:(int)arg1 selectionView:(id)arg2 ;
-(void)snapToCornerOfRange:(id)arg1 atStart:(BOOL)arg2 ;
-(BOOL)hasTextPosition;
-(void)setTextPosition:(int)arg1 ;
-(CGPoint)applyTouchToCenterOffset:(CGPoint)arg1 ;
-(CGPoint)applyCenterToSelectionPointOffset:(CGPoint)arg1 ;
-(CGSize)centerToSelectionPointOffset;
-(void)dropActiveTouch;
-(CGPoint)applyOffsetInDirectionOfHandle:(double)arg1 toPoint:(CGPoint)arg2 ;
-(CGSize)touchToCenterOffset;
-(void)setCenterToSelectionPointOffset:(CGSize)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setTouch:(UITouch *)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
@end
