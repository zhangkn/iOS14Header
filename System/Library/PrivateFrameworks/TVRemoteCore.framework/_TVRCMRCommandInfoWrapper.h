/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:26:44 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _TVRCMRCommandInfoWrapper : NSObject {

	void* _info;

}

@property (nonatomic,readonly) unsigned command; 
@property (nonatomic,copy,readonly) NSString * commandDescription; 
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled; 
-(BOOL)isEnabled;
-(void)dealloc;
-(unsigned)command;
-(id)description;
-(NSString *)commandDescription;
-(id)initWithCommandInfo:(void*)arg1 ;
@end

