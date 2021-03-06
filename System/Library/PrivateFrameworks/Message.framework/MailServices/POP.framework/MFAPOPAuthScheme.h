/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:35 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <EmailCore/ECAuthenticationScheme.h>

@interface MFAPOPAuthScheme : ECAuthenticationScheme
+(void)initialize;
-(BOOL)requiresPassword;
-(id)humanReadableName;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(Class)connectionClassForAccountClass:(Class)arg1 ;
-(BOOL)hasEncryption;
-(Class)authenticatorClass;
-(id)name;
-(BOOL)supportsAccountType:(id)arg1 ;
@end

