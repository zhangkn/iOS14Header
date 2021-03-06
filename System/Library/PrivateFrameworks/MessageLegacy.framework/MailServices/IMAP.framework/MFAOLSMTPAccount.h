/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 5:58:35 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18A373)
                       * Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <Message/SMTPAccount.h>
#import <libobjc.A.dylib/MFOAuth2TokenAuthProtocol.h>

@class AOLAccount, NSString;

@interface MFAOLSMTPAccount : SMTPAccount <MFOAuth2TokenAuthProtocol> {

	AOLAccount* _account;

}

@property (getter=mailAccountIfAvailable,nonatomic,retain) AOLAccount * mailAccount;              //@synthesize account=_account - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)accountTypeIdentifier;
-(BOOL)usesSSL;
-(id)username;
-(id)hostname;
-(id)preferredAuthScheme;
-(id)accountForRenewingCredentials;
-(unsigned)portNumber;
-(id)oauth2Token;
-(BOOL)shouldFetchACEDBInfoForError:(id)arg1 ;
-(BOOL)shouldUseAuthentication;
-(id)password;
-(id)mailAccountIfAvailable;
-(void)setMailAccount:(AOLAccount *)arg1 ;
-(id)displayHostname;
@end

