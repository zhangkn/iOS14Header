/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@interface CSDashBoardNotificationVersusPagingScrollSettings : PTSettings {

	BOOL _colorsBackground;
	double _leadingInset;
	double _trailingInset;

}

@property (assign,nonatomic) BOOL colorsBackground;              //@synthesize colorsBackground=_colorsBackground - In the implementation block
@property (assign,nonatomic) double leadingInset;                //@synthesize leadingInset=_leadingInset - In the implementation block
@property (assign,nonatomic) double trailingInset;               //@synthesize trailingInset=_trailingInset - In the implementation block
+(id)settingsControllerModule;
-(void)setColorsBackground:(BOOL)arg1 ;
-(void)setDefaultValues;
-(BOOL)colorsBackground;
-(double)leadingInset;
-(double)trailingInset;
-(void)setLeadingInset:(double)arg1 ;
-(void)setTrailingInset:(double)arg1 ;
@end
