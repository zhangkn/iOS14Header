/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNPhoneDialer : NSObject
+(id)URLWithPhoneNumber:(id)arg1 ;
+(id)sanitizePhoneNumber:(id)arg1 ;
+(id)dialMessageWithDataValue:(id)arg1 displayName:(id)arg2 ;
+(BOOL)sendMessage:(id)arg1 error:(id*)arg2 ;
+(id)messageWithAdditionalParameters:(id)arg1 ;
+(void)loadIdentityServices;
+(id)cancelMessageWithDialMessageID:(id)arg1 ;
+(id)dialNumber:(id)arg1 displayName:(id)arg2 error:(id*)arg3 ;
+(BOOL)cancelDialMessage:(id)arg1 error:(id*)arg2 ;
+(id)sendDialMessage:(id)arg1 displayName:(id)arg2 error:(id*)arg3 ;
@end
