/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:52:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageLegacy/MessageLegacy-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSMutableArray, NSString;

@interface MFRequestQueue : NSObject <EFLoggable> {

	os_unfair_lock_s _lock;
	NSMutableArray* _requestPairs;

}

@property (nonatomic,retain) NSMutableArray * requestPairs;              //@synthesize requestPairs=_requestPairs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)log;
+(id)signpostLog;
-(unsigned long long)signpostID;
-(BOOL)sendRequests:(id)arg1 ;
-(BOOL)_processRequests:(id)arg1 ;
-(BOOL)processRequest:(id)arg1 ;
-(BOOL)addRequests:(id)arg1 ;
-(NSMutableArray *)requestPairs;
-(void)setRequestPairs:(NSMutableArray *)arg1 ;
-(id)init;
-(BOOL)addRequests:(id)arg1 combine:(BOOL)arg2 ;
-(BOOL)processRequests:(id)arg1 ;
-(BOOL)addRequest:(id)arg1 ;
@end
