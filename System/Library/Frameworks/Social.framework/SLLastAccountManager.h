/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SLLastAccountManager : NSObject
+(void)_setLastAccount:(id)arg1 prefKey:(id)arg2 prefAppID:(id)arg3 ;
+(id)_lastAccountOfTypeIdentifier:(id)arg1 inStore:(id)arg2 updatePrefs:(BOOL)arg3 prefKey:(id)arg4 prefAppID:(id)arg5 ;
+(id)lastTwitterAccountInAccountStore:(id)arg1 updatePrefs:(BOOL)arg2 ;
+(void)setLastTwitterAccount:(id)arg1 ;
@end

