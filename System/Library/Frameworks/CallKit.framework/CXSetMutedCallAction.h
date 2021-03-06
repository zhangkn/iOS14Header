/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:43:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@interface CXSetMutedCallAction : CXCallAction {

	BOOL _muted;

}

@property (assign,getter=isMuted,nonatomic) BOOL muted;              //@synthesize muted=_muted - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)customDescription;
-(void)setMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(id)initWithCallUUID:(id)arg1 muted:(BOOL)arg2 ;
@end

