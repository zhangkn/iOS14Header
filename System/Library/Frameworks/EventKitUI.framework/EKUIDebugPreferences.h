/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CalPreferences;

@interface EKUIDebugPreferences : NSObject {

	CalPreferences* _preferences;

}

@property (assign,nonatomic) BOOL showInviteesAndMoreRegion; 
@property (assign,nonatomic) BOOL showReportAProblemNotificationButton; 
+(id)shared;
-(id)init;
-(BOOL)showInviteesAndMoreRegion;
-(void)setShowInviteesAndMoreRegion:(BOOL)arg1 ;
-(BOOL)showReportAProblemNotificationButton;
-(void)setShowReportAProblemNotificationButton:(BOOL)arg1 ;
@end
