/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:33 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Memories/Memories-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PMPassthroughViewDelegate;
@interface PMPassthroughView : UIView {

	id<PMPassthroughViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PMPassthroughViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<PMPassthroughViewDelegate>)arg1 ;
-(id<PMPassthroughViewDelegate>)delegate;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
@end
