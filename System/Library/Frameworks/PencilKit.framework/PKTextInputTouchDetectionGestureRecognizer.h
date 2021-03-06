/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIGestureRecognizer.h>

@class NSMapTable;

@interface PKTextInputTouchDetectionGestureRecognizer : UIGestureRecognizer {

	NSMapTable* __touches;

}

@property (nonatomic,retain) NSMapTable * _touches;                                                               //@synthesize _touches=__touches - In the implementation block
@property (assign,nonatomic,__weak) id<PKTextInputTouchDetectionGestureRecognizerDelegate> delegate; 
-(NSMapTable *)_touches;
-(BOOL)shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(id)init;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)recognizeTouch;
-(void)recognizeTouch:(id)arg1 afterThreshold:(double)arg2 ;
-(void)set_touches:(NSMapTable *)arg1 ;
@end

