/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CAMViewfinderTransitionable;
@class CAMSnapshotView;

@interface CAMViewfinderOpenAndCloseTransition : NSObject {

	BOOL _didEnterBackground;
	id<CAMViewfinderTransitionable> __transitionableViewfinder;
	CAMSnapshotView* __snapshotView;

}

@property (nonatomic,__weak,readonly) id<CAMViewfinderTransitionable> _transitionableViewfinder;              //@synthesize _transitionableViewfinder=__transitionableViewfinder - In the implementation block
@property (setter=_setSnapshotView:,nonatomic,retain) CAMSnapshotView * _snapshotView;                        //@synthesize _snapshotView=__snapshotView - In the implementation block
@property (assign,nonatomic) BOOL didEnterBackground;                                                         //@synthesize didEnterBackground=_didEnterBackground - In the implementation block
-(void)_setSnapshotView:(id)arg1 ;
-(id)initWithTransitionableViewfinder:(id)arg1 ;
-(void)_closeViewfinder:(BOOL)arg1 animated:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(BOOL)didEnterBackground;
-(CAMSnapshotView *)_snapshotView;
-(void)openAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)closeWithoutBlurring;
-(void)setDidEnterBackground:(BOOL)arg1 ;
-(void)closeAnimated:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_existingSnapshotViewCreateIfNecessary:(BOOL)arg1 removedOnCompletion:(BOOL)arg2 ;
-(id<CAMViewfinderTransitionable>)_transitionableViewfinder;
@end

