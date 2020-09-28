/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol _UIRemoteKeyboardInputViewPlaceholder
@property (assign,nonatomic) CGSize fixedSize; 
@property (retain,readonly) UIView * placeheldView; 
@property (nonatomic,retain) UIView * fallbackView; 
@property (nonatomic,retain) UIView * associatedView; 
@required
-(void)setAssociatedView:(id)arg1;
-(UIView *)fallbackView;
-(void)setFallbackView:(id)arg1;
-(void)setFixedSize:(CGSize)arg1;
-(void)_isPlaceholderViewSelector;
-(UIView *)placeheldView;
-(CGSize)fixedSize;
-(BOOL)refreshPlaceholder;
-(UIView *)associatedView;

@end
