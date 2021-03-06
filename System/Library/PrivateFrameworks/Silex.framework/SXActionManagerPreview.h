/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXAction, SXActionPreviewActivity;
@class UIViewController;

@interface SXActionManagerPreview : NSObject {

	id<SXAction> _action;
	id<SXActionPreviewActivity> _previewActivity;
	UIViewController* _viewController;

}

@property (nonatomic,readonly) id<SXAction> action;                                      //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) id<SXActionPreviewActivity> previewActivity;              //@synthesize previewActivity=_previewActivity - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * viewController;                 //@synthesize viewController=_viewController - In the implementation block
-(UIViewController *)viewController;
-(id<SXAction>)action;
-(id)initWithAction:(id)arg1 viewController:(id)arg2 previewActivity:(id)arg3 ;
-(id<SXActionPreviewActivity>)previewActivity;
@end

