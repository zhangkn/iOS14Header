/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CLKMonochromeComplicationView.h>

@protocol CLKMonochromeFilterProvider;
@class UIView, UIColor, NTKColoringImageView, CLKComplicationTemplate, NSString;

@interface NTKWorkoutRichComplicationCircularContentView : UIView <CLKMonochromeComplicationView> {

	UIView* _backgroundView;
	UIColor* _immutableBackgroundColor;
	NTKColoringImageView* _staticImageView;
	long long _state;
	BOOL _paused;
	id<CLKMonochromeFilterProvider> _filterProvider;
	CLKComplicationTemplate* _complicationTemplate;

}

@property (assign,nonatomic) BOOL paused;                                                        //@synthesize paused=_paused - In the implementation block
@property (nonatomic,retain) CLKComplicationTemplate * complicationTemplate;                     //@synthesize complicationTemplate=_complicationTemplate - In the implementation block
@property (assign,nonatomic,__weak) id<CLKMonochromeFilterProvider> filterProvider;              //@synthesize filterProvider=_filterProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)paused;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_updateUI;
-(void)setPaused:(BOOL)arg1 ;
-(void)_applyChanges;
-(void)setFilterProvider:(id<CLKMonochromeFilterProvider>)arg1 ;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(CLKComplicationTemplate *)complicationTemplate;
-(id<CLKMonochromeFilterProvider>)filterProvider;
-(void)setComplicationTemplate:(CLKComplicationTemplate *)arg1 ;
-(id)initWithNoActiveWorkoutImageName:(id)arg1 animatedImagesName:(id)arg2 ;
@end
