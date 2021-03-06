/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXAction.h>

@class NSUUID;

@interface CXCallAction : CXAction {

	NSUUID* _callUUID;

}

@property (nonatomic,copy) NSUUID * callUUID;              //@synthesize callUUID=_callUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUUID *)callUUID;
-(id)init;
-(void)setCallUUID:(NSUUID *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)sanitizedCopyWithZone:(NSZone*)arg1 ;
-(id)initWithCallUUID:(id)arg1 ;
@end

