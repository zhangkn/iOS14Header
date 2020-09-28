/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 11:38:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSLocking.h>

@class NSString;

@interface NSConditionLock : NSObject <NSLocking> {

	void* _priv;

}

@property (readonly) long long condition; 
@property (copy) NSString * name; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(BOOL)tryLock;
-(long long)condition;
-(void)lock;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(void)unlockWithCondition:(long long)arg1 ;
-(id)initWithCondition:(long long)arg1 ;
-(void)unlock;
-(void)dealloc;
-(void)lockWhenCondition:(long long)arg1 ;
-(BOOL)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)tryLockWhenCondition:(long long)arg1 ;
-(id)description;
@end
