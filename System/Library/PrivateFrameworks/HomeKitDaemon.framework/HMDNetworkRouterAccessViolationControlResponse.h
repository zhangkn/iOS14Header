/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:51:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HAPTLVProtocol.h>

@class NSMutableArray, NSString;

@interface HMDNetworkRouterAccessViolationControlResponse : NSObject <NSCopying, HAPTLVProtocol> {

	NSMutableArray* _violations;

}

@property (nonatomic,retain) NSMutableArray * violations;              //@synthesize violations=_violations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parsedFromData:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)parseFromData:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)serializeWithError:(id*)arg1 ;
-(void)setViolations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)violations;
-(id)initWithViolations:(id)arg1 ;
@end

