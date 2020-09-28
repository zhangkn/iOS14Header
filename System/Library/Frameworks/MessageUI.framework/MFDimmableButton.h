/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@interface MFDimmableButton : UIButton {

	BOOL _hidesWhenDimmedIfNotSelected;
	BOOL _dimmed;
	BOOL _stickyHiddenValue;

}

@property (assign,nonatomic) BOOL stickyHiddenValue;                               //@synthesize stickyHiddenValue=_stickyHiddenValue - In the implementation block
@property (nonatomic,readonly) unsigned long long autohidePreference; 
@property (assign,nonatomic) BOOL hidesWhenDimmedIfNotSelected;                    //@synthesize hidesWhenDimmedIfNotSelected=_hidesWhenDimmedIfNotSelected - In the implementation block
@property (assign,getter=isDimmed,nonatomic) BOOL dimmed;                          //@synthesize dimmed=_dimmed - In the implementation block
-(void)setDimmed:(BOOL)arg1 ;
-(void)setHidesWhenDimmedIfNotSelected:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateDimmedHidingIfNecessary;
-(void)_setHidden:(BOOL)arg1 external:(BOOL)arg2 ;
-(void)setStickyHiddenValue:(BOOL)arg1 ;
-(unsigned long long)autohidePreference;
-(BOOL)hidesWhenDimmedIfNotSelected;
-(BOOL)stickyHiddenValue;
-(BOOL)isDimmed;
-(void)setHidden:(BOOL)arg1 ;
-(unsigned long long)state;
@end
