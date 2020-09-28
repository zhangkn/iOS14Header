/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface WKApplicationStateTrackingView : UIView {

	WeakObjCPtr<WKWebView> _webViewToTrack;
	unique_ptr<WebKit::ApplicationStateTracker, std::__1::default_delete<WebKit::ApplicationStateTracker> >* _applicationStateTracker;

}

@property (nonatomic,readonly) BOOL isBackground; 
@property (nonatomic,readonly) UIView * _contentView; 
-(void)_applicationDidEnterBackground;
-(void)_applicationDidFinishSnapshottingAfterEnteringBackground;
-(void)_willBeginSnapshotSequence;
-(void)_didCompleteSnapshotSequence;
-(void)_applicationWillEnterForeground;
-(BOOL)isBackground;
-(UIView *)_contentView;
-(void)didMoveToWindow;
-(void)willMoveToWindow:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 webView:(id)arg2 ;
@end
