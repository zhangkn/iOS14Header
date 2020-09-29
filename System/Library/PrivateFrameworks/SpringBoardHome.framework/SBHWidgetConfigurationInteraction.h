/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:55:11 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/SBViewControllerTransitionContextDelegate.h>
#import <libobjc.A.dylib/SBHWidgetConfigurationAnimationContext.h>
#import <libobjc.A.dylib/WFWidgetConfigurationViewControllerDelegate.h>
#import <libobjc.A.dylib/SBHIconViewConfigurationInteraction.h>

@protocol SBHIconViewConfigurationInteractionDelegate;
@class UIView, SBIconView, MTMaterialView, INIntent, SBHWidgetSettings, WFWidgetConfigurationOptions, WFWidgetConfigurationViewController, UIViewController, UITapGestureRecognizer, SBViewControllerTransitionContext, CHSAvocadoDescriptor, NSString;

@interface SBHWidgetConfigurationInteraction : NSObject <SBViewControllerTransitionContextDelegate, SBHWidgetConfigurationAnimationContext, WFWidgetConfigurationViewControllerDelegate, SBHIconViewConfigurationInteraction> {

	INIntent* _configuration;
	id<SBHIconViewConfigurationInteractionDelegate> _delegate;
	SBHWidgetSettings* _widgetSettings;
	WFWidgetConfigurationOptions* _configurationOptions;
	WFWidgetConfigurationViewController* _configurationViewController;
	UIViewController* _containerViewController;
	UIView* _homeScreenContentView;
	SBIconView* _sourceView;
	SBIconView* _referenceView;
	MTMaterialView* _backgroundView;
	UIView* _backgroundTintView;
	UIView* _touchBlockingView;
	UITapGestureRecognizer* _tapToPresentGesture;
	long long _operation;
	SBViewControllerTransitionContext* _transition;
	CHSAvocadoDescriptor* _widgetDescriptor;
	CGRect _sourceContentFrame;
	CGRect _targetContentFrame;
	CGRect _contentBoundingRect;

}

