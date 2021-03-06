/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class SBIcon;


@protocol SBIconDragPreview
@property (assign,nonatomic) unsigned long long dragState; 
@property (assign,getter=isFlocked,nonatomic) BOOL flocked; 
@property (assign,nonatomic) BOOL iconAllowsLabelArea; 
@property (assign,nonatomic) BOOL iconCanShowCloseBox; 
@property (assign,nonatomic) double iconContentScale; 
@property (assign,nonatomic) BOOL iconIsEditing; 
@property (nonatomic,retain) SBIcon * icon; 
@required
-(double)iconContentScale;
-(void)setIconContentScale:(double)arg1;
-(SBIcon *)icon;
-(void)setIconCanShowCloseBox:(BOOL)arg1;
-(unsigned long long)dragState;
-(void)setDragState:(unsigned long long)arg1;
-(void)setFlocked:(BOOL)arg1;
-(void)setIcon:(id)arg1;
-(void)updateDestinationIconLocation:(id)arg1 animated:(BOOL)arg2;
-(void)setIconAllowsLabelArea:(BOOL)arg1;
-(void)dropDestinationAnimationCompleted;
-(void)draggingSourceCancelAnimationCompleted;
-(void)draggingSourceDroppedWithOperation:(unsigned long long)arg1;
-(void)setIconIsEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(BOOL)isFlocked;
-(BOOL)iconAllowsLabelArea;
-(BOOL)iconCanShowCloseBox;
-(BOOL)iconIsEditing;
-(void)setIconIsEditing:(BOOL)arg1;

@end

