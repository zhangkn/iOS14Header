/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsAutocompleteUI/CNComposeHeaderView.h>

@class MFComposeDisplayMetrics;

@interface MFMailComposeHeaderView : CNComposeHeaderView {

	MFComposeDisplayMetrics* _displayMetrics;

}

@property (nonatomic,retain) MFComposeDisplayMetrics * displayMetrics;              //@synthesize displayMetrics=_displayMetrics - In the implementation block
-(MFComposeDisplayMetrics *)displayMetrics;
-(void)layoutMarginsDidChange;
-(void)displayMetricsDidChange;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDisplayMetrics:(MFComposeDisplayMetrics *)arg1 ;
@end

