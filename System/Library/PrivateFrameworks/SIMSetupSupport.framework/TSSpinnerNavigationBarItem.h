/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:10 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIBarButtonItem.h>

@class UIActivityIndicatorView;

@interface TSSpinnerNavigationBarItem : UIBarButtonItem {

	UIActivityIndicatorView* _activityIndicator;

}

@property (retain) UIActivityIndicatorView * activityIndicator;              //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(id)init;
-(void)stopAnimating;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(void)startAnimating;
-(UIActivityIndicatorView *)activityIndicator;
@end

