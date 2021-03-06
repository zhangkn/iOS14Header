/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:42:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICQuickNoteSessionSettings : NSObject
+(void)initialize;
+(BOOL)hasAccountSupportingLockScreen;
+(long long)showOnLockScreenSettingValue;
+(void)setShowOnLockScreen:(long long)arg1 ;
+(void)disableNotesOnLockScreenIfNecessary;
+(void)updateNotesOnLockScreenWhenAccountSupportingLockScreenAdded;
+(long long)sessionDuration;
+(long long)showOnLockScreen;
+(void)setSessionDuration:(long long)arg1 ;
@end

