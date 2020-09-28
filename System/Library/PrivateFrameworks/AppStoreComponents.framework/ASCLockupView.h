/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreComponents/AppStoreComponents-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ASCLockupPresenterObserver.h>
#import <libobjc.A.dylib/ASCOfferPresenterObserver.h>

@protocol ASCLockupViewDelegate;
@class ASCLockupContentView, ASCOfferPresenter, ASCAppearMetricsPresenter, ASCLockupPresenter, NSString, UIViewController, ASCMetricsActivity, ASCOfferTheme, ASCLockup, ASCLockupViewGroup, ASCLockupRequest;

@interface ASCLockupView : UIView <ASCLockupPresenterObserver, ASCOfferPresenterObserver> {

	SCD_Struct_AS3 _delegateRespondsTo;
	BOOL _automaticallyPresentsProductDetails;
	id<ASCLockupViewDelegate> _delegate;
	ASCLockupContentView* _contentView;
	ASCOfferPresenter* _offerPresenter;
	ASCAppearMetricsPresenter* _metricsPresenter;
	ASCLockupPresenter* _lockupPresenter;
	NSString* _storeSheetHostBundleID;
	NSString* _storeSheetUsageContext;

}

@property (nonatomic,retain) NSString * storeSheetHostBundleID; 
@property (nonatomic,retain) NSString * storeSheetUsageContext; 
@property (nonatomic,readonly) ASCLockupContentView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) ASCOfferPresenter * offerPresenter;                        //@synthesize offerPresenter=_offerPresenter - In the implementation block
@property (nonatomic,readonly) ASCAppearMetricsPresenter * metricsPresenter;              //@synthesize metricsPresenter=_metricsPresenter - In the implementation block
@property (nonatomic,readonly) ASCLockupPresenter * lockupPresenter;                      //@synthesize lockupPresenter=_lockupPresenter - In the implementation block
@property (nonatomic,retain) NSString * storeSheetHostBundleID;                           //@synthesize storeSheetHostBundleID=_storeSheetHostBundleID - In the implementation block
@property (nonatomic,retain) NSString * storeSheetUsageContext;                           //@synthesize storeSheetUsageContext=_storeSheetUsageContext - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController; 
@property (assign,nonatomic) BOOL automaticallyGeneratesAppearMetrics; 
@property (nonatomic,copy) ASCMetricsActivity * appearMetricsActivity; 
@property (nonatomic,copy) ASCOfferTheme * offerTheme; 
@property (nonatomic,retain) NSString * size; 
@property (nonatomic,copy) ASCLockup * lockup; 
@property (nonatomic,retain) ASCLockupViewGroup * group; 
@property (nonatomic,copy) ASCLockupRequest * request; 
@property (assign,nonatomic,__weak) id<ASCLockupViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL automaticallyPresentsProductDetails;                    //@synthesize automaticallyPresentsProductDetails=_automaticallyPresentsProductDetails - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)accessibilityLabel;
-(ASCLockupContentView *)contentView;
-(void)setGroup:(ASCLockupViewGroup *)arg1 ;
-(void)setLayoutMargins:(UIEdgeInsets)arg1 ;
-(BOOL)isAccessibilityElement;
-(ASCLockup *)lockup;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isHighlighted;
-(void)invalidateIntrinsicContentSize;
-(void)setLockup:(ASCLockup *)arg1 ;
-(void)setOfferTheme:(ASCOfferTheme *)arg1 ;
-(void)setSize:(NSString *)arg1 ;
-(void)setAutomaticallyPresentsProductDetails:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIViewController *)presentingViewController;
-(void)presentProductDetailsViewController;
-(ASCLockupViewGroup *)group;
-(void)layoutContentView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_accessibilitySupplementaryFooterViews;
-(void)setDelegate:(id<ASCLockupViewDelegate>)arg1 ;
-(ASCLockupRequest *)request;
-(id)initWithCoder:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setRequest:(ASCLockupRequest *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id<ASCLockupViewDelegate>)delegate;
-(NSString *)size;
-(BOOL)accessibilityActivate;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToWindow;
-(unsigned long long)accessibilityTraits;
-(NSString *)description;
-(ASCOfferPresenter *)offerPresenter;
-(ASCAppearMetricsPresenter *)metricsPresenter;
-(void)lockupPresenterDidBeginRequest;
-(void)lockupPresenterDidFinishRequest;
-(void)lockupPresenterDidFailRequestWithError:(id)arg1 ;
-(void)setViewRenderSpanProvider:(/*^block*/id)arg1 ;
-(BOOL)automaticallyPresentsProductDetails;
-(void)offerPresenterWillPerformActionOfOffer:(id)arg1 withActivity:(inout id*)arg2 ;
-(void)offerPresenterDidObserveChangeToState:(id)arg1 ;
-(NSString *)storeSheetHostBundleID;
-(NSString *)storeSheetUsageContext;
-(ASCLockupPresenter *)lockupPresenter;
-(void)performLockupAction;
-(ASCOfferTheme *)offerTheme;
-(BOOL)automaticallyGeneratesAppearMetrics;
-(void)setAutomaticallyGeneratesAppearMetrics:(BOOL)arg1 ;
-(ASCMetricsActivity *)appearMetricsActivity;
-(void)setAppearMetricsActivity:(ASCMetricsActivity *)arg1 ;
-(void)setStoreSheetHostBundleID:(NSString *)arg1 ;
-(void)setStoreSheetUsageContext:(NSString *)arg1 ;
@end
