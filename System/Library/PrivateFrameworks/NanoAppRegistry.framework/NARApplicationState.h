/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NanoAppRegistry.framework/NanoAppRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NARApplicationState : NSObject <NSSecureCoding> {

	BOOL _restricted;
	BOOL _removedSystemApp;

}

@property (getter=isRestricted,nonatomic,readonly) BOOL restricted;                          //@synthesize restricted=_restricted - In the implementation block
@property (getter=isRemovedSystemApp,nonatomic,readonly) BOOL removedSystemApp;              //@synthesize removedSystemApp=_removedSystemApp - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isRemovedSystemApp;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isRestricted;
-(id)initWithRestricted:(BOOL)arg1 removedSystemApp:(BOOL)arg2 ;
@end

