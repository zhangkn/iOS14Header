/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplicationController.h>
#import <libobjc.A.dylib/NTKTimeTravel.h>

@class NSDate, NTKWorldClockComplication;

@interface NTKWorldClockComplicationController : NTKComplicationController <NTKTimeTravel> {

	struct {
		unsigned wantsShortCity : 1;
		unsigned wantsLongCity : 1;
	}  _displayFlags;
	NSDate* _timeTravelDate;

}

@property (nonatomic,__weak,readonly) id<NTKWorldClockComplicationDisplay> legacyDisplay; 
@property (nonatomic,readonly) NTKWorldClockComplication * complication; 
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2 ;
-(void)_handleTimeZoneChange;
-(void)_deactivate;
-(void)_updateDisplay;
-(void)_activate;
-(BOOL)hasTapAction;
-(void)performTapAction;
-(void)setPauseDate:(id)arg1 ;
-(void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2 ;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(id)complicationApplicationIdentifier;
-(void)_handleLocaleChange;
-(void)_configureForLegacyDisplay:(id)arg1 ;
-(void)_handleAbbreviationStoreChange:(id)arg1 ;
-(void)_startTimeTravelAnimated:(BOOL)arg1 ;
-(void)_endTimeTravelAnimated:(BOOL)arg1 ;
@end

