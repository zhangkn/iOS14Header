/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:39:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/_IDSPasswordManager.h>

@protocol _IDSPasswordManager <NSObject>
@required
-(void)setPassword:(id)arg1 forUsername:(id)arg2 onService:(id)arg3 completionBlock:(/*^block*/id)arg4;

@end


@class NSString;

@interface _IDSPasswordManager : NSObject <_IDSPasswordManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPassword:(id)arg1 forUsername:(id)arg2 onService:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
@end

