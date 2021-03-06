/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModularLargeColumnTemplateView.h>

@protocol NTKComplicationImageView;
@class UIView, NTKColoringLabel, CLKComplicationTemplateModularLargeTable;

@interface NTKModularLargeTableTemplateView : NTKModularLargeColumnTemplateView {

	UIView*<NTKComplicationImageView> _headerImageView;
	NTKColoringLabel* _headerLabel;
	NTKColoringLabel* _row1Column1Label;
	NTKColoringLabel* _row1Column2Label;
	NTKColoringLabel* _row2Column1Label;
	NTKColoringLabel* _row2Column2Label;

}

@property (nonatomic,retain) CLKComplicationTemplateModularLargeTable * complicationTemplate; 
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
-(void)_layoutContentView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_update;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateSecondaryForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)_enumerateColumnRowsWithBlock:(/*^block*/id)arg1 ;
@end

