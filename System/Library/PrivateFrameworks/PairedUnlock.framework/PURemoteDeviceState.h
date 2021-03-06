/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:54:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class PURemotePasscodePolicy;

@interface PURemoteDeviceState : NSObject <NSSecureCoding> {

	BOOL _passcodeSet;
	BOOL _passcodeLocked;
	BOOL _unlockOnly;
	BOOL _wristDetectEnabled;
	unsigned _version;
	PURemotePasscodePolicy* _passcodePolicy;

}

@property (assign,nonatomic) unsigned version;                                                 //@synthesize version=_version - In the implementation block
@property (assign,getter=hasPasscodeSet,nonatomic) BOOL passcodeSet;                           //@synthesize passcodeSet=_passcodeSet - In the implementation block
@property (assign,getter=isPasscodeLocked,nonatomic) BOOL passcodeLocked;                      //@synthesize passcodeLocked=_passcodeLocked - In the implementation block
@property (assign,getter=isUnlockOnly,nonatomic) BOOL unlockOnly;                              //@synthesize unlockOnly=_unlockOnly - In the implementation block
@property (assign,getter=isWristDetectEnabled,nonatomic) BOOL wristDetectEnabled;              //@synthesize wristDetectEnabled=_wristDetectEnabled - In the implementation block
@property (nonatomic,retain) PURemotePasscodePolicy * passcodePolicy;                          //@synthesize passcodePolicy=_passcodePolicy - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned)version;
-(BOOL)hasPasscodeSet;
-(void)setVersion:(unsigned)arg1 ;
-(void)setPasscodePolicy:(PURemotePasscodePolicy *)arg1 ;
-(PURemotePasscodePolicy *)passcodePolicy;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setPasscodeSet:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isPasscodeLocked;
-(id)description;
-(BOOL)isUnlockOnly;
-(BOOL)isWristDetectEnabled;
-(void)setPasscodeLocked:(BOOL)arg1 ;
-(void)setUnlockOnly:(BOOL)arg1 ;
-(void)setWristDetectEnabled:(BOOL)arg1 ;
@end

