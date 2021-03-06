/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTRowAction.h>

@class NSString;

@interface PTRestoreDefaultSettingsRowAction : PTRowAction {

	NSString* _settingsKeyPath;

}

@property (nonatomic,readonly) NSString * settingsKeyPath;              //@synthesize settingsKeyPath=_settingsKeyPath - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)action;
+(id)actionWithSettingsKeyPath:(id)arg1 ;
-(/*^block*/id)defaultHandler;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)settingsKeyPath;
@end

