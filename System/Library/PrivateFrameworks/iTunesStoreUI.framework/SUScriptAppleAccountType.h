/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:44:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class ACAccountType, NSString;

@interface SUScriptAppleAccountType : SUScriptObject {

	ACAccountType* _accountType;

}

@property (nonatomic,readonly) ACAccountType * nativeAccountType;              //@synthesize accountType=_accountType - In the implementation block
@property (readonly) id accessGranted; 
@property (readonly) NSString * accountTypeDescription; 
@property (readonly) NSString * identifier; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)accountTypeDescription;
-(void)dealloc;
-(id)attributeKeys;
-(id)accessGranted;
-(id)_className;
-(id)scriptAttributeKeys;
-(ACAccountType *)nativeAccountType;
-(id)initWithACAccountType:(id)arg1 ;
@end