@property (nonatomic,readonly) SBHWidgetSettings * widgetSettings;                                           //@synthesize widgetSettings=_widgetSettings - In the implementation block
@property (nonatomic,copy) INIntent * configuration;                                                         //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) WFWidgetConfigurationOptions * configurationOptions;                          //@synthesize configurationOptions=_configurationOptions - In the implementation block
@property (nonatomic,retain) WFWidgetConfigurationViewController * configurationViewController;              //@synthesize configurationViewController=_configurationViewController - In the implementation block
@property (nonatomic,retain) UIViewController * containerViewController;                                     //@synthesize containerViewController=_containerViewController - In the implementation block
@property (assign,nonatomic) CGRect sourceContentFrame;                                                      //@synthesize sourceContentFrame=_sourceContentFrame - In the implementation block
@property (assign,nonatomic) CGRect targetContentFrame;                                                      //@synthesize targetContentFrame=_targetContentFrame - In the implementation block
@property (assign,nonatomic) CGRect contentBoundingRect;                                                     //@synthesize contentBoundingRect=_contentBoundingRect - In the implementation block
@property (nonatomic,retain) UIView * homeScreenContentView;                                                 //@synthesize homeScreenContentView=_homeScreenContentView - In the implementation block
@property (nonatomic,retain) SBIconView * sourceView;                                                        //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,retain) SBIconView * referenceView;                                                     //@synthesize referenceView=_referenceView - In the implementation block
@property (nonatomic,retain) MTMaterialView * backgroundView;                                                //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) UIView * backgroundTintView;                                                    //@synthesize backgroundTintView=_backgroundTintView - In the implementation block
@property (nonatomic,retain) UIView * touchBlockingView;                                                     //@synthesize touchBlockingView=_touchBlockingView - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapToPresentGesture;                                   //@synthesize tapToPresentGesture=_tapToPresentGesture - In the implementation block
@property (assign,nonatomic) long long operation;                                                            //@synthesize operation=_operation - In the implementation block
@property (nonatomic,retain) SBViewControllerTransitionContext * transition;                                 //@synthesize transition=_transition - In the implementation block
@property (nonatomic,copy,readonly) CHSAvocadoDescriptor * widgetDescriptor;                                 //@synthesize widgetDescriptor=_widgetDescriptor - In the implementation block
@property (assign,nonatomic,__weak) id<SBHIconViewConfigurationInteractionDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsAnimation; 
@property (nonatomic,readonly) UIView * containerView; 
@property (nonatomic,readonly) UIView * targetView; 
-(void)setTransition:(SBViewControllerTransitionContext *)arg1 ;
-(UIView *)targetView;
-(SBIconView *)referenceView;
-(void)transitionDidFinish:(id)arg1 ;
-(UIView *)containerView;
-(WFWidgetConfigurationOptions *)configurationOptions;
-(void)setBackgroundView:(MTMaterialView *)arg1 ;
-(void)setOperation:(long long)arg1 ;
-(SBIconView *)sourceView;
-(BOOL)wantsAnimation;
-(void)beginConfiguration;
-(long long)operation;
-(void)endConfiguration;
-(void)endConfigurationImmediately;
-(MTMaterialView *)backgroundView;
-(CHSAvocadoDescriptor *)widgetDescriptor;
-(WFWidgetConfigurationViewController *)configurationViewController;
-(UIView *)touchBlockingView;
-(void)setConfigurationViewController:(WFWidgetConfigurationViewController *)arg1 ;
-(void)setHomeScreenContentView:(UIView *)arg1 ;
-(void)_handleTapToPresent:(id)arg1 ;
-(void)setTapToPresentGesture:(UITapGestureRecognizer *)arg1 ;
-(void)setContentBoundingRect:(CGRect)arg1 ;
-(void)_setUpMatchMoveAnimationForBackgroundView:(id)arg1 ;
-(void)setBackgroundTintView:(UIView *)arg1 ;
-(void)_handleTapToDismiss:(id)arg1 ;
-(void)setDelegate:(id<SBHIconViewConfigurationInteractionDelegate>)arg1 ;
-(void)setTouchBlockingView:(UIView *)arg1 ;
-(CGRect)_sourceContentFrame;
-(void)setSourceContentFrame:(CGRect)arg1 ;
-(CGRect)_targetContentFrame;
-(void)setTargetContentFrame:(CGRect)arg1 ;
-(id)_newTransitionAnimator;
-(void)_endConfigurationImmediately:(BOOL)arg1 ;
-(void)_handleDismissalDidFinish;
-(void)_handlePresentationDidFinish;
-(UIView *)backgroundTintView;
-(UITapGestureRecognizer *)tapToPresentGesture;
-(CGRect)contentBoundingRect;
-(CGRect)sourceContentFrame;
-(CGRect)targetContentFrame;
-(UIView *)homeScreenContentView;
-(void)widgetConfigurationViewController:(id)arg1 didFinishWithIntent:(id)arg2 ;
-(id)initWithWidgetDescriptor:(id)arg1 gridSizeClass:(unsigned long long)arg2 intent:(id)arg3 ;
-(void)widgetConfigurationViewControllerPreferredCardSizeDidChange:(id)arg1 ;
-(void)setReferenceView:(SBIconView *)arg1 ;
-(id<SBHIconViewConfigurationInteractionDelegate>)delegate;
-(SBHWidgetSettings *)widgetSettings;
-(void)setSourceView:(SBIconView *)arg1 ;
-(INIntent *)configuration;
-(SBViewControllerTransitionContext *)transition;
-(UIViewController *)containerViewController;
-(void)setContainerViewController:(UIViewController *)arg1 ;
-(void)setConfiguration:(INIntent *)arg1 ;
@end
