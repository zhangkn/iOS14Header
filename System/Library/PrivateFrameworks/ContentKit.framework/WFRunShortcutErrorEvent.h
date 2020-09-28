/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:08 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRunShortcutErrorEvent : WFEvent {

	BOOL _didRunRemotely;
	NSString* _key;
	NSString* _actionIdentifier;
	NSString* _errorDomain;
	NSString* _errorCode;

}

@property (nonatomic,copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * errorDomain;                   //@synthesize errorDomain=_errorDomain - In the implementation block
@property (nonatomic,copy) NSString * errorCode;                     //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL didRunRemotely;                    //@synthesize didRunRemotely=_didRunRemotely - In the implementation block
+(Class)codableEventClass;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(NSString *)errorDomain;
-(void)setErrorDomain:(NSString *)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setErrorCode:(NSString *)arg1 ;
-(NSString *)actionIdentifier;
-(NSString *)errorCode;
-(BOOL)didRunRemotely;
-(void)setDidRunRemotely:(BOOL)arg1 ;
@end
