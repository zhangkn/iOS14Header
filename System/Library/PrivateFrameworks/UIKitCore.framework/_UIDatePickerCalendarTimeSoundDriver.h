/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UICoordinateSpace;
#import <UIKitCore/UIKitCore-Structs.h>
@class UISelectionFeedbackGenerator;

@interface _UIDatePickerCalendarTimeSoundDriver : NSObject {

	SCD_Struct_UI34 _flags;
	long long _highlightedValue;
	long long _selectedValue;
	UISelectionFeedbackGenerator* _feedbackGenerator;
	id<UICoordinateSpace> _coordinateSpace;

}

@property (assign,nonatomic) long long highlightedValue;                                    //@synthesize highlightedValue=_highlightedValue - In the implementation block
@property (assign,nonatomic) long long selectedValue;                                       //@synthesize selectedValue=_selectedValue - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * feedbackGenerator;              //@synthesize feedbackGenerator=_feedbackGenerator - In the implementation block
@property (assign,nonatomic,__weak) id<UICoordinateSpace> coordinateSpace;                  //@synthesize coordinateSpace=_coordinateSpace - In the implementation block
-(void)coolDown;
-(void)warmUp;
-(id)initWithCoordinateSpace:(id)arg1 ;
-(void)setFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(id<UICoordinateSpace>)coordinateSpace;
-(void)setCoordinateSpace:(id<UICoordinateSpace>)arg1 ;
-(id)init;
-(long long)selectedValue;
-(long long)highlightedValue;
-(void)setHighlightedValue:(long long)arg1 ;
-(void)playHighlightSound;
-(void)playSnappingSound;
-(void)updateWithSnapped;
-(void)updateWithHighlightedValue:(long long)arg1 ;
-(void)performWithoutSounds:(/*^block*/id)arg1 ;
-(UISelectionFeedbackGenerator *)feedbackGenerator;
-(void)setSelectedValue:(long long)arg1 ;
@end

