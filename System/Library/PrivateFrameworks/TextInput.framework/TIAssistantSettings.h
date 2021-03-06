/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TIAssistantSettings : NSObject
+(void)dismissDialog;
+(void)promptToEnableDictationWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)launchDictationSettings;
+(void)promptToRemindDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)dismissedDataSharingWithResponse:(long long)arg1 ;
+(void)presentDialogForType:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)promptToEnableDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)promptReminderDataSharingWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)launchKeyboardSettings;
+(void)dismissEnableDataSharingPrompt;
+(void)setTestBlock:(/*^block*/id)arg1 ;
+(void)connectForOperations:(/*^block*/id)arg1 withErrorHandler:(/*^block*/id)arg2 ;
+(void)dismissEnableDictationPrompt;
@end

