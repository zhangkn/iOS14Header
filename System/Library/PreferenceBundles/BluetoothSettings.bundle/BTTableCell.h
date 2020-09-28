/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface BTTableCell : PSTableCell {

	BOOL _hasLimitedConnectivity;
	int _state;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) int state;                                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL hasLimitedConnectivity;                    //@synthesize hasLimitedConnectivity=_hasLimitedConnectivity - In the implementation block
-(void)setDeviceState:(int)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setState:(int)arg1 ;
-(void)setDeviceStatePaired:(BOOL)arg1 andConnected:(BOOL)arg2 ;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(int)state;
-(BOOL)hasLimitedConnectivity;
-(void)setHasLimitedConnectivity:(BOOL)arg1 ;
@end
