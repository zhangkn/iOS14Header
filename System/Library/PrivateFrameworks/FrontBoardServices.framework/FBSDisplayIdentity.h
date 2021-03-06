/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:40:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FBSDisplayIdentity : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {

	long long _type;
	unsigned _displayID;
	unsigned _connectionSeed;
	int _pid;
	BOOL _external;
	NSString* _uniqueIdentifier;
	BOOL _secure;
	FBSDisplayIdentity* _rootIdentity;

}

@property (getter=isSecure,nonatomic,readonly) BOOL secure;                                            //@synthesize secure=_secure - In the implementation block
@property (nonatomic,readonly) int pid;                                                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) FBSDisplayIdentity * rootIdentity; 
@property (nonatomic,readonly) BOOL isRootIdentity; 
@property (getter=isMainDisplay,nonatomic,readonly) BOOL mainDisplay; 
@property (getter=isExternal,nonatomic,readonly) BOOL external;                                        //@synthesize external=_external - In the implementation block
@property (getter=isCarDisplay,nonatomic,readonly) BOOL carDisplay; 
@property (getter=isCarInstrumentsDisplay,nonatomic,readonly) BOOL carInstrumentsDisplay; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isCarInstrumentsDisplay;
-(unsigned)displayID;
-(BOOL)isSecure;
-(BOOL)isExternal;
-(BOOL)expectsSecureRendering;
-(BOOL)isCarDisplay;
-(id)initWithXPCDictionary:(id)arg1 ;
-(id)_initWithType:(long long)arg1 displayID:(unsigned)arg2 connectionSeed:(unsigned)arg3 pid:(int)arg4 external:(BOOL)arg5 uniqueIdentifier:(id)arg6 secure:(BOOL)arg7 root:(id)arg8 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(FBSDisplayIdentity *)rootIdentity;
-(unsigned)connectionSeed;
-(BOOL)isMainDisplay;
-(id)init;
-(BOOL)isMainRootDisplay;
-(id)uniqueIdentifier;
-(long long)type;
-(BOOL)isRestrictedAirPlayDisplay;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isRootIdentity;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isAirPlayDisplay;
-(BOOL)isMusicOnlyDisplay;
-(BOOL)isiPodOnlyDisplay;
-(unsigned long long)hash;
-(int)pid;
-(NSString *)description;
@end

