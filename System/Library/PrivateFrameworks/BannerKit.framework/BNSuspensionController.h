/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSString, NSSet;

@interface BNSuspensionController : NSObject {

	NSMutableSet* _suspensionReasons;
	NSString* _identifier;

}

@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (nonatomic,copy,readonly) NSSet * activeSuspensionReasons; 
+(void)initialize;
-(BOOL)setSuspended:(BOOL)arg1 forReason:(id)arg2 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSSet *)activeSuspensionReasons;
-(BOOL)isSuspended;
@end

