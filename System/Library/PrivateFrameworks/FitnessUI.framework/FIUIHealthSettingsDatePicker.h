/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <UIKitCore/UIDatePicker.h>

@interface FIUIHealthSettingsDatePicker : UIDatePicker {

	/*^block*/id _dateUpdateHandler;

}

@property (nonatomic,copy) id dateUpdateHandler;              //@synthesize dateUpdateHandler=_dateUpdateHandler - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)forceUpdate;
-(void)_dateDidChange:(id)arg1 ;
-(id)dateUpdateHandler;
-(void)setDateUpdateHandler:(id)arg1 ;
@end

