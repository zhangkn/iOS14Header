/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AskPermission/AskPermission-Structs.h>
@interface APDefaults : NSObject
+(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
+(void)_setInteger:(long long)arg1 forKey:(id)arg2 ;
+(BOOL)isRequester;
+(void)_setValue:(id)arg1 forKey:(id)arg2 domain:(CFStringRef)arg3 ;
+(id)_valueForKey:(id)arg1 ;
+(BOOL)isApprover;
+(void)setIsApprover:(BOOL)arg1 ;
+(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 domain:(CFStringRef)arg3 ;
+(void)_setValue:(id)arg1 forKey:(id)arg2 ;
+(void)setIsRequester:(BOOL)arg1 ;
+(void)_setBool:(BOOL)arg1 forKey:(id)arg2 domain:(CFStringRef)arg3 ;
+(id)_valueForKey:(id)arg1 domain:(CFStringRef)arg2 ;
+(long long)_integerForKey:(id)arg1 defaultValue:(long long)arg2 ;
+(BOOL)_boolForKey:(id)arg1 defaultValue:(BOOL)arg2 domain:(CFStringRef)arg3 ;
+(BOOL)APSDevelopmentEnvironment;
+(void)_setBool:(BOOL)arg1 forKey:(id)arg2 ;
+(void)setAPSDevelopmentEnvironment:(BOOL)arg1 ;
@end

