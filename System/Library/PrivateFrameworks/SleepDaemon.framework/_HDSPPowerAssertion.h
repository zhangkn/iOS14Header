/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:53:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/HDSPAssertion.h>

@class NSString;

@interface _HDSPPowerAssertion : NSObject <BSDescriptionProviding, HDSPAssertion> {

	os_unfair_lock_s _assertionLock;
	unsigned _assertionID;
	NSString* _identifier;
	unsigned long long _signpost_id;

}

@property (nonatomic,readonly) unsigned long long signpost_id;              //@synthesize signpost_id=_signpost_id - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s assertionLock;              //@synthesize assertionLock=_assertionLock - In the implementation block
@property (nonatomic,readonly) unsigned assertionID;                        //@synthesize assertionID=_assertionID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
+(id)assertionWithIdentifier:(id)arg1 ;
+(id)assertionWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(NSString *)identifier;
-(unsigned)assertionID;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)_locked_release;
-(id)initWithIdentifier:(id)arg1 timeout:(double)arg2 ;
-(void)releaseAssertion;
-(void)dealloc;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(os_unfair_lock_s)assertionLock;
-(unsigned long long)signpost_id;
-(id)succinctDescriptionBuilder;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
@end

